/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339991c; name: FUN_0339991c
 */


undefined8 FUN_0339991c(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x50;
  iVar2 = FUN_0339a5c0(lVar1);
  if (iVar2 == 8) {
    while( true ) {
      FUN_03399638(param_1);
      iVar2 = FUN_0339a5c0(lVar1);
      if (iVar2 != 8) break;
      FUN_03399638(param_1);
      iVar2 = FUN_0339a5c0(lVar1);
      if (iVar2 != 9) {
        return 6;
      }
      iVar2 = FUN_0339a5c0(lVar1);
      if (iVar2 != 10) {
        return 6;
      }
    }
    if (iVar2 == 7) {
      FUN_033996bc(param_1);
      return 0;
    }
  }
  return 6;
}


