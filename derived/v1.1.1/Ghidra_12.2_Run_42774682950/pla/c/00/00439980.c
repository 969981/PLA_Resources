/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00439980; name: FUN_00439980
 */


undefined8
FUN_00439980(long param_1,long param_2,long *param_3,long *param_4,long param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((param_1 == 0) || (lVar3 = FUN_0042d4f0(), lVar3 == 0)) {
    uVar9 = 0x43;
    uVar10 = 0x2e;
LAB_00439b20:
    FUN_004014b0(0x10,0xf8,uVar9,"external/openssl/crypto/ec/ecdsa_ossl.c",uVar10);
    return 0;
  }
  iVar1 = FUN_0042d960(param_1);
  if (iVar1 == 0) {
    uVar9 = 0x9f;
    uVar10 = 0x33;
    goto LAB_00439b20;
  }
  lVar4 = param_2;
  if ((param_2 == 0) && (lVar4 = FUN_0040de30(), lVar4 == 0)) {
    uVar9 = 0x41;
    uVar10 = 0x39;
    goto LAB_00439b20;
  }
  lVar5 = FUN_0040c260();
  lVar6 = FUN_0040c260();
  lVar7 = FUN_0040c260();
  if (((lVar5 == 0) || (lVar6 == 0)) || (lVar7 == 0)) {
    uVar9 = 0x41;
    uVar10 = 0x42;
  }
  else {
    lVar8 = FUN_0042df90(lVar3);
    if (lVar8 != 0) {
      uVar9 = FUN_0042e350(lVar3);
      uVar2 = FUN_0040c070();
      iVar1 = FUN_0040cd10(lVar5,uVar2);
      if (((iVar1 != 0) && (iVar1 = FUN_0040cd10(lVar6,uVar2), iVar1 != 0)) &&
         (iVar1 = FUN_0040cd10(lVar7,uVar2), iVar1 != 0)) {
        if (param_5 == 0) {
          do {
            do {
              iVar1 = FUN_00426fa0(lVar5,uVar9);
              if (iVar1 == 0) {
                uVar9 = 0x9e;
                uVar10 = 0x60;
                goto LAB_00439d68;
              }
              iVar1 = FUN_0040c130(lVar5);
            } while (iVar1 != 0);
            iVar1 = FUN_0042f280(lVar3,lVar8,lVar5,0,0,lVar4);
            if (iVar1 == 0) goto LAB_00439ce4;
            iVar1 = FUN_0042ebc0(lVar3,lVar8,lVar7,0,lVar4);
            if (iVar1 == 0) goto LAB_00439d08;
            iVar1 = FUN_00412c30(lVar6,lVar7,uVar9,lVar4);
            if (iVar1 == 0) goto LAB_00439d24;
            iVar1 = FUN_0040c130(lVar6);
          } while (iVar1 != 0);
        }
        else {
          do {
            do {
              uVar10 = FUN_0042d560(param_1);
              iVar1 = FUN_00426fb0(lVar5,uVar9,uVar10,param_5,(long)param_6,lVar4);
              if (iVar1 == 0) {
                uVar9 = 0x9e;
                uVar10 = 0x5a;
                goto LAB_00439d68;
              }
              iVar1 = FUN_0040c130(lVar5);
            } while (iVar1 != 0);
            iVar1 = FUN_0042f280(lVar3,lVar8,lVar5,0,0,lVar4);
            if (iVar1 == 0) goto LAB_00439ce4;
            iVar1 = FUN_0042ebc0(lVar3,lVar8,lVar7,0,lVar4);
            if (iVar1 == 0) goto LAB_00439d08;
            iVar1 = FUN_00412c30(lVar6,lVar7,uVar9,lVar4);
            if (iVar1 == 0) goto LAB_00439d24;
            iVar1 = FUN_0040c130(lVar6);
          } while (iVar1 != 0);
        }
        iVar1 = FUN_0042f2d0(lVar3,lVar5,lVar5,lVar4);
        if (iVar1 != 0) {
          FUN_0040c140(*param_4);
          FUN_0040c140(*param_3);
          *param_4 = lVar6;
          uVar9 = 1;
          *param_3 = lVar5;
          goto joined_r0x00439ba8;
        }
        uVar10 = 0x79;
        goto LAB_00439d5c;
      }
      goto LAB_00439b90;
    }
    uVar10 = 0x46;
    uVar9 = 0x10;
  }
  FUN_004014b0(0x10,0xf8,uVar9,"external/openssl/crypto/ec/ecdsa_ossl.c",uVar10);
  lVar8 = 0;
LAB_00439b90:
  FUN_0040c140(lVar5);
  FUN_0040c140(lVar6);
  uVar9 = 0;
joined_r0x00439ba8:
  if (lVar4 != param_2) {
    FUN_0040def0(lVar4);
  }
  FUN_0042db80(lVar8);
  FUN_0040c140(lVar7);
  return uVar9;
LAB_00439ce4:
  FUN_004014b0(0x10,0xf8,0x10,"external/openssl/crypto/ec/ecdsa_ossl.c",0x68);
  goto LAB_00439b90;
LAB_00439d08:
  uVar10 = 0x6d;
  uVar9 = 0x10;
  goto LAB_00439d68;
LAB_00439d24:
  uVar10 = 0x72;
LAB_00439d5c:
  uVar9 = 3;
LAB_00439d68:
  FUN_004014b0(0x10,0xf8,uVar9,"external/openssl/crypto/ec/ecdsa_ossl.c",uVar10);
  goto LAB_00439b90;
}


