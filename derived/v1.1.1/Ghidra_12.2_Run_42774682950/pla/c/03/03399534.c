/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03399534; name: FUN_03399534
 */


undefined4 FUN_03399534(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = param_1 + 0x50;
  iVar2 = FUN_0339a5c0(lVar1);
  if (iVar2 == 0xb) {
    iVar2 = FUN_0339a5c0(lVar1);
    uVar3 = 6;
    if (iVar2 == 8) {
      FUN_03399638(param_1);
      iVar2 = FUN_0339a5c0(lVar1);
      uVar3 = 3;
      if (iVar2 != 6) {
        uVar3 = 6;
      }
    }
  }
  else {
    if (iVar2 == 8) {
      while( true ) {
        FUN_03399638(param_1);
        iVar2 = FUN_0339a5c0(lVar1);
        if (iVar2 != 8) break;
        FUN_03399638(param_1);
        iVar2 = FUN_0339a5c0(lVar1);
        if ((iVar2 != 9) || (iVar2 = FUN_0339a5c0(lVar1), iVar2 != 10)) goto LAB_033995a4;
      }
      if (iVar2 == 6) {
        FUN_033996bc(param_1);
        return 1;
      }
      if (iVar2 == 0xb) {
        iVar2 = FUN_0339a5c0(lVar1);
        FUN_033996bc(param_1);
        uVar3 = 2;
        if (iVar2 != 6) {
          uVar3 = 6;
        }
        return uVar3;
      }
    }
LAB_033995a4:
    uVar3 = 6;
  }
  return uVar3;
}


