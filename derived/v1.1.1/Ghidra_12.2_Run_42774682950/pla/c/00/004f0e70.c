/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f0e70; name: FUN_004f0e70
 */


undefined4 FUN_004f0e70(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_00414680();
  lVar3 = FUN_00403d80();
  if (lVar3 == 0) {
    uVar6 = 0x217;
    uVar5 = 7;
  }
  else {
    iVar1 = FUN_00404920(lVar3,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar6 = 0x21c;
      uVar5 = 2;
    }
    else {
      if (param_3 == 2) {
        lVar4 = FUN_00464ab0(lVar3,0);
        uVar5 = 0xd;
      }
      else {
        if (param_3 != 1) {
          uVar6 = 0x228;
          uVar5 = 0x7c;
          goto LAB_004f0f7c;
        }
        lVar4 = FUN_004f1b80(lVar3,0,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8)
                            );
        uVar5 = 9;
      }
      if (lVar4 != 0) {
        uVar2 = FUN_004f0ad0(*(undefined8 *)(param_1 + 0x140),lVar4);
        FUN_00423420(lVar4);
        goto LAB_004f0f84;
      }
      uVar6 = 0x22c;
    }
  }
LAB_004f0f7c:
  FUN_004014b0(0x14,0xb0,uVar5,"external/openssl/ssl/ssl_rsa.c",uVar6);
  uVar2 = 0;
LAB_004f0f84:
  FUN_00403ee0(lVar3);
  return uVar2;
}


