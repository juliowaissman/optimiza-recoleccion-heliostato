function [con_p, P_a] = simulador_rayos(pared, N, Pp_1, rayo1, ct, radio)

c2 = size(Pp_1,1); %number of rays entering the receptor

% number of tubes + number of walls
con_p = zeros(1,((size(pared,1)-1)+size(ct,1))); 

% matrix used further to asign x,y,z values for the impact position, 
% and tell which tube or wall that corresponds to
P_a = zeros(c2,4); 

for b = 1:c2 %revisamos todos los rayos
    P_e = Pp_1(b,:);
    rayo = rayo1(b,:);
    p_i = 6;
    absv = false(1); %false(1)=0
    while (absv==0)
        %revisamos en que pared intersecta el rayo
        [p_i, Nrefl, P_e] = impactos(rayo, p_i, P_e, pared, N, ct, radio);  
        
        %el termino de en medio es para paredes con reflectancia 0.7
        if  p_i==6 || (p_i<6 && rand < 0.3) || (p_i>6 && rand < 0.6)   
            con_p(p_i) = con_p(p_i)+1;
            P_a(b,:) = [P_e, p_i];
            absv = true(1);
        else
            %si el rayo no fue absorbido, se refleja
           [rayo] = reflejado(rayo, Nrefl); 
        end
    end
end
 
if c2 ~= sum(con_p)
    error('Los rayos que entran deben de ser igual a los rayos que se absorben');
end

end

