/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a3d60; name: FUN_004a3d60
 */


undefined8 FUN_004a3d60(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0042d4f0();
  lVar3 = FUN_004a3e30();
  iVar2 = FUN_0041ccc0(param_2);
  if (iVar2 < 0) {
    uVar4 = 0x66;
    uVar5 = 0x48;
  }
  else if (lVar3 == 0) {
    uVar4 = 0x69;
    uVar5 = 0x4c;
  }
  else {
    uVar1 = lVar3 * 2 + (long)iVar2 + 10;
    if (uVar1 < param_3) {
      *param_4 = param_3 - uVar1;
      return 1;
    }
    uVar5 = 0x52;
    uVar4 = 0x68;
  }
  FUN_004014b0(0x35,0x68,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar5);
  return 0;
}


