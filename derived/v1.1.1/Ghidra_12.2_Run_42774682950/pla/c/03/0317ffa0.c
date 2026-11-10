/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317ffa0; name: FUN_0317ffa0
 */


void FUN_0317ffa0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 uVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  float fVar49;
  int iVar50;
  int iVar51;
  float fVar52;
  int iVar53;
  int iVar54;
  float fVar55;
  int iVar56;
  int iVar57;
  float fVar58;
  float fVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  
  puVar5 = PTR_PTR_0434a080;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0x1c);
  uVar13 = (ulong)*(uint *)((long)param_2 + 0x1c);
  if (*(uint *)((long)param_1 + 0x1c) != 0 && *(uint *)((long)param_2 + 0x1c) != 0) {
    lVar10 = *param_1;
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar10 + (long)param_1;
    }
    puVar9 = (undefined8 *)(lVar2 + uVar12 * 0x30);
    lVar7 = *param_2;
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = lVar7 + (long)param_2;
    }
    puVar8 = (undefined8 *)(lVar2 + uVar13 * 0x30);
    uVar29 = *puVar9;
    uVar32 = puVar9[2];
    uVar27 = puVar8[1];
    uVar23 = *puVar8;
    uVar21 = puVar8[3];
    uVar18 = puVar8[2];
    iVar38 = -(uint)((float)uVar29 <= (float)uVar18);
    iVar42 = -(uint)((float)((ulong)uVar29 >> 0x20) <= (float)((ulong)uVar18 >> 0x20));
    fVar31 = (float)puVar9[1];
    iVar44 = -(uint)(fVar31 <= (float)uVar21);
    iVar46 = -(uint)((float)uVar23 <= (float)uVar32);
    iVar48 = -(uint)((float)((ulong)uVar23 >> 0x20) <= (float)((ulong)uVar32 >> 0x20));
    fVar35 = (float)puVar9[3];
    iVar51 = -(uint)((float)uVar27 <= fVar35);
    uVar39 = CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar46 >> 0x18),
                      CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar46 >> 0x10),
                               CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar46 >> 8),
                                        (byte)iVar38 & (byte)iVar46)));
    if ((uVar39 & (uint)(CONCAT17((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                                  CONCAT16((byte)((uint)iVar42 >> 0x10) &
                                           (byte)((uint)iVar48 >> 0x10),
                                           CONCAT15((byte)((uint)iVar42 >> 8) &
                                                    (byte)((uint)iVar48 >> 8),
                                                    CONCAT14((byte)iVar42 & (byte)iVar48,uVar39))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar51 >> 0x18),
                 CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar51 >> 0x10),
                          CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar51 >> 8),
                                   (byte)iVar44 & (byte)iVar51)))) != 0) {
      lVar2 = (long)param_3 + 0xc;
      iVar38 = (int)param_3[1];
      uVar39 = *(uint *)((long)puVar9 + 0x24);
      iVar42 = iVar38;
      if (uVar39 == 0) goto LAB_031802e4;
      do {
        uVar4 = *(uint *)(puVar9 + 5);
        lVar3 = 0;
        if (lVar10 != 0) {
          lVar3 = lVar10 + (long)param_1;
        }
        puVar11 = (undefined8 *)(lVar3 + (ulong)uVar39 * 0x30);
        puVar9 = (undefined8 *)(lVar3 + (ulong)uVar4 * 0x30);
        uVar16 = *(uint *)((long)puVar8 + 0x24);
        fVar20 = (float)*puVar11;
        fVar49 = (float)((ulong)*puVar11 >> 0x20);
        fVar52 = (float)puVar11[1];
        fVar55 = (float)*puVar9;
        fVar58 = (float)((ulong)*puVar9 >> 0x20);
        fVar59 = (float)puVar9[1];
        fVar25 = (float)puVar9[2];
        fVar33 = (float)((ulong)puVar9[2] >> 0x20);
        fVar36 = (float)puVar9[3];
        fVar31 = (float)puVar11[2];
        fVar35 = (float)((ulong)puVar11[2] >> 0x20);
        fVar30 = (float)puVar11[3];
        if (uVar16 == 0) {
          iVar46 = -(uint)(fVar20 <= (float)uVar18);
          fVar20 = (float)((ulong)uVar18 >> 0x20);
          iVar34 = -(uint)(fVar49 <= fVar20);
          iVar37 = -(uint)(fVar52 <= (float)uVar21);
          iVar26 = -(uint)((float)uVar23 <= fVar25);
          fVar25 = (float)((ulong)uVar23 >> 0x20);
          iVar40 = -(uint)(fVar25 <= fVar33);
          iVar60 = -(uint)((float)uVar27 <= fVar36);
          iVar44 = -(uint)((float)uVar23 <= fVar31);
          iVar51 = -(uint)(fVar25 <= fVar35);
          iVar24 = -(uint)((float)uVar27 <= fVar30);
          uVar17 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar46 >> 0x18),
                            CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar46 >> 0x10),
                                     CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar46 >> 8),
                                              (byte)iVar44 & (byte)iVar46)));
          iVar44 = -(uint)(fVar55 <= (float)uVar18);
          iVar46 = -(uint)(fVar58 <= fVar20);
          iVar48 = -(uint)(fVar59 <= (float)uVar21);
          uVar16 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                            CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar44 >> 0x10),
                                     CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar44 >> 8),
                                              (byte)iVar26 & (byte)iVar44)));
          if ((uVar16 & (uint)(CONCAT17((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar46 >> 0x18),
                                        CONCAT16((byte)((uint)iVar40 >> 0x10) &
                                                 (byte)((uint)iVar46 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar40 >> 8) &
                                                          (byte)((uint)iVar46 >> 8),
                                                          CONCAT14((byte)iVar40 & (byte)iVar46,
                                                                   uVar16)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                       CONCAT12((byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                                CONCAT11((byte)((uint)iVar60 >> 8) & (byte)((uint)iVar48 >> 8),
                                         (byte)iVar60 & (byte)iVar48)))) != 0) {
            lVar10 = *param_3;
            iVar44 = iVar42 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar42) {
              lVar10 = FUN_0317fe2c(puVar5,iVar44,lVar10,iVar42,lVar2);
              iVar42 = (int)param_3[1];
              *param_3 = lVar10;
            }
            *(int *)(param_3 + 1) = iVar44;
            *(ulong *)(lVar10 + (long)iVar42 * 8) = (ulong)uVar4 | uVar13 << 0x20;
          }
          if ((uVar17 & (uint)(CONCAT17((byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                                        CONCAT16((byte)((uint)iVar51 >> 0x10) &
                                                 (byte)((uint)iVar34 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar51 >> 8) &
                                                          (byte)((uint)iVar34 >> 8),
                                                          CONCAT14((byte)iVar51 & (byte)iVar34,
                                                                   uVar17)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                       CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                                CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar37 >> 8),
                                         (byte)iVar24 & (byte)iVar37)))) != 0) {
            iVar44 = (int)param_3[1];
            lVar10 = *param_3;
            iVar42 = iVar44 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
              lVar10 = FUN_0317fe2c(puVar5,iVar42,lVar10,iVar44,lVar2);
              iVar44 = (int)param_3[1];
              *param_3 = lVar10;
            }
            goto LAB_03180284;
          }
        }
        else {
          uVar17 = *(uint *)(puVar8 + 5);
          lVar10 = 0;
          if (lVar7 != 0) {
            lVar10 = lVar7 + (long)param_2;
          }
          puVar8 = (undefined8 *)(lVar10 + (ulong)uVar16 * 0x30);
          puVar9 = (undefined8 *)(lVar10 + (ulong)uVar17 * 0x30);
          fVar14 = (float)puVar8[2];
          iVar51 = -(uint)(fVar20 <= fVar14);
          fVar19 = (float)((ulong)puVar8[2] >> 0x20);
          iVar24 = -(uint)(fVar49 <= fVar19);
          iVar26 = -(uint)(fVar52 <= (float)puVar8[3]);
          iVar44 = -(uint)(fVar55 <= fVar14);
          iVar46 = -(uint)(fVar58 <= fVar19);
          iVar48 = -(uint)(fVar59 <= (float)puVar8[3]);
          fVar14 = (float)puVar9[2];
          iVar40 = -(uint)(fVar55 <= fVar14);
          fVar55 = (float)((ulong)puVar9[2] >> 0x20);
          iVar43 = -(uint)(fVar58 <= fVar55);
          iVar45 = -(uint)(fVar59 <= (float)puVar9[3]);
          fVar58 = (float)*puVar9;
          iVar60 = -(uint)(fVar58 <= fVar25);
          fVar59 = (float)((ulong)*puVar9 >> 0x20);
          iVar61 = -(uint)(fVar59 <= fVar33);
          iVar62 = -(uint)((float)puVar9[1] <= fVar36);
          uVar41 = CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar60 >> 0x18),
                            CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar60 >> 0x10),
                                     CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar60 >> 8),
                                              (byte)iVar40 & (byte)iVar60)));
          fVar19 = (float)*puVar8;
          iVar40 = -(uint)(fVar19 <= fVar25);
          fVar25 = (float)((ulong)*puVar8 >> 0x20);
          iVar34 = -(uint)(fVar25 <= fVar33);
          iVar37 = -(uint)((float)puVar8[1] <= fVar36);
          uVar15 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                            CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar40 >> 0x10),
                                     CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar40 >> 8),
                                              (byte)iVar44 & (byte)iVar40)));
          iVar47 = -(uint)(fVar20 <= fVar14);
          iVar50 = -(uint)(fVar49 <= fVar55);
          iVar53 = -(uint)(fVar52 <= (float)puVar9[3]);
          iVar54 = -(uint)(fVar58 <= fVar31);
          iVar56 = -(uint)(fVar59 <= fVar35);
          iVar57 = -(uint)((float)puVar9[1] <= fVar30);
          iVar44 = -(uint)(fVar19 <= fVar31);
          iVar40 = -(uint)(fVar25 <= fVar35);
          iVar60 = -(uint)((float)puVar8[1] <= fVar30);
          uVar28 = CONCAT13((byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                            CONCAT12((byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar44 >> 0x10),
                                     CONCAT11((byte)((uint)iVar51 >> 8) & (byte)((uint)iVar44 >> 8),
                                              (byte)iVar51 & (byte)iVar44)));
          uVar22 = CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar54 >> 0x18),
                            CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar54 >> 0x10),
                                     CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar54 >> 8),
                                              (byte)iVar47 & (byte)iVar54)));
          if ((uVar41 & (uint)(CONCAT17((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar61 >> 0x18),
                                        CONCAT16((byte)((uint)iVar43 >> 0x10) &
                                                 (byte)((uint)iVar61 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar43 >> 8) &
                                                          (byte)((uint)iVar61 >> 8),
                                                          CONCAT14((byte)iVar43 & (byte)iVar61,
                                                                   uVar41)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar62 >> 0x18),
                       CONCAT12((byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar62 >> 0x10),
                                CONCAT11((byte)((uint)iVar45 >> 8) & (byte)((uint)iVar62 >> 8),
                                         (byte)iVar45 & (byte)iVar62)))) != 0) {
            lVar10 = *param_3;
            iVar44 = iVar42 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar42) {
              lVar10 = FUN_0317fe2c(puVar5,iVar44,lVar10,iVar42,lVar2);
              *param_3 = lVar10;
              iVar42 = (int)param_3[1];
            }
            *(int *)(param_3 + 1) = iVar44;
            *(ulong *)(lVar10 + (long)iVar42 * 8) = CONCAT44(uVar17,uVar4);
          }
          if ((uVar15 & (uint)(CONCAT17((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                                        CONCAT16((byte)((uint)iVar46 >> 0x10) &
                                                 (byte)((uint)iVar34 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar46 >> 8) &
                                                          (byte)((uint)iVar34 >> 8),
                                                          CONCAT14((byte)iVar46 & (byte)iVar34,
                                                                   uVar15)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                       CONCAT12((byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                                CONCAT11((byte)((uint)iVar48 >> 8) & (byte)((uint)iVar37 >> 8),
                                         (byte)iVar48 & (byte)iVar37)))) != 0) {
            iVar44 = (int)param_3[1];
            lVar10 = *param_3;
            iVar42 = iVar44 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
              lVar10 = FUN_0317fe2c(puVar5,iVar42,lVar10,iVar44,lVar2);
              iVar44 = (int)param_3[1];
              *param_3 = lVar10;
            }
            *(int *)(param_3 + 1) = iVar42;
            *(ulong *)(lVar10 + (long)iVar44 * 8) = CONCAT44(uVar16,uVar4);
          }
          if ((uVar22 & (uint)(CONCAT17((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar56 >> 0x18),
                                        CONCAT16((byte)((uint)iVar50 >> 0x10) &
                                                 (byte)((uint)iVar56 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar50 >> 8) &
                                                          (byte)((uint)iVar56 >> 8),
                                                          CONCAT14((byte)iVar50 & (byte)iVar56,
                                                                   uVar22)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                       CONCAT12((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                                CONCAT11((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar57 >> 8),
                                         (byte)iVar53 & (byte)iVar57)))) != 0) {
            iVar44 = (int)param_3[1];
            lVar10 = *param_3;
            iVar42 = iVar44 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
              lVar10 = FUN_0317fe2c(puVar5,iVar42,lVar10,iVar44,lVar2);
              iVar44 = (int)param_3[1];
              *param_3 = lVar10;
            }
            *(int *)(param_3 + 1) = iVar42;
            *(ulong *)(lVar10 + (long)iVar44 * 8) = CONCAT44(uVar17,uVar39);
          }
          if ((uVar28 & (uint)(CONCAT17((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                                        CONCAT16((byte)((uint)iVar24 >> 0x10) &
                                                 (byte)((uint)iVar40 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar24 >> 8) &
                                                          (byte)((uint)iVar40 >> 8),
                                                          CONCAT14((byte)iVar24 & (byte)iVar40,
                                                                   uVar28)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar60 >> 0x18),
                       CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar60 >> 0x10),
                                CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar60 >> 8),
                                         (byte)iVar26 & (byte)iVar60)))) != 0) {
            iVar44 = (int)param_3[1];
            lVar10 = *param_3;
            iVar42 = iVar44 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
              lVar10 = FUN_0317fe2c(puVar5,iVar42,lVar10,iVar44,lVar2);
              iVar44 = (int)param_3[1];
              *param_3 = lVar10;
            }
            uVar13 = (ulong)uVar16;
LAB_03180284:
            *(int *)(param_3 + 1) = iVar42;
            *(ulong *)(lVar10 + (long)iVar44 * 8) = (ulong)uVar39 | uVar13 << 0x20;
          }
        }
        while( true ) {
          if ((int)param_3[1] <= iVar38) {
            return;
          }
          iVar42 = (int)param_3[1] + -1;
          *(int *)(param_3 + 1) = iVar42;
          lVar10 = *param_1;
          puVar1 = (uint *)(*param_3 + (long)iVar42 * 8);
          uVar12 = (ulong)*puVar1;
          uVar13 = (ulong)puVar1[1];
          lVar7 = 0;
          if (lVar10 != 0) {
            lVar7 = lVar10 + (long)param_1;
          }
          puVar9 = (undefined8 *)(lVar7 + uVar12 * 0x30);
          lVar7 = *param_2;
          lVar3 = 0;
          if (lVar7 != 0) {
            lVar3 = lVar7 + (long)param_2;
          }
          fVar31 = (float)puVar9[1];
          uVar29 = *puVar9;
          fVar35 = (float)puVar9[3];
          uVar32 = puVar9[2];
          puVar8 = (undefined8 *)(lVar3 + uVar13 * 0x30);
          uVar27 = puVar8[1];
          uVar23 = *puVar8;
          uVar21 = puVar8[3];
          uVar18 = puVar8[2];
          uVar39 = *(uint *)((long)puVar9 + 0x24);
          if (uVar39 != 0) break;
LAB_031802e4:
          uVar39 = *(uint *)((long)puVar8 + 0x24);
          if (uVar39 == 0) {
            lVar10 = *param_4;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x38) +
                             (long)*(int *)(puVar9 + 5) * 0xf0);
            if (lVar7 != 0) {
              plVar6 = *(long **)(lVar7 + 0xc0);
              *(undefined8 *)(lVar10 + 0x38) = uVar27;
              *(undefined8 *)(lVar10 + 0x30) = uVar23;
              *(undefined8 *)(lVar10 + 0x48) = uVar21;
              *(undefined8 *)(lVar10 + 0x40) = uVar18;
              (**(code **)(*plVar6 + 0x48))(plVar6,lVar10,*(undefined8 *)(lVar10 + 0x58));
            }
          }
          else {
            uVar4 = *(uint *)(puVar8 + 5);
            lVar10 = 0;
            if (lVar7 != 0) {
              lVar10 = lVar7 + (long)param_2;
            }
            puVar8 = (undefined8 *)(lVar10 + (ulong)uVar39 * 0x30);
            puVar9 = (undefined8 *)(lVar10 + (ulong)uVar4 * 0x30);
            iVar48 = -(uint)((float)uVar29 <= (float)puVar8[2]);
            fVar30 = (float)((ulong)uVar29 >> 0x20);
            iVar40 = -(uint)(fVar30 <= (float)((ulong)puVar8[2] >> 0x20));
            iVar34 = -(uint)(fVar31 <= (float)puVar8[3]);
            iVar44 = -(uint)((float)*puVar8 <= (float)uVar32);
            fVar25 = (float)((ulong)uVar32 >> 0x20);
            iVar46 = -(uint)((float)((ulong)*puVar8 >> 0x20) <= fVar25);
            iVar51 = -(uint)((float)puVar8[1] <= fVar35);
            uVar16 = CONCAT13((byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                              CONCAT12((byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar44 >> 0x10),
                                       CONCAT11((byte)((uint)iVar48 >> 8) &
                                                (byte)((uint)iVar44 >> 8),
                                                (byte)iVar48 & (byte)iVar44)));
            iVar44 = -(uint)((float)uVar29 <= (float)puVar9[2]);
            iVar48 = -(uint)(fVar30 <= (float)((ulong)puVar9[2] >> 0x20));
            iVar24 = -(uint)(fVar31 <= (float)puVar9[3]);
            iVar26 = -(uint)((float)*puVar9 <= (float)uVar32);
            iVar60 = -(uint)((float)((ulong)*puVar9 >> 0x20) <= fVar25);
            iVar37 = -(uint)((float)puVar9[1] <= fVar35);
            uVar17 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                              CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                       CONCAT11((byte)((uint)iVar44 >> 8) &
                                                (byte)((uint)iVar26 >> 8),
                                                (byte)iVar44 & (byte)iVar26)));
            if ((uVar17 & (uint)(CONCAT17((byte)((uint)iVar48 >> 0x18) &
                                          (byte)((uint)iVar60 >> 0x18),
                                          CONCAT16((byte)((uint)iVar48 >> 0x10) &
                                                   (byte)((uint)iVar60 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar48 >> 8) &
                                                            (byte)((uint)iVar60 >> 8),
                                                            CONCAT14((byte)iVar48 & (byte)iVar60,
                                                                     uVar17)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                         CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                                  CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar37 >> 8),
                                           (byte)iVar24 & (byte)iVar37)))) != 0) {
              lVar10 = *param_3;
              iVar44 = iVar42 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar42) {
                lVar10 = FUN_0317fe2c(puVar5,iVar44,lVar10,iVar42,lVar2);
                iVar42 = (int)param_3[1];
                *param_3 = lVar10;
              }
              *(int *)(param_3 + 1) = iVar44;
              *(ulong *)(lVar10 + (long)iVar42 * 8) = uVar12 | (ulong)uVar4 << 0x20;
            }
            if ((uVar16 & (uint)(CONCAT17((byte)((uint)iVar40 >> 0x18) &
                                          (byte)((uint)iVar46 >> 0x18),
                                          CONCAT16((byte)((uint)iVar40 >> 0x10) &
                                                   (byte)((uint)iVar46 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar40 >> 8) &
                                                            (byte)((uint)iVar46 >> 8),
                                                            CONCAT14((byte)iVar40 & (byte)iVar46,
                                                                     uVar16)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar51 >> 0x18),
                         CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar51 >> 0x10),
                                  CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar51 >> 8),
                                           (byte)iVar34 & (byte)iVar51)))) != 0) {
              iVar44 = (int)param_3[1];
              lVar10 = *param_3;
              iVar42 = iVar44 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
                lVar10 = FUN_0317fe2c(puVar5,iVar42,lVar10,iVar44,lVar2);
                iVar44 = (int)param_3[1];
                *param_3 = lVar10;
              }
              *(int *)(param_3 + 1) = iVar42;
              *(ulong *)(lVar10 + (long)iVar44 * 8) = uVar12 | (ulong)uVar39 << 0x20;
            }
          }
        }
      } while( true );
    }
  }
  return;
}


