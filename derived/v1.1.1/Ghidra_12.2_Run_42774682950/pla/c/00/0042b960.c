/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042b960; name: FUN_0042b960
 */


undefined8
FUN_0042b960(long param_1,long param_2,long *param_3,undefined8 param_4,long param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  if (((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    uVar8 = 0x65;
    uVar9 = 0xbd;
LAB_0042b9fc:
    FUN_004014b0(10,0x6b,uVar8,"external/openssl/crypto/dsa/dsa_ossl.c",uVar9);
    return 0;
  }
  iVar1 = FUN_0040c130();
  if (((iVar1 != 0) || (iVar1 = FUN_0040c130(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
     (iVar1 = FUN_0040c130(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
    uVar9 = 0xc3;
    uVar8 = 0x70;
    goto LAB_0042b9fc;
  }
  lVar4 = FUN_0040c260();
  lVar5 = FUN_0040c260();
  lVar11 = 0;
  if (((lVar4 != 0) && (lVar5 != 0)) &&
     ((lVar11 = param_2, param_2 != 0 || (lVar11 = FUN_0040de30(), lVar11 != 0)))) {
    uVar2 = FUN_0040c070(*(undefined8 *)(param_1 + 0x10));
    iVar1 = FUN_0042cca0(*(undefined8 *)(param_1 + 0x10));
    iVar1 = iVar1 + 2;
    lVar6 = FUN_0040c660(lVar4,iVar1);
    if ((lVar6 != 0) && (lVar6 = FUN_0040c660(lVar5,iVar1), lVar6 != 0)) {
      if (param_5 == 0) {
        do {
          iVar3 = FUN_00426fa0(lVar4,*(undefined8 *)(param_1 + 0x10));
          if (iVar3 == 0) goto LAB_0042bc70;
          iVar3 = FUN_0040c130(lVar4);
        } while (iVar3 != 0);
      }
      else {
        do {
          iVar3 = FUN_00426fb0(lVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28)
                               ,param_5,(long)param_6,lVar11);
          if (iVar3 == 0) goto LAB_0042bc70;
          iVar3 = FUN_0040c130(lVar4);
        } while (iVar3 != 0);
      }
      FUN_0040d3b0(lVar4,4);
      FUN_0040d3b0(lVar5,4);
      if (((((*(byte *)(param_1 + 0x30) & 1) == 0) ||
           (lVar6 = FUN_0040dcb0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x60),
                                 *(undefined8 *)(param_1 + 8),lVar11), lVar6 != 0)) &&
          (iVar3 = FUN_00411730(lVar5,lVar4,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)) &&
         (iVar3 = FUN_00411730(lVar4,lVar5,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)) {
        uVar8 = FUN_0040cdc0(lVar5,uVar2);
        FUN_0040cfe0(uVar8,lVar4,lVar5,iVar1);
        pcVar10 = *(code **)(*(long *)(param_1 + 0x50) + 0x28);
        if (pcVar10 == (code *)0x0) {
          iVar1 = FUN_004250f0(param_4,*(undefined8 *)(param_1 + 0x18),lVar4,
                               *(undefined8 *)(param_1 + 8),lVar11,*(undefined8 *)(param_1 + 0x38));
        }
        else {
          iVar1 = (*pcVar10)(param_1,param_4,*(undefined8 *)(param_1 + 0x18),lVar4,
                             *(undefined8 *)(param_1 + 8),lVar11);
        }
        if ((iVar1 != 0) &&
           (iVar1 = FUN_0040e5a0(0,param_4,param_4,*(undefined8 *)(param_1 + 0x10),lVar11),
           iVar1 != 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          lVar6 = FUN_0040c260();
          if (lVar6 != 0) {
            FUN_0040e090(lVar11);
            lVar7 = FUN_0040e240(lVar11);
            if (((lVar7 != 0) && (iVar1 = FUN_0040c6b0(lVar6,2), iVar1 != 0)) &&
               ((iVar1 = FUN_00411b00(lVar7,uVar8,lVar6), iVar1 != 0 &&
                (iVar1 = FUN_004250f0(lVar6,lVar4,lVar7,uVar8,lVar11,0), iVar1 != 0)))) {
              FUN_0040e1b0(lVar11);
              FUN_0040c140(*param_3);
              *param_3 = lVar6;
              uVar8 = 1;
              goto joined_r0x0042bc94;
            }
            FUN_0040c1e0(lVar6);
            FUN_0040e1b0(lVar11);
          }
        }
      }
    }
  }
LAB_0042bc70:
  FUN_004014b0(10,0x6b,3,"external/openssl/crypto/dsa/dsa_ossl.c",0x11b);
  uVar8 = 0;
joined_r0x0042bc94:
  if (lVar11 != param_2) {
    FUN_0040def0(lVar11);
  }
  FUN_0040c140(lVar4);
  FUN_0040c140(lVar5);
  return uVar8;
}


