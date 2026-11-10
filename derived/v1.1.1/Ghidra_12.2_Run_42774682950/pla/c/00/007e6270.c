/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e6270; name: FUN_007e6270
 */


void FUN_007e6270(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 local_70 [4];
  undefined4 local_60 [8];
  
  if ((param_4 == 0) || (param_5 == 0)) {
    local_60[0] = 0x10407;
  }
  else if ((int)param_2[0xb] == 1) {
    local_60[0] = 0x10408;
  }
  else {
    FUN_007ec5c4(local_60);
    FUN_007ec6ec(local_70,param_2 + 0x12,local_60);
    param_2[0x11] = param_4;
    param_2[0x98] = param_5;
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[6] = (long)PTR_FUN_04377470;
    param_2[7] = 0;
    param_2[8] = (long)"MonitoringServerAddressResolveJob::StepResolveMonitoringServerAddress";
    FUN_007e5c2c(param_2 + 0xb);
    local_60[0] = 0;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  FUN_007ee578(param_1,local_60);
  return;
}


