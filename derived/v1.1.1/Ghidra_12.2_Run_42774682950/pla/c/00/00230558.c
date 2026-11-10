/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00230558; name: FUN_00230558
 */


long FUN_00230558(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  do {
    if (lVar2 == param_1) {
      return 0;
    }
    uVar3 = 0;
    while (cVar1 = *(char *)(*(long *)(lVar2 + 0x20) + uVar3), cVar1 == *(char *)(param_2 + uVar3))
    {
      if (cVar1 == '\0') {
        return lVar2 + -8;
      }
      uVar3 = uVar3 + 1;
      if (0x1f < uVar3) {
        return lVar2 + -8;
      }
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}


