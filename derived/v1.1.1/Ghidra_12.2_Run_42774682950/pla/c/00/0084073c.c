/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084073c; name: FUN_0084073c
 */


void FUN_0084073c(undefined8 param_1,long *param_2,long param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  int *piVar2;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_48[0] = 0x10407;
LAB_008407a4:
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  }
  else {
    uVar1 = (**(code **)(*param_4 + 0xd8))(param_4);
    if (((uVar1 & 1) == 0) || (uVar1 = (**(code **)(*param_4 + 0xe8))(param_4), (uVar1 & 1) != 0)) {
      local_48[0] = 0x10408;
      goto LAB_008407a4;
    }
    (**(code **)(*param_4 + 0xa8))(local_48,param_4,param_2 + 0xc,param_5);
    if (local_48[0] == 0) {
      param_2[0xb] = param_3;
      FUN_007e5c2c(param_3);
      param_2[6] = (long)PTR_LAB_04377f98;
      param_2[7] = 0;
      param_2[8] = (long)"UpdateSessionPropertySettingJob::WaitUpdateNetworkSetting";
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_58[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar2 = local_58;
      goto LAB_008407c0;
    }
  }
  piVar2 = local_48;
LAB_008407c0:
  FUN_007ee578(param_1,piVar2);
  return;
}


