/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205cf4; name: FUN_00205cf4
 */


long FUN_00205cf4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00211270();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) != 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(int *)(lVar1 + 0xdc) != 5) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


