/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00410e60; name: FUN_00410e60
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00410e60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long extraout_x1;
  long lVar13;
  int iVar14;
  long local_90;
  undefined1 auStack_78 [24];
  
  iVar1 = FUN_0040d1e0(param_3,1);
  if ((iVar1 != 0) || (iVar1 = FUN_0040c130(param_3), iVar1 != 0)) {
    if (param_5 == (undefined4 *)0x0) {
      return 0;
    }
    *param_5 = 1;
    return 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar1 = FUN_0040c1d0(param_2,4);
  if ((iVar1 == 0) && (iVar1 = FUN_0040c1d0(param_3,4), iVar1 == 0)) {
    FUN_0040e090(param_4);
    lVar8 = FUN_0040e240(param_4);
    lVar3 = FUN_0040e240(param_4);
    lVar7 = FUN_0040e240(param_4);
    puVar11 = (undefined8 *)FUN_0040e240(param_4);
    local_90 = FUN_0040e240(param_4);
    lVar4 = FUN_0040e240(param_4);
    lVar5 = FUN_0040e240(param_4);
    lVar12 = 0;
    if ((lVar5 != 0) && ((lVar12 = param_1, param_1 != 0 || (lVar12 = FUN_0040c260(), lVar12 != 0)))
       ) {
      FUN_0040c6b0(lVar7,1);
      FUN_0040c6b0(lVar4,0);
      lVar9 = FUN_0040c5d0(lVar3,param_2);
      if ((lVar9 != 0) &&
         ((lVar9 = FUN_0040c5d0(lVar8,param_3), lVar9 != 0 &&
          (((*(undefined4 *)(lVar8 + 0x10) = 0, *(int *)(lVar3 + 0x10) == 0 &&
            (iVar1 = FUN_0040cc00(lVar3,lVar8), iVar1 < 0)) ||
           (iVar1 = FUN_00412c30(lVar3,lVar3,lVar8,param_4), iVar1 != 0)))))) {
        iVar1 = FUN_0040d2b0(param_3);
        if ((iVar1 == 0) || (iVar1 = FUN_0040c070(param_3), 0x800 < iVar1)) {
          iVar1 = FUN_0040c130(lVar3);
          if (iVar1 != 0) goto LAB_00411364;
          iVar1 = -1;
          do {
            iVar14 = iVar1;
            lVar10 = lVar4;
            lVar9 = lVar3;
            lVar4 = lVar7;
            iVar1 = FUN_0040c070(lVar8);
            iVar2 = FUN_0040c070(lVar9);
            if (iVar1 == iVar2) {
              iVar1 = FUN_0040c6b0(puVar11,1);
              if (iVar1 == 0) goto joined_r0x0041171c;
LAB_00411494:
              iVar1 = FUN_00411b00(local_90,lVar8,lVar9);
            }
            else {
              iVar1 = FUN_0040c070(lVar8);
              iVar2 = FUN_0040c070(lVar9);
              if (iVar1 == iVar2 + 1) {
                iVar1 = FUN_00410400(lVar5,lVar9);
                if (iVar1 == 0) goto joined_r0x0041171c;
                iVar1 = FUN_0040cc00(lVar8,lVar5);
                if (iVar1 < 0) {
                  iVar1 = FUN_0040c6b0(puVar11,1);
                  if (iVar1 != 0) goto LAB_00411494;
                  goto joined_r0x0041171c;
                }
                iVar1 = FUN_00411b00(local_90,lVar8,lVar5);
                if ((iVar1 == 0) || (iVar1 = FUN_00411730(puVar11,lVar5,lVar9), iVar1 == 0))
                goto joined_r0x0041171c;
                iVar1 = FUN_0040cc00(lVar8,puVar11);
                if (iVar1 < 0) {
                  iVar1 = FUN_0040c6b0(puVar11,2);
                }
                else {
                  iVar1 = FUN_0040c6b0(puVar11,3);
                  if (iVar1 == 0) goto joined_r0x0041171c;
                  iVar1 = FUN_00411b00(local_90,local_90,lVar9);
                }
              }
              else {
                iVar1 = FUN_0040e5a0(puVar11,local_90,lVar8,lVar9,param_4);
              }
            }
            if (iVar1 == 0) goto joined_r0x0041171c;
            iVar1 = FUN_0040d220(puVar11);
            if (iVar1 == 0) {
              iVar1 = FUN_0040d260(puVar11,2);
              if (iVar1 == 0) {
                iVar1 = FUN_0040d260(puVar11,4);
                if (iVar1 == 0) {
                  if (*(int *)(puVar11 + 1) == 1) {
                    lVar7 = FUN_0040c5d0(lVar8,lVar4);
                    if (lVar7 == 0) goto joined_r0x0041171c;
                    iVar1 = FUN_0040bf40(lVar8,*(undefined4 *)*puVar11);
                  }
                  else {
                    iVar1 = FUN_004129a0(lVar8,puVar11,lVar4,param_4);
                  }
                }
                else {
                  iVar1 = FUN_00410600(lVar8,lVar4,2);
                }
              }
              else {
                iVar1 = FUN_00410400(lVar8,lVar4);
              }
              if (iVar1 == 0) goto joined_r0x0041171c;
              iVar1 = FUN_00411730(lVar8,lVar8,lVar10);
            }
            else {
              iVar1 = FUN_00411730(lVar8,lVar4,lVar10);
            }
            if (iVar1 == 0) goto joined_r0x0041171c;
            iVar2 = FUN_0040c130(local_90);
            lVar7 = lVar8;
            lVar3 = local_90;
            lVar8 = lVar9;
            iVar1 = -iVar14;
            local_90 = lVar10;
          } while (iVar2 == 0);
          if (0 < iVar14) goto LAB_00411364;
        }
        else {
          iVar1 = FUN_0040c130(lVar3);
          if (iVar1 == 0) {
            iVar1 = 0;
            do {
              while (iVar2 = FUN_0040cdc0(lVar3,iVar1), iVar2 == 0) {
                iVar2 = FUN_0040d2b0(lVar7);
                if ((iVar2 != 0) && (iVar2 = FUN_004118b0(lVar7,lVar7,param_3), iVar2 == 0))
                goto joined_r0x0041171c;
                iVar1 = iVar1 + 1;
                iVar2 = FUN_004104e0(lVar7,lVar7);
                if (iVar2 == 0) goto joined_r0x0041171c;
              }
              if ((iVar1 != 0) && (iVar1 = FUN_00410790(lVar3,lVar3,iVar1), iVar1 == 0))
              goto joined_r0x0041171c;
              iVar1 = 0;
              iVar2 = FUN_0040cdc0(lVar8,0);
              while (iVar2 == 0) {
                iVar2 = FUN_0040d2b0(lVar4);
                if ((iVar2 != 0) && (iVar2 = FUN_004118b0(lVar4,lVar4,param_3), iVar2 == 0))
                goto joined_r0x0041171c;
                iVar1 = iVar1 + 1;
                iVar2 = FUN_004104e0(lVar4,lVar4);
                if (iVar2 == 0) goto joined_r0x0041171c;
                iVar2 = FUN_0040cdc0(lVar8,iVar1);
              }
              if ((iVar1 != 0) && (iVar1 = FUN_00410790(lVar8,lVar8,iVar1), iVar1 == 0))
              goto joined_r0x0041171c;
              iVar1 = FUN_0040cc00(lVar3,lVar8);
              if (iVar1 < 0) {
                iVar1 = FUN_004118b0(lVar4,lVar4,lVar7);
                if (iVar1 == 0) goto joined_r0x0041171c;
                iVar1 = FUN_004119c0(lVar8,lVar8,lVar3);
              }
              else {
                iVar1 = FUN_004118b0(lVar7,lVar7,lVar4);
                if (iVar1 == 0) goto joined_r0x0041171c;
                iVar1 = FUN_004119c0(lVar3,lVar3,lVar8);
              }
              if (iVar1 == 0) goto joined_r0x0041171c;
              iVar2 = FUN_0040c130(lVar3);
              iVar1 = 0;
            } while (iVar2 == 0);
          }
LAB_00411364:
          iVar1 = FUN_00411b00(lVar4,param_3,lVar4);
          lVar9 = extraout_x1;
          if (iVar1 == 0) goto joined_r0x0041171c;
        }
        iVar1 = FUN_0040d220(lVar8,lVar9);
        if (iVar1 == 0) {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 1;
          }
        }
        else if ((*(int *)(lVar4 + 0x10) == 0) && (iVar1 = FUN_0040cc00(lVar4,param_3), iVar1 < 0))
        {
          lVar7 = FUN_0040c5d0(lVar12,lVar4);
          if (lVar7 != 0) {
LAB_004113b8:
            lVar9 = lVar12;
            if (param_1 != 0 || lVar12 != 0) goto LAB_004116bc;
            goto LAB_004116b8;
          }
        }
        else {
          iVar1 = FUN_00412c30(lVar12,lVar4,param_3,param_4);
          if (iVar1 != 0) goto LAB_004113b8;
        }
      }
    }
joined_r0x0041171c:
    lVar9 = 0;
    if (param_1 != 0) goto LAB_004116bc;
  }
  else {
    FUN_0040e090(param_4);
    lVar3 = FUN_0040e240(param_4);
    lVar4 = FUN_0040e240(param_4);
    lVar5 = FUN_0040e240(param_4);
    uVar6 = FUN_0040e240(param_4);
    lVar7 = FUN_0040e240(param_4);
    lVar8 = FUN_0040e240(param_4);
    lVar9 = FUN_0040e240(param_4);
    if (lVar9 == 0) {
      lVar12 = 0;
    }
    else {
      lVar9 = param_1;
      if ((param_1 != 0) || (lVar9 = FUN_0040c260(), lVar12 = lVar9, lVar9 != 0)) {
        FUN_0040c6b0(lVar5,1);
        FUN_0040c6b0(lVar8,0);
        lVar10 = FUN_0040c5d0(lVar4,param_2);
        lVar12 = lVar9;
        if ((lVar10 != 0) && (lVar10 = FUN_0040c5d0(lVar3,param_3), lVar10 != 0)) {
          *(undefined4 *)(lVar3 + 0x10) = 0;
          if ((*(int *)(lVar4 + 0x10) != 0) || (iVar1 = FUN_0040cc00(lVar4,lVar3), -1 < iVar1)) {
            FUN_0040c250(auStack_78);
            FUN_0040d300(auStack_78,lVar4,4);
            iVar1 = FUN_00412c30(lVar4,auStack_78,lVar3,param_4);
            if (iVar1 == 0) goto joined_r0x004113f4;
          }
          iVar1 = -1;
          while (lVar13 = lVar3, lVar10 = lVar7, iVar2 = FUN_0040c130(lVar4), iVar2 == 0) {
            FUN_0040c250(auStack_78);
            FUN_0040d300(auStack_78,lVar13,4);
            iVar2 = FUN_0040e5a0(uVar6,lVar10,auStack_78,lVar4,param_4);
            if ((iVar2 == 0) || (iVar2 = FUN_004129a0(lVar13,uVar6,lVar5,param_4), iVar2 == 0))
            goto joined_r0x004113f4;
            iVar2 = FUN_00411730(lVar13,lVar13,lVar8);
            iVar1 = -iVar1;
            lVar7 = lVar8;
            lVar3 = lVar4;
            lVar4 = lVar10;
            lVar8 = lVar5;
            lVar5 = lVar13;
            if (iVar2 == 0) goto joined_r0x004113f4;
          }
          if ((-1 < iVar1) || (iVar1 = FUN_00411b00(lVar8,param_3,lVar8), iVar1 != 0)) {
            iVar1 = FUN_0040d220(lVar13);
            if (iVar1 == 0) {
              FUN_004014b0(3,0x8b,0x6c,"external/openssl/crypto/bn/bn_gcd.c",0x265);
            }
            else if ((*(int *)(lVar8 + 0x10) == 0) &&
                    (iVar1 = FUN_0040cc00(lVar8,param_3), iVar1 < 0)) {
              lVar7 = FUN_0040c5d0(lVar9,lVar8);
              if (lVar7 != 0) {
LAB_00411348:
                if (param_1 == 0 && lVar9 == 0) goto LAB_004116b4;
                goto LAB_004116bc;
              }
            }
            else {
              iVar1 = FUN_00412c30(lVar9,lVar8,param_3,param_4);
              if (iVar1 != 0) goto LAB_00411348;
            }
          }
        }
      }
    }
joined_r0x004113f4:
    lVar9 = 0;
    if (param_1 != 0) goto LAB_004116bc;
LAB_004116b4:
  }
LAB_004116b8:
  FUN_0040c1e0(lVar12);
LAB_004116bc:
  FUN_0040e1b0(param_4);
  return lVar9;
}


