# adaptive_IGE_ardupilot
This is the source code for experiment presented in: "In-ground-effect model based adaptive altitude control of rotorcraft unmanned aerial vehicles"
To reproduce the experiments, please run quadrotor in rtl mode, which has been modified for our own purpose.
Reference generator can be found in Mode::land_run_sine_control (mode.cpp).
Detail algorithm can be found in: AC_PosControl::run_z_controller (AC_PosControl.cpp).