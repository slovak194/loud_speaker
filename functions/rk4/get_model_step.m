function [X_out, dX, Debug, utt] = get_model_step(X, u, ut, n, p, dt)
[X_out, dX, Debug, utt] = get_simulate_no_persist(get_model_handle, X, u, ut, n, p, dt);
end
