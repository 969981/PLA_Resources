/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5740; name: FUN_032b5740
 */


long FUN_032b5740(int param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = 1;
  piVar2 = &DAT_04440aac;
  while( true ) {
    if (piVar2[-0xe] == param_1) {
      return lVar1 + -1;
    }
    if (*piVar2 == param_1) break;
    lVar1 = lVar1 + 2;
    piVar2 = piVar2 + 0x1c;
    if (lVar1 == 0x117) {
      return 0;
    }
  }
  return lVar1;
}


