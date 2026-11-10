/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c7cc; name: FUN_0283c7cc
 */


void FUN_0283c7cc(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xf0);
    param_2 = param_2 & 1;
    *(byte *)(*(long *)(lVar2 + 0x20) + 0x670) = param_2;
    if ((lVar1 != 1) && (*(byte *)(*(long *)(lVar2 + 0x48) + 0x670) = param_2, lVar1 != 2)) {
      lVar1 = lVar1 * 0x28 + -0x50;
      plVar3 = (long *)(lVar2 + 0x70);
      do {
        lVar1 = lVar1 + -0x28;
        *(byte *)(*plVar3 + 0x670) = param_2;
        plVar3 = plVar3 + 5;
      } while (lVar1 != 0);
    }
  }
  return;
}


