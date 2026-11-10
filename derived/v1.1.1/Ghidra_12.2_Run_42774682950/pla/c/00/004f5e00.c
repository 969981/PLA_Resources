/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f5e00; name: FUN_004f5e00
 */


int FUN_004f5e00(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_00414680();
  lVar3 = FUN_00403d80();
  if ((lVar3 == 0) || (iVar1 = FUN_00404920(lVar3,0x6c,3,param_2), iVar1 < 1)) {
    uVar7 = 0x54;
    uVar6 = 2;
    goto LAB_004f5ed4;
  }
  if (param_3 == 2) {
    lVar4 = FUN_00464950(lVar3,0);
    if (lVar4 == 0) {
      FUN_004014b0(0xb,0x6f,0xd,"external/openssl/crypto/x509/by_file.c",0x70);
LAB_004f5f84:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0046b0a0(*(undefined8 *)(param_1 + 0x18),lVar4);
    }
    goto LAB_004f5ee0;
  }
  if (param_3 == 1) {
    lVar4 = FUN_004f1f50(lVar3,0,0,&DAT_03996322);
    if (lVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      do {
        iVar2 = FUN_0046b0a0(*(undefined8 *)(param_1 + 0x18),lVar4);
        if (iVar2 == 0) goto LAB_004f5f84;
        iVar1 = iVar1 + 1;
        FUN_00460a80(lVar4);
        lVar4 = FUN_004f1f50(lVar3,0,0,&DAT_03996322);
      } while (lVar4 != 0);
    }
    uVar5 = FUN_00401a70();
    if ((iVar1 == 0) || ((uVar5 & 0xfff) != 0x6c)) {
      uVar6 = 9;
      uVar7 = 0x61;
      goto LAB_004f5ed4;
    }
    FUN_004016d0();
  }
  else {
    uVar6 = 100;
    uVar7 = 0x78;
LAB_004f5ed4:
    FUN_004014b0(0xb,0x6f,uVar6,"external/openssl/crypto/x509/by_file.c",uVar7);
    iVar1 = 0;
  }
  lVar4 = 0;
LAB_004f5ee0:
  FUN_00460a80(lVar4);
  FUN_00403ee0(lVar3);
  return iVar1;
}


