function [rayo] = reflejado(rayo, Ni)

rayo = 2*(dot(-rayo,Ni).*Ni)+rayo; %rayo reflejado
ba=1;

if rand < 0.5 && ba == 1
    %error para los rayos
    sig_slr = 0.0; %[slope]
    sig_spr = 0.003; %[speculacion] 0.003
    sigr = sqrt(4*sig_slr^2+sig_spr^2);

    %angulos de inclinaci[on y rotacion de los rayos debido al error sig
    teta_r1 =(sqrt(-2*sigr^2*log(1-rand)));
    phi_r1 = rand*2*pi;

    z1 = [0,0,1];
    thnor = cross(z1,rayo);
    thnor = thnor/norm(thnor);
    shnor = cross(rayo,thnor);
    shnor = shnor/norm(shnor);

    %rayo generado con los angulos teta y phi
    rayito = sin(teta_r1).*sin(phi_r1)*thnor + sin(teta_r1).*cos(phi_r1)*shnor + cos(teta_r1)*rayo;
    rayo = rayito/norm(rayito);
end


