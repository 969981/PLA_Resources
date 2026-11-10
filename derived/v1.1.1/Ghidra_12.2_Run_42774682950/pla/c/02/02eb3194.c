/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb3194; name: FUN_02eb3194
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02eb3194(void)

{
  long lVar1;
  long lVar2;
  
  if (DAT_0440a460 != 0) {
    lVar1 = DAT_0440a460;
    while( true ) {
      lVar2 = *(long *)(lVar1 + 0x60);
      if (DAT_0440a460 == lVar1) {
        DAT_0440a460 = lVar2;
      }
      else {
        _DAT_00000060 = lVar2;
      }
      if (DAT_0440a458 == lVar1) {
        DAT_0440a458 = 0;
      }
      FUN_02eb32d4(lVar1,0);
      if (lVar2 == 0) break;
      lVar1 = lVar2;
    }
  }
  return;
}


