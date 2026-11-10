/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03181568; name: FUN_03181568
 */


void FUN_03181568(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  int iVar43;
  ulong uVar42;
  int iVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  int iVar48;
  float fVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  float fVar56;
  int iVar57;
  float fVar58;
  int iVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  long local_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  uint local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  uint local_78;
  uint local_70 [4];
  
  puVar16 = PTR_PTR_0434a080;
  local_78 = *(uint *)((long)param_1 + 0x1c);
  if (local_78 != 0 && (int)param_2[1] != 0) {
    uVar4 = *(uint *)(param_3 + 1);
    lVar24 = *param_1;
    lVar22 = 0;
    if (lVar24 != 0) {
      lVar22 = lVar24 + (long)param_1;
    }
    local_80 = (undefined8 *)(lVar22 + (ulong)local_78 * 0x30);
    uStack_98 = local_80[1];
    local_a0 = *local_80;
    uStack_88 = local_80[3];
    local_90 = local_80[2];
    lStack_c8 = param_2[3];
    local_d0 = param_2[2];
    lStack_b8 = param_2[5];
    uStack_c0 = param_2[4];
    iVar29 = -(uint)((float)local_a0 <= (float)uStack_c0);
    fVar41 = (float)(uStack_c0 >> 0x20);
    iVar36 = -(uint)((float)((ulong)local_a0 >> 0x20) <= fVar41);
    fVar34 = (float)lStack_b8;
    iVar37 = -(uint)((float)uStack_98 <= fVar34);
    iVar38 = -(uint)((float)local_d0 <= (float)local_90);
    fVar49 = (float)((ulong)local_d0 >> 0x20);
    iVar43 = -(uint)(fVar49 <= (float)((ulong)local_90 >> 0x20));
    fVar45 = (float)lStack_c8;
    iVar44 = -(uint)(fVar45 <= (float)uStack_88);
    uVar30 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                      CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                               CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar38 >> 8),
                                        (byte)iVar29 & (byte)iVar38)));
    lVar22 = *param_2;
    local_a8 = lVar22 + (long)param_2;
    local_b0 = 0;
    if ((uVar30 & (uint)(CONCAT17((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar43 >> 0x18),
                                  CONCAT16((byte)((uint)iVar36 >> 0x10) &
                                           (byte)((uint)iVar43 >> 0x10),
                                           CONCAT15((byte)((uint)iVar36 >> 8) &
                                                    (byte)((uint)iVar43 >> 8),
                                                    CONCAT14((byte)iVar36 & (byte)iVar43,uVar30))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                 CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar44 >> 0x10),
                          CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar44 >> 8),
                                   (byte)iVar37 & (byte)iVar44)))) != 0) {
      lVar1 = (long)param_3 + 0xc;
      uVar42 = (ulong)(uint)fVar41;
      lVar28 = 0;
      uVar21 = (ulong)uVar4;
      uVar30 = *(uint *)((long)local_80 + 0x24);
      if (uVar30 == 0) goto LAB_03181784;
      do {
        lVar20 = lStack_b8;
        uVar19 = uStack_c0;
        lVar18 = lStack_c8;
        lVar17 = local_d0;
        fVar41 = (float)lStack_c8;
        fVar34 = (float)lStack_b8;
        uVar5 = *(uint *)(local_80 + 5);
        lVar3 = 0;
        if (lVar24 != 0) {
          lVar3 = lVar24 + (long)param_1;
        }
        puVar27 = (undefined8 *)(lVar3 + (ulong)uVar30 * 0x30);
        puVar25 = (undefined8 *)(lVar3 + (ulong)uVar5 * 0x30);
        fVar65 = (float)*puVar27;
        fVar66 = (float)((ulong)*puVar27 >> 0x20);
        fVar81 = (float)uStack_c0;
        fVar75 = (float)(uStack_c0 >> 0x20);
        fVar45 = (float)puVar27[2];
        fVar56 = (float)((ulong)puVar27[2] >> 0x20);
        fVar80 = (float)local_d0;
        fVar39 = (float)((ulong)local_d0 >> 0x20);
        fVar62 = (float)puVar25[2];
        fVar63 = (float)((ulong)puVar25[2] >> 0x20);
        fVar58 = (float)*puVar25;
        fVar60 = (float)((ulong)*puVar25 >> 0x20);
        uVar35 = (uint)lVar28;
        fVar64 = (float)puVar25[3];
        fVar67 = (float)puVar27[1];
        fVar61 = (float)puVar25[1];
        fVar46 = (float)puVar27[3];
        if (*(char *)(local_a8 + 3) < 0) {
          pbVar26 = (byte *)((long)param_2 + ((long)(int)uVar35 + 1) * 6 + lVar22);
          uVar31 = uVar35 + ((uint)*(ushort *)(local_a8 + 4) |
                            ((int)*(char *)(local_a8 + 3) & 0x7fU) << 0x10) * 2;
          pbVar23 = (byte *)((long)param_2 + (long)(int)uVar31 * 6 + lVar22);
          fVar74 = (fVar81 - fVar80) * 0.0044247787;
          fVar75 = (fVar75 - fVar39) * 0.0044247787;
          fVar76 = (fVar34 - fVar41) * 0.0044247787;
          bVar6 = *pbVar26 & 0xf;
          bVar7 = *pbVar26 >> 4;
          bVar10 = *pbVar23 >> 4;
          bVar15 = *pbVar23 & 0xf;
          fVar77 = fVar80 + (float)(byte)(bVar7 * bVar7) * fVar74;
          fVar80 = fVar80 + (float)(byte)(bVar10 * bVar10) * fVar74;
          bVar7 = pbVar26[1] & 0xf;
          bVar8 = pbVar26[1] >> 4;
          bVar11 = pbVar23[1] >> 4;
          bVar10 = pbVar23[1] & 0xf;
          bVar12 = pbVar26[2] >> 4;
          bVar13 = pbVar23[2] >> 4;
          bVar9 = pbVar26[2] & 0xf;
          bVar14 = pbVar23[2] & 0xf;
          fVar78 = fVar81 - (float)(byte)(bVar6 * bVar6) * fVar74;
          fVar81 = fVar81 - (float)(byte)(bVar15 * bVar15) * fVar74;
          fVar79 = fVar49 + (float)(byte)(bVar8 * bVar8) * fVar75;
          fVar49 = fVar49 + (float)(byte)(bVar11 * bVar11) * fVar75;
          fVar82 = (float)uVar42 - (float)(byte)(bVar10 * bVar10) * fVar75;
          fVar75 = (float)uVar42 - (float)(byte)(bVar7 * bVar7) * fVar75;
          fVar39 = fVar41 + (float)(byte)(bVar12 * bVar12) * fVar76;
          fVar41 = fVar41 + (float)(byte)(bVar13 * bVar13) * fVar76;
          fVar74 = fVar34 - (float)(byte)(bVar14 * bVar14) * fVar76;
          fVar34 = fVar34 - (float)(byte)(bVar9 * bVar9) * fVar76;
          iVar47 = -(uint)(fVar77 <= fVar62);
          iVar48 = -(uint)(fVar79 <= fVar63);
          iVar50 = -(uint)(fVar39 <= fVar64);
          iVar68 = -(uint)(fVar80 <= fVar62);
          iVar69 = -(uint)(fVar49 <= fVar63);
          iVar70 = -(uint)(fVar41 <= fVar64);
          iVar29 = -(uint)(fVar65 <= fVar78);
          iVar36 = -(uint)(fVar66 <= fVar75);
          iVar37 = -(uint)(fVar67 <= fVar34);
          iVar38 = -(uint)(fVar58 <= fVar78);
          iVar43 = -(uint)(fVar60 <= fVar75);
          iVar44 = -(uint)(fVar61 <= fVar34);
          iVar52 = -(uint)(fVar65 <= fVar81);
          iVar51 = -(uint)(fVar66 <= fVar82);
          iVar53 = -(uint)(fVar67 <= fVar74);
          iVar71 = -(uint)(fVar80 <= fVar45);
          iVar72 = -(uint)(fVar49 <= fVar56);
          iVar73 = -(uint)(fVar41 <= fVar46);
          iVar54 = -(uint)(fVar77 <= fVar45);
          iVar57 = -(uint)(fVar79 <= fVar56);
          iVar59 = -(uint)(fVar39 <= fVar46);
          uVar55 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar54 >> 0x18),
                            CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar54 >> 0x10),
                                     CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar54 >> 8),
                                              (byte)iVar29 & (byte)iVar54)));
          uVar32 = CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar47 >> 0x18),
                            CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar47 >> 0x10),
                                     CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar47 >> 8),
                                              (byte)iVar38 & (byte)iVar47)));
          uVar40 = CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                            CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                                     CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar71 >> 8),
                                              (byte)iVar52 & (byte)iVar71)));
          iVar29 = -(uint)(fVar58 <= fVar81);
          iVar38 = -(uint)(fVar60 <= fVar82);
          iVar47 = -(uint)(fVar61 <= fVar74);
          uVar33 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar68 >> 0x18),
                            CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar68 >> 0x10),
                                     CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar68 >> 8),
                                              (byte)iVar29 & (byte)iVar68)));
          if ((uVar33 & (uint)(CONCAT17((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar69 >> 0x18),
                                        CONCAT16((byte)((uint)iVar38 >> 0x10) &
                                                 (byte)((uint)iVar69 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar38 >> 8) &
                                                          (byte)((uint)iVar69 >> 8),
                                                          CONCAT14((byte)iVar38 & (byte)iVar69,
                                                                   uVar33)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar70 >> 0x18),
                       CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar70 >> 0x10),
                                CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar70 >> 8),
                                         (byte)iVar47 & (byte)iVar70)))) != 0) {
            iVar38 = (int)param_3[1];
            lVar22 = *param_3;
            iVar29 = iVar38 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar38) {
              lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,iVar38,lVar1);
              *param_3 = lVar22;
              iVar38 = (int)param_3[1];
            }
            puVar2 = (uint *)(lVar22 + (long)iVar38 * 0x40);
            *(int *)(param_3 + 1) = iVar29;
            *puVar2 = uVar5;
            puVar2[0xc] = uVar31;
            *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar41;
            *(ulong *)(puVar2 + 4) = CONCAT44(fVar49,fVar80);
            *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar74;
            *(ulong *)(puVar2 + 8) = CONCAT44(fVar82,fVar81);
          }
          uVar35 = (uint)((long)(int)uVar35 + 1);
          if ((uVar32 & (uint)(CONCAT17((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                                        CONCAT16((byte)((uint)iVar43 >> 0x10) &
                                                 (byte)((uint)iVar48 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar43 >> 8) &
                                                          (byte)((uint)iVar48 >> 8),
                                                          CONCAT14((byte)iVar43 & (byte)iVar48,
                                                                   uVar32)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                       CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar50 >> 8),
                                         (byte)iVar44 & (byte)iVar50)))) != 0) {
            iVar38 = (int)param_3[1];
            lVar22 = *param_3;
            iVar29 = iVar38 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar38) {
              lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,iVar38,lVar1);
              *param_3 = lVar22;
              iVar38 = (int)param_3[1];
            }
            puVar2 = (uint *)(lVar22 + (long)iVar38 * 0x40);
            *(int *)(param_3 + 1) = iVar29;
            *puVar2 = uVar5;
            *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar39;
            *(ulong *)(puVar2 + 4) = CONCAT44(fVar79,fVar77);
            puVar2[0xc] = uVar35;
            *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar34;
            *(ulong *)(puVar2 + 8) = CONCAT44(fVar75,fVar78);
          }
          if ((uVar40 & (uint)(CONCAT17((byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar72 >> 0x18),
                                        CONCAT16((byte)((uint)iVar51 >> 0x10) &
                                                 (byte)((uint)iVar72 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar51 >> 8) &
                                                          (byte)((uint)iVar72 >> 8),
                                                          CONCAT14((byte)iVar51 & (byte)iVar72,
                                                                   uVar40)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar73 >> 0x18),
                       CONCAT12((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar73 >> 0x10),
                                CONCAT11((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar73 >> 8),
                                         (byte)iVar53 & (byte)iVar73)))) != 0) {
            iVar38 = (int)param_3[1];
            lVar22 = *param_3;
            iVar29 = iVar38 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar38) {
              lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,iVar38,lVar1);
              *param_3 = lVar22;
              iVar38 = (int)param_3[1];
            }
            puVar2 = (uint *)(lVar22 + (long)iVar38 * 0x40);
            *(int *)(param_3 + 1) = iVar29;
            *puVar2 = uVar30;
            puVar2[0xc] = uVar31;
            *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar41;
            *(ulong *)(puVar2 + 4) = CONCAT44(fVar49,fVar80);
            *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar74;
            *(ulong *)(puVar2 + 8) = CONCAT44(fVar82,fVar81);
          }
          if ((uVar55 & (uint)(CONCAT17((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                                        CONCAT16((byte)((uint)iVar36 >> 0x10) &
                                                 (byte)((uint)iVar57 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar36 >> 8) &
                                                          (byte)((uint)iVar57 >> 8),
                                                          CONCAT14((byte)iVar36 & (byte)iVar57,
                                                                   uVar55)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar59 >> 0x18),
                       CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar59 >> 0x10),
                                CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar59 >> 8),
                                         (byte)iVar37 & (byte)iVar59)))) != 0) {
            iVar36 = (int)param_3[1];
            lVar22 = *param_3;
            iVar29 = iVar36 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar36) {
              lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,iVar36,lVar1);
              iVar36 = (int)param_3[1];
              *param_3 = lVar22;
            }
            puVar2 = (uint *)(lVar22 + (long)iVar36 * 0x40);
            *(int *)(param_3 + 1) = iVar29;
            *puVar2 = uVar30;
            puVar2[0xc] = uVar35;
            *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar39;
            *(ulong *)(puVar2 + 4) = CONCAT44(fVar79,fVar77);
            *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar34;
            *(ulong *)(puVar2 + 8) = CONCAT44(fVar75,fVar78);
          }
        }
        else {
          iVar29 = -(uint)(fVar65 <= fVar81);
          iVar36 = -(uint)(fVar66 <= fVar75);
          iVar37 = -(uint)(fVar67 <= fVar34);
          iVar38 = -(uint)(fVar80 <= fVar45);
          iVar50 = -(uint)(fVar39 <= fVar56);
          iVar52 = -(uint)(fVar41 <= fVar46);
          uVar31 = CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                            CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                                     CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar29 >> 8),
                                              (byte)iVar38 & (byte)iVar29)));
          iVar29 = -(uint)(fVar80 <= fVar62);
          iVar38 = -(uint)(fVar39 <= fVar63);
          iVar43 = -(uint)(fVar41 <= fVar64);
          iVar44 = -(uint)(fVar58 <= fVar81);
          iVar47 = -(uint)(fVar60 <= fVar75);
          iVar48 = -(uint)(fVar61 <= fVar34);
          uVar32 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                            CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar44 >> 0x10),
                                     CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar44 >> 8),
                                              (byte)iVar29 & (byte)iVar44)));
          if ((uVar32 & (uint)(CONCAT17((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar47 >> 0x18),
                                        CONCAT16((byte)((uint)iVar38 >> 0x10) &
                                                 (byte)((uint)iVar47 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar38 >> 8) &
                                                          (byte)((uint)iVar47 >> 8),
                                                          CONCAT14((byte)iVar38 & (byte)iVar47,
                                                                   uVar32)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                       CONCAT12((byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                                CONCAT11((byte)((uint)iVar43 >> 8) & (byte)((uint)iVar48 >> 8),
                                         (byte)iVar43 & (byte)iVar48)))) != 0) {
            lVar22 = *param_3;
            iVar29 = (int)uVar21 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= (int)uVar21) {
              lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,uVar21,lVar1);
              *param_3 = lVar22;
              uVar21 = (ulong)*(uint *)(param_3 + 1);
            }
            puVar2 = (uint *)(lVar22 + (long)(int)uVar21 * 0x40);
            *(int *)(param_3 + 1) = iVar29;
            *puVar2 = uVar5;
            puVar2[0xc] = uVar35;
            *(long *)(puVar2 + 6) = lVar18;
            *(long *)(puVar2 + 4) = lVar17;
            *(long *)(puVar2 + 10) = lVar20;
            *(ulong *)(puVar2 + 8) = uVar19;
          }
          if ((uVar31 & (uint)(CONCAT17((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                                        CONCAT16((byte)((uint)iVar50 >> 0x10) &
                                                 (byte)((uint)iVar36 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar50 >> 8) &
                                                          (byte)((uint)iVar36 >> 8),
                                                          CONCAT14((byte)iVar50 & (byte)iVar36,
                                                                   uVar31)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                       CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                                CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar37 >> 8),
                                         (byte)iVar52 & (byte)iVar37)))) != 0) {
            iVar36 = (int)param_3[1];
            lVar22 = *param_3;
            iVar29 = iVar36 + 1;
            if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar36) {
              lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,iVar36,lVar1);
              *param_3 = lVar22;
              iVar36 = (int)param_3[1];
            }
            puVar2 = (uint *)(lVar22 + (long)iVar36 * 0x40);
            *(int *)(param_3 + 1) = iVar29;
            *puVar2 = uVar30;
            puVar2[0xc] = uVar35;
            *(long *)(puVar2 + 6) = lVar18;
            *(long *)(puVar2 + 4) = lVar17;
            *(long *)(puVar2 + 10) = lVar20;
            *(ulong *)(puVar2 + 8) = uVar19;
          }
        }
        while( true ) {
          if ((int)param_3[1] <= (int)uVar4) {
            return;
          }
          uVar21 = (long)(int)param_3[1] - 1;
          *(int *)(param_3 + 1) = (int)uVar21;
          puVar2 = (uint *)(*param_3 + uVar21 * 0x40);
          local_78 = *puVar2;
          local_b0 = puVar2[0xc];
          lVar28 = (long)(int)local_b0;
          lStack_c8 = *(long *)(puVar2 + 6);
          local_d0 = *(long *)(puVar2 + 4);
          lStack_b8 = *(long *)(puVar2 + 10);
          uStack_c0 = *(ulong *)(puVar2 + 8);
          lVar24 = *param_1;
          lVar22 = 0;
          if (lVar24 != 0) {
            lVar22 = lVar24 + (long)param_1;
          }
          fVar49 = (float)((ulong)local_d0 >> 0x20);
          local_80 = (undefined8 *)(lVar22 + (ulong)local_78 * 0x30);
          fVar45 = (float)lStack_c8;
          uVar42 = uStack_c0 >> 0x20;
          fVar41 = (float)(uStack_c0 >> 0x20);
          uStack_98 = local_80[1];
          local_a0 = *local_80;
          uStack_88 = local_80[3];
          local_90 = local_80[2];
          fVar34 = (float)lStack_b8;
          lVar22 = *param_2;
          local_a8 = (long)param_2 + lVar28 * 6 + lVar22;
          uVar30 = *(uint *)((long)local_80 + 0x24);
          if (uVar30 != 0) break;
LAB_03181784:
          uVar30 = local_78;
          bVar6 = *(byte *)(local_a8 + 3);
          if ((char)bVar6 < '\0') {
            lVar24 = (long)(int)local_b0;
            uVar5 = local_b0 + ((uint)*(ushort *)(local_a8 + 4) | (bVar6 & 0x7f) << 0x10) * 2;
            pbVar26 = (byte *)((long)param_2 + (long)(int)uVar5 * 6 + lVar22);
            pbVar23 = (byte *)((long)param_2 + (lVar24 + 1) * 6 + lVar22);
            fVar46 = (float)uStack_c0;
            fVar67 = (float)local_d0;
            fVar56 = (fVar46 - fVar67) * 0.0044247787;
            fVar58 = ((float)(uStack_c0 >> 0x20) - (float)((ulong)local_d0 >> 0x20)) * 0.0044247787;
            fVar60 = ((float)lStack_b8 - (float)lStack_c8) * 0.0044247787;
            bVar14 = *pbVar26 >> 4;
            bVar6 = *pbVar26 & 0xf;
            bVar7 = *pbVar23 >> 4;
            bVar15 = *pbVar23 & 0xf;
            fVar61 = fVar67 + (float)(byte)(bVar7 * bVar7) * fVar56;
            bVar8 = pbVar23[1] >> 4;
            bVar7 = pbVar23[2] & 0xf;
            bVar9 = pbVar23[2] >> 4;
            bVar10 = pbVar23[1] & 0xf;
            fVar62 = fVar46 - (float)(byte)(bVar15 * bVar15) * fVar56;
            fVar63 = fVar49 + (float)(byte)(bVar8 * bVar8) * fVar58;
            fVar64 = fVar45 + (float)(byte)(bVar9 * bVar9) * fVar60;
            bVar15 = pbVar26[1] >> 4;
            fVar65 = fVar41 - (float)(byte)(bVar10 * bVar10) * fVar58;
            fVar66 = fVar34 - (float)(byte)(bVar7 * bVar7) * fVar60;
            fVar67 = fVar67 + (float)(byte)(bVar14 * bVar14) * fVar56;
            bVar7 = pbVar26[2] >> 4;
            fVar49 = fVar49 + (float)(byte)(bVar15 * bVar15) * fVar58;
            fVar45 = fVar45 + (float)(byte)(bVar7 * bVar7) * fVar60;
            bVar15 = pbVar26[1] & 0xf;
            fVar46 = fVar46 - (float)(byte)(bVar6 * bVar6) * fVar56;
            bVar6 = pbVar26[2] & 0xf;
            fVar41 = fVar41 - (float)(byte)(bVar15 * bVar15) * fVar58;
            fVar34 = fVar34 - (float)(byte)(bVar6 * bVar6) * fVar60;
            iVar36 = -(uint)(fVar61 <= (float)local_90);
            fVar58 = (float)((ulong)local_90 >> 0x20);
            iVar50 = -(uint)(fVar63 <= fVar58);
            iVar52 = -(uint)(fVar64 <= (float)uStack_88);
            iVar29 = -(uint)((float)local_a0 <= fVar62);
            fVar56 = (float)((ulong)local_a0 >> 0x20);
            iVar43 = -(uint)(fVar56 <= fVar65);
            iVar47 = -(uint)((float)uStack_98 <= fVar66);
            uVar31 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                              CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                                       CONCAT11((byte)((uint)iVar36 >> 8) &
                                                (byte)((uint)iVar29 >> 8),
                                                (byte)iVar36 & (byte)iVar29)));
            iVar29 = -(uint)((float)local_a0 <= fVar46);
            iVar36 = -(uint)(fVar56 <= fVar41);
            iVar37 = -(uint)((float)uStack_98 <= fVar34);
            iVar38 = -(uint)(fVar67 <= (float)local_90);
            iVar44 = -(uint)(fVar49 <= fVar58);
            iVar48 = -(uint)(fVar45 <= (float)uStack_88);
            uVar35 = CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                              CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                                       CONCAT11((byte)((uint)iVar38 >> 8) &
                                                (byte)((uint)iVar29 >> 8),
                                                (byte)iVar38 & (byte)iVar29)));
            if ((uVar35 & (uint)(CONCAT17((byte)((uint)iVar44 >> 0x18) &
                                          (byte)((uint)iVar36 >> 0x18),
                                          CONCAT16((byte)((uint)iVar44 >> 0x10) &
                                                   (byte)((uint)iVar36 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar44 >> 8) &
                                                            (byte)((uint)iVar36 >> 8),
                                                            CONCAT14((byte)iVar44 & (byte)iVar36,
                                                                     uVar35)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                         CONCAT12((byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                                  CONCAT11((byte)((uint)iVar48 >> 8) & (byte)((uint)iVar37 >> 8),
                                           (byte)iVar48 & (byte)iVar37)))) != 0) {
              iVar36 = (int)param_3[1];
              lVar22 = *param_3;
              iVar29 = iVar36 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar36) {
                lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,iVar36,lVar1);
                iVar36 = (int)param_3[1];
                *param_3 = lVar22;
              }
              puVar2 = (uint *)(lVar22 + (long)iVar36 * 0x40);
              *(int *)(param_3 + 1) = iVar29;
              *puVar2 = uVar30;
              puVar2[0xc] = uVar5;
              *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar45;
              *(ulong *)(puVar2 + 4) = CONCAT44(fVar49,fVar67);
              *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar34;
              *(ulong *)(puVar2 + 8) = CONCAT44(fVar41,fVar46);
            }
            if ((uVar31 & (uint)(CONCAT17((byte)((uint)iVar50 >> 0x18) &
                                          (byte)((uint)iVar43 >> 0x18),
                                          CONCAT16((byte)((uint)iVar50 >> 0x10) &
                                                   (byte)((uint)iVar43 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar50 >> 8) &
                                                            (byte)((uint)iVar43 >> 8),
                                                            CONCAT14((byte)iVar50 & (byte)iVar43,
                                                                     uVar31)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar47 >> 0x18),
                         CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar47 >> 0x10),
                                  CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar47 >> 8),
                                           (byte)iVar52 & (byte)iVar47)))) != 0) {
              iVar36 = (int)param_3[1];
              lVar22 = *param_3;
              iVar29 = iVar36 + 1;
              if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= iVar36) {
                lVar22 = FUN_03181e90(puVar16,iVar29,lVar22,iVar36,lVar1);
                *param_3 = lVar22;
                iVar36 = (int)param_3[1];
              }
              puVar2 = (uint *)(lVar22 + (long)iVar36 * 0x40);
              *(int *)(param_3 + 1) = iVar29;
              *puVar2 = uVar30;
              puVar2[0xc] = (uint)(lVar24 + 1);
              *(ulong *)(puVar2 + 6) = (ulong)(uint)fVar64;
              *(ulong *)(puVar2 + 4) = CONCAT44(fVar63,fVar61);
              *(ulong *)(puVar2 + 10) = (ulong)(uint)fVar66;
              *(ulong *)(puVar2 + 8) = CONCAT44(fVar65,fVar62);
            }
          }
          else {
            local_70[0] = (uint)CONCAT12(bVar6,*(undefined2 *)(local_a8 + 4));
            (**(code **)**(undefined8 **)*param_4)
                      (*(undefined8 **)*param_4,local_70,&local_d0,&local_a0);
          }
        }
      } while( true );
    }
  }
  return;
}


