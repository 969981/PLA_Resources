/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043de40; name: FUN_0043de40
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0043de40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  iVar2 = FUN_0040d2b0(param_3);
  lVar6 = param_1;
  if ((iVar2 == 0) || (iVar2 = FUN_0040d1e0(param_3,1), iVar2 != 0)) {
    iVar2 = FUN_0040d1e0(param_3,2);
    if (iVar2 == 0) {
      FUN_004014b0(3,0x79,0x70,"external/openssl/crypto/bn/bn_sqrt.c",0x29);
      return 0;
    }
    if (param_1 == 0) {
      lVar6 = FUN_0040c260();
      lVar13 = 0;
      if (lVar6 == 0) goto joined_r0x0043e250;
    }
    uVar3 = FUN_0040cdc0(param_2,0);
    iVar2 = FUN_0040c6b0(lVar6,uVar3);
    goto joined_r0x0043dec4;
  }
  iVar2 = FUN_0040c130(param_2);
  if ((iVar2 != 0) || (iVar2 = FUN_0040d220(param_2), iVar2 != 0)) {
    if (param_1 == 0) {
      lVar6 = FUN_0040c260();
      lVar13 = 0;
      if (lVar6 == 0) goto joined_r0x0043e250;
    }
    uVar3 = FUN_0040d220(param_2);
    iVar2 = FUN_0040c6b0(lVar6,uVar3);
joined_r0x0043dec4:
    if (iVar2 == 0) {
      if (lVar6 == param_1) {
        lVar6 = 0;
      }
      else {
        FUN_0040c1e0(lVar6);
        lVar6 = 0;
      }
    }
    return lVar6;
  }
  FUN_0040e090(param_4);
  uVar7 = FUN_0040e240(param_4);
  uVar8 = FUN_0040e240(param_4);
  lVar6 = FUN_0040e240(param_4);
  uVar9 = FUN_0040e240(param_4);
  uVar10 = FUN_0040e240(param_4);
  lVar11 = FUN_0040e240(param_4);
  if (lVar11 != 0) {
    lVar13 = param_1;
    if (((param_1 != 0) || (lVar13 = FUN_0040c260(), lVar13 != 0)) &&
       (iVar2 = FUN_00412c30(uVar7,param_2,param_3,param_4), iVar2 != 0)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar4 = FUN_0040cdc0(param_3,iVar2);
      } while (iVar4 == 0);
      if (iVar2 == 2) {
        iVar2 = FUN_004132c0(uVar9,uVar7,param_3);
        if ((iVar2 != 0) && (iVar2 = FUN_00410790(lVar6,param_3,3), iVar2 != 0)) {
          *(undefined4 *)(lVar6 + 0x10) = 0;
          iVar2 = FUN_00424be0(uVar8,uVar9,lVar6,param_3,param_4);
          if (((((iVar2 != 0) && (iVar2 = FUN_00413270(lVar11,uVar8,param_3,param_4), iVar2 != 0))
               && (iVar2 = FUN_00413180(uVar9,uVar9,lVar11,param_3,param_4), iVar2 != 0)) &&
              ((iVar2 = FUN_0040be30(uVar9,1), iVar2 != 0 &&
               (iVar2 = FUN_00413180(uVar10,uVar7,uVar8,param_3,param_4), iVar2 != 0)))) &&
             (iVar2 = FUN_00413180(uVar10,uVar10,uVar9,param_3,param_4), iVar2 != 0)) {
            lVar6 = FUN_0040c5d0(lVar13,uVar10);
joined_r0x0043e504:
            if (lVar6 != 0) {
LAB_0043e044:
              iVar2 = FUN_00413270(uVar10,lVar13,param_3,param_4);
              if (iVar2 != 0) {
                iVar2 = FUN_0040cc60(uVar10,uVar7);
                if (iVar2 == 0) goto LAB_0043e288;
                uVar7 = 0x6f;
                uVar8 = 0x158;
                goto LAB_0043e26c;
              }
            }
          }
        }
      }
      else if (iVar2 == 1) {
        iVar2 = FUN_00410790(lVar6,param_3,2);
        if (iVar2 != 0) {
          *(undefined4 *)(lVar6 + 0x10) = 0;
          iVar2 = FUN_0040bd20(lVar6,1);
          if ((iVar2 != 0) && (iVar2 = FUN_00424be0(lVar13,uVar7,lVar6,param_3,param_4), iVar2 != 0)
             ) goto LAB_0043e044;
        }
      }
      else {
        lVar12 = FUN_0040c5d0(lVar6,param_3);
        if (lVar12 != 0) {
          uVar14 = 2;
          *(undefined4 *)(lVar6 + 0x10) = 0;
          do {
            if (uVar14 < 0x16) {
LAB_0043e1e4:
              iVar4 = FUN_0040c6b0(lVar11,uVar14);
              if (iVar4 == 0) goto joined_r0x0043e250;
            }
            else {
              uVar3 = FUN_0040c070(param_3);
              iVar4 = FUN_00426dc0(lVar11,uVar3,0,0);
              if (iVar4 == 0) goto joined_r0x0043e250;
              iVar4 = FUN_0040cc00(lVar11,param_3);
              if (-1 < iVar4) {
                pcVar1 = (code *)PTR_FUN_043741b0;
                if (*(int *)(param_3 + 0x10) != 0) {
                  pcVar1 = (code *)PTR_FUN_043741b8;
                }
                iVar4 = (*pcVar1)(lVar11,lVar11,param_3);
                if (iVar4 == 0) goto joined_r0x0043e250;
              }
              iVar4 = FUN_0040c130(lVar11);
              if (iVar4 != 0) goto LAB_0043e1e4;
            }
            iVar4 = FUN_0043dbd0(lVar11,lVar6,param_4);
            if (iVar4 < -1) goto joined_r0x0043e250;
            if (iVar4 != 1) {
              if (iVar4 == -1) {
                iVar4 = FUN_00410790(lVar6,lVar6,iVar2);
                if ((iVar4 == 0) ||
                   (iVar4 = FUN_00424be0(lVar11,lVar11,lVar6,param_3,param_4), iVar4 == 0))
                goto joined_r0x0043e250;
                iVar4 = FUN_0040d220(lVar11);
                if (iVar4 == 0) {
                  iVar4 = FUN_004104e0(uVar9,lVar6);
                  if (iVar4 == 0) goto joined_r0x0043e250;
                  iVar4 = FUN_0040c130(uVar9);
                  if (iVar4 == 0) {
                    iVar4 = FUN_00424be0(uVar10,uVar7,uVar9,param_3,param_4);
                    if (iVar4 == 0) goto joined_r0x0043e250;
                    iVar4 = FUN_0040c130(uVar10);
                    if (iVar4 != 0) goto LAB_0043e380;
                  }
                  else {
                    iVar4 = FUN_00412c30(uVar9,uVar7,param_3,param_4);
                    if (iVar4 == 0) goto joined_r0x0043e250;
                    iVar4 = FUN_0040c130(uVar9);
                    if (iVar4 != 0) {
LAB_0043e380:
                      FUN_0040c6b0(lVar13,0);
                      goto LAB_0043e288;
                    }
                    iVar4 = FUN_0040c6b0(uVar10,1);
                    if (iVar4 == 0) goto joined_r0x0043e250;
                  }
                  iVar4 = FUN_00413270(uVar8,uVar10,param_3,param_4);
                  if ((iVar4 == 0) ||
                     (iVar4 = FUN_00413180(uVar8,uVar8,uVar7,param_3,param_4), iVar4 == 0))
                  goto joined_r0x0043e250;
                  iVar4 = FUN_00413180(uVar10,uVar10,uVar7,param_3,param_4);
                  goto joined_r0x0043e3dc;
                }
                uVar7 = 0xe2;
              }
              else {
                if (iVar4 != 0) break;
                uVar7 = 199;
              }
              FUN_004014b0(3,0x79,0x70,"external/openssl/crypto/bn/bn_sqrt.c",uVar7);
              goto joined_r0x0043e250;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x52);
          uVar7 = 0x71;
          uVar8 = 0xd3;
LAB_0043e26c:
          FUN_004014b0(3,0x79,uVar7,"external/openssl/crypto/bn/bn_sqrt.c",uVar8);
        }
      }
    }
joined_r0x0043e250:
    if (lVar13 != param_1) {
      FUN_0040c140(lVar13);
    }
  }
  lVar13 = 0;
