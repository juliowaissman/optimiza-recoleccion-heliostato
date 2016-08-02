%% Optimizador sencillo, prueba 1

clc,
%% Inicializa los datos

load datos_ini.mat
load pos_ct.mat

%% Inicializa radio y posicion inicial de los tubos

radio = 0.025;

LBX = -5 + radio;
UBX = 5 - radio;
LBY = radio;
UBY = 10 - radio;

[X, Y] = meshgrid(linspace(LBX, UBX, 24), linspace(LBY, UBY, 25));
ct = [X(:), Y(:)];

x = [ct(:, 1)', ct(:, 2)'];

tic
campo_optim(x, pared, N, Pp_1, rayo1, radio);
toc