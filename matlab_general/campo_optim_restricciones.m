function [c, ce] = campo_optim_restricciones(x)
%CAMPO_OPTIM_RESTRICCIONES Restricciones para el optimizador
%   FIXME: Agregar la documentación

radio = 0.025;
ct = de_entradas_a_ct(x);

ce = 2 * radio - min(pdist(ct));
c = [];

end

