/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8398; name: FUN_02ea8398
 */


void FUN_02ea8398(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = DAT_0440a418;
  if (DAT_0440a420 != 0) {
    cVar1 = *(char *)(DAT_0440a418 + 0x24);
    lVar2 = DAT_0440a418;
    uVar4 = DAT_0440a420;
    while( true ) {
      if ((cVar1 != '\0') && (*(long *)(lVar2 + 0x18) != 0)) {
        FUN_02f59e60(5,*(long *)(lVar2 + 0x18));
        lVar3 = DAT_0440a418;
        uVar4 = DAT_0440a420;
      }
      if (lVar2 + 0x28 == lVar3 + (ulong)uVar4 * 0x28) break;
      cVar1 = *(char *)(lVar2 + 0x4c);
      lVar2 = lVar2 + 0x28;
    }
  }
  if (lVar3 != 0) {
    DAT_0440a420 = 0;
    FUN_02f59e60(0);
    DAT_0440a418 = 0;
    DAT_0440a424 = 0;
  }
  return;
}


