/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50438; name: FUN_02e50438
 */


void FUN_02e50438(long param_1,long param_2)

{
  long lVar1;
  long *plVar3;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + -1;
    }
    *(long *)(param_1 + 0x78) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar2 = *(long **)(param_1 + 0x28);
      do {
        plVar3 = plVar2 + 1;
        *(undefined1 *)(*plVar2 + 0x38) = 1;
        plVar2 = plVar3;
      } while (plVar3 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
  }
  return;
}


