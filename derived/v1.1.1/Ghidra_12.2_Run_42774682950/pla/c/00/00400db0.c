/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400db0; name: FUN_00400db0
 */


undefined8 FUN_00400db0(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    lVar3 = FUN_004071e0();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x177;
LAB_00400e5c:
      FUN_004014b0(0xf,0x66,0x41,"external/openssl/crypto/ex_data.c",uVar4);
      return 0;
    }
  }
  iVar1 = FUN_00407950();
  lVar3 = *param_1;
  if (iVar1 <= param_2) {
    iVar1 = iVar1 + -1;
    do {
      iVar2 = FUN_00407800(lVar3,0);
      if (iVar2 == 0) {
        uVar4 = 0x17e;
        goto LAB_00400e5c;
      }
      lVar3 = *param_1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  FUN_004079a0(lVar3,param_2,param_3);
  return 1;
}


