/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d4e0; name: FUN_0040d4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0040d4e0(ulong *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  int iVar36;
  int iVar38;
  undefined8 uVar37;
  int iVar39;
  int iVar41;
  undefined8 uVar40;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(uint *)(param_3 + 0x28);
  uVar14 = (ulong)uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  lVar19 = (long)(int)uVar2;
  uVar18 = lVar19 * 2;
  lVar5 = FUN_0040c660(param_2,uVar18 & 0xffffffff);
  if (lVar5 == 0) {
    return 0;
  }
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  if ((int)uVar2 < 1) {
    uVar20 = 0;
    *(int *)(param_2 + 1) = (int)uVar18;
    lVar5 = FUN_0040c660(param_1,uVar2);
    if (lVar5 == 0) {
      return 0;
    }
    goto LAB_0040d69c;
  }
  piVar17 = (int *)*param_2;
  uVar15 = uVar18;
  if ((long)uVar18 < 2) {
    uVar15 = 1;
  }
  iVar4 = (int)param_2[1];
  if (uVar15 < 0x10) {
    uVar6 = 0;
LAB_0040d604:
    do {
      uVar15 = uVar6 + 1;
      piVar17[uVar6] = piVar17[uVar6] & (int)uVar6 - iVar4 >> 0x1f;
      uVar6 = uVar15;
    } while ((long)uVar15 < (long)uVar18);
  }
  else {
    uVar6 = uVar15 & 0x7ffffffffffffff0;
    piVar9 = piVar17 + 8;
    uVar7 = uVar6;
    uVar31 = _DAT_03889d70;
    uVar32 = _UNK_03889d78;
    do {
      iVar36 = (int)uVar31 - iVar4;
      iVar3 = (int)((ulong)uVar31 >> 0x20);
      iVar38 = iVar3 - iVar4;
      iVar39 = (int)uVar32 - iVar4;
      iVar30 = (int)((ulong)uVar32 >> 0x20);
      iVar41 = iVar30 - iVar4;
      uVar34 = *(undefined8 *)(piVar9 + -6);
      uVar33 = *(undefined8 *)(piVar9 + -8);
      uVar37 = *(undefined8 *)(piVar9 + -2);
      uVar35 = *(undefined8 *)(piVar9 + -4);
      bVar22 = (byte)(iVar36 >> 0x1f);
      bVar23 = (byte)(iVar38 >> 0x1f);
      bVar24 = (byte)(iVar39 >> 0x1f);
      bVar25 = (byte)(iVar41 >> 0x1f);
      uVar31 = CONCAT44(iVar3 + 0x10,(int)uVar31 + 0x10);
      uVar32 = CONCAT44(iVar30 + 0x10,(int)uVar32 + 0x10);
      uVar42 = *(undefined8 *)(piVar9 + 2);
      uVar40 = *(undefined8 *)piVar9;
      uVar44 = *(undefined8 *)(piVar9 + 6);
      uVar43 = *(undefined8 *)(piVar9 + 4);
      *(ulong *)(piVar9 + -6) =
           CONCAT17((byte)((ulong)uVar34 >> 0x38) & bVar25,
                    CONCAT16((byte)((ulong)uVar34 >> 0x30) & bVar25,
                             CONCAT15((byte)((ulong)uVar34 >> 0x28) & bVar25,
                                      CONCAT14((byte)((ulong)uVar34 >> 0x20) & bVar25,
                                               CONCAT13((byte)((ulong)uVar34 >> 0x18) & bVar24,
                                                        CONCAT12((byte)((ulong)uVar34 >> 0x10) &
                                                                 bVar24,CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) & bVar24,(byte)uVar34 & bVar24)))))))
      ;
      *(ulong *)(piVar9 + -8) =
           CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar23,
                    CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar23,
                             CONCAT15((byte)((ulong)uVar33 >> 0x28) & bVar23,
                                      CONCAT14((byte)((ulong)uVar33 >> 0x20) & bVar23,
                                               CONCAT13((byte)((ulong)uVar33 >> 0x18) & bVar22,
                                                        CONCAT12((byte)((ulong)uVar33 >> 0x10) &
                                                                 bVar22,CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) & bVar22,(byte)uVar33 & bVar22)))))))
      ;
      bVar22 = (byte)(iVar36 + 4 >> 0x1f);
      bVar23 = (byte)(iVar38 + 4 >> 0x1f);
      bVar24 = (byte)(iVar39 + 4 >> 0x1f);
      bVar25 = (byte)(iVar41 + 4 >> 0x1f);
      *(ulong *)(piVar9 + -2) =
           CONCAT17((byte)((ulong)uVar37 >> 0x38) & bVar25,
                    CONCAT16((byte)((ulong)uVar37 >> 0x30) & bVar25,
                             CONCAT15((byte)((ulong)uVar37 >> 0x28) & bVar25,
                                      CONCAT14((byte)((ulong)uVar37 >> 0x20) & bVar25,
                                               CONCAT13((byte)((ulong)uVar37 >> 0x18) & bVar24,
                                                        CONCAT12((byte)((ulong)uVar37 >> 0x10) &
                                                                 bVar24,CONCAT11((byte)((ulong)
                                                  uVar37 >> 8) & bVar24,(byte)uVar37 & bVar24)))))))
      ;
      *(ulong *)(piVar9 + -4) =
           CONCAT17((byte)((ulong)uVar35 >> 0x38) & bVar23,
                    CONCAT16((byte)((ulong)uVar35 >> 0x30) & bVar23,
                             CONCAT15((byte)((ulong)uVar35 >> 0x28) & bVar23,
                                      CONCAT14((byte)((ulong)uVar35 >> 0x20) & bVar23,
                                               CONCAT13((byte)((ulong)uVar35 >> 0x18) & bVar22,
                                                        CONCAT12((byte)((ulong)uVar35 >> 0x10) &
                                                                 bVar22,CONCAT11((byte)((ulong)
                                                  uVar35 >> 8) & bVar22,(byte)uVar35 & bVar22)))))))
      ;
      bVar26 = (byte)(iVar36 + 8 >> 0x1f);
      bVar27 = (byte)(iVar38 + 8 >> 0x1f);
      bVar28 = (byte)(iVar39 + 8 >> 0x1f);
      bVar29 = (byte)(iVar41 + 8 >> 0x1f);
      bVar22 = (byte)(iVar36 + 0xc >> 0x1f);
      bVar23 = (byte)(iVar38 + 0xc >> 0x1f);
      bVar24 = (byte)(iVar39 + 0xc >> 0x1f);
      bVar25 = (byte)(iVar41 + 0xc >> 0x1f);
      uVar7 = uVar7 - 0x10;
      *(ulong *)(piVar9 + 2) =
           CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar29,
                    CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar29,
                             CONCAT15((byte)((ulong)uVar42 >> 0x28) & bVar29,
                                      CONCAT14((byte)((ulong)uVar42 >> 0x20) & bVar29,
                                               CONCAT13((byte)((ulong)uVar42 >> 0x18) & bVar28,
                                                        CONCAT12((byte)((ulong)uVar42 >> 0x10) &
                                                                 bVar28,CONCAT11((byte)((ulong)
                                                  uVar42 >> 8) & bVar28,(byte)uVar42 & bVar28)))))))
      ;
      *(ulong *)piVar9 =
           CONCAT17((byte)((ulong)uVar40 >> 0x38) & bVar27,
                    CONCAT16((byte)((ulong)uVar40 >> 0x30) & bVar27,
                             CONCAT15((byte)((ulong)uVar40 >> 0x28) & bVar27,
                                      CONCAT14((byte)((ulong)uVar40 >> 0x20) & bVar27,
                                               CONCAT13((byte)((ulong)uVar40 >> 0x18) & bVar26,
                                                        CONCAT12((byte)((ulong)uVar40 >> 0x10) &
                                                                 bVar26,CONCAT11((byte)((ulong)
                                                  uVar40 >> 8) & bVar26,(byte)uVar40 & bVar26)))))))
      ;
      *(ulong *)(piVar9 + 6) =
           CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar25,
                    CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar25,
                             CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar25,
                                      CONCAT14((byte)((ulong)uVar44 >> 0x20) & bVar25,
                                               CONCAT13((byte)((ulong)uVar44 >> 0x18) & bVar24,
                                                        CONCAT12((byte)((ulong)uVar44 >> 0x10) &
                                                                 bVar24,CONCAT11((byte)((ulong)
                                                  uVar44 >> 8) & bVar24,(byte)uVar44 & bVar24)))))))
      ;
      *(ulong *)(piVar9 + 4) =
           CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar23,
                    CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar23,
                             CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar23,
                                      CONCAT14((byte)((ulong)uVar43 >> 0x20) & bVar23,
                                               CONCAT13((byte)((ulong)uVar43 >> 0x18) & bVar22,
                                                        CONCAT12((byte)((ulong)uVar43 >> 0x10) &
                                                                 bVar22,CONCAT11((byte)((ulong)
                                                  uVar43 >> 8) & bVar22,(byte)uVar43 & bVar22)))))))
      ;
      piVar9 = piVar9 + 0x10;
    } while (uVar7 != 0);
    if (uVar15 != uVar6) goto LAB_0040d604;
  }
  *(int *)(param_2 + 1) = (int)uVar18;
  if ((int)uVar2 < 1) {
    uVar20 = 0;
    lVar5 = FUN_0040c660(param_1,uVar2);
    if (lVar5 == 0) {
      return 0;
    }
  }
  else {
    iVar4 = *(int *)(param_3 + 0x50);
    uVar20 = 0;
    uVar21 = uVar2;
    do {
      iVar3 = FUN_0040ed60(piVar17,uVar16,uVar2,*piVar17 * iVar4);
      uVar1 = iVar3 + uVar20 + piVar17[lVar19];
      uVar20 = (uVar20 | iVar3 + uVar20 != 0) & (uint)(uVar1 <= (uint)piVar17[lVar19]);
      piVar17[lVar19] = uVar1;
      piVar17 = piVar17 + 1;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
    lVar5 = FUN_0040c660(param_1,uVar2);
    if (lVar5 == 0) {
      return 0;
    }
  }
LAB_0040d69c:
  *(uint *)(param_1 + 1) = uVar2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  lVar5 = *param_2;
  uVar15 = *param_1;
  uVar18 = lVar5 + lVar19 * 4;
  iVar4 = FUN_0040f430(uVar15,uVar18,uVar16,uVar2);
  if (0 < (int)uVar2) {
    uVar20 = uVar20 - iVar4;
    uVar21 = ~uVar20;
    if ((uVar2 < 8) || ((uVar15 < lVar5 + (lVar19 + uVar14) * 4 && (uVar18 < uVar15 + uVar14 * 4))))
    {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar14 & 0xfffffff8;
      puVar11 = (undefined8 *)(uVar18 + 0x10);
      puVar13 = (undefined8 *)(uVar15 + 0x10);
      uVar18 = uVar7;
      do {
        uVar31 = puVar11[-1];
        uVar16 = puVar11[-2];
        uVar33 = puVar11[1];
        uVar32 = *puVar11;
        bVar22 = (byte)uVar20;
        bVar23 = (byte)(uVar20 >> 8);
        bVar24 = (byte)(uVar20 >> 0x10);
        bVar25 = (byte)(uVar20 >> 0x18);
        uVar18 = uVar18 - 8;
        uVar35 = puVar13[-1];
        uVar34 = puVar13[-2];
        uVar40 = puVar13[1];
        uVar37 = *puVar13;
        bVar26 = (byte)uVar21;
        bVar27 = (byte)(uVar21 >> 8);
        bVar28 = (byte)(uVar21 >> 0x10);
        bVar29 = (byte)(uVar21 >> 0x18);
        puVar13[-1] = CONCAT17((byte)((ulong)uVar35 >> 0x38) & bVar29 |
                               (byte)((ulong)uVar31 >> 0x38) & bVar25,
                               CONCAT16((byte)((ulong)uVar35 >> 0x30) & bVar28 |
                                        (byte)((ulong)uVar31 >> 0x30) & bVar24,
                                        CONCAT15((byte)((ulong)uVar35 >> 0x28) & bVar27 |
                                                 (byte)((ulong)uVar31 >> 0x28) & bVar23,
                                                 CONCAT14((byte)((ulong)uVar35 >> 0x20) & bVar26 |
                                                          (byte)((ulong)uVar31 >> 0x20) & bVar22,
                                                          CONCAT13((byte)((ulong)uVar35 >> 0x18) &
                                                                   bVar29 | (byte)((ulong)uVar31 >>
                                                                                  0x18) & bVar25,
                                                                   CONCAT12((byte)((ulong)uVar35 >>
                                                                                  0x10) & bVar28 |
                                                                            (byte)((ulong)uVar31 >>
                                                                                  0x10) & bVar24,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar35 >> 8) & bVar27 |
                                                  (byte)((ulong)uVar31 >> 8) & bVar23,
                                                  (byte)uVar35 & bVar26 | (byte)uVar31 & bVar22)))))
                                       ));
        puVar13[-2] = CONCAT17((byte)((ulong)uVar34 >> 0x38) & bVar29 |
                               (byte)((ulong)uVar16 >> 0x38) & bVar25,
                               CONCAT16((byte)((ulong)uVar34 >> 0x30) & bVar28 |
                                        (byte)((ulong)uVar16 >> 0x30) & bVar24,
                                        CONCAT15((byte)((ulong)uVar34 >> 0x28) & bVar27 |
                                                 (byte)((ulong)uVar16 >> 0x28) & bVar23,
                                                 CONCAT14((byte)((ulong)uVar34 >> 0x20) & bVar26 |
                                                          (byte)((ulong)uVar16 >> 0x20) & bVar22,
                                                          CONCAT13((byte)((ulong)uVar34 >> 0x18) &
                                                                   bVar29 | (byte)((ulong)uVar16 >>
                                                                                  0x18) & bVar25,
                                                                   CONCAT12((byte)((ulong)uVar34 >>
                                                                                  0x10) & bVar28 |
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10) & bVar24,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) & bVar27 |
                                                  (byte)((ulong)uVar16 >> 8) & bVar23,
                                                  (byte)uVar34 & bVar26 | (byte)uVar16 & bVar22)))))
                                       ));
        puVar13[1] = CONCAT17((byte)((ulong)uVar40 >> 0x38) & bVar29 |
                              (byte)((ulong)uVar33 >> 0x38) & bVar25,
                              CONCAT16((byte)((ulong)uVar40 >> 0x30) & bVar28 |
                                       (byte)((ulong)uVar33 >> 0x30) & bVar24,
                                       CONCAT15((byte)((ulong)uVar40 >> 0x28) & bVar27 |
                                                (byte)((ulong)uVar33 >> 0x28) & bVar23,
                                                CONCAT14((byte)((ulong)uVar40 >> 0x20) & bVar26 |
                                                         (byte)((ulong)uVar33 >> 0x20) & bVar22,
                                                         CONCAT13((byte)((ulong)uVar40 >> 0x18) &
                                                                  bVar29 | (byte)((ulong)uVar33 >>
                                                                                 0x18) & bVar25,
                                                                  CONCAT12((byte)((ulong)uVar40 >>
                                                                                 0x10) & bVar28 |
                                                                           (byte)((ulong)uVar33 >>
                                                                                 0x10) & bVar24,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar40 >> 8) & bVar27 |
                                                  (byte)((ulong)uVar33 >> 8) & bVar23,
                                                  (byte)uVar40 & bVar26 | (byte)uVar33 & bVar22)))))
                                      ));
        *puVar13 = CONCAT17((byte)((ulong)uVar37 >> 0x38) & bVar29 |
                            (byte)((ulong)uVar32 >> 0x38) & bVar25,
                            CONCAT16((byte)((ulong)uVar37 >> 0x30) & bVar28 |
                                     (byte)((ulong)uVar32 >> 0x30) & bVar24,
                                     CONCAT15((byte)((ulong)uVar37 >> 0x28) & bVar27 |
                                              (byte)((ulong)uVar32 >> 0x28) & bVar23,
                                              CONCAT14((byte)((ulong)uVar37 >> 0x20) & bVar26 |
                                                       (byte)((ulong)uVar32 >> 0x20) & bVar22,
                                                       CONCAT13((byte)((ulong)uVar37 >> 0x18) &
                                                                bVar29 | (byte)((ulong)uVar32 >>
                                                                               0x18) & bVar25,
                                                                CONCAT12((byte)((ulong)uVar37 >>
                                                                               0x10) & bVar28 |
                                                                         (byte)((ulong)uVar32 >>
                                                                               0x10) & bVar24,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar37 >> 8) & bVar27 |
                                                  (byte)((ulong)uVar32 >> 8) & bVar23,
                                                  (byte)uVar37 & bVar26 | (byte)uVar32 & bVar22)))))
                                    ));
        puVar11[-1] = 0;
        puVar11[-2] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11 = puVar11 + 4;
        puVar13 = puVar13 + 4;
      } while (uVar18 != 0);
      if (uVar7 == uVar14) {
        return 1;
      }
    }
    lVar8 = uVar14 - uVar7;
    puVar10 = (uint *)(uVar15 + uVar7 * 4);
    puVar12 = (uint *)(lVar5 + (uVar7 + lVar19) * 4);
    do {
      lVar8 = lVar8 + -1;
      *puVar10 = *puVar10 & uVar21 | *puVar12 & uVar20;
      *puVar12 = 0;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar8 != 0);
  }
  return 1;
}