LAB_0043e288:
  FUN_0040e1b0(param_4);
  return lVar13;
joined_r0x0043e3dc:
  if (iVar4 == 0) goto joined_r0x0043e250;
  iVar4 = FUN_0040d220(uVar8);
  if (iVar4 != 0) {
    lVar6 = FUN_0040c5d0(lVar13,uVar10);
    goto joined_r0x0043e504;
  }
  iVar4 = FUN_00413270(uVar9,uVar8,param_3,param_4);
  if (iVar4 == 0) goto joined_r0x0043e250;
  iVar4 = 2;
  while (iVar5 = FUN_0040d220(uVar9), iVar5 == 0) {
    if (iVar2 == iVar4) {
      uVar7 = 0x6f;
      uVar8 = 0x136;
      goto LAB_0043e26c;
    }
    iVar5 = FUN_00413180(uVar9,uVar9,uVar9,param_3,param_4);
    iVar4 = iVar4 + 1;
    if (iVar5 == 0) goto joined_r0x0043e250;
  }
  lVar6 = FUN_0040c5d0(uVar9,lVar11);
  if (lVar6 == 0) goto joined_r0x0043e250;
  for (iVar2 = iVar2 - iVar4; 0 < iVar2; iVar2 = iVar2 + -1) {
    iVar5 = FUN_00413270(uVar9,uVar9,param_3,param_4);
    if (iVar5 == 0) goto joined_r0x0043e250;
  }
  iVar2 = FUN_00413180(lVar11,uVar9,uVar9,param_3,param_4);
  if ((iVar2 == 0) || (iVar2 = FUN_00413180(uVar10,uVar10,uVar9,param_3,param_4), iVar2 == 0))
  goto joined_r0x0043e250;
  iVar2 = iVar4 + -1;
  iVar4 = FUN_00413180(uVar8,uVar8,lVar11,param_3,param_4);
  goto joined_r0x0043e3dc;
}


