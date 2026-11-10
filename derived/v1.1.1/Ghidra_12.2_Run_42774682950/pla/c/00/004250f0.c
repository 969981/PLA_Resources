/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004250f0; name: FUN_004250f0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_004250f0(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,long param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  int *piVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  uint local_164;
  long local_160 [32];
  
  iVar2 = FUN_0040c1d0(param_3,4);
  if (((iVar2 != 0) || (iVar2 = FUN_0040c1d0(param_2,4), iVar2 != 0)) ||
     (iVar2 = FUN_0040c1d0(param_4,4), iVar2 != 0)) {
    uVar3 = FUN_00425b80(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar3;
  }
  iVar2 = FUN_0040d2b0(param_4);
  if (iVar2 == 0) {
    FUN_004014b0(3,0x6d,0x66,"external/openssl/crypto/bn/bn_exp.c",0x13e);
    return 0;
  }
  iVar2 = FUN_0040c070(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_0040d1e0(param_4,1);
    if (iVar2 == 0) {
      uVar3 = FUN_0040c6b0(param_1,1);
      return uVar3;
    }
    FUN_0040c6b0(param_1,0);
    return 1;
  }
  FUN_0040e090(param_5);
  uVar6 = FUN_0040e240(param_5);
  puVar7 = (undefined8 *)FUN_0040e240(param_5);
  lVar8 = FUN_0040e240(param_5);
  local_160[0] = lVar8;
  if (lVar8 == 0) {
    uVar3 = 0;
    lVar9 = 0;
joined_r0x0042529c:
    if (param_6 != 0) goto LAB_004256d8;
  }
  else {
    lVar9 = param_6;
    if ((param_6 != 0) ||
       ((lVar9 = FUN_0040d8e0(), lVar9 != 0 &&
        (iVar4 = FUN_0040d9b0(lVar9,param_4,param_5), iVar4 != 0)))) {
      if ((((*(int *)(param_2 + 0x10) == 0) && (iVar4 = FUN_0040cc00(param_2,param_4), iVar4 < 0))
          || (iVar4 = FUN_00412c30(lVar8,param_2,param_4,param_5), param_2 = lVar8, iVar4 != 0)) &&
         (iVar4 = FUN_0040d8d0(lVar8,param_2,lVar9,param_5), iVar4 != 0)) {
        if (iVar2 < 0x2a0) {
          if (0xef < iVar2) {
            local_164 = 5;
            goto LAB_00425308;
          }
          if (0x4f < iVar2) {
            local_164 = 4;
            goto LAB_00425308;
          }
          if (0x17 < iVar2) {
            local_164 = 3;
            goto LAB_00425308;
          }
          local_164 = 1;
        }
        else {
          local_164 = 6;
LAB_00425308:
          iVar4 = FUN_0040d410(uVar6,lVar8,lVar8,lVar9,param_5);
          if (iVar4 == 0) goto LAB_004256c8;
          uVar3 = 1 << (ulong)(local_164 - 1 & 0x1f);
          if (1 < (int)uVar3) {
            plVar24 = local_160;
            lVar8 = (ulong)uVar3 - 1;
            do {
              plVar24 = plVar24 + 1;
              lVar10 = FUN_0040e240(param_5);
              *plVar24 = lVar10;
              if ((lVar10 == 0) ||
                 (iVar4 = FUN_0040d410(lVar10,plVar24[-1],uVar6,lVar9,param_5), iVar4 == 0))
              goto LAB_004256c8;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
        }
        uVar3 = *(uint *)(param_4 + 1);
        uVar22 = (ulong)uVar3;
        if (*(int *)(*param_4 + (long)(int)(uVar3 - 1) * 4) < 0) {
          lVar8 = FUN_0040c660(puVar7,uVar3);
          if (lVar8 != 0) {
            piVar11 = (int *)*param_4;
            piVar13 = (int *)*puVar7;
            *piVar13 = -*piVar11;
            if (1 < (int)uVar3) {
              uVar16 = uVar22 - 1;
              if ((uVar16 < 0x10) ||
                 ((piVar13 + 1 < piVar11 + uVar22 && (piVar11 + 1 < piVar13 + uVar22)))) {
                uVar15 = 1;
                uVar16 = 0xfffffffffffffffe;
              }
              else {
                uVar17 = uVar16 & 0xfffffffffffffff0;
                uVar15 = uVar17 | 1;
                piVar18 = piVar13 + 9;
                piVar19 = piVar11 + 9;
                uVar20 = uVar17;
                do {
                  uVar25 = *(undefined8 *)(piVar19 + -6);
                  uVar6 = *(undefined8 *)(piVar19 + -8);
                  uVar27 = *(undefined8 *)(piVar19 + -2);
                  uVar26 = *(undefined8 *)(piVar19 + -4);
                  uVar20 = uVar20 - 0x10;
                  uVar29 = *(undefined8 *)(piVar19 + 2);
                  uVar28 = *(undefined8 *)piVar19;
                  uVar31 = *(undefined8 *)(piVar19 + 6);
                  uVar30 = *(undefined8 *)(piVar19 + 4);
                  *(ulong *)(piVar18 + -6) =
                       CONCAT17(~(byte)((ulong)uVar25 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar25 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar25 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar25 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar25 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar25
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar25 >> 8),~(byte)uVar25)))))));
                  *(ulong *)(piVar18 + -8) =
                       CONCAT17(~(byte)((ulong)uVar6 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar6 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar6 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar6 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar6 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar6 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar6 >> 8),~(byte)uVar6)))))));
                  *(ulong *)(piVar18 + -2) =
                       CONCAT17(~(byte)((ulong)uVar27 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar27 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar27 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar27 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar27
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar27 >> 8),~(byte)uVar27)))))));
                  *(ulong *)(piVar18 + -4) =
                       CONCAT17(~(byte)((ulong)uVar26 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar26 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar26 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar26 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar26 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar26
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar26 >> 8),~(byte)uVar26)))))));
                  *(ulong *)(piVar18 + 2) =
                       CONCAT17(~(byte)((ulong)uVar29 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar29 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar29 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar29 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar29 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar29
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar29 >> 8),~(byte)uVar29)))))));
                  *(ulong *)piVar18 =
                       CONCAT17(~(byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar28
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar28 >> 8),~(byte)uVar28)))))));
                  *(ulong *)(piVar18 + 6) =
                       CONCAT17(~(byte)((ulong)uVar31 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar31 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar31 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar31 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar31 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar31
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar31 >> 8),~(byte)uVar31)))))));
                  *(ulong *)(piVar18 + 4) =
                       CONCAT17(~(byte)((ulong)uVar30 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar30 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar30 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar30 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar30 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar30
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar30 >> 8),~(byte)uVar30)))))));
                  piVar18 = piVar18 + 0x10;
                  piVar19 = piVar19 + 0x10;
                } while (uVar20 != 0);
                if (uVar16 == uVar17) goto LAB_004254d0;
                uVar16 = ~uVar15;
              }
              if ((uVar3 & 1) == 0) {
                piVar13[uVar15] = ~piVar11[uVar15];
                uVar15 = uVar15 + 1;
              }
              if (uVar16 + uVar22 != 0) {
                lVar8 = uVar22 - uVar15;
                puVar12 = (uint *)(piVar11 + uVar15 + 1);
                puVar14 = (uint *)(piVar13 + uVar15 + 1);
                do {
                  puVar14[-1] = ~puVar12[-1];
                  lVar8 = lVar8 + -2;
                  *puVar14 = ~*puVar12;
                  puVar12 = puVar12 + 2;
                  puVar14 = puVar14 + 2;
                } while (lVar8 != 0);
              }
            }
