/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a5090; name: FUN_004a5090
 */


long FUN_004a5090(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar2 = FUN_0042d560();
  uVar3 = FUN_0042d4f0(param_1);
  uVar4 = FUN_0042e350();
  lVar5 = FUN_0042df90(uVar3);
  lVar6 = FUN_0040de30();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar2 = 0xcb;
LAB_004a52a8:
    FUN_004014b0(0x35,0x6a,0x41,"external/openssl/crypto/sm2/sm2_sign.c",uVar2);
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    FUN_0040e090(lVar6);
    uVar7 = FUN_0040e240(lVar6);
    uVar8 = FUN_0040e240(lVar6);
    uVar9 = FUN_0040e240(lVar6);
    lVar10 = FUN_0040e240(lVar6);
    if (lVar10 == 0) {
      uVar2 = 0xd5;
      goto LAB_004a52a8;
    }
    lVar11 = FUN_0040c260();
    lVar12 = FUN_0040c260();
    if ((lVar11 == 0) || (lVar12 == 0)) {
      uVar2 = 0x41;
      uVar3 = 0xe1;
    }
    else {
      do {
        do {
          iVar1 = FUN_00426fa0(uVar7,uVar4);
          if (iVar1 == 0) {
            uVar2 = 0x44;
            uVar3 = 0xe7;
            goto LAB_004a5308;
          }
          iVar1 = FUN_0042f280(uVar3,lVar5,uVar7,0,0,lVar6);
          if (((iVar1 == 0) || (iVar1 = FUN_0042ebc0(uVar3,lVar5,uVar9,0,lVar6), iVar1 == 0)) ||
             (iVar1 = FUN_00412cb0(lVar11,param_2,uVar9,uVar4,lVar6), iVar1 == 0)) {
            uVar2 = 0x44;
            uVar3 = 0xef;
            goto LAB_004a5308;
          }
          iVar1 = FUN_0040c130(lVar11);
        } while (iVar1 != 0);
        iVar1 = FUN_00411730(uVar8,lVar11,uVar7);
        if (iVar1 == 0) {
          uVar2 = 0x44;
          uVar3 = 0xf8;
          goto LAB_004a5308;
        }
        iVar1 = FUN_0040cc60(uVar8,uVar4);
      } while (iVar1 == 0);
      uVar8 = FUN_0040bfc0();
      iVar1 = FUN_00411730(lVar12,uVar2,uVar8);
      if (((iVar1 == 0) || (iVar1 = FUN_0042f2d0(uVar3,lVar12,lVar12,lVar6), iVar1 == 0)) ||
         ((iVar1 = FUN_00413180(lVar10,uVar2,lVar11,uVar4,lVar6), iVar1 == 0 ||
          ((iVar1 = FUN_00411b00(lVar10,uVar7,lVar10), iVar1 == 0 ||
           (iVar1 = FUN_00413180(lVar12,lVar12,lVar10,uVar4,lVar6), iVar1 == 0)))))) {
        uVar3 = 0x104;
        uVar2 = 3;
      }
      else {
        lVar10 = FUN_0043c1b0();
        if (lVar10 != 0) {
          FUN_0043c270(lVar10,lVar11,lVar12);
          goto LAB_004a5320;
        }
        uVar2 = 0x41;
        uVar3 = 0x10a;
      }
    }
LAB_004a5308:
    FUN_004014b0(0x35,0x6a,uVar2,"external/openssl/crypto/sm2/sm2_sign.c",uVar3);
  }
  FUN_0040c1e0(lVar11);
  FUN_0040c1e0(lVar12);
  lVar10 = 0;
LAB_004a5320:
  FUN_0040def0(lVar6);
  FUN_0042db80(lVar5);
  return lVar10;
}


