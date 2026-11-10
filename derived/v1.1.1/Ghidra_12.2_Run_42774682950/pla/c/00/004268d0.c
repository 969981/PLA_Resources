/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004268d0; name: FUN_004268d0
 */


bool FUN_004268d0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  FUN_0040e090(param_5);
  if (param_1 == 0) {
    param_1 = FUN_0040e240(param_5);
  }
  if (param_2 == 0) {
    param_2 = FUN_0040e240(param_5);
  }
  uVar5 = FUN_0040e240(param_5);
  lVar6 = FUN_0040e240(param_5);
  bVar1 = false;
  if (lVar6 != 0) {
    iVar2 = FUN_0040cc00(param_3,param_4);
    if (iVar2 < 0) {
      FUN_0040c6b0(param_1,0);
      lVar6 = FUN_0040c5d0(param_2,param_3);
      bVar1 = lVar6 != 0;
    }
    else {
      iVar3 = FUN_0040c070(param_3);
      iVar2 = *(int *)(param_4 + 0x30) * 2;
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      if (iVar2 != *(int *)(param_4 + 0x34)) {
        FUN_0040e090(param_5);
        lVar7 = FUN_0040e240(param_5);
        if ((lVar7 == 0) || (iVar4 = FUN_0040cd10(lVar7,iVar2), iVar4 == 0)) {
          iVar3 = -1;
        }
        else {
          iVar4 = FUN_0040e5a0(param_4 + 0x18,0,lVar7,param_4,param_5);
          if (iVar4 == 0) {
            iVar3 = -1;
          }
        }
        FUN_0040e1b0(param_5);
        *(int *)(param_4 + 0x34) = iVar3;
      }
      if ((((iVar3 != -1) &&
           (iVar3 = FUN_00410790(uVar5,param_3,*(undefined4 *)(param_4 + 0x30)), iVar3 != 0)) &&
          (iVar3 = FUN_004129a0(lVar6,uVar5,param_4 + 0x18,param_5), iVar3 != 0)) &&
         (iVar2 = FUN_00410790(param_1,lVar6,iVar2 - *(int *)(param_4 + 0x30)), iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar2 = FUN_004129a0(lVar6,param_4,param_1,param_5);
        if ((iVar2 != 0) && (iVar2 = FUN_004119c0(param_2,param_3,lVar6), iVar2 != 0)) {
          iVar2 = 4;
          *(undefined4 *)(param_2 + 0x10) = 0;
          do {
            iVar3 = FUN_0040cc00(param_2,param_4);
            if (iVar3 < 0) {
              iVar2 = FUN_0040c130(param_2);
              if (iVar2 == 0) {
                uVar8 = *(undefined4 *)(param_3 + 0x10);
              }
              else {
                uVar8 = 0;
              }
              *(undefined4 *)(param_2 + 0x10) = uVar8;
              bVar1 = true;
              *(uint *)(param_1 + 0x10) = *(uint *)(param_4 + 0x10) ^ *(uint *)(param_3 + 0x10);
              break;
            }
            iVar2 = iVar2 + -1;
            if (iVar2 == 0) {
              FUN_004014b0(3,0x82,0x65,"external/openssl/crypto/bn/bn_recp.c",0x95);
              goto LAB_00426af8;
            }
            iVar3 = FUN_004119c0(param_2,param_2,param_4);
            if (iVar3 == 0) goto LAB_00426af8;
            iVar3 = FUN_0040bd20(param_1,1);
            bVar1 = false;
          } while (iVar3 != 0);
          goto LAB_00426afc;
        }
      }
LAB_00426af8:
      bVar1 = false;
    }
  }
LAB_00426afc:
  FUN_0040e1b0(param_5);
  return bVar1;
}