LAB_004254d0:
            *(uint *)(puVar7 + 1) = uVar3;
            goto LAB_004254d4;
          }
        }
        else {
          uVar6 = FUN_0040bfc0();
          iVar4 = FUN_0040d8d0(puVar7,uVar6,lVar9,param_5);
          if (iVar4 != 0) {
LAB_004254d4:
            lVar8 = local_160[0];
            iVar2 = iVar2 + -1;
            if (local_164 < 2) {
              bVar1 = true;
              do {
                iVar4 = FUN_0040cdc0(param_3,iVar2);
                if (iVar4 == 0) {
                  if (bVar1) {
                    do {
                      if (iVar2 == 0) goto LAB_004256e4;
                      iVar2 = iVar2 + -1;
                      iVar4 = FUN_0040cdc0(param_3,iVar2);
                    } while (iVar4 == 0);
                  }
                  else {
                    do {
                      iVar4 = FUN_0040d410(puVar7,puVar7,puVar7,lVar9,param_5);
                      if (iVar4 == 0) goto LAB_004256c8;
                      if (iVar2 == 0) goto LAB_004256e4;
                      iVar2 = iVar2 + -1;
                      iVar4 = FUN_0040cdc0(param_3,iVar2);
                    } while (iVar4 == 0);
                  }
                }
                if (((!bVar1) &&
                    (iVar4 = FUN_0040d410(puVar7,puVar7,puVar7,lVar9,param_5), iVar4 == 0)) ||
                   (iVar4 = FUN_0040d410(puVar7,puVar7,lVar8,lVar9,param_5), iVar4 == 0))
                goto LAB_004256c8;
                bVar1 = false;
                iVar2 = iVar2 + -1;
              } while (-1 < iVar2);
            }
            else {
              bVar1 = true;
              do {
                iVar4 = FUN_0040cdc0(param_3,iVar2);
                if (iVar4 == 0) {
                  if (bVar1) {
                    do {
                      if (iVar2 == 0) goto LAB_004256e4;
                      iVar2 = iVar2 + -1;
                      iVar4 = FUN_0040cdc0(param_3,iVar2);
                    } while (iVar4 == 0);
                  }
                  else {
                    do {
                      iVar4 = FUN_0040d410(puVar7,puVar7,puVar7,lVar9,param_5);
                      if (iVar4 == 0) goto LAB_004256c8;
                      if (iVar2 == 0) goto LAB_004256e4;
                      iVar2 = iVar2 + -1;
                      iVar4 = FUN_0040cdc0(param_3,iVar2);
                    } while (iVar4 == 0);
                  }
                }
                uVar21 = 0;
                uVar23 = 1;
                uVar3 = 1;
                iVar4 = iVar2;
                do {
                  iVar4 = iVar4 + -1;
                  if (iVar4 < 0) break;
                  iVar5 = FUN_0040cdc0(param_3,iVar4);
                  if (iVar5 != 0) {
                    uVar3 = uVar3 << (ulong)(uVar23 - uVar21 & 0x1f) | 1;
                    uVar21 = uVar23;
                  }
                  uVar23 = uVar23 + 1;
                } while (local_164 != uVar23);
                if ((!bVar1) && (-1 < (int)uVar21)) {
                  iVar4 = uVar21 + 1;
                  do {
                    iVar5 = FUN_0040d410(puVar7,puVar7,puVar7,lVar9,param_5);
                    if (iVar5 == 0) goto LAB_004256c8;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
                iVar4 = FUN_0040d410(puVar7,puVar7,local_160[(int)uVar3 >> 1],lVar9,param_5);
                if (iVar4 == 0) goto LAB_004256c8;
                bVar1 = false;
                iVar2 = iVar2 + ~uVar21;
              } while (-1 < iVar2);
            }
LAB_004256e4:
            iVar2 = FUN_0040d7d0(param_1,puVar7,lVar9,param_5);
            uVar3 = (uint)(iVar2 != 0);
            goto joined_r0x0042529c;
          }
        }
      }
LAB_004256c8:
      uVar3 = 0;
      goto joined_r0x0042529c;
    }
    uVar3 = 0;
  }
  FUN_0040d960(lVar9);
LAB_004256d8:
  FUN_0040e1b0(param_5);
  return uVar3;
}


