%% Each seciton can be executed via ctrl+enter
%

%% Clear environment
%
clc
clear
clear all
close all

%% Uncomment case case you are going to run

% model_name = 'simple';
% model_name = 'identification';
model_name = 'identification_full';
% model_name = 'highly_nonlinear'; TODO

%% Solve problem
loudspeaker_symbolic_model;

%% Generate C reference code (Skip if there is no MATLAB CODER license)
loudspeaker_parameters_identification_full;
loudspeaker_codegen;

%% Run test
loudspeaker_parameters_identification_full;
loudspeaker_test_model;
