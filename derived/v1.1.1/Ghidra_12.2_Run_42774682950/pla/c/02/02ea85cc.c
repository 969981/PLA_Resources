/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea85cc; name: FUN_02ea85cc
 */


void FUN_02ea85cc(long param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_02ea8634(param_2);
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_1;
    uVar1 = *(ushort *)(param_1 + 8);
    if (uVar1 == 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    else if (uVar1 == 100) {
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    }
    *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (uint)uVar1;
  }
  return;
}


