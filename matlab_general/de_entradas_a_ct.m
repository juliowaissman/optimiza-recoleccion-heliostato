function ct = de_entradas_a_ct( x )
%DE_ENTRADAS_A_CT Convierte las entradas a posiciones de los tubos
%   FIXME: Agregar explicación

a = length(x)/2;
ct = [x(1:a)', x(a+1:end)'];

end

