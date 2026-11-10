/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841288; name: FUN_00841288
 */


void FUN_00841288(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,int param_5)

{
  int *piVar1;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar1 = local_60;
  if (param_5 == 0) {
    local_50[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    piVar1 = local_50;
  }
  else {
    (**(code **)(*param_2 + 0x70))(local_50,param_2,param_3,param_5);
    if (local_50[0] == 0) {
      if (param_4 == 0) {
        local_60[0] = 0x10407;
      }
      else {
        FUN_0084e230(local_60,param_2[0xe],param_3,param_4,param_5,0);
        FUN_007ee660(local_50,local_60);
        FUN_007f1af0(param_2 + 1,*(undefined2 *)(param_2[0xe] + 0x32));
        local_60[0] = 0;
      }
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
    }
    else {
      piVar1 = local_50;
    }
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


