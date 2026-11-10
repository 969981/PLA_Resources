/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01308584; name: FUN_01308584
 */


bool FUN_01308584(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((lVar1 == 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar1 = 0, lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x1e1) == '\0') {
      lVar1 = 0;
    }
    else {
      lVar1 = (long)*(uint **)(lVar2 + 0x250) + (ulong)**(uint **)(lVar2 + 0x250);
      *(long *)(param_1 + 0x38) = lVar1;
    }
  }
  return lVar1 != 0;
}


