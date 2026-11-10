/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec9278; name: FUN_02ec9278
 */


int FUN_02ec9278(byte param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (DAT_0440a7e0 == 0) {
    iVar1 = 1;
  }
  else {
    lVar3 = DAT_0440a7e0;
    iVar2 = 1;
    do {
      iVar1 = FUN_02ec8b50(lVar3,0);
      lVar3 = *(long *)(lVar3 + 8);
      if (iVar1 == 1 || iVar2 != 1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
    } while (lVar3 != 0);
  }
  FUN_02f14074(0);
  DAT_0440a5b8 = iVar1 == 1;
  DAT_042aa0f0 = param_1 & 1;
  nn::os::SignalEvent((EventType *)&DAT_0440a7a0);
  return iVar1;
}


