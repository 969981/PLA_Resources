/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb669c; name: FUN_02eb669c
 */


undefined8 FUN_02eb669c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x20) * 0x38;
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
    lVar3 = *plVar1;
    while( true ) {
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) &&
         (0 < *(short *)(*(long *)(lVar3 + 0x78) + 0x90))) {
        return 1;
      }
      lVar2 = lVar2 + -0x38;
      plVar1 = plVar1 + 7;
      if (lVar2 == 0) break;
      lVar3 = *plVar1;
    }
  }
  return 0;
}


