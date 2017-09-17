#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
    p_error = -98765;
    i_error = 0;
    d_error = 0;

    //step = 0;
    //total_err = 0.0;
    //best_err = -123;
    //param_index = 0;
    //dp = {0.1, 0.1, 0.1};
    //dp[0] = 0.001;
    //dp[1] = 0.001;
    //dp[2] = 0.001;
    //flag = 1;
}

//void PID::AddToParam(int index, double value){
//    if(index==0){
//        Kp += value;
//    }
//    if(index==1){
//        Ki += value;
//    }
//    if(index==2){
//        Kd += value;
//    }
//}

void PID::UpdateError(double cte) {
    if(p_error == -98765){
        p_error = cte;
    }
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;


    //if(step==100){
    //    std::cout<<"error: "<<total_err/100.0<<std::endl;
    //    if(best_err==-123){
    //        best_err = total_err / 100.0;
    //        AddToParam(param_index, dp[param_index]);
    //    }
    //    else{
    //        double err = total_err / 100.0;
    //        if(err<best_err){
    //            best_err = err;
    //            dp[param_index] *= 1.1;
    //            param_index = (param_index + 1)%3;
    //            AddToParam(param_index, dp[param_index]);
    //        }
    //        else{
    //            if(flag==1) {
    //                AddToParam(param_index, -2*dp[param_index]);
    //                flag = 0;
    //            }
    //            else{
    //                AddToParam(param_index, dp[param_index]);
    //                dp[param_index] *= 0.9;
    //                param_index = (param_index + 1)%3;
    //                AddToParam(param_index, dp[param_index]);
    //                flag = 1;
    //            }
    //        }
    //    }
    //    step = 0;
    //    total_err = 0.0;
    //}

    //step += 1;
    //total_err += cte;
}

//double PID::TotalError() {
//}

