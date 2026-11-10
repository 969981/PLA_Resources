/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040e670; name: FUN_0040e670
 */


/* WARNING: Removing unreachable block (ram,0x0040e74c) */

undefined8 FUN_0040e670(long *param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulong *puVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  uint *puVar31;
  uint *puVar32;
  undefined8 uVar33;
  long lVar34;
  uint uVar35;
  int *piVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  ulong local_98;
  
  if (((int)param_4[1] < 1) || (*(int *)(*param_4 + (long)((int)param_4[1] + -1) * 4) == 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("divisor->top > 0 && divisor->d[divisor->top - 1] != 0",
                  "external/openssl/crypto/bn/bn_div.c",0x111,"nnopenssl_bn_div_fixed_top");
  }
  FUN_0040e090(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_0040e240(param_5);
  }
  puVar13 = (ulong *)FUN_0040e240(param_5);
  plVar14 = (long *)FUN_0040e240(param_5);
  puVar15 = (ulong *)FUN_0040e240(param_5);
  if ((puVar15 != (ulong *)0x0) && (lVar16 = FUN_0040c5d0(puVar15,param_4), lVar16 != 0)) {
    uVar4 = (uint)puVar15[1];
    uVar30 = *puVar15;
    iVar8 = FUN_0040bfd0(*(undefined4 *)(uVar30 + (long)(int)(uVar4 - 1) * 4));
    uVar6 = 0x20 - iVar8;
    if (0 < (int)uVar4) {
      if (uVar4 == 1) {
        lVar16 = 0;
        uVar23 = 0;
      }
      else {
        uVar9 = iVar8 % 0x20;
        uVar5 = -uVar9 | -uVar9 >> 8;
        lVar16 = 0;
        uVar23 = 0;
        do {
          puVar31 = (uint *)(uVar30 + lVar16 * 4);
          lVar16 = lVar16 + 2;
          uVar35 = *puVar31;
          uVar3 = puVar31[1];
          *puVar31 = uVar35 << (ulong)(uVar6 & 0x1f) | uVar23;
          puVar31[1] = uVar3 << (ulong)(uVar6 & 0x1f) | uVar35 >> (ulong)(uVar9 & 0x1f) & uVar5;
          uVar23 = uVar3 >> (ulong)(uVar9 & 0x1f) & uVar5;
        } while ((ulong)uVar4 - ((ulong)uVar4 & 1) != lVar16);
        if ((uVar4 & 1) == 0) goto LAB_0040e7c0;
      }
      *(uint *)(uVar30 + lVar16 * 4) =
           *(int *)(uVar30 + lVar16 * 4) << (ulong)(uVar6 & 0x1f) | uVar23;
    }
LAB_0040e7c0:
    *(undefined4 *)(puVar15 + 2) = 0;
    iVar8 = FUN_00410660(plVar14,param_3,uVar6);
    if (iVar8 != 0) {
      uVar4 = (uint)puVar15[1];
      uVar30 = (ulong)uVar4;
      iVar7 = (int)plVar14[1];
      iVar8 = iVar7;
      if (iVar7 <= (int)uVar4) {
        iVar8 = uVar4 + 1;
        lVar16 = FUN_0040c660(plVar14,iVar8);
        if (lVar16 == 0) goto LAB_0040eba0;
        memset((void *)(*plVar14 + (long)iVar7 * 4),0,
               -(ulong)((uint)(iVar8 - iVar7) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar8 - iVar7) << 2);
        *(int *)(plVar14 + 1) = iVar8;
      }
      iVar7 = iVar8 - uVar4;
      lVar16 = *plVar14;
      uVar23 = *(uint *)(*puVar15 + (long)(int)(uVar4 - 1) * 4);
      if (uVar4 - 1 == 0) {
        local_98 = 0;
      }
      else {
        local_98 = (ulong)*(uint *)(*puVar15 + (long)(int)(uVar4 - 2) * 4);
      }
      lVar17 = FUN_0040c660(param_1,iVar7);
      if (lVar17 != 0) {
        uVar5 = *(uint *)(param_3 + 0x10);
        uVar9 = *(uint *)(param_4 + 2);
        *(int *)(param_1 + 1) = iVar7;
        *(uint *)(param_1 + 2) = uVar9 ^ uVar5;
        lVar34 = *param_1;
        lVar17 = FUN_0040c660(puVar13);
        if (lVar17 != 0) {
          if (0 < iVar7) {
            puVar31 = (uint *)(lVar16 + (long)(iVar8 + -1) * 4);
            puVar32 = (uint *)(lVar16 + (long)iVar7 * 4);
            iVar8 = 0;
            piVar36 = (int *)(lVar34 + (long)iVar7 * 4);
            if ((int)uVar4 < 1) {
              do {
                uVar9 = 0xffffffff;
                uVar5 = puVar31[-1];
                if (*puVar31 != uVar23) {
                  if (puVar31 == puVar32) {
                    uVar35 = 0;
                  }
                  else {
                    uVar35 = puVar31[-2];
                  }
                  uVar9 = FUN_0040f180(*puVar31,uVar5,uVar23);
                  uVar30 = local_98 * uVar9;
                  if (CONCAT44(uVar5 - uVar9 * uVar23,uVar35) < uVar30) {
                    uVar5 = uVar5 + uVar23 * (1 - uVar9);
                    do {
                      uVar9 = uVar9 - 1;
                      if (uVar5 < uVar23) break;
                      uVar2 = CONCAT44(uVar5,uVar35);
                      uVar30 = uVar30 - local_98;
                      uVar5 = uVar5 + uVar23;
                    } while (uVar2 < uVar30);
                  }
                }
                uVar10 = FUN_0040ee50(*puVar13,*puVar15,uVar4,uVar9);
                uVar30 = *puVar13;
                puVar32 = puVar32 + -1;
                *(undefined4 *)(uVar30 + (long)(int)uVar4 * 4) = uVar10;
                iVar11 = FUN_0040f430(puVar32,puVar32,uVar30,uVar4 + 1);
                iVar12 = FUN_0040f2e0(puVar32,puVar32,*puVar13,uVar4);
                uVar5 = *puVar31;
                *puVar31 = uVar5 + iVar12;
                if (uVar5 + iVar12 != 0) goto LAB_0040ed34;
                iVar8 = iVar8 + 1;
                piVar36 = piVar36 + -1;
                *piVar36 = uVar9 - iVar11;
                puVar31 = puVar31 + -1;
              } while (iVar8 != iVar7);
            }
            else {
              uVar18 = uVar30 & 0xfffffff0;
              uVar2 = (uVar18 - 0x10 >> 4) + 1;
              uVar20 = uVar2 & 1;
              do {
                uVar9 = 0xffffffff;
                uVar5 = puVar31[-1];
                if (*puVar31 != uVar23) {
                  if (puVar31 == puVar32) {
                    uVar35 = 0;
                  }
                  else {
                    uVar35 = puVar31[-2];
                  }
                  uVar9 = FUN_0040f180(*puVar31,uVar5,uVar23);
                  uVar19 = local_98 * uVar9;
                  if (CONCAT44(uVar5 - uVar9 * uVar23,uVar35) < uVar19) {
                    uVar5 = uVar5 + uVar23 * (1 - uVar9);
                    do {
                      uVar9 = uVar9 - 1;
                      if (uVar5 < uVar23) break;
                      uVar21 = CONCAT44(uVar5,uVar35);
                      uVar19 = uVar19 - local_98;
                      uVar5 = uVar5 + uVar23;
                    } while (uVar21 < uVar19);
                  }
                }
                uVar10 = FUN_0040ee50(*puVar13,*puVar15,uVar30,uVar9);
                uVar19 = *puVar13;
                puVar32 = puVar32 + -1;
                *(undefined4 *)(uVar19 + (long)(int)uVar4 * 4) = uVar10;
                iVar11 = FUN_0040f430(puVar32,puVar32,uVar19,uVar4 + 1);
                uVar21 = *puVar15;
                uVar5 = -iVar11;
                uVar19 = *puVar13;
                if ((uVar4 < 0x10) ||
                   ((uVar19 < uVar21 + uVar30 * 4 && (uVar21 < uVar19 + uVar30 * 4)))) {
                  uVar24 = 0;
LAB_0040ea14:
                  uVar26 = ~uVar24;
                  uVar28 = uVar30 & 3;
                  if ((uVar4 & 3) != 0) {
                    do {
                      lVar16 = uVar24 * 4;
                      uVar24 = uVar24 + 1;
                      uVar28 = uVar28 - 1;
                      *(uint *)(uVar19 + lVar16) = *(uint *)(uVar21 + lVar16) & uVar5;
                    } while (uVar28 != 0);
                  }
                  if (2 < uVar26 + uVar30) {
                    lVar16 = uVar30 - uVar24;
                    puVar25 = (uint *)(uVar19 + uVar24 * 4 + 8);
                    puVar22 = (uint *)(uVar21 + uVar24 * 4 + 8);
                    do {
                      puVar25[-2] = puVar22[-2] & uVar5;
                      puVar25[-1] = puVar22[-1] & uVar5;
                      *puVar25 = *puVar22 & uVar5;
                      puVar1 = puVar22 + 1;
                      puVar22 = puVar22 + 4;
                      lVar16 = lVar16 + -4;
                      puVar25[1] = *puVar1 & uVar5;
                      puVar25 = puVar25 + 4;
                    } while (lVar16 != 0);
                  }
                }
                else {
                  bVar37 = (byte)uVar5;
                  bVar38 = (byte)(uVar5 >> 8);
                  bVar39 = (byte)(uVar5 >> 0x10);
                  bVar40 = (byte)(uVar5 >> 0x18);
                  lVar16 = 0;
                  if (uVar18 - 0x10 != 0) {
                    lVar16 = 0;
                    puVar27 = (undefined8 *)(uVar19 + 0x40);
                    puVar29 = (undefined8 *)(uVar21 + 0x40);
                    lVar17 = uVar20 - uVar2;
                    do {
                      uVar41 = puVar29[-7];
                      uVar33 = puVar29[-8];
                      uVar43 = puVar29[-5];
                      uVar42 = puVar29[-6];
                      lVar16 = lVar16 + 0x20;
                      lVar17 = lVar17 + 2;
                      uVar45 = puVar29[-3];
                      uVar44 = puVar29[-4];
                      uVar47 = puVar29[-1];
                      uVar46 = puVar29[-2];
                      puVar27[-7] = CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar41 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar41
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar41 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar41 >> 8) &
                                                                    bVar38,(byte)uVar41 & bVar37))))
                                                  )));
                      puVar27[-8] = CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar33 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar33
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar33 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar33 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar33 >> 8) &
                                                                    bVar38,(byte)uVar33 & bVar37))))
                                                  )));
                      puVar27[-5] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar43 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar43
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar43 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar38,(byte)uVar43 & bVar37))))
                                                  )));
                      puVar27[-6] = CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar42 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar42
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar42 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                                    bVar38,(byte)uVar42 & bVar37))))
                                                  )));
                      puVar27[-3] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar45 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar45
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar45 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar38,(byte)uVar45 & bVar37))))
                                                  )));
                      puVar27[-4] = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar44 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar44
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar44 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar38,(byte)uVar44 & bVar37))))
                                                  )));
                      puVar27[-1] = CONCAT17((byte)((ulong)uVar47 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar47 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar47 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar47
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar47 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar47 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar47 >> 8) &
                                                                    bVar38,(byte)uVar47 & bVar37))))
                                                  )));
                      puVar27[-2] = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar40,
                                             CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar39,
                                                      CONCAT15((byte)((ulong)uVar46 >> 0x28) &
                                                               bVar38,CONCAT14((byte)((ulong)uVar46
                                                                                     >> 0x20) &
                                                                               bVar37,CONCAT13((byte
                                                  )((ulong)uVar46 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) &
                                                                    bVar38,(byte)uVar46 & bVar37))))
                                                  )));
                      uVar41 = puVar29[1];
                      uVar33 = *puVar29;
                      uVar43 = puVar29[3];
                      uVar42 = puVar29[2];
                      uVar45 = puVar29[5];
                      uVar44 = puVar29[4];
                      uVar47 = puVar29[7];
                      uVar46 = puVar29[6];
                      puVar29 = puVar29 + 0x10;
                      puVar27[1] = CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar40,
                                            CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar39,
                                                     CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar38
                                                              ,CONCAT14((byte)((ulong)uVar41 >> 0x20
                                                                              ) & bVar37,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar41 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar41 >> 8) &
                                                                    bVar38,(byte)uVar41 & bVar37))))
                                                  )));
                      *puVar27 = CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar33 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar33 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar33 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar33 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar33 >> 8) &
                                                                    bVar38,(byte)uVar33 & bVar37))))
                                                  )));
                      puVar27[3] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar40,
                                            CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar39,
                                                     CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar38
                                                              ,CONCAT14((byte)((ulong)uVar43 >> 0x20
                                                                              ) & bVar37,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar43 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar38,(byte)uVar43 & bVar37))))
                                                  )));
                      puVar27[2] = CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar40,
                                            CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar39,
                                                     CONCAT15((byte)((ulong)uVar42 >> 0x28) & bVar38
                                                              ,CONCAT14((byte)((ulong)uVar42 >> 0x20
                                                                              ) & bVar37,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar42 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                                    bVar38,(byte)uVar42 & bVar37))))
                                                  )));
                      puVar27[5] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar40,
                                            CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar39,
                                                     CONCAT15((byte)((ulong)uVar45 >> 0x28) & bVar38
                                                              ,CONCAT14((byte)((ulong)uVar45 >> 0x20
                                                                              ) & bVar37,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar45 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar38,(byte)uVar45 & bVar37))))
                                                  )));
                      puVar27[4] = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar40,
                                            CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar39,
                                                     CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar38
                                                              ,CONCAT14((byte)((ulong)uVar44 >> 0x20
                                                                              ) & bVar37,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar44 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar38,(byte)uVar44 & bVar37))))
                                                  )));
                      puVar27[7] = CONCAT17((byte)((ulong)uVar47 >> 0x38) & bVar40,
                                            CONCAT16((byte)((ulong)uVar47 >> 0x30) & bVar39,
                                                     CONCAT15((byte)((ulong)uVar47 >> 0x28) & bVar38
                                                              ,CONCAT14((byte)((ulong)uVar47 >> 0x20
                                                                              ) & bVar37,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar47 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar47 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar47 >> 8) &
                                                                    bVar38,(byte)uVar47 & bVar37))))
                                                  )));
                      puVar27[6] = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar40,
                                            CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar39,
                                                     CONCAT15((byte)((ulong)uVar46 >> 0x28) & bVar38
                                                              ,CONCAT14((byte)((ulong)uVar46 >> 0x20
                                                                              ) & bVar37,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar46 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) &
                                                                    bVar38,(byte)uVar46 & bVar37))))
                                                  )));
                      puVar27 = puVar27 + 0x10;
                    } while (lVar17 != 0);
                  }
                  if (uVar20 != 0) {
                    puVar27 = (undefined8 *)(uVar21 + lVar16 * 4);
                    puVar29 = (undefined8 *)(uVar19 + lVar16 * 4);
                    uVar41 = puVar27[5];
                    uVar33 = puVar27[4];
                    uVar43 = puVar27[7];
                    uVar42 = puVar27[6];
                    uVar45 = puVar27[1];
                    uVar44 = *puVar27;
                    uVar47 = puVar27[3];
                    uVar46 = puVar27[2];
                    puVar29[1] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar45 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar45 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar45 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar38,(byte)uVar45 & bVar37))))
                                                  )));
                    *puVar29 = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar40,
                                        CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar39,
                                                 CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar38,
                                                          CONCAT14((byte)((ulong)uVar44 >> 0x20) &
                                                                   bVar37,CONCAT13((byte)((ulong)
                                                  uVar44 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar38,(byte)uVar44 & bVar37))))
                                                  )));
                    puVar29[3] = CONCAT17((byte)((ulong)uVar47 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar47 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar47 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar47 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar47 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar47 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar47 >> 8) &
                                                                    bVar38,(byte)uVar47 & bVar37))))
                                                  )));
                    puVar29[2] = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar46 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar46 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar46 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) &
                                                                    bVar38,(byte)uVar46 & bVar37))))
                                                  )));
                    puVar29[5] = CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar41 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar41 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar41 >> 8) &
                                                                    bVar38,(byte)uVar41 & bVar37))))
                                                  )));
                    puVar29[4] = CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar33 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar33 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar33 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar33 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar33 >> 8) &
                                                                    bVar38,(byte)uVar33 & bVar37))))
                                                  )));
                    puVar29[7] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar43 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar43 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar38,(byte)uVar43 & bVar37))))
                                                  )));
                    puVar29[6] = CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar40,
                                          CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar39,
                                                   CONCAT15((byte)((ulong)uVar42 >> 0x28) & bVar38,
                                                            CONCAT14((byte)((ulong)uVar42 >> 0x20) &
                                                                     bVar37,CONCAT13((byte)((ulong)
                                                  uVar42 >> 0x18) & bVar40,
                                                  CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar39,
                                                           CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                                    bVar38,(byte)uVar42 & bVar37))))
                                                  )));
                  }
                  uVar24 = uVar18;
                  if (uVar18 != uVar30) goto LAB_0040ea14;
                }
                iVar12 = FUN_0040f2e0(puVar32,puVar32,uVar19,uVar4);
                uVar5 = *puVar31;
                *puVar31 = uVar5 + iVar12;
                if (uVar5 + iVar12 != 0) {
LAB_0040ed34:
                    /* WARNING: Subroutine does not return */
                  __assert_fail("(*wnumtop) == 0","external/openssl/crypto/bn/bn_div.c",0x1b7,
                                "nnopenssl_bn_div_fixed_top");
                }
                iVar8 = iVar8 + 1;
                piVar36 = piVar36 + -1;
                *piVar36 = uVar9 - iVar11;
                puVar31 = puVar31 + -1;
              } while (iVar8 != iVar7);
            }
          }
          *(undefined4 *)(plVar14 + 2) = *(undefined4 *)(param_3 + 0x10);
          *(uint *)(plVar14 + 1) = uVar4;
          if (param_2 != 0) {
            FUN_00410a00(param_2,plVar14,uVar6);
          }
          uVar33 = 1;
          goto LAB_0040eba4;
        }
      }
    }
  }
LAB_0040eba0:
  uVar33 = 0;
LAB_0040eba4:
  FUN_0040e1b0(param_5);
  return uVar33;
}


