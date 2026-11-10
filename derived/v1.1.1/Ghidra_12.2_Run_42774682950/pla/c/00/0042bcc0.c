/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042bcc0; name: FUN_0042bcc0
 */


/* WARNING: Removing unreachable block (ram,0x0042c0e4) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_0042bcc0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 *param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int local_290;
  long local_260 [32];
  long local_160 [32];
  
  if ((*(byte *)*param_6 & 1) == 0) {
    FUN_004014b0(3,0x76,0x66,"external/openssl/crypto/bn/bn_exp2.c",0x24);
    return 0;
  }
  iVar2 = FUN_0040c070(param_3);
  iVar3 = FUN_0040c070(param_5);
  if (iVar3 == 0 && iVar2 == 0) {
    uVar18 = FUN_0040c6b0(param_1,1);
    return uVar18;
  }
  iVar6 = iVar2;
  if (iVar2 <= iVar3) {
    iVar6 = iVar3;
  }
  FUN_0040e090(param_7);
  uVar9 = FUN_0040e240(param_7);
  uVar10 = FUN_0040e240(param_7);
  lVar11 = FUN_0040e240(param_7);
  local_160[0] = lVar11;
  lVar12 = FUN_0040e240(param_7);
  local_260[0] = lVar12;
  if (lVar12 == 0) {
    lVar13 = 0;
joined_r0x0042bdfc:
    uVar18 = 0;
joined_r0x0042bdfc:
    if (param_8 != 0) goto LAB_0042c304;
  }
  else {
    lVar13 = param_8;
    if (param_8 != 0) {
joined_r0x0042be30:
      if (iVar2 < 0x2a0) {
        if (0xef < iVar2) {
          uVar18 = 5;
          goto joined_r0x0042beb8;
        }
        if (iVar2 < 0x50) {
          uVar18 = 3;
          if (iVar2 < 0x18) {
            uVar18 = 1;
          }
          goto joined_r0x0042beb8;
        }
        uVar18 = 4;
        if (iVar3 < 0x2a0) goto LAB_0042be4c;
LAB_0042bdc0:
        uVar15 = 6;
        iVar2 = *(int *)(param_2 + 0x10);
joined_r0x0042bdc8:
        if (iVar2 != 0) goto LAB_0042bed4;
LAB_0042bdcc:
        iVar2 = FUN_0040cc00(param_2,param_6);
        if (-1 < iVar2) goto LAB_0042bed4;
LAB_0042bef4:
        iVar2 = FUN_0040c130(param_2);
        if (iVar2 != 0) {
LAB_0042bf00:
          FUN_0040c6b0(param_1,0);
          uVar18 = 1;
          goto joined_r0x0042bdfc;
        }
        iVar2 = FUN_0040d2f0(lVar11,param_2,lVar13,param_7);
        if (iVar2 != 0) {
          if (1 < uVar18) {
            iVar2 = FUN_0040d3e0(uVar9,lVar11,lVar11,lVar13,param_7);
            if (iVar2 == 0) goto LAB_0042c2f0;
            uVar17 = 1 << (ulong)(uVar18 - 1 & 0x1f);
            if (1 < (int)uVar17) {
              plVar16 = local_160;
              lVar11 = (ulong)uVar17 - 1;
              do {
                plVar16 = plVar16 + 1;
                lVar14 = FUN_0040e240(param_7);
                *plVar16 = lVar14;
                if ((lVar14 == 0) ||
                   (iVar2 = FUN_0040d3e0(lVar14,plVar16[-1],uVar9,lVar13,param_7), iVar2 == 0))
                goto LAB_0042c2f0;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
          }
          if (((*(int *)(param_4 + 0x10) == 0) && (iVar2 = FUN_0040cc00(param_4,param_6), iVar2 < 0)
              ) || (iVar2 = FUN_0040e5a0(0,lVar12,param_4,param_6,param_7), param_4 = lVar12,
                   iVar2 != 0)) {
            iVar2 = FUN_0040c130(param_4);
            if (iVar2 != 0) goto LAB_0042bf00;
            iVar2 = FUN_0040d2f0(lVar12,param_4,lVar13,param_7);
            if (iVar2 != 0) {
              if (1 < uVar15) {
                iVar2 = FUN_0040d3e0(uVar9,lVar12,lVar12,lVar13,param_7);
                if (iVar2 == 0) goto LAB_0042c2f0;
                uVar17 = 1 << (ulong)(uVar15 - 1 & 0x1f);
                if (1 < (int)uVar17) {
                  plVar16 = local_260;
                  lVar11 = (ulong)uVar17 - 1;
                  do {
                    plVar16 = plVar16 + 1;
                    lVar12 = FUN_0040e240(param_7);
                    *plVar16 = lVar12;
                    if ((lVar12 == 0) ||
                       (iVar2 = FUN_0040d3e0(lVar12,plVar16[-1],uVar9,lVar13,param_7), iVar2 == 0))
                    goto LAB_0042c2f0;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
              }
              uVar9 = FUN_0040bfc0();
              iVar2 = FUN_0040d2f0(uVar10,uVar9,lVar13,param_7);
              if (iVar2 != 0) {
                if (iVar6 < 1) {
LAB_0042c330:
                  iVar2 = FUN_0040d7d0(param_1,uVar10,lVar13,param_7);
                  uVar18 = (uint)(iVar2 != 0);
                  goto joined_r0x0042bdfc;
                }
                uVar19 = 0;
                local_290 = 0;
                uVar17 = 0;
                iVar2 = iVar6 - uVar18;
                iVar4 = 0;
                iVar3 = iVar6 - uVar15;
                bVar1 = true;
                do {
                  iVar5 = iVar6 + -1;
                  if (uVar17 == 0) {
                    iVar7 = FUN_0040cdc0(param_3,iVar5);
                    if (iVar7 == 0) {
                      uVar17 = 0;
                    }
                    else {
                      iVar7 = iVar2;
                      do {
                        local_290 = iVar7;
                        iVar8 = FUN_0040cdc0(param_3,local_290);
                        iVar7 = local_290 + 1;
                      } while (iVar8 == 0);
                      uVar17 = 1;
                      for (iVar7 = iVar6 + -2; local_290 + -1 < iVar7; iVar7 = iVar7 + -1) {
                        iVar8 = FUN_0040cdc0(param_3,iVar7);
                        uVar17 = (uint)(iVar8 != 0) | uVar17 << 1;
                      }
                    }
                  }
                  if (uVar19 == 0) {
                    iVar7 = FUN_0040cdc0(param_5,iVar5);
                    if (iVar7 == 0) {
                      uVar19 = 0;
                    }
                    else {
                      iVar7 = iVar3;
                      do {
                        iVar4 = iVar7;
                        iVar8 = FUN_0040cdc0(param_5,iVar4);
                        iVar7 = iVar4 + 1;
                      } while (iVar8 == 0);
                      uVar19 = 1;
                      for (iVar6 = iVar6 + -2; iVar4 + -1 < iVar6; iVar6 = iVar6 + -1) {
                        iVar7 = FUN_0040cdc0(param_5,iVar6);
                        uVar19 = (uint)(iVar7 != 0) | uVar19 << 1;
                      }
                    }
                  }
                  if ((uVar17 != 0) && (iVar5 == local_290)) {
                    iVar6 = FUN_0040d3e0(uVar10,uVar10,local_160[(int)uVar17 >> 1],lVar13,param_7);
                    uVar17 = 0;
                    bVar1 = false;
                    if (iVar6 == 0) goto joined_r0x0042bdfc;
                  }
                  if ((uVar19 != 0) && (iVar5 == iVar4)) {
                    iVar6 = FUN_0040d3e0(uVar10,uVar10,local_260[(int)uVar19 >> 1],lVar13,param_7);
                    uVar19 = 0;
                    bVar1 = false;
                    if (iVar6 == 0) {
                      uVar18 = 0;
                      goto joined_r0x0042bdfc;
                    }
                  }
                  iVar2 = iVar2 + -1;
                  iVar3 = iVar3 + -1;
                  if (iVar5 < 1) goto LAB_0042c330;
                  iVar6 = iVar5;
                } while ((bVar1) ||
                        (iVar5 = FUN_0040d3e0(uVar10,uVar10,uVar10,lVar13,param_7), iVar5 != 0));
              }
            }
          }
        }
      }
      else {
        uVar18 = 6;
joined_r0x0042beb8:
        if (0x29f < iVar3) goto LAB_0042bdc0;
LAB_0042be4c:
        if (iVar3 < 0xf0) {
          if (0x4f < iVar3) {
            uVar15 = 4;
            iVar2 = *(int *)(param_2 + 0x10);
            goto joined_r0x0042be5c;
          }
          uVar15 = 3;
          if (iVar3 < 0x18) {
            uVar15 = 1;
          }
          iVar2 = *(int *)(param_2 + 0x10);
          goto joined_r0x0042bdc8;
        }
        uVar15 = 5;
        iVar2 = *(int *)(param_2 + 0x10);
joined_r0x0042be5c:
        if (iVar2 == 0) goto LAB_0042bdcc;
LAB_0042bed4:
        iVar2 = FUN_0040e5a0(0,lVar11,param_2,param_6,param_7);
        param_2 = lVar11;
        if (iVar2 != 0) goto LAB_0042bef4;
      }
LAB_0042c2f0:
      uVar18 = 0;
      goto joined_r0x0042bdfc;
    }
    lVar13 = FUN_0040d8e0();
    if (lVar13 == 0) {
      lVar13 = 0;
      uVar18 = 0;
    }
    else {
      iVar4 = FUN_0040d9b0(lVar13,param_6,param_7);
      if (iVar4 != 0) goto joined_r0x0042be30;
      uVar18 = 0;
    }
  }
  FUN_0040d960(lVar13);
LAB_0042c304:
  FUN_0040e1b0(param_7);
  return uVar18;
}


