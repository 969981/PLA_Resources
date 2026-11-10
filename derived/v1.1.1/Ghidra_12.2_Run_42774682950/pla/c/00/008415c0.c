/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008415c0; name: FUN_008415c0
 */


void FUN_008415c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  (**(code **)(*param_2 + 0xa0))(local_38,param_2,param_4);
  if (local_38[0] == 0) {
    plVar1 = (long *)FUN_00847424(param_2);
    (**(code **)(*plVar1 + 0x80))(local_48,plVar1,param_3);
    FUN_007ee660(local_38,local_48);
    if (local_38[0] == 0) {
      uVar2 = FUN_0084bc80(param_2[0xe],param_3);
      if ((uVar2 & 1) == 0) {
        local_48[0] = 0x10407;
      }
      else {
        local_48[0] = 0;
      }
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar3 = local_48;
      goto LAB_00841628;
    }
  }
  piVar3 = local_38;
LAB_00841628:
  FUN_007ee578(param_1,piVar3);
  return;
}


