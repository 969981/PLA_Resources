/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d21994; name: FUN_00d21994
 */


uint FUN_00d21994(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x504) == 2) {
    if (*(int *)(param_1 + 0x50c) != -1) {
      uVar3 = FUN_00d23148(param_1);
      if ((uVar3 & 1) != 0) {
        FUN_00d23460(param_1,*(undefined4 *)(param_1 + 0x500));
      }
      if (*(int *)(param_1 + 0x504) == 3) {
        iVar1 = *(int *)(param_1 + 0x518);
        goto LAB_00d219c4;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x504) == 3) && (iVar1 = *(int *)(param_1 + 0x518), iVar1 != -1)) {
LAB_00d219c4:
    uVar2 = FUN_00d23148(param_1,iVar1);
    uVar2 = uVar2 ^ 1;
    goto LAB_00d21a10;
  }
  uVar2 = 1;
LAB_00d21a10:
  return uVar2 & 1;
}


