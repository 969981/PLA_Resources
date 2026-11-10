/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082c5a4; name: FUN_0082c5a4
 */


void FUN_0082c5a4(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_2[0xb] == 0) {
    param_2[0xb] = param_3;
    FUN_007e5c2c(param_3);
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[8] = (long)"LeaveSessionJob::LeaveMesh";
    param_2[6] = (long)PTR_FUN_04377d60;
    param_2[7] = 0;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


