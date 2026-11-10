/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0ef5c; name: FUN_02f0ef5c
 */


void FUN_02f0ef5c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    do {
      iVar1 = *(int *)(*plVar2 + 0x3c);
      if (iVar1 == 3) {
        uVar3 = 4;
LAB_02f0ef84:
        *(undefined4 *)(*plVar2 + 0x3c) = uVar3;
      }
      else if (iVar1 == 2) {
        uVar3 = 1;
        goto LAB_02f0ef84;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}


