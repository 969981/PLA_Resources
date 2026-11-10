/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03182094; name: FUN_03182094
 */


void FUN_03182094(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined4 uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  float fVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  float fVar61;
  float fVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  ulong uVar68;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  uint local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  int local_80;
  long local_78;
  uint local_70 [4];
  
  puVar11 = PTR_PTR_0434a080;
  local_a8 = *(uint *)((long)param_2 + 0x1c);
  uVar22 = (ulong)local_a8;
  if ((int)param_1[1] != 0 && local_a8 != 0) {
    uVar5 = *(uint *)(param_3 + 1);
    lStack_98 = param_1[3];
    local_a0 = param_1[2];
    lStack_88 = param_1[5];
    lStack_90 = param_1[4];
    lVar16 = *param_1;
    local_80 = 0;
    lVar21 = *param_2;
    lVar1 = 0;
    if (lVar21 != 0) {
      lVar1 = lVar21 + (long)param_2;
    }
    local_b0 = (undefined8 *)(lVar1 + uVar22 * 0x30);
    uStack_c8 = local_b0[1];
    local_d0 = *local_b0;
    uStack_b8 = local_b0[3];
    local_c0 = local_b0[2];
    fVar43 = (float)lStack_90;
    iVar25 = -(uint)((float)local_d0 <= fVar43);
    fVar34 = (float)((ulong)lStack_90 >> 0x20);
    iVar30 = -(uint)((float)((ulong)local_d0 >> 0x20) <= fVar34);
    fVar29 = (float)lStack_88;
    iVar31 = -(uint)((float)uStack_c8 <= fVar29);
    fVar55 = (float)local_a0;
    iVar32 = -(uint)(fVar55 <= (float)local_c0);
    fVar44 = (float)((ulong)local_a0 >> 0x20);
    iVar36 = -(uint)(fVar44 <= (float)((ulong)local_c0 >> 0x20));
    fVar42 = (float)lStack_98;
    iVar39 = -(uint)(fVar42 <= (float)uStack_b8);
    uVar26 = CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                      CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                               CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar25 >> 8),
                                        (byte)iVar32 & (byte)iVar25)));
    if ((uVar26 & (uint)(CONCAT17((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                                  CONCAT16((byte)((uint)iVar36 >> 0x10) &
                                           (byte)((uint)iVar30 >> 0x10),
                                           CONCAT15((byte)((uint)iVar36 >> 8) &
                                                    (byte)((uint)iVar30 >> 8),
                                                    CONCAT14((byte)iVar36 & (byte)iVar30,uVar26))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                 CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                          CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar31 >> 8),
                                   (byte)iVar39 & (byte)iVar31)))) != 0) {
      lVar1 = (long)param_3 + 0xc;
      lVar23 = 0;
      uVar15 = (ulong)uVar5;
      local_78 = lVar16;
      do {
        lVar14 = lStack_88;
        lVar13 = lStack_90;
        lVar12 = lStack_98;
        lVar4 = local_a0;
        local_78 = local_78 + (long)param_1;
        bVar6 = *(byte *)(local_78 + 3);
        fVar45 = (float)local_a0;
        fVar46 = (float)((ulong)local_a0 >> 0x20);
        fVar50 = (float)lStack_98;
        fVar47 = (float)lStack_90;
        fVar49 = (float)((ulong)lStack_90 >> 0x20);
        fVar56 = (float)lStack_88;
        iVar25 = (int)lVar23;
        if ((char)bVar6 < '\0') {
          pbVar18 = (byte *)((long)param_1 + ((long)iVar25 + 1) * 6 + lVar16);
          iVar30 = iVar25 + ((uint)*(ushort *)(local_78 + 4) | (bVar6 & 0x7f) << 0x10) * 2;
          fVar47 = (fVar47 - fVar45) * 0.0044247787;
          fVar49 = (fVar49 - fVar46) * 0.0044247787;
          fVar50 = (fVar56 - fVar50) * 0.0044247787;
          pbVar20 = (byte *)((long)param_1 + (long)iVar30 * 6 + lVar16);
          bVar6 = pbVar18[2] & 0xf;
          bVar7 = pbVar18[2] >> 4;
          bVar8 = *pbVar18 >> 4;
          bVar10 = *pbVar18 & 0xf;
          bVar9 = *pbVar20 >> 4;
          bVar3 = *pbVar20 & 0xf;
          fVar61 = (float)(byte)(bVar8 * bVar8) * fVar47 + fVar55;
          fVar55 = (float)(byte)(bVar9 * bVar9) * fVar47 + fVar55;
          bVar8 = pbVar18[1] >> 4;
          fVar56 = fVar44 + (float)(byte)(bVar8 * bVar8) * fVar49;
          bVar8 = pbVar18[1] & 0xf;
          fVar62 = fVar43 - (float)(byte)(bVar10 * bVar10) * fVar47;
          bVar10 = pbVar20[1] >> 4;
          bVar9 = pbVar20[2] >> 4;
          fVar57 = fVar34 - (float)(byte)(bVar8 * bVar8) * fVar49;
          fVar44 = fVar44 + (float)(byte)(bVar10 * bVar10) * fVar49;
          uVar66 = CONCAT44(fVar44,fVar55);
          fVar45 = fVar42 + (float)(byte)(bVar7 * bVar7) * fVar50;
          fVar46 = fVar29 - (float)(byte)(bVar6 * bVar6) * fVar50;
          bVar6 = pbVar20[1] & 0xf;
          fVar42 = fVar42 + (float)(byte)(bVar9 * bVar9) * fVar50;
          uVar15 = (ulong)(uint)fVar42;
          fVar43 = fVar43 - (float)(byte)(bVar3 * bVar3) * fVar47;
          bVar10 = pbVar20[2] & 0xf;
          fVar34 = fVar34 - (float)(byte)(bVar6 * bVar6) * fVar49;
          uVar67 = CONCAT44(fVar34,fVar43);
          uVar26 = *(uint *)((long)local_b0 + 0x24);
          fVar29 = fVar29 - (float)(byte)(bVar10 * bVar10) * fVar50;
          uVar68 = (ulong)(uint)fVar29;
          uVar24 = (undefined4)((long)iVar25 + 1);
          if (uVar26 == 0) {
            iVar31 = -(uint)(fVar61 <= (float)local_c0);
            fVar50 = (float)((ulong)local_c0 >> 0x20);
            iVar33 = -(uint)(fVar56 <= fVar50);
            iVar37 = -(uint)(fVar45 <= (float)uStack_b8);
            iVar38 = -(uint)((float)local_d0 <= fVar43);
            fVar43 = (float)((ulong)local_d0 >> 0x20);
            iVar40 = -(uint)(fVar43 <= fVar34);
            iVar41 = -(uint)((float)uStack_c8 <= fVar29);
            iVar25 = -(uint)((float)local_d0 <= fVar62);
            iVar36 = -(uint)(fVar43 <= fVar57);
            iVar39 = -(uint)((float)uStack_c8 <= fVar46);
            uVar35 = CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                              CONCAT12((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                       CONCAT11((byte)((uint)iVar25 >> 8) &
                                                (byte)((uint)iVar31 >> 8),
                                                (byte)iVar25 & (byte)iVar31)));
            iVar25 = -(uint)(fVar55 <= (float)local_c0);
            iVar31 = -(uint)(fVar44 <= fVar50);
            iVar32 = -(uint)(fVar42 <= (float)uStack_b8);
            uVar26 = CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                              CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                       CONCAT11((byte)((uint)iVar38 >> 8) &
                                                (byte)((uint)iVar25 >> 8),
                                                (byte)iVar38 & (byte)iVar25)));
            if ((uVar26 & (uint)(CONCAT17((byte)((uint)iVar40 >> 0x18) &
                                          (byte)((uint)iVar31 >> 0x18),
                                          CONCAT16((byte)((uint)iVar40 >> 0x10) &
                                                   (byte)((uint)iVar31 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar40 >> 8) &
                                                            (byte)((uint)iVar31 >> 8),
                                                            CONCAT14((byte)iVar40 & (byte)iVar31,
                                                                     uVar26)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                         CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                                  CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar32 >> 8),
                                           (byte)iVar41 & (byte)iVar32)))) != 0) {
              iVar31 = (int)param_3[1];
              lVar16 = *param_3;
              iVar25 = iVar31 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar31) {
                lVar16 = FUN_03182868(puVar11,iVar25,lVar16,iVar31,lVar1);
                iVar31 = (int)param_3[1];
                *param_3 = lVar16;
              }
              puVar17 = (undefined8 *)(lVar16 + (long)iVar31 * 0x40);
              *(int *)(param_3 + 1) = iVar25;
              *(int *)(puVar17 + 4) = iVar30;
              *(int *)(puVar17 + 6) = (int)uVar22;
              puVar17[1] = uVar15;
              *puVar17 = uVar66;
              puVar17[3] = uVar68;
              puVar17[2] = uVar67;
            }
            if ((uVar35 & (uint)(CONCAT17((byte)((uint)iVar36 >> 0x18) &
                                          (byte)((uint)iVar33 >> 0x18),
                                          CONCAT16((byte)((uint)iVar36 >> 0x10) &
                                                   (byte)((uint)iVar33 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar36 >> 8) &
                                                            (byte)((uint)iVar33 >> 8),
                                                            CONCAT14((byte)iVar36 & (byte)iVar33,
                                                                     uVar35)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                         CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                                  CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar37 >> 8),
                                           (byte)iVar39 & (byte)iVar37)))) != 0) {
              iVar30 = (int)param_3[1];
              lVar16 = *param_3;
              iVar25 = iVar30 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar30) {
                lVar16 = FUN_03182868(puVar11,iVar25,lVar16,iVar30,lVar1);
                *param_3 = lVar16;
                iVar30 = (int)param_3[1];
              }
              puVar17 = (undefined8 *)(lVar16 + (long)iVar30 * 0x40);
              *(int *)(param_3 + 1) = iVar25;
              *(undefined4 *)(puVar17 + 4) = uVar24;
              *(int *)(puVar17 + 6) = (int)uVar22;
              goto LAB_03182684;
            }
          }
          else {
            uVar35 = *(uint *)(local_b0 + 5);
            lVar16 = 0;
            if (*param_2 != 0) {
              lVar16 = *param_2 + (long)param_2;
            }
            puVar19 = (undefined8 *)(lVar16 + (ulong)uVar35 * 0x30);
            puVar17 = (undefined8 *)(lVar16 + (ulong)uVar26 * 0x30);
            fVar50 = (float)puVar19[2];
            iVar33 = -(uint)(fVar61 <= fVar50);
            fVar47 = (float)((ulong)puVar19[2] >> 0x20);
            iVar37 = -(uint)(fVar56 <= fVar47);
            iVar38 = -(uint)(fVar45 <= (float)puVar19[3]);
            iVar25 = -(uint)(fVar55 <= fVar50);
            iVar36 = -(uint)(fVar44 <= fVar47);
            iVar39 = -(uint)(fVar42 <= (float)puVar19[3]);
            fVar50 = (float)*puVar19;
            iVar31 = -(uint)(fVar50 <= fVar43);
            fVar47 = (float)((ulong)*puVar19 >> 0x20);
            iVar40 = -(uint)(fVar47 <= fVar34);
            iVar41 = -(uint)((float)puVar19[1] <= fVar29);
            uVar28 = CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                              CONCAT12((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                       CONCAT11((byte)((uint)iVar25 >> 8) &
                                                (byte)((uint)iVar31 >> 8),
                                                (byte)iVar25 & (byte)iVar31)));
            fVar49 = (float)*puVar17;
            iVar58 = -(uint)(fVar49 <= fVar43);
            fVar43 = (float)((ulong)*puVar17 >> 0x20);
            iVar59 = -(uint)(fVar43 <= fVar34);
            iVar60 = -(uint)((float)puVar17[1] <= fVar29);
            fVar29 = (float)puVar17[2];
            iVar63 = -(uint)(fVar55 <= fVar29);
            fVar55 = (float)((ulong)puVar17[2] >> 0x20);
            iVar64 = -(uint)(fVar44 <= fVar55);
            iVar65 = -(uint)(fVar42 <= (float)puVar17[3]);
            iVar25 = -(uint)(fVar50 <= fVar62);
            iVar31 = -(uint)(fVar47 <= fVar57);
            iVar32 = -(uint)((float)puVar19[1] <= fVar46);
            uVar27 = CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                              CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                       CONCAT11((byte)((uint)iVar33 >> 8) &
                                                (byte)((uint)iVar25 >> 8),
                                                (byte)iVar33 & (byte)iVar25)));
            iVar52 = -(uint)(fVar61 <= fVar29);
            iVar53 = -(uint)(fVar56 <= fVar55);
            iVar54 = -(uint)(fVar45 <= (float)puVar17[3]);
            iVar25 = -(uint)(fVar49 <= fVar62);
            iVar33 = -(uint)(fVar43 <= fVar57);
            iVar51 = -(uint)((float)puVar17[1] <= fVar46);
            uVar48 = CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                              CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                       CONCAT11((byte)((uint)iVar52 >> 8) &
                                                (byte)((uint)iVar25 >> 8),
                                                (byte)iVar52 & (byte)iVar25)));
            if ((uVar28 & (uint)(CONCAT17((byte)((uint)iVar36 >> 0x18) &
                                          (byte)((uint)iVar40 >> 0x18),
                                          CONCAT16((byte)((uint)iVar36 >> 0x10) &
                                                   (byte)((uint)iVar40 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar36 >> 8) &
                                                            (byte)((uint)iVar40 >> 8),
                                                            CONCAT14((byte)iVar36 & (byte)iVar40,
                                                                     uVar28)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                         CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                                  CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar41 >> 8),
                                           (byte)iVar39 & (byte)iVar41)))) != 0) {
              iVar36 = (int)param_3[1];
              lVar16 = *param_3;
              iVar25 = iVar36 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar36) {
                lVar16 = FUN_03182868(puVar11,iVar25,lVar16,iVar36,lVar1);
                *param_3 = lVar16;
                iVar36 = (int)param_3[1];
              }
              puVar17 = (undefined8 *)(lVar16 + (long)iVar36 * 0x40);
              *(int *)(param_3 + 1) = iVar25;
              *(int *)(puVar17 + 4) = iVar30;
              *(uint *)(puVar17 + 6) = uVar35;
              puVar17[1] = uVar15;
              *puVar17 = uVar66;
              puVar17[3] = uVar68;
              puVar17[2] = uVar67;
            }
            if ((CONCAT13((byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                          CONCAT12((byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar58 >> 0x10),
                                   CONCAT11((byte)((uint)iVar63 >> 8) & (byte)((uint)iVar58 >> 8),
                                            (byte)iVar63 & (byte)iVar58))) &
                 CONCAT13((byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar59 >> 0x18),
                          CONCAT12((byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar59 >> 0x10),
                                   CONCAT11((byte)((uint)iVar64 >> 8) & (byte)((uint)iVar59 >> 8),
                                            (byte)iVar64 & (byte)iVar59))) &
                CONCAT13((byte)((uint)iVar65 >> 0x18) & (byte)((uint)iVar60 >> 0x18),
                         CONCAT12((byte)((uint)iVar65 >> 0x10) & (byte)((uint)iVar60 >> 0x10),
                                  CONCAT11((byte)((uint)iVar65 >> 8) & (byte)((uint)iVar60 >> 8),
                                           (byte)iVar65 & (byte)iVar60)))) != 0) {
              iVar36 = (int)param_3[1];
              lVar16 = *param_3;
              iVar25 = iVar36 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar36) {
                lVar16 = FUN_03182868(puVar11,iVar25,lVar16,iVar36,lVar1);
                *param_3 = lVar16;
                iVar36 = (int)param_3[1];
              }
              puVar17 = (undefined8 *)(lVar16 + (long)iVar36 * 0x40);
              *(int *)(param_3 + 1) = iVar25;
              *(int *)(puVar17 + 4) = iVar30;
              *(uint *)(puVar17 + 6) = uVar26;
              puVar17[1] = uVar15;
              *puVar17 = uVar66;
              puVar17[3] = uVar68;
              puVar17[2] = uVar67;
            }
            if ((uVar27 & (uint)(CONCAT17((byte)((uint)iVar37 >> 0x18) &
                                          (byte)((uint)iVar31 >> 0x18),
                                          CONCAT16((byte)((uint)iVar37 >> 0x10) &
                                                   (byte)((uint)iVar31 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar37 >> 8) &
                                                            (byte)((uint)iVar31 >> 8),
                                                            CONCAT14((byte)iVar37 & (byte)iVar31,
                                                                     uVar27)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                         CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                                  CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar32 >> 8),
                                           (byte)iVar38 & (byte)iVar32)))) != 0) {
              iVar30 = (int)param_3[1];
              lVar16 = *param_3;
              iVar25 = iVar30 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar30) {
                lVar16 = FUN_03182868(puVar11,iVar25,lVar16,iVar30,lVar1);
                *param_3 = lVar16;
                iVar30 = (int)param_3[1];
              }
              puVar17 = (undefined8 *)(lVar16 + (long)iVar30 * 0x40);
              *(int *)(param_3 + 1) = iVar25;
              *(undefined4 *)(puVar17 + 4) = uVar24;
              *(uint *)(puVar17 + 6) = uVar35;
              puVar17[1] = (ulong)(uint)fVar45;
              *puVar17 = CONCAT44(fVar56,fVar61);
              puVar17[3] = (ulong)(uint)fVar46;
              puVar17[2] = CONCAT44(fVar57,fVar62);
            }
            if ((uVar48 & (uint)(CONCAT17((byte)((uint)iVar53 >> 0x18) &
                                          (byte)((uint)iVar33 >> 0x18),
                                          CONCAT16((byte)((uint)iVar53 >> 0x10) &
                                                   (byte)((uint)iVar33 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar53 >> 8) &
                                                            (byte)((uint)iVar33 >> 8),
                                                            CONCAT14((byte)iVar53 & (byte)iVar33,
                                                                     uVar48)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar51 >> 0x18),
                         CONCAT12((byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar51 >> 0x10),
                                  CONCAT11((byte)((uint)iVar54 >> 8) & (byte)((uint)iVar51 >> 8),
                                           (byte)iVar54 & (byte)iVar51)))) != 0) {
              iVar30 = (int)param_3[1];
              lVar16 = *param_3;
              iVar25 = iVar30 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar30) {
                lVar16 = FUN_03182868(puVar11,iVar25,lVar16,iVar30,lVar1);
                *param_3 = lVar16;
                iVar30 = (int)param_3[1];
              }
              puVar17 = (undefined8 *)(lVar16 + (long)iVar30 * 0x40);
              *(int *)(param_3 + 1) = iVar25;
              *(undefined4 *)(puVar17 + 4) = uVar24;
              *(uint *)(puVar17 + 6) = uVar26;
LAB_03182684:
              puVar17[1] = (ulong)(uint)fVar45;
              *puVar17 = CONCAT44(fVar56,fVar61);
              puVar17[3] = (ulong)(uint)fVar46;
              puVar17[2] = CONCAT44(fVar57,fVar62);
            }
          }
        }
        else {
          uVar26 = *(uint *)((long)local_b0 + 0x24);
          if (uVar26 == 0) {
            local_70[0] = (uint)CONCAT12(bVar6,*(undefined2 *)(local_78 + 4));
            (**(code **)**(undefined8 **)*param_4)
                      (*(undefined8 **)*param_4,local_70,&local_a0,&local_d0);
          }
          else {
            uVar35 = *(uint *)(local_b0 + 5);
            lVar16 = 0;
            if (lVar21 != 0) {
              lVar16 = lVar21 + (long)param_2;
            }
            puVar19 = (undefined8 *)(lVar16 + (ulong)uVar26 * 0x30);
            puVar17 = (undefined8 *)(lVar16 + (ulong)uVar35 * 0x30);
            iVar32 = -(uint)(fVar45 <= (float)puVar19[2]);
            iVar37 = -(uint)(fVar46 <= (float)((ulong)puVar19[2] >> 0x20));
            iVar40 = -(uint)(fVar50 <= (float)puVar19[3]);
            iVar30 = -(uint)((float)*puVar19 <= fVar47);
            iVar31 = -(uint)((float)((ulong)*puVar19 >> 0x20) <= fVar49);
            iVar36 = -(uint)((float)puVar19[1] <= fVar56);
            uVar27 = CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                              CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                                       CONCAT11((byte)((uint)iVar32 >> 8) &
                                                (byte)((uint)iVar30 >> 8),
                                                (byte)iVar32 & (byte)iVar30)));
            iVar30 = -(uint)(fVar45 <= (float)puVar17[2]);
            iVar32 = -(uint)(fVar46 <= (float)((ulong)puVar17[2] >> 0x20));
            iVar39 = -(uint)(fVar50 <= (float)puVar17[3]);
            iVar33 = -(uint)((float)*puVar17 <= fVar47);
            iVar38 = -(uint)((float)((ulong)*puVar17 >> 0x20) <= fVar49);
            iVar41 = -(uint)((float)puVar17[1] <= fVar56);
            uVar28 = CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                              CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                                       CONCAT11((byte)((uint)iVar30 >> 8) &
                                                (byte)((uint)iVar33 >> 8),
                                                (byte)iVar30 & (byte)iVar33)));
            if ((uVar28 & (uint)(CONCAT17((byte)((uint)iVar32 >> 0x18) &
                                          (byte)((uint)iVar38 >> 0x18),
                                          CONCAT16((byte)((uint)iVar32 >> 0x10) &
                                                   (byte)((uint)iVar38 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar32 >> 8) &
                                                            (byte)((uint)iVar38 >> 8),
                                                            CONCAT14((byte)iVar32 & (byte)iVar38,
                                                                     uVar28)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                         CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                                  CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar41 >> 8),
                                           (byte)iVar39 & (byte)iVar41)))) != 0) {
              lVar16 = *param_3;
              iVar30 = (int)uVar15 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= (int)uVar15) {
                lVar16 = FUN_03182868(puVar11,iVar30,lVar16,uVar15,lVar1);
                *param_3 = lVar16;
                uVar15 = (ulong)*(uint *)(param_3 + 1);
              }
              plVar2 = (long *)(lVar16 + (long)(int)uVar15 * 0x40);
              *(int *)(param_3 + 1) = iVar30;
              *(int *)(plVar2 + 4) = iVar25;
              *(uint *)(plVar2 + 6) = uVar35;
              plVar2[1] = lVar12;
              *plVar2 = lVar4;
              plVar2[3] = lVar14;
              plVar2[2] = lVar13;
            }
            if ((uVar27 & (uint)(CONCAT17((byte)((uint)iVar37 >> 0x18) &
                                          (byte)((uint)iVar31 >> 0x18),
                                          CONCAT16((byte)((uint)iVar37 >> 0x10) &
                                                   (byte)((uint)iVar31 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar37 >> 8) &
                                                            (byte)((uint)iVar31 >> 8),
                                                            CONCAT14((byte)iVar37 & (byte)iVar31,
                                                                     uVar27)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                         CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                                  CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar36 >> 8),
                                           (byte)iVar40 & (byte)iVar36)))) != 0) {
              iVar31 = (int)param_3[1];
              lVar16 = *param_3;
              iVar30 = iVar31 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar31) {
                lVar16 = FUN_03182868(puVar11,iVar30,lVar16,iVar31,lVar1);
                *param_3 = lVar16;
                iVar31 = (int)param_3[1];
              }
              plVar2 = (long *)(lVar16 + (long)iVar31 * 0x40);
              *(int *)(param_3 + 1) = iVar30;
              *(int *)(plVar2 + 4) = iVar25;
              *(uint *)(plVar2 + 6) = uVar26;
              plVar2[1] = lVar12;
              *plVar2 = lVar4;
              plVar2[3] = lVar14;
              plVar2[2] = lVar13;
            }
          }
        }
        if ((int)param_3[1] <= (int)uVar5) {
          return;
        }
        uVar15 = (long)(int)param_3[1] - 1;
        *(int *)(param_3 + 1) = (int)uVar15;
        plVar2 = (long *)(*param_3 + uVar15 * 0x40);
        local_80 = (int)plVar2[4];
        lVar23 = (long)local_80;
        local_a8 = *(uint *)(plVar2 + 6);
        uVar22 = (ulong)local_a8;
        lStack_98 = plVar2[1];
        local_a0 = *plVar2;
        lStack_88 = plVar2[3];
        lStack_90 = plVar2[2];
        lVar16 = *param_1;
        fVar43 = (float)lStack_90;
        fVar44 = (float)((ulong)local_a0 >> 0x20);
        fVar34 = (float)((ulong)lStack_90 >> 0x20);
        fVar55 = (float)local_a0;
        fVar42 = (float)lStack_98;
        local_78 = lVar23 * 6 + lVar16;
        lVar21 = *param_2;
        lVar4 = 0;
        if (lVar21 != 0) {
          lVar4 = lVar21 + (long)param_2;
        }
        local_b0 = (undefined8 *)(lVar4 + uVar22 * 0x30);
        uStack_c8 = local_b0[1];
        local_d0 = *local_b0;
        uStack_b8 = local_b0[3];
        local_c0 = local_b0[2];
        fVar29 = (float)lStack_88;
      } while( true );
    }
  }
  return;
}


