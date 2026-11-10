/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317f8d8; name: FUN_0317f8d8
 */


void FUN_0317f8d8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  uint uVar35;
  undefined8 uVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  undefined8 uVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  float fVar51;
  int iVar52;
  int iVar53;
  float fVar54;
  int iVar55;
  int iVar56;
  float fVar57;
  int iVar58;
  int iVar59;
  float fVar60;
  float fVar61;
  int iVar62;
  int iVar63;
  float fVar64;
  
  puVar5 = PTR_PTR_0434a080;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0x1c);
  uVar13 = (ulong)*(uint *)((long)param_2 + 0x1c);
  if (*(uint *)((long)param_1 + 0x1c) != 0 && *(uint *)((long)param_2 + 0x1c) != 0) {
    lVar9 = *param_1;
    lVar2 = 0;
    if (lVar9 != 0) {
      lVar2 = lVar9 + (long)param_1;
    }
    puVar10 = (undefined8 *)(lVar2 + uVar12 * 0x30);
    lVar7 = *param_2;
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = lVar7 + (long)param_2;
    }
    puVar8 = (undefined8 *)(lVar2 + uVar13 * 0x30);
    uVar20 = puVar10[1];
    uVar17 = *puVar10;
    uVar27 = puVar10[3];
    uVar22 = puVar10[2];
    uVar33 = puVar8[1];
    uVar29 = *puVar8;
    uVar40 = puVar8[3];
    uVar36 = puVar8[2];
    iVar41 = -(uint)((float)uVar17 <= (float)uVar36);
    iVar44 = -(uint)((float)((ulong)uVar17 >> 0x20) <= (float)((ulong)uVar36 >> 0x20));
    iVar46 = -(uint)((float)uVar20 <= (float)uVar40);
    iVar48 = -(uint)((float)uVar29 <= (float)uVar22);
    iVar50 = -(uint)((float)((ulong)uVar29 >> 0x20) <= (float)((ulong)uVar22 >> 0x20));
    iVar53 = -(uint)((float)uVar33 <= (float)uVar27);
    uVar42 = CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                      CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                               CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar48 >> 8),
                                        (byte)iVar41 & (byte)iVar48)));
    if ((uVar42 & (uint)(CONCAT17((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                                  CONCAT16((byte)((uint)iVar44 >> 0x10) &
                                           (byte)((uint)iVar50 >> 0x10),
                                           CONCAT15((byte)((uint)iVar44 >> 8) &
                                                    (byte)((uint)iVar50 >> 8),
                                                    CONCAT14((byte)iVar44 & (byte)iVar50,uVar42))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                 CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar53 >> 0x10),
                          CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar53 >> 8),
                                   (byte)iVar46 & (byte)iVar53)))) != 0) {
      lVar2 = (long)param_3 + 0xc;
      iVar41 = (int)param_3[1];
      uVar42 = *(uint *)((long)puVar10 + 0x24);
      iVar44 = iVar41;
      if (uVar42 == 0) goto LAB_0317fc1c;
      do {
        uVar4 = *(uint *)(puVar10 + 5);
        lVar3 = 0;
        if (lVar9 != 0) {
          lVar3 = lVar9 + (long)param_1;
        }
        puVar11 = (undefined8 *)(lVar3 + (ulong)uVar42 * 0x30);
        puVar10 = (undefined8 *)(lVar3 + (ulong)uVar4 * 0x30);
        uVar15 = *(uint *)((long)puVar8 + 0x24);
        fVar38 = (float)*puVar11;
        fVar51 = (float)((ulong)*puVar11 >> 0x20);
        fVar54 = (float)puVar11[1];
        fVar57 = (float)*puVar10;
        fVar60 = (float)((ulong)*puVar10 >> 0x20);
        fVar61 = (float)puVar10[1];
        fVar64 = (float)puVar10[2];
        fVar23 = (float)((ulong)puVar10[2] >> 0x20);
        fVar25 = (float)puVar10[3];
        fVar18 = (float)puVar11[2];
        fVar24 = (float)((ulong)puVar11[2] >> 0x20);
        fVar19 = (float)puVar11[3];
        if (uVar15 == 0) {
          iVar53 = -(uint)(fVar38 <= (float)uVar36);
          fVar38 = (float)((ulong)uVar36 >> 0x20);
          iVar37 = -(uint)(fVar51 <= fVar38);
          iVar39 = -(uint)(fVar54 <= (float)uVar40);
          iVar46 = -(uint)((float)uVar29 <= fVar18);
          fVar18 = (float)((ulong)uVar29 >> 0x20);
          iVar48 = -(uint)(fVar18 <= fVar24);
          iVar50 = -(uint)((float)uVar33 <= fVar19);
          uVar15 = CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                            CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar53 >> 0x10),
                                     CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar53 >> 8),
                                              (byte)iVar46 & (byte)iVar53)));
          iVar46 = -(uint)((float)uVar29 <= fVar64);
          iVar53 = -(uint)(fVar18 <= fVar23);
          iVar26 = -(uint)((float)uVar33 <= fVar25);
          iVar31 = -(uint)(fVar57 <= (float)uVar36);
          iVar32 = -(uint)(fVar60 <= fVar38);
          iVar34 = -(uint)(fVar61 <= (float)uVar40);
          uVar16 = CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                            CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                     CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar31 >> 8),
                                              (byte)iVar46 & (byte)iVar31)));
          if ((uVar16 & (uint)(CONCAT17((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                                        CONCAT16((byte)((uint)iVar53 >> 0x10) &
                                                 (byte)((uint)iVar32 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar53 >> 8) &
                                                          (byte)((uint)iVar32 >> 8),
                                                          CONCAT14((byte)iVar53 & (byte)iVar32,
                                                                   uVar16)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                       CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                                CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar34 >> 8),
                                         (byte)iVar26 & (byte)iVar34)))) != 0) {
            lVar9 = *param_3;
            iVar46 = iVar44 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
              lVar9 = FUN_0317fe2c(puVar5,iVar46,lVar9,iVar44,lVar2);
              iVar44 = (int)param_3[1];
              *param_3 = lVar9;
            }
            *(int *)(param_3 + 1) = iVar46;
            *(ulong *)(lVar9 + (long)iVar44 * 8) = (ulong)uVar4 | uVar13 << 0x20;
          }
          if ((uVar15 & (uint)(CONCAT17((byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                                        CONCAT16((byte)((uint)iVar48 >> 0x10) &
                                                 (byte)((uint)iVar37 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar48 >> 8) &
                                                          (byte)((uint)iVar37 >> 8),
                                                          CONCAT14((byte)iVar48 & (byte)iVar37,
                                                                   uVar15)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                       CONCAT12((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                                CONCAT11((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar39 >> 8),
                                         (byte)iVar50 & (byte)iVar39)))) != 0) {
            iVar46 = (int)param_3[1];
            lVar9 = *param_3;
            iVar44 = iVar46 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar46) {
              lVar9 = FUN_0317fe2c(puVar5,iVar44,lVar9,iVar46,lVar2);
              iVar46 = (int)param_3[1];
              *param_3 = lVar9;
            }
            goto LAB_0317fbbc;
          }
        }
        else {
          uVar16 = *(uint *)(puVar8 + 5);
          lVar9 = 0;
          if (lVar7 != 0) {
            lVar9 = lVar7 + (long)param_2;
          }
          puVar8 = (undefined8 *)(lVar9 + (ulong)uVar15 * 0x30);
          puVar10 = (undefined8 *)(lVar9 + (ulong)uVar16 * 0x30);
          fVar28 = (float)puVar8[2];
          iVar34 = -(uint)(fVar38 <= fVar28);
          fVar30 = (float)((ulong)puVar8[2] >> 0x20);
          iVar37 = -(uint)(fVar51 <= fVar30);
          iVar39 = -(uint)(fVar54 <= (float)puVar8[3]);
          iVar48 = -(uint)(fVar57 <= fVar28);
          iVar31 = -(uint)(fVar60 <= fVar30);
          iVar32 = -(uint)(fVar61 <= (float)puVar8[3]);
          fVar28 = (float)puVar10[2];
          iVar46 = -(uint)(fVar57 <= fVar28);
          fVar57 = (float)((ulong)puVar10[2] >> 0x20);
          iVar45 = -(uint)(fVar60 <= fVar57);
          iVar47 = -(uint)(fVar61 <= (float)puVar10[3]);
          fVar60 = (float)*puVar10;
          iVar50 = -(uint)(fVar60 <= fVar64);
          fVar61 = (float)((ulong)*puVar10 >> 0x20);
          iVar62 = -(uint)(fVar61 <= fVar23);
          iVar63 = -(uint)((float)puVar10[1] <= fVar25);
          uVar43 = CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                            CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                     CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar50 >> 8),
                                              (byte)iVar46 & (byte)iVar50)));
          fVar30 = (float)*puVar8;
          iVar46 = -(uint)(fVar30 <= fVar64);
          fVar64 = (float)((ulong)*puVar8 >> 0x20);
          iVar53 = -(uint)(fVar64 <= fVar23);
          iVar26 = -(uint)((float)puVar8[1] <= fVar25);
          uVar21 = CONCAT13((byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar46 >> 0x18),
                            CONCAT12((byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar46 >> 0x10),
                                     CONCAT11((byte)((uint)iVar48 >> 8) & (byte)((uint)iVar46 >> 8),
                                              (byte)iVar48 & (byte)iVar46)));
          iVar49 = -(uint)(fVar38 <= fVar28);
          iVar52 = -(uint)(fVar51 <= fVar57);
          iVar55 = -(uint)(fVar54 <= (float)puVar10[3]);
          iVar56 = -(uint)(fVar60 <= fVar18);
          iVar58 = -(uint)(fVar61 <= fVar24);
          iVar59 = -(uint)((float)puVar10[1] <= fVar19);
          iVar46 = -(uint)(fVar30 <= fVar18);
          iVar48 = -(uint)(fVar64 <= fVar24);
          iVar50 = -(uint)((float)puVar8[1] <= fVar19);
          uVar35 = CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar46 >> 0x18),
                            CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar46 >> 0x10),
                                     CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar46 >> 8),
                                              (byte)iVar34 & (byte)iVar46)));
          uVar14 = CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar56 >> 0x18),
                            CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar56 >> 0x10),
                                     CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar56 >> 8),
                                              (byte)iVar49 & (byte)iVar56)));
          if ((uVar43 & (uint)(CONCAT17((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar62 >> 0x18),
                                        CONCAT16((byte)((uint)iVar45 >> 0x10) &
                                                 (byte)((uint)iVar62 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar45 >> 8) &
                                                          (byte)((uint)iVar62 >> 8),
                                                          CONCAT14((byte)iVar45 & (byte)iVar62,
                                                                   uVar43)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar63 >> 0x18),
                       CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar63 >> 0x10),
                                CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar63 >> 8),
                                         (byte)iVar47 & (byte)iVar63)))) != 0) {
            lVar9 = *param_3;
            iVar46 = iVar44 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
              lVar9 = FUN_0317fe2c(puVar5,iVar46,lVar9,iVar44,lVar2);
              *param_3 = lVar9;
              iVar44 = (int)param_3[1];
            }
            *(int *)(param_3 + 1) = iVar46;
            *(ulong *)(lVar9 + (long)iVar44 * 8) = CONCAT44(uVar16,uVar4);
          }
          if ((uVar21 & (uint)(CONCAT17((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                                        CONCAT16((byte)((uint)iVar31 >> 0x10) &
                                                 (byte)((uint)iVar53 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar31 >> 8) &
                                                          (byte)((uint)iVar53 >> 8),
                                                          CONCAT14((byte)iVar31 & (byte)iVar53,
                                                                   uVar21)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                       CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar26 >> 8),
                                         (byte)iVar32 & (byte)iVar26)))) != 0) {
            iVar46 = (int)param_3[1];
            lVar9 = *param_3;
            iVar44 = iVar46 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar46) {
              lVar9 = FUN_0317fe2c(puVar5,iVar44,lVar9,iVar46,lVar2);
              iVar46 = (int)param_3[1];
              *param_3 = lVar9;
            }
            *(int *)(param_3 + 1) = iVar44;
            *(ulong *)(lVar9 + (long)iVar46 * 8) = CONCAT44(uVar15,uVar4);
          }
          if ((uVar14 & (uint)(CONCAT17((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                                        CONCAT16((byte)((uint)iVar52 >> 0x10) &
                                                 (byte)((uint)iVar58 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar52 >> 8) &
                                                          (byte)((uint)iVar58 >> 8),
                                                          CONCAT14((byte)iVar52 & (byte)iVar58,
                                                                   uVar14)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar59 >> 0x18),
                       CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar59 >> 0x10),
                                CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar59 >> 8),
                                         (byte)iVar55 & (byte)iVar59)))) != 0) {
            iVar46 = (int)param_3[1];
            lVar9 = *param_3;
            iVar44 = iVar46 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar46) {
              lVar9 = FUN_0317fe2c(puVar5,iVar44,lVar9,iVar46,lVar2);
              iVar46 = (int)param_3[1];
              *param_3 = lVar9;
            }
            *(int *)(param_3 + 1) = iVar44;
            *(ulong *)(lVar9 + (long)iVar46 * 8) = CONCAT44(uVar16,uVar42);
          }
          if ((uVar35 & (uint)(CONCAT17((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                                        CONCAT16((byte)((uint)iVar37 >> 0x10) &
                                                 (byte)((uint)iVar48 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar37 >> 8) &
                                                          (byte)((uint)iVar48 >> 8),
                                                          CONCAT14((byte)iVar37 & (byte)iVar48,
                                                                   uVar35)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                       CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar50 >> 8),
                                         (byte)iVar39 & (byte)iVar50)))) != 0) {
            iVar46 = (int)param_3[1];
            lVar9 = *param_3;
            iVar44 = iVar46 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar46) {
              lVar9 = FUN_0317fe2c(puVar5,iVar44,lVar9,iVar46,lVar2);
              iVar46 = (int)param_3[1];
              *param_3 = lVar9;
            }
            uVar13 = (ulong)uVar15;
