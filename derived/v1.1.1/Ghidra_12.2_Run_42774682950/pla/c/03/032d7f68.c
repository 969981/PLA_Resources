/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d7f68; name: FUN_032d7f68
 */


undefined4 FUN_032d7f68(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long local_48 [2];
  ulong local_38;
  
  if (*param_1 != 0) {
    FUN_032e2c7c(local_48,param_1[1],&DAT_04358310);
    lVar1 = local_48[0];
    if ((local_38 & 1) != 0) {
      FUN_032e0c40(local_38 & 0xfffffffffffffffe);
    }
    if (lVar1 != 0) {
      FUN_032d69d4(local_48,lVar1,param_2);
      if (local_48[0] == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_032e65a4(param_1,local_48);
      }
      if ((local_38 & 1) != 0) {
        FUN_032e0c40(local_38 & 0xfffffffffffffffe);
      }
      if (local_48[0] != 0) {
        return uVar2;
      }
    }
  }
  return 0x80040200;
}


