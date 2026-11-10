/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008767d0; name: FUN_008767d0
 */


void FUN_008767d0(undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  param_2[0xb] = param_3;
  uVar1 = FUN_007e5c2c(param_3);
  if ((uVar1 & 1) == 0) {
    local_40[0] = 0x10408;
  }
  else {
    param_2[0x97] = (long)param_4;
    (**(code **)(*param_4 + 0x18))(local_40,param_4,0);
    param_2[6] = (long)PTR_FUN_04378448;
    param_2[7] = 0;
    param_2[8] = (long)"TurnJob::WaitServerConfig";
    (**(code **)(*param_2 + 0x10))(param_2,1);
    local_40[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