LAB_0317fbbc:
            *(int *)(param_3 + 1) = iVar44;
            *(ulong *)(lVar9 + (long)iVar46 * 8) = (ulong)uVar42 | uVar13 << 0x20;
          }
        }
        while( true ) {
          if ((int)param_3[1] <= iVar41) {
            return;
          }
          iVar44 = (int)param_3[1] + -1;
          *(int *)(param_3 + 1) = iVar44;
          lVar9 = *param_1;
          puVar1 = (uint *)(*param_3 + (long)iVar44 * 8);
          uVar12 = (ulong)*puVar1;
          uVar13 = (ulong)puVar1[1];
          lVar7 = 0;
          if (lVar9 != 0) {
            lVar7 = lVar9 + (long)param_1;
          }
          puVar10 = (undefined8 *)(lVar7 + uVar12 * 0x30);
          lVar7 = *param_2;
          lVar3 = 0;
          if (lVar7 != 0) {
            lVar3 = lVar7 + (long)param_2;
          }
          uVar20 = puVar10[1];
          uVar17 = *puVar10;
          uVar27 = puVar10[3];
          uVar22 = puVar10[2];
          puVar8 = (undefined8 *)(lVar3 + uVar13 * 0x30);
          uVar33 = puVar8[1];
          uVar29 = *puVar8;
          uVar40 = puVar8[3];
          uVar36 = puVar8[2];
          uVar42 = *(uint *)((long)puVar10 + 0x24);
          if (uVar42 != 0) break;
LAB_0317fc1c:
          uVar42 = *(uint *)((long)puVar8 + 0x24);
          if (uVar42 == 0) {
            lVar9 = *param_4;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 0x50) + 0x38) +
                             (long)*(int *)(puVar8 + 5) * 0xf0);
            if (lVar7 != 0) {
              plVar6 = *(long **)(lVar7 + 0xc0);
              *(undefined8 *)(lVar9 + 0x38) = uVar20;
              *(undefined8 *)(lVar9 + 0x30) = uVar17;
              *(undefined8 *)(lVar9 + 0x48) = uVar27;
              *(undefined8 *)(lVar9 + 0x40) = uVar22;
              (**(code **)(*plVar6 + 0x48))(plVar6,lVar9,*(undefined8 *)(lVar9 + 0x58));
            }
          }
          else {
            uVar4 = *(uint *)(puVar8 + 5);
            lVar9 = 0;
            if (lVar7 != 0) {
              lVar9 = lVar7 + (long)param_2;
            }
            puVar8 = (undefined8 *)(lVar9 + (ulong)uVar42 * 0x30);
            puVar10 = (undefined8 *)(lVar9 + (ulong)uVar4 * 0x30);
            iVar48 = -(uint)((float)uVar17 <= (float)puVar8[2]);
            fVar18 = (float)((ulong)uVar17 >> 0x20);
            iVar37 = -(uint)(fVar18 <= (float)((ulong)puVar8[2] >> 0x20));
            iVar39 = -(uint)((float)uVar20 <= (float)puVar8[3]);
            iVar46 = -(uint)((float)*puVar8 <= (float)uVar22);
            fVar24 = (float)((ulong)uVar22 >> 0x20);
            iVar32 = -(uint)((float)((ulong)*puVar8 >> 0x20) <= fVar24);
            iVar34 = -(uint)((float)puVar8[1] <= (float)uVar27);
            uVar16 = CONCAT13((byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar46 >> 0x18),
                              CONCAT12((byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar46 >> 0x10),
                                       CONCAT11((byte)((uint)iVar48 >> 8) &
                                                (byte)((uint)iVar46 >> 8),
                                                (byte)iVar48 & (byte)iVar46)));
            iVar46 = -(uint)((float)uVar17 <= (float)puVar10[2]);
            iVar48 = -(uint)(fVar18 <= (float)((ulong)puVar10[2] >> 0x20));
            iVar50 = -(uint)((float)uVar20 <= (float)puVar10[3]);
            iVar53 = -(uint)((float)*puVar10 <= (float)uVar22);
            iVar26 = -(uint)((float)((ulong)*puVar10 >> 0x20) <= fVar24);
            iVar31 = -(uint)((float)puVar10[1] <= (float)uVar27);
            uVar15 = CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                              CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar53 >> 0x10),
                                       CONCAT11((byte)((uint)iVar46 >> 8) &
                                                (byte)((uint)iVar53 >> 8),
                                                (byte)iVar46 & (byte)iVar53)));
            if ((uVar15 & (uint)(CONCAT17((byte)((uint)iVar48 >> 0x18) &
                                          (byte)((uint)iVar26 >> 0x18),
                                          CONCAT16((byte)((uint)iVar48 >> 0x10) &
                                                   (byte)((uint)iVar26 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar48 >> 8) &
                                                            (byte)((uint)iVar26 >> 8),
                                                            CONCAT14((byte)iVar48 & (byte)iVar26,
                                                                     uVar15)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                         CONCAT12((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                  CONCAT11((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar31 >> 8),
                                           (byte)iVar50 & (byte)iVar31)))) != 0) {
              lVar9 = *param_3;
              iVar46 = iVar44 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar44) {
                lVar9 = FUN_0317fe2c(puVar5,iVar46,lVar9,iVar44,lVar2);
                iVar44 = (int)param_3[1];
                *param_3 = lVar9;
              }
              *(int *)(param_3 + 1) = iVar46;
              *(ulong *)(lVar9 + (long)iVar44 * 8) = uVar12 | (ulong)uVar4 << 0x20;
            }
            if ((uVar16 & (uint)(CONCAT17((byte)((uint)iVar37 >> 0x18) &
                                          (byte)((uint)iVar32 >> 0x18),
                                          CONCAT16((byte)((uint)iVar37 >> 0x10) &
                                                   (byte)((uint)iVar32 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar37 >> 8) &
                                                            (byte)((uint)iVar32 >> 8),
                                                            CONCAT14((byte)iVar37 & (byte)iVar32,
                                                                     uVar16)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                         CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                                  CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar34 >> 8),
                                           (byte)iVar39 & (byte)iVar34)))) != 0) {
              iVar46 = (int)param_3[1];
              lVar9 = *param_3;
              iVar44 = iVar46 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar46) {
                lVar9 = FUN_0317fe2c(puVar5,iVar44,lVar9,iVar46,lVar2);
                iVar46 = (int)param_3[1];
                *param_3 = lVar9;
              }
              *(int *)(param_3 + 1) = iVar44;
              *(ulong *)(lVar9 + (long)iVar46 * 8) = uVar12 | (ulong)uVar42 << 0x20;
            }
          }
        }
      } while( true );
    }
  }
  return;
}


