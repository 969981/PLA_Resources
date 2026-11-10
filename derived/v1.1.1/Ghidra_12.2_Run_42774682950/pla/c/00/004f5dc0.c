/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f5dc0; name: FUN_004f5dc0
 */


long FUN_004f5dc0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar1 + 1;
  } while (lVar2 != 0);
  return lVar1;
}


