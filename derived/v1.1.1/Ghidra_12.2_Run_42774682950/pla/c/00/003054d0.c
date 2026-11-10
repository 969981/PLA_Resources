/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003054d0; name: FUN_003054d0
 */


void FUN_003054d0(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = lVar2;
    plVar1 = (long *)(*(long *)(param_1 + 8) + lVar2 * 0x20);
    puVar3 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar4 = (ulong)(byte)*puVar3;
    }
    else {
      uVar4 = *puVar3;
    }
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - uVar4;
  }
  return;
}


