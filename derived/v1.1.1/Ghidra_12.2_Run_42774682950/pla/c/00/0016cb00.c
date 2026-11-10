/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016cb00; name: FUN_0016cb00
 */


void FUN_0016cb00(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(*(long *)(param_1 + 0x20) + 0x18);
  lVar2 = *plVar3;
  lVar1 = *(long *)(param_1 + 0x20);
  while ((lVar2 != 0 && (lVar4 = *(long *)(lVar2 + 0x18), lVar4 != 0))) {
    FUN_00161510(param_1,lVar2,0x48,0);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    *plVar3 = lVar4;
    plVar3 = (long *)(lVar4 + 0x18);
    lVar2 = *plVar3;
    *(long *)(lVar4 + 0x10) = lVar1;
    lVar1 = lVar4;
  }
  return;
}


