/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00834680; name: FUN_00834680
 */


void FUN_00834680(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_40 [4];
  int local_30 [4];
  
  if (param_3 == 0) {
    local_30[0] = 0x10407;
  }
  else {
    if ((*(int *)(param_2 + 0x68) != 1) &&
       (uVar2 = FUN_007e5f0c(*(undefined8 *)(param_2 + 0xa0)), (uVar2 & 1) == 0)) {
      local_30[0] = 0;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      iVar1 = FUN_007e5ee4(*(undefined8 *)(param_2 + 0xa0));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0xa0) + 0x10))(*(long **)(param_2 + 0xa0),1);
      }
      FUN_0083c4fc(local_40,*(undefined8 *)(param_2 + 0xa0),param_3);
      FUN_007ee660(local_30,local_40);
      if (local_30[0] == 0) {
        FUN_007e5e70(*(undefined8 *)(param_2 + 0xa0),0);
      }
      *(short *)(param_2 + 0x790) = *(short *)(param_2 + 0x790) + 1;
      goto LAB_008346e4;
    }
    local_30[0] = 0x10408;
  }
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
LAB_008346e4:
  FUN_007ee578(param_1,local_30);
  return;
}


