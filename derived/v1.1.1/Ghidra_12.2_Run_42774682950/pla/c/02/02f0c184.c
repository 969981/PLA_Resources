/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c184; name: FUN_02f0c184
 */


void FUN_02f0c184(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = FUN_02f06d0c(DAT_0440a138);
  if (lVar1 != 0) {
    lVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x28);
    do {
      lVar2 = lVar3;
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 8);
    } while (lVar3 != 0 && lVar3 != param_1);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar1 + 0x28);
      if (*(long *)(lVar1 + 0x28) != lVar3) {
        plVar4 = (long *)(lVar2 + 8);
      }
      *plVar4 = *(long *)(lVar3 + 8);
      if (*(long *)(lVar1 + 0x20) == lVar3) {
        *(long *)(lVar1 + 0x20) = lVar2;
      }
    }
  }
  return;
}


