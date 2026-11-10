/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023572c; name: FUN_0023572c
 */


long FUN_0023572c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  do {
    if (lVar1 == param_1 + 0x48) {
      return 0;
    }
    uVar2 = 0;
    while (*(char *)(param_2 + uVar2) == *(char *)(lVar1 + -0x28 + uVar2)) {
      if (*(char *)(param_2 + uVar2) == '\0') {
        return lVar1 + -0xd8;
      }
      uVar2 = uVar2 + 1;
      if (0x17 < uVar2) {
        return lVar1 + -0xd8;
      }
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}


