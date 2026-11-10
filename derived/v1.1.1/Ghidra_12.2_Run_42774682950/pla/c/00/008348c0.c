/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008348c0; name: FUN_008348c0
 */


void FUN_008348c0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_40[0] = 0x10407;
  }
  else {
    if ((*(int *)(param_2 + 0x68) != 1) &&
       (uVar2 = FUN_007e5f0c(*(undefined8 *)(param_2 + 0xa8)), (uVar2 & 1) == 0)) {
      iVar1 = FUN_007e5ee4(*(undefined8 *)(param_2 + 0xa8));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0xa8) + 0x10))(*(long **)(param_2 + 0xa8),1);
      }
      FUN_0083a964(local_40,*(undefined8 *)(param_2 + 0xa8),param_3);
      if (local_40[0] == 0) {
        FUN_007e5e70(*(undefined8 *)(param_2 + 0xa8),0);
      }
      goto LAB_00834928;
    }
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
LAB_00834928:
  FUN_007ee578(param_1,local_40);
  return;
}


