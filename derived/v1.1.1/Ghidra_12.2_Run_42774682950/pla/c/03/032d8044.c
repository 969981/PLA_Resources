/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d8044; name: FUN_032d8044
 */


undefined4 FUN_032d8044(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long local_48 [2];
  ulong local_38;
  
  iVar2 = FUN_032d7f68();
  if (iVar2 < 0) {
    uVar4 = 0x80040200;
    if (*param_1 != 0) {
      FUN_032e2c7c(local_48,param_1[1],&DAT_04358310);
      lVar1 = local_48[0];
      if ((local_38 & 1) != 0) {
        FUN_032e0c40(local_38 & 0xfffffffffffffffe);
      }
      if (lVar1 != 0) {
        FUN_032d6b10(local_48,lVar1,param_2);
        if (local_48[0] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_032e65a4(param_1,local_48);
          FUN_032e6310(local_48,3,1);
        }
        if ((local_38 & 1) != 0) {
          FUN_032e0c40(local_38 & 0xfffffffffffffffe);
        }
        if (local_48[0] != 0) {
          return uVar3;
        }
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


