function [p_i, Nrefl, P_e_new] = impactos(rayo, p_i1, P_e, pared, N, ct, radio)   

% valor para que el rayo (por redondeo) no pegue en esquinas de la caja, 
% ni se vaya de paso (por cuestiones de redondeo)
a1 = 0.999; 

numerador = dot(pared(2:7, 1:3) - repmat(P_e, 6, 1), N(2:7,:), 2);
denominador = dot( repmat(rayo, 6, 1), N(2:7,:), 2);

if any(denominador == 0)
    error('El denominador es cero');
end

d = a1 * numerador ./ denominador;
d(d<0) = 1e20;
if p_i1 < 7
    d(p_i1) = 1e20;
end
[d_i, p_i] = min(d);
Nrefl = N(p_i + 1, :);
P_e_new = P_e + d_i*rayo;

A = ct(:,1:2) - repmat(P_e(1:2),size(ct,1),1);
B = repmat(rayo(1:2),size(ct,1),1);
normBsquare = (rayo(1)^2 + rayo(2)^2);
normB = sqrt(normBsquare);
dotA = dot(A,A,2);

b = sqrt(abs(dotA - dot(A,B,2).^2 / normBsquare));

if p_i1 > 6
    b(p_i1-6) = 1e20;
end

if isempty(find(b <= radio, 1))    
    return;
else
    ind = find(b<=radio);
    a = sqrt(repmat(radio^2,size(ind))-b(ind).^2);
    ri= (dot(A(ind,:), repmat(rayo(1:2),size(ind)),2) ./ repmat(normB,size(ind)) - a);
    ri(ri<0)=1e20;
    [dt, ind2] = min(ri);
    t_i = ind(ind2);
    
    if dt < d_i 
        d_i = dt;
        p_i = t_i + 6;
        P_e_new = P_e + rayo*d_i;
        Nrefl = P_e_new(1,1:2)-ct(t_i,1:2);
        Nrefl = [Nrefl/norm(Nrefl),0];
    end   
end
end

