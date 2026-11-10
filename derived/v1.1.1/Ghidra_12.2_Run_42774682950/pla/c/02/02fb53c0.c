/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb53c0; name: FUN_02fb53c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02fb53c0(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 uVar31;
  int iVar32;
  int iVar33;
  undefined2 *puVar34;
  byte *pbVar35;
  uint uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar55;
  float fVar56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((int)param_1[1] != 0) {
    lVar23 = param_2[1];
    fVar62 = (float)param_1[3];
    fVar37 = (float)((ulong)param_1[3] >> 0x20);
    uVar31 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar45 = (float)uVar31;
    fVar61 = (float)((ulong)uVar31 >> 0x20);
    fVar64 = (float)param_1[5];
    fVar41 = (float)((ulong)param_1[5] >> 0x20);
    uVar31 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar49 = (float)uVar31;
    fVar63 = (float)((ulong)uVar31 >> 0x20);
    lVar28 = *param_1;
    auVar58._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar49);
    auVar58._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar63);
    auVar58._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar64);
    auVar58._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= fVar41);
    auVar53._12_4_ = fVar41;
    auVar53._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar53 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar53,4);
    auVar54._0_4_ = -(uint)(fVar45 <= *(float *)(param_3 + 4));
    auVar54._4_4_ = -(uint)(fVar61 <= *(float *)((long)param_3 + 0x24));
    auVar54._8_4_ = -(uint)(fVar62 <= *(float *)(param_3 + 5));
    auVar54._12_4_ = -(uint)(fVar37 <= *(float *)((long)param_3 + 0x2c));
    uVar55 = CONCAT13((byte)((uint)auVar54._0_4_ >> 0x18) & (byte)((uint)auVar58._0_4_ >> 0x18),
                      CONCAT12((byte)((uint)auVar54._0_4_ >> 0x10) &
                               (byte)((uint)auVar58._0_4_ >> 0x10),
                               CONCAT11((byte)((uint)auVar54._0_4_ >> 8) &
                                        (byte)((uint)auVar58._0_4_ >> 8),
                                        (byte)auVar54._0_4_ & (byte)auVar58._0_4_)));
    auVar57._0_8_ =
         CONCAT17((byte)((uint)auVar54._4_4_ >> 0x18) & (byte)((uint)auVar58._4_4_ >> 0x18),
                  CONCAT16((byte)((uint)auVar54._4_4_ >> 0x10) & (byte)((uint)auVar58._4_4_ >> 0x10)
                           ,CONCAT15((byte)((uint)auVar54._4_4_ >> 8) &
                                     (byte)((uint)auVar58._4_4_ >> 8),
                                     CONCAT14((byte)auVar54._4_4_ & (byte)auVar58._4_4_,uVar55))));
    auVar57[8] = (byte)auVar54._8_4_ & (byte)auVar58._8_4_;
    auVar57[9] = (byte)((uint)auVar54._8_4_ >> 8) & (byte)((uint)auVar58._8_4_ >> 8);
    auVar57[10] = (byte)((uint)auVar54._8_4_ >> 0x10) & (byte)((uint)auVar58._8_4_ >> 0x10);
    auVar57[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) & (byte)((uint)auVar58._8_4_ >> 0x18);
    auVar51._12_4_ = fVar37;
    auVar51._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar51 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar51,4);
    auVar53 = auVar53 ^ (auVar53 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar58;
    auVar51 = auVar51 ^ (auVar51 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar54;
    param_3[7] = auVar53._8_8_;
    param_3[6] = auVar53._0_8_;
    param_3[9] = auVar51._8_8_;
    param_3[8] = auVar51._0_8_;
    puVar24 = PTR_PTR_0434a080;
    if ((uVar55 & (uint)((ulong)auVar57._0_8_ >> 0x20) & auVar57._8_4_) != 0) {
      uVar30 = 0;
      bVar9 = *(byte *)((long)param_1 + lVar28 + 3);
joined_r0x02fb549c:
      do {
        while (uVar55 = (uint)bVar9, (bVar9 & 1) == 0) {
          lVar28 = *param_3;
          if (*(char *)(lVar28 + 0xf1) == '\0') {
            bVar9 = bVar9 >> 1;
            lVar25 = *(long *)(lVar28 + 0x68) + (ulong)bVar9 * 4;
            bVar10 = *(byte *)(lVar25 + 3);
            if ((uint)*(byte *)(lVar25 + 1) == (uint)bVar10) {
              if (*(byte *)(lVar25 + 2) - 3 < 2) goto LAB_02fb5760;
            }
            else {
              if ((uint)*(byte *)(lVar25 + 2) == (uint)bVar10) {
LAB_02fb5760:
                uVar55 = uVar55 & 0xfe | *(int *)(lVar28 + 0x94) << 8;
                uVar27 = 1;
              }
              else {
                uVar55 = uVar55 & 0xfe | *(int *)(lVar28 + 0x94) << 8;
                uVar27 = 1;
                if ((*(byte *)(lVar28 + 0x58) & *(byte *)(lVar25 + 1)) <= bVar10) {
                  uVar27 = 2;
                }
              }
              uVar36 = 0;
              do {
                puVar29 = *(undefined8 **)(lVar28 + 0xd8);
                lVar25 = puVar29[5];
                if (lVar25 == 0) {
LAB_02fb57bc:
                  uVar16 = (&DAT_03aa74b0)[*(int *)((long)puVar29 + 0x1c)] & *(uint *)(puVar29 + 3)
                           | (uVar55 + 1 <<
                             (ulong)(-(*(int *)(*(long *)(lVar28 + 0x50) + 0x34) +
                                      *(int *)((long)puVar29 + 0x1c)) & 0x1f)) - 1;
                  if (**(long **)(lVar28 + 0xc0) != 0) {
                    lVar25 = *(long *)(lVar28 + 0x88);
                    iVar32 = *(byte *)(*(long *)(lVar28 + 0x60) + 0x5a) - 1;
                    if (iVar32 < 4) {
                      iVar33 = 0;
                    }
                    else {
                      iVar33 = 0;
                      do {
                        iVar8 = iVar33 + iVar32 >> 1;
                        iVar11 = (uint)bVar9 - (uint)*(byte *)(lVar25 + (long)iVar8 * 4 + 2);
                        if (iVar11 < 0) {
                          iVar32 = iVar8;
                        }
                        else {
                          puVar34 = (undefined2 *)
                                    (lVar25 + ((long)((ulong)(uint)(iVar33 + iVar32) << 0x20) >>
                                              0x21) * 4);
                          if (iVar11 < (int)(uint)*(byte *)((long)puVar34 + 3)) goto LAB_02fb588c;
                          iVar33 = iVar8 + 1;
                        }
                      } while (3 < iVar32 - iVar33);
                    }
                    for (puVar34 = (undefined2 *)(lVar25 + (long)iVar33 * 4);
                        (iVar32 = (uint)bVar9 - (uint)*(byte *)(puVar34 + 1), iVar32 < 0 ||
                        ((int)(uint)*(byte *)((long)puVar34 + 3) <= iVar32)); puVar34 = puVar34 + 2)
                    {
                    }
LAB_02fb588c:
                    local_78 = **(undefined8 **)(lVar28 + 0xe0);
                    uStack_70 = (*(undefined8 **)(lVar28 + 0xe0))[1];
                    plVar26 = (long *)**(long **)(lVar28 + 0xc0);
                    (**(code **)(*plVar26 + 0x40))
                              (plVar26,*puVar34,6,*puVar29,puVar29[1],*(undefined8 *)(lVar28 + 0xd0)
                               ,uVar16,0,&local_78);
                    lVar25 = *(long *)(lVar28 + 0xc0);
                    if (*(long *)(lVar25 + 8) != 0) {
                      local_b0[0] = *(undefined2 *)(lVar25 + 0x10);
                      uVar31 = *(undefined8 *)(lVar25 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                           *(undefined4 *)(lVar25 + 0x1c);
                      *(undefined8 *)((ulong)local_b0 | 4) = uVar31;
                      puVar29 = *(undefined8 **)(lVar28 + 200);
                      local_a0 = *puVar29;
                      local_98 = puVar29[1];
                      local_90 = puVar29[2];
                      local_88 = *(undefined4 *)(puVar29 + 3);
                      local_e8[0] = (undefined2)local_78;
                      uVar31 = *(undefined8 *)((ulong)&local_78 | 4);
                      local_80 = 0;
                      *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                           *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                      *(undefined8 *)((ulong)local_e8 | 4) = uVar31;
                      local_d8 = **(undefined8 **)(lVar28 + 0xd8);
                      local_d0 = (*(undefined8 **)(lVar28 + 0xd8))[1];
                      local_c8 = *(undefined8 *)(lVar28 + 0xd0);
                      local_b8 = 0;
                      local_c0 = uVar16;
                      uVar30 = (**(code **)(**(long **)(lVar25 + 8) + 0x40))
                                         (*(long **)(lVar25 + 8),6,1,local_b0,local_e8);
                      if ((uVar30 & 1) == 0) goto LAB_02fb577c;
                    }
                  }
                  plVar26 = *(long **)(lVar28 + 0xe8);
                  iVar33 = (int)plVar26[1];
                  lVar25 = *plVar26;
                  iVar32 = iVar33 + 1;
                  if ((int)(*(uint *)((long)plVar26 + 0xc) & 0x3fffffff) <= iVar33) {
                    lVar25 = FUN_02f7f7b8(puVar24,iVar32);
                    *plVar26 = lVar25;
                    iVar33 = (int)plVar26[1];
                  }
                  *(uint *)(lVar25 + (long)iVar33 * 4) = uVar16;
                  *(int *)(plVar26 + 1) = iVar32;
                }
                else {
                  uVar30 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar25 + 0x18) * 0x40 +
                                       0x4020))
                                     (lVar25,uVar55 << (ulong)(*(uint *)(lVar28 + 0xa0) & 0x1f));
                  if ((uVar30 & 1) != 0) {
                    puVar29 = *(undefined8 **)(lVar28 + 0xd8);
                    goto LAB_02fb57bc;
                  }
                }
LAB_02fb577c:
                uVar55 = uVar55 + 1;
                uVar36 = uVar36 + 1;
              } while (uVar36 < uVar27);
              bVar1 = false;
              if (*(char *)(lVar28 + 0xf0) != '\0') {
                bVar1 = 0 < *(int *)(*(long *)(lVar28 + 0xe8) + 8);
              }
              *(byte *)(lVar28 + 0xf1) = *(byte *)(lVar28 + 0xf1) | bVar1;
            }
          }
LAB_02fb54c8:
          if ((int)param_2[1] <= (int)lVar23) {
            return;
          }
          iVar32 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar32;
          puVar29 = (undefined8 *)(*param_2 + (long)iVar32 * 0x30);
          uVar30 = (ulong)*(int *)(puVar29 + 4);
          fVar62 = (float)puVar29[1];
          fVar45 = (float)*puVar29;
          fVar61 = (float)((ulong)*puVar29 >> 0x20);
          fVar64 = (float)puVar29[3];
          fVar49 = (float)puVar29[2];
          fVar63 = (float)((ulong)puVar29[2] >> 0x20);
          bVar9 = *(byte *)((long)param_1 + uVar30 * 4 + *param_1 + 3);
        }
        uVar3 = (long)(int)uVar30 + 1;
        uVar55 = (int)uVar30 + (uVar55 & 0xfe);
        fVar41 = (fVar49 - fVar45) * 0.0044247787;
        fVar43 = (fVar63 - fVar61) * 0.0044247787;
        fVar44 = (fVar64 - fVar62) * 0.0044247787;
        pbVar35 = (byte *)((long)param_1 + uVar3 * 4 + *param_1);
        pbVar2 = (byte *)((long)param_1 + (long)(int)uVar55 * 4 + *param_1);
        bVar17 = pbVar35[1] >> 4;
        bVar18 = *pbVar35 >> 4;
        bVar9 = *pbVar35 & 0xf;
        bVar19 = pbVar35[2] >> 4;
        bVar20 = *pbVar2 >> 4;
        bVar10 = *pbVar2 & 0xf;
        bVar4 = pbVar35[1] & 0xf;
        bVar21 = pbVar2[1] >> 4;
        bVar5 = pbVar2[1] & 0xf;
        bVar6 = pbVar35[2] & 0xf;
        bVar22 = pbVar2[2] >> 4;
        bVar7 = pbVar2[2] & 0xf;
        fVar60 = fVar45 + (float)(byte)(bVar20 * bVar20) * fVar41;
        fVar47 = fVar61 + (float)(byte)(bVar17 * bVar17) * fVar43;
        fVar45 = fVar45 + (float)(byte)(bVar18 * bVar18) * fVar41;
        fVar37 = fVar61 + (float)(byte)(bVar21 * bVar21) * fVar43;
        fVar56 = fVar49 - (float)(byte)(bVar9 * bVar9) * fVar41;
        fVar59 = fVar49 - (float)(byte)(bVar10 * bVar10) * fVar41;
        fVar48 = fVar63 - (float)(byte)(bVar4 * bVar4) * fVar43;
        fVar41 = fVar63 - (float)(byte)(bVar5 * bVar5) * fVar43;
        fVar49 = fVar62 + (float)(byte)(bVar19 * bVar19) * fVar44;
        fVar52 = fVar64 - (float)(byte)(bVar6 * bVar6) * fVar44;
        fVar39 = fVar62 + (float)(byte)(bVar22 * bVar22) * fVar44;
        fVar43 = fVar64 - (float)(byte)(bVar7 * bVar7) * fVar44;
        auVar46._0_4_ = -(uint)(fVar60 <= *(float *)(param_3 + 4));
        auVar46._4_4_ = -(uint)(fVar37 <= *(float *)((long)param_3 + 0x24));
        auVar46._8_4_ = -(uint)(fVar39 <= *(float *)(param_3 + 5));
        auVar46._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
        auVar12._4_4_ = fVar47;
        auVar12._0_4_ = fVar45;
        auVar12._8_4_ = fVar49;
        auVar12._12_4_ = 0;
        auVar53 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar12,4);
        auVar13._4_4_ = fVar48;
        auVar13._0_4_ = fVar56;
        auVar13._8_4_ = fVar52;
        auVar13._12_4_ = 0;
        auVar51 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar13,4);
        auVar42._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar59);
        auVar42._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar41);
        auVar42._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar43);
        auVar42._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar38._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar56);
        auVar38._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar48);
        auVar38._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar52);
        auVar38._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar40._0_4_ = -(uint)(fVar45 <= *(float *)(param_3 + 4));
        auVar40._4_4_ = -(uint)(fVar47 <= *(float *)((long)param_3 + 0x24));
        auVar40._8_4_ = -(uint)(fVar49 <= *(float *)(param_3 + 5));
        auVar40._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
        auVar53 = auVar53 ^ (auVar53 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar40;
        uVar27 = CONCAT13((byte)((uint)auVar46._0_4_ >> 0x18) & (byte)((uint)auVar42._0_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar46._0_4_ >> 0x10) &
                                   (byte)((uint)auVar42._0_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar46._0_4_ >> 8) &
                                            (byte)((uint)auVar42._0_4_ >> 8),
                                            (byte)auVar46._0_4_ & (byte)auVar42._0_4_)));
        auVar50._0_8_ =
             CONCAT17((byte)((uint)auVar46._4_4_ >> 0x18) & (byte)((uint)auVar42._4_4_ >> 0x18),
                      CONCAT16((byte)((uint)auVar46._4_4_ >> 0x10) &
                               (byte)((uint)auVar42._4_4_ >> 0x10),
                               CONCAT15((byte)((uint)auVar46._4_4_ >> 8) &
                                        (byte)((uint)auVar42._4_4_ >> 8),
                                        CONCAT14((byte)auVar46._4_4_ & (byte)auVar42._4_4_,uVar27)))
                     );
        auVar50[8] = (byte)auVar46._8_4_ & (byte)auVar42._8_4_;
        auVar50[9] = (byte)((uint)auVar46._8_4_ >> 8) & (byte)((uint)auVar42._8_4_ >> 8);
        auVar50[10] = (byte)((uint)auVar46._8_4_ >> 0x10) & (byte)((uint)auVar42._8_4_ >> 0x10);
        auVar50[0xb] = (byte)((uint)auVar46._8_4_ >> 0x18) & (byte)((uint)auVar42._8_4_ >> 0x18);
        auVar51 = auVar51 ^ (auVar51 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar38;
        auVar15._4_4_ = fVar37;
        auVar15._0_4_ = fVar60;
        auVar15._8_4_ = fVar39;
        auVar15._12_4_ = 0;
        auVar54 = NEON_fmin(auVar53,auVar15,4);
        auVar14._4_4_ = fVar41;
        auVar14._0_4_ = fVar59;
        auVar14._8_4_ = fVar43;
        auVar14._12_4_ = 0;
        auVar58 = NEON_fmax(auVar51,auVar14,4);
        auVar58 = auVar58 ^ (auVar58 ^ auVar51) & auVar42;
        auVar54 = auVar54 ^ (auVar54 ^ auVar53) & auVar46;
        bVar9 = (CONCAT13((byte)((uint)auVar40._0_4_ >> 0x18) & (byte)((uint)auVar38._0_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar40._0_4_ >> 0x10) &
                                   (byte)((uint)auVar38._0_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar40._0_4_ >> 8) &
                                            (byte)((uint)auVar38._0_4_ >> 8),
                                            (byte)auVar40._0_4_ & (byte)auVar38._0_4_))) &
                 CONCAT13((byte)((uint)auVar40._4_4_ >> 0x18) & (byte)((uint)auVar38._4_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar40._4_4_ >> 0x10) &
                                   (byte)((uint)auVar38._4_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar40._4_4_ >> 8) &
                                            (byte)((uint)auVar38._4_4_ >> 8),
                                            (byte)auVar40._4_4_ & (byte)auVar38._4_4_))) &
                CONCAT13((byte)((uint)auVar40._8_4_ >> 0x18) & (byte)((uint)auVar38._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar40._8_4_ >> 0x10) &
                                  (byte)((uint)auVar38._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar40._8_4_ >> 8) &
                                           (byte)((uint)auVar38._8_4_ >> 8),
                                           (byte)auVar40._8_4_ & (byte)auVar38._8_4_)))) != 0 |
                ((uVar27 & (uint)((ulong)auVar50._0_8_ >> 0x20) & auVar50._8_4_) != 0) << 1;
        param_3[7] = auVar58._8_8_;
        param_3[6] = auVar58._0_8_;
        param_3[9] = auVar54._8_8_;
        param_3[8] = auVar54._0_8_;
        uVar30 = uVar3 & 0xffffffff;
        fVar61 = fVar47;
        fVar62 = fVar49;
        fVar49 = fVar56;
        fVar63 = fVar48;
        fVar64 = fVar52;
        if (bVar9 != 1) {
          if (bVar9 == 3) {
            iVar33 = (int)param_2[1];
            lVar28 = *param_2;
            iVar32 = iVar33 + 1;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar33) {
              lVar28 = FUN_02fb5338(puVar24,iVar32,lVar28,iVar33,(long)param_2 + 0xc);
              iVar33 = (int)param_2[1];
              *param_2 = lVar28;
            }
            puVar29 = (undefined8 *)(lVar28 + (long)iVar33 * 0x30);
            *(int *)(param_2 + 1) = iVar32;
            uVar30 = uVar3 & 0xffffffff;
            *(uint *)(puVar29 + 4) = uVar55;
            puVar29[1] = (ulong)(uint)fVar39;
            *puVar29 = CONCAT44(fVar37,fVar60);
            puVar29[3] = (ulong)(uint)fVar43;
            puVar29[2] = CONCAT44(fVar41,fVar59);
            bVar9 = pbVar35[3];
            goto joined_r0x02fb549c;
          }
          if (bVar9 != 2) goto LAB_02fb54c8;
          uVar30 = (ulong)uVar55;
          pbVar35 = pbVar2;
          fVar45 = fVar60;
          fVar61 = fVar37;
          fVar62 = fVar39;
          fVar49 = fVar59;
          fVar63 = fVar41;
          fVar64 = fVar43;
        }
        bVar9 = pbVar35[3];
      } while( true );
    }
  }
  return;
}


