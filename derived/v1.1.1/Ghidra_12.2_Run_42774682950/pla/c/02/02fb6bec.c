/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb6bec; name: FUN_02fb6bec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02fb6bec(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  undefined *puVar23;
  bool bVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined4 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  int iVar37;
  undefined2 *puVar38;
  uint uVar39;
  byte *pbVar40;
  undefined8 *puVar41;
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar48;
  float fVar49;
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  float fVar61;
  undefined1 auVar62 [12];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if ((int)param_1[1] != 0) {
    lVar22 = param_2[1];
    fVar67 = (float)param_1[3];
    fVar42 = (float)((ulong)param_1[3] >> 0x20);
    uVar33 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar50 = (float)uVar33;
    fVar66 = (float)((ulong)uVar33 >> 0x20);
    fVar69 = (float)param_1[5];
    fVar46 = (float)((ulong)param_1[5] >> 0x20);
    uVar33 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar54 = (float)uVar33;
    fVar68 = (float)((ulong)uVar33 >> 0x20);
    lVar28 = *param_1;
    auVar63._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar54);
    auVar63._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar68);
    auVar63._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar69);
    auVar63._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= fVar46);
    auVar58._12_4_ = fVar46;
    auVar58._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar58 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar58,4);
    auVar59._0_4_ = -(uint)(fVar50 <= *(float *)(param_3 + 4));
    auVar59._4_4_ = -(uint)(fVar66 <= *(float *)((long)param_3 + 0x24));
    auVar59._8_4_ = -(uint)(fVar67 <= *(float *)(param_3 + 5));
    auVar59._12_4_ = -(uint)(fVar42 <= *(float *)((long)param_3 + 0x2c));
    uVar60 = CONCAT13((byte)((uint)auVar59._0_4_ >> 0x18) & (byte)((uint)auVar63._0_4_ >> 0x18),
                      CONCAT12((byte)((uint)auVar59._0_4_ >> 0x10) &
                               (byte)((uint)auVar63._0_4_ >> 0x10),
                               CONCAT11((byte)((uint)auVar59._0_4_ >> 8) &
                                        (byte)((uint)auVar63._0_4_ >> 8),
                                        (byte)auVar59._0_4_ & (byte)auVar63._0_4_)));
    auVar62._0_8_ =
         CONCAT17((byte)((uint)auVar59._4_4_ >> 0x18) & (byte)((uint)auVar63._4_4_ >> 0x18),
                  CONCAT16((byte)((uint)auVar59._4_4_ >> 0x10) & (byte)((uint)auVar63._4_4_ >> 0x10)
                           ,CONCAT15((byte)((uint)auVar59._4_4_ >> 8) &
                                     (byte)((uint)auVar63._4_4_ >> 8),
                                     CONCAT14((byte)auVar59._4_4_ & (byte)auVar63._4_4_,uVar60))));
    auVar62[8] = (byte)auVar59._8_4_ & (byte)auVar63._8_4_;
    auVar62[9] = (byte)((uint)auVar59._8_4_ >> 8) & (byte)((uint)auVar63._8_4_ >> 8);
    auVar62[10] = (byte)((uint)auVar59._8_4_ >> 0x10) & (byte)((uint)auVar63._8_4_ >> 0x10);
    auVar62[0xb] = (byte)((uint)auVar59._8_4_ >> 0x18) & (byte)((uint)auVar63._8_4_ >> 0x18);
    auVar56._12_4_ = fVar42;
    auVar56._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar56 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar56,4);
    auVar58 = auVar58 ^ (auVar58 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar63;
    auVar56 = auVar56 ^ (auVar56 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar59;
    param_3[7] = auVar58._8_8_;
    param_3[6] = auVar58._0_8_;
    param_3[9] = auVar56._8_8_;
    param_3[8] = auVar56._0_8_;
    puVar23 = PTR_PTR_0434a080;
    if ((uVar60 & (uint)((ulong)auVar62._0_8_ >> 0x20) & auVar62._8_4_) != 0) {
      uVar32 = 0;
      puVar41 = (undefined8 *)((ulong)&local_100 | 4);
      bVar8 = *(byte *)((long)param_1 + lVar28 + 3);
joined_r0x02fb6cdc:
      do {
        while (uVar60 = (uint)bVar8, (bVar8 & 1) == 0) {
          lVar28 = *param_3;
          if (*(char *)(lVar28 + 0xf1) == '\0') {
            bVar8 = bVar8 >> 1;
            lVar25 = *(long *)(lVar28 + 0x68) + (ulong)bVar8 * 4;
            bVar9 = *(byte *)(lVar25 + 3);
            if ((uint)*(byte *)(lVar25 + 1) == (uint)bVar9) {
              if (*(byte *)(lVar25 + 2) - 3 < 2) goto LAB_02fb6fa8;
            }
            else {
              if ((uint)*(byte *)(lVar25 + 2) == (uint)bVar9) {
LAB_02fb6fa8:
                uVar60 = uVar60 & 0xfe | *(int *)(lVar28 + 0x94) << 8;
                uVar27 = 1;
              }
              else {
                uVar60 = uVar60 & 0xfe | *(int *)(lVar28 + 0x94) << 8;
                uVar27 = 1;
                if ((*(byte *)(lVar28 + 0x58) & *(byte *)(lVar25 + 1)) <= bVar9) {
                  uVar27 = 2;
                }
              }
              uVar39 = 0;
              do {
                plVar30 = *(long **)(lVar28 + 0xd8);
                lVar25 = plVar30[5];
                if (lVar25 == 0) {
LAB_02fb7004:
                  uVar15 = (&DAT_03aa74b0)[*(int *)((long)plVar30 + 0x1c)] & *(uint *)(plVar30 + 3)
                           | (uVar60 + 1 <<
                             (ulong)(-(*(int *)(*(long *)(lVar28 + 0x50) + 0x34) +
                                      *(int *)((long)plVar30 + 0x1c)) & 0x1f)) - 1;
                  if (**(long **)(lVar28 + 0xc0) == 0) {
                    lVar25 = *plVar30;
                    plVar30 = *(long **)(lVar28 + 0xe8);
                    lVar34 = **(long **)(lVar28 + 200);
                    uVar31 = 0xffffff;
                    local_b0 = 0xffff;
                    local_ac = 0;
                    local_88 = 0xffff;
                    local_84 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    uStack_a8 = 0;
                    uStack_a4 = 0;
                    if (lVar34 == 0) {
                      local_c8 = 0xffffffffffffffff;
                    }
                    else {
                      local_c8 = *(undefined8 *)(lVar34 + 0xb0);
                      uVar31 = *(undefined4 *)(lVar34 + 0x50);
                    }
                    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar31);
                    if (lVar25 == 0) {
                      local_98 = 0xffffff;
                      local_a0 = 0xffffffffffffffff;
                    }
                    else {
                      local_a0 = *(undefined8 *)(lVar25 + 0xb0);
                      local_98 = *(undefined4 *)(lVar25 + 0x50);
                    }
                  }
                  else {
                    lVar25 = *(long *)(lVar28 + 0x88);
                    iVar35 = *(byte *)(*(long *)(lVar28 + 0x60) + 0x5a) - 1;
                    if (iVar35 < 4) {
                      iVar37 = 0;
                    }
                    else {
                      iVar37 = 0;
                      do {
                        iVar7 = iVar37 + iVar35 >> 1;
                        iVar10 = (uint)bVar8 - (uint)*(byte *)(lVar25 + (long)iVar7 * 4 + 2);
                        if (iVar10 < 0) {
                          iVar35 = iVar7;
                        }
                        else {
                          puVar38 = (undefined2 *)
                                    (lVar25 + ((long)((ulong)(uint)(iVar37 + iVar35) << 0x20) >>
                                              0x21) * 4);
                          if (iVar10 < (int)(uint)*(byte *)((long)puVar38 + 3)) goto LAB_02fb716c;
                          iVar37 = iVar7 + 1;
                        }
                      } while (3 < iVar35 - iVar37);
                    }
                    for (puVar38 = (undefined2 *)(lVar25 + (long)iVar37 * 4);
                        (iVar35 = (uint)bVar8 - (uint)*(byte *)(puVar38 + 1), iVar35 < 0 ||
                        ((int)(uint)*(byte *)((long)puVar38 + 3) <= iVar35)); puVar38 = puVar38 + 2)
                    {
                    }
LAB_02fb716c:
                    local_100 = **(undefined8 **)(lVar28 + 0xe0);
                    uStack_f8 = (*(undefined8 **)(lVar28 + 0xe0))[1];
                    plVar26 = (long *)**(long **)(lVar28 + 0xc0);
                    (**(code **)(*plVar26 + 0x40))
                              (plVar26,*puVar38,6,*plVar30,plVar30[1],*(undefined8 *)(lVar28 + 0xd0)
                               ,uVar15,0,&local_100);
                    lVar25 = *(long *)(lVar28 + 0xc0);
                    if (*(long *)(lVar25 + 8) != 0) {
                      local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar25 + 0x10));
                      uVar33 = *(undefined8 *)(lVar25 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                           *(undefined4 *)(lVar25 + 0x1c);
                      *(undefined8 *)((ulong)&local_f0 | 4) = uVar33;
                      puVar29 = *(undefined8 **)(lVar28 + 200);
                      local_e0 = *puVar29;
                      local_d8 = puVar29[1];
                      local_d0 = puVar29[2];
                      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar29 + 3));
                      local_138[0] = (undefined2)local_100;
                      uVar33 = *puVar41;
                      local_c0 = 0;
                      *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) =
                           *(undefined4 *)(puVar41 + 1);
                      *(undefined8 *)((ulong)local_138 | 4) = uVar33;
                      local_128 = **(undefined8 **)(lVar28 + 0xd8);
                      local_120 = (*(undefined8 **)(lVar28 + 0xd8))[1];
                      local_118 = *(undefined8 *)(lVar28 + 0xd0);
                      local_108 = 0;
                      local_110 = uVar15;
                      uVar32 = (**(code **)(**(long **)(lVar25 + 8) + 0x40))
                                         (*(long **)(lVar25 + 8),6,1,&local_f0,local_138);
                      if ((uVar32 & 1) == 0) goto LAB_02fb6fc4;
                      lVar25 = *(long *)(lVar28 + 0xc0);
                    }
                    plVar30 = *(long **)(lVar28 + 0xe8);
                    lVar36 = **(long **)(lVar28 + 200);
                    lVar34 = **(long **)(lVar28 + 0xd8);
                    uVar31 = 0xffffff;
                    if (lVar36 == 0) {
                      local_c8 = 0xffffffffffffffff;
                    }
                    else {
                      local_c8 = *(undefined8 *)(lVar36 + 0xb0);
                      uVar31 = *(undefined4 *)(lVar36 + 0x50);
                    }
                    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar31);
                    local_b0 = *(undefined2 *)(lVar25 + 0x10);
                    uStack_a4 = *(undefined4 *)(lVar25 + 0x1c);
                    local_ac = (undefined4)*(undefined8 *)(lVar25 + 0x14);
                    uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar25 + 0x14) >> 0x20);
                    if (lVar34 == 0) {
                      local_98 = 0xffffff;
                      local_a0 = 0xffffffffffffffff;
                    }
                    else {
                      local_a0 = *(undefined8 *)(lVar34 + 0xb0);
                      local_98 = *(undefined4 *)(lVar34 + 0x50);
                    }
                    uStack_7c = *(undefined4 *)(puVar41 + 1);
                    local_88 = (undefined2)local_100;
                    local_84 = (undefined4)*puVar41;
                    uStack_80 = (undefined4)((ulong)*puVar41 >> 0x20);
                  }
                  uStack_74 = 0;
                  local_78 = 6;
                  local_8c = 0xf;
                  local_b4 = 0xf;
                  local_b8 = 0xffffffff;
                  local_d0 = local_d0 & 0xffffffff00000000;
                  local_d8 = 0;
                  local_e0 = 0;
                  uStack_e8 = 0;
                  local_f0 = 0;
                  local_90 = uVar15;
                  (**(code **)(*plVar30 + 0x28))(plVar30,&local_f0);
                }
                else {
                  uVar32 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar25 + 0x18) * 0x40 +
                                       0x4020))
                                     (lVar25,uVar60 << (ulong)(*(uint *)(lVar28 + 0xa0) & 0x1f));
                  if ((uVar32 & 1) != 0) {
                    plVar30 = *(long **)(lVar28 + 0xd8);
                    goto LAB_02fb7004;
                  }
                }
LAB_02fb6fc4:
                uVar60 = uVar60 + 1;
                uVar39 = uVar39 + 1;
              } while (uVar39 < uVar27);
              bVar24 = false;
              if (*(char *)(lVar28 + 0xf0) != '\0') {
                bVar24 = *(int *)(*(long *)(lVar28 + 0xe8) + 0xc) != 0;
              }
              *(byte *)(lVar28 + 0xf1) = *(byte *)(lVar28 + 0xf1) | bVar24;
            }
          }
LAB_02fb6d0c:
          if ((int)param_2[1] <= (int)lVar22) {
            return;
          }
          iVar35 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar35;
          puVar29 = (undefined8 *)(*param_2 + (long)iVar35 * 0x30);
          uVar32 = (ulong)*(int *)(puVar29 + 4);
          fVar67 = (float)puVar29[1];
          fVar50 = (float)*puVar29;
          fVar66 = (float)((ulong)*puVar29 >> 0x20);
          fVar69 = (float)puVar29[3];
          fVar54 = (float)puVar29[2];
          fVar68 = (float)((ulong)puVar29[2] >> 0x20);
          bVar8 = *(byte *)((long)param_1 + uVar32 * 4 + *param_1 + 3);
        }
        uVar2 = (long)(int)uVar32 + 1;
        uVar60 = (int)uVar32 + (uVar60 & 0xfe);
        fVar46 = (fVar54 - fVar50) * 0.0044247787;
        fVar48 = (fVar68 - fVar66) * 0.0044247787;
        fVar49 = (fVar69 - fVar67) * 0.0044247787;
        pbVar40 = (byte *)((long)param_1 + uVar2 * 4 + *param_1);
        pbVar1 = (byte *)((long)param_1 + (long)(int)uVar60 * 4 + *param_1);
        bVar16 = pbVar40[1] >> 4;
        bVar17 = *pbVar40 >> 4;
        bVar8 = *pbVar40 & 0xf;
        bVar18 = pbVar40[2] >> 4;
        bVar19 = *pbVar1 >> 4;
        bVar9 = *pbVar1 & 0xf;
        bVar3 = pbVar40[1] & 0xf;
        bVar20 = pbVar1[1] >> 4;
        bVar4 = pbVar1[1] & 0xf;
        bVar5 = pbVar40[2] & 0xf;
        bVar21 = pbVar1[2] >> 4;
        bVar6 = pbVar1[2] & 0xf;
        fVar65 = fVar50 + (float)(byte)(bVar19 * bVar19) * fVar46;
        fVar52 = fVar66 + (float)(byte)(bVar16 * bVar16) * fVar48;
        fVar50 = fVar50 + (float)(byte)(bVar17 * bVar17) * fVar46;
        fVar42 = fVar66 + (float)(byte)(bVar20 * bVar20) * fVar48;
        fVar61 = fVar54 - (float)(byte)(bVar8 * bVar8) * fVar46;
        fVar64 = fVar54 - (float)(byte)(bVar9 * bVar9) * fVar46;
        fVar53 = fVar68 - (float)(byte)(bVar3 * bVar3) * fVar48;
        fVar46 = fVar68 - (float)(byte)(bVar4 * bVar4) * fVar48;
        fVar54 = fVar67 + (float)(byte)(bVar18 * bVar18) * fVar49;
        fVar57 = fVar69 - (float)(byte)(bVar5 * bVar5) * fVar49;
        fVar44 = fVar67 + (float)(byte)(bVar21 * bVar21) * fVar49;
        fVar48 = fVar69 - (float)(byte)(bVar6 * bVar6) * fVar49;
        auVar51._0_4_ = -(uint)(fVar65 <= *(float *)(param_3 + 4));
        auVar51._4_4_ = -(uint)(fVar42 <= *(float *)((long)param_3 + 0x24));
        auVar51._8_4_ = -(uint)(fVar44 <= *(float *)(param_3 + 5));
        auVar51._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
        auVar11._4_4_ = fVar52;
        auVar11._0_4_ = fVar50;
        auVar11._8_4_ = fVar54;
        auVar11._12_4_ = 0;
        auVar58 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar11,4);
        auVar12._4_4_ = fVar53;
        auVar12._0_4_ = fVar61;
        auVar12._8_4_ = fVar57;
        auVar12._12_4_ = 0;
        auVar56 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar12,4);
        auVar47._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar64);
        auVar47._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar46);
        auVar47._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar48);
        auVar47._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar43._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar61);
        auVar43._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar53);
        auVar43._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar57);
        auVar43._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar45._0_4_ = -(uint)(fVar50 <= *(float *)(param_3 + 4));
        auVar45._4_4_ = -(uint)(fVar52 <= *(float *)((long)param_3 + 0x24));
        auVar45._8_4_ = -(uint)(fVar54 <= *(float *)(param_3 + 5));
        auVar45._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
        auVar58 = auVar58 ^ (auVar58 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar45;
        uVar27 = CONCAT13((byte)((uint)auVar51._0_4_ >> 0x18) & (byte)((uint)auVar47._0_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar51._0_4_ >> 0x10) &
                                   (byte)((uint)auVar47._0_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar51._0_4_ >> 8) &
                                            (byte)((uint)auVar47._0_4_ >> 8),
                                            (byte)auVar51._0_4_ & (byte)auVar47._0_4_)));
        auVar55._0_8_ =
             CONCAT17((byte)((uint)auVar51._4_4_ >> 0x18) & (byte)((uint)auVar47._4_4_ >> 0x18),
                      CONCAT16((byte)((uint)auVar51._4_4_ >> 0x10) &
                               (byte)((uint)auVar47._4_4_ >> 0x10),
                               CONCAT15((byte)((uint)auVar51._4_4_ >> 8) &
                                        (byte)((uint)auVar47._4_4_ >> 8),
                                        CONCAT14((byte)auVar51._4_4_ & (byte)auVar47._4_4_,uVar27)))
                     );
        auVar55[8] = (byte)auVar51._8_4_ & (byte)auVar47._8_4_;
        auVar55[9] = (byte)((uint)auVar51._8_4_ >> 8) & (byte)((uint)auVar47._8_4_ >> 8);
        auVar55[10] = (byte)((uint)auVar51._8_4_ >> 0x10) & (byte)((uint)auVar47._8_4_ >> 0x10);
        auVar55[0xb] = (byte)((uint)auVar51._8_4_ >> 0x18) & (byte)((uint)auVar47._8_4_ >> 0x18);
        auVar56 = auVar56 ^ (auVar56 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar43;
        auVar14._4_4_ = fVar42;
        auVar14._0_4_ = fVar65;
        auVar14._8_4_ = fVar44;
        auVar14._12_4_ = 0;
        auVar59 = NEON_fmin(auVar58,auVar14,4);
        auVar13._4_4_ = fVar46;
        auVar13._0_4_ = fVar64;
        auVar13._8_4_ = fVar48;
        auVar13._12_4_ = 0;
        auVar63 = NEON_fmax(auVar56,auVar13,4);
        auVar63 = auVar63 ^ (auVar63 ^ auVar56) & auVar47;
        auVar59 = auVar59 ^ (auVar59 ^ auVar58) & auVar51;
        bVar8 = (CONCAT13((byte)((uint)auVar45._0_4_ >> 0x18) & (byte)((uint)auVar43._0_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar45._0_4_ >> 0x10) &
                                   (byte)((uint)auVar43._0_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar45._0_4_ >> 8) &
                                            (byte)((uint)auVar43._0_4_ >> 8),
                                            (byte)auVar45._0_4_ & (byte)auVar43._0_4_))) &
                 CONCAT13((byte)((uint)auVar45._4_4_ >> 0x18) & (byte)((uint)auVar43._4_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar45._4_4_ >> 0x10) &
                                   (byte)((uint)auVar43._4_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar45._4_4_ >> 8) &
                                            (byte)((uint)auVar43._4_4_ >> 8),
                                            (byte)auVar45._4_4_ & (byte)auVar43._4_4_))) &
                CONCAT13((byte)((uint)auVar45._8_4_ >> 0x18) & (byte)((uint)auVar43._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar45._8_4_ >> 0x10) &
                                  (byte)((uint)auVar43._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar45._8_4_ >> 8) &
                                           (byte)((uint)auVar43._8_4_ >> 8),
                                           (byte)auVar45._8_4_ & (byte)auVar43._8_4_)))) != 0 |
                ((uVar27 & (uint)((ulong)auVar55._0_8_ >> 0x20) & auVar55._8_4_) != 0) << 1;
        param_3[7] = auVar63._8_8_;
        param_3[6] = auVar63._0_8_;
        param_3[9] = auVar59._8_8_;
        param_3[8] = auVar59._0_8_;
        uVar32 = uVar2 & 0xffffffff;
        fVar66 = fVar52;
        fVar67 = fVar54;
        fVar54 = fVar61;
        fVar68 = fVar53;
        fVar69 = fVar57;
        if (bVar8 != 1) {
          if (bVar8 == 3) {
            iVar37 = (int)param_2[1];
            lVar28 = *param_2;
            iVar35 = iVar37 + 1;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar37) {
              lVar28 = FUN_02fb5338(puVar23,iVar35,lVar28,iVar37,(long)param_2 + 0xc);
              iVar37 = (int)param_2[1];
              *param_2 = lVar28;
            }
            puVar29 = (undefined8 *)(lVar28 + (long)iVar37 * 0x30);
            *(int *)(param_2 + 1) = iVar35;
            uVar32 = uVar2 & 0xffffffff;
            *(uint *)(puVar29 + 4) = uVar60;
            puVar29[1] = (ulong)(uint)fVar44;
            *puVar29 = CONCAT44(fVar42,fVar65);
            puVar29[3] = (ulong)(uint)fVar48;
            puVar29[2] = CONCAT44(fVar46,fVar64);
            bVar8 = pbVar40[3];
            goto joined_r0x02fb6cdc;
          }
          if (bVar8 != 2) goto LAB_02fb6d0c;
          uVar32 = (ulong)uVar60;
          pbVar40 = pbVar1;
          fVar50 = fVar65;
          fVar66 = fVar42;
          fVar67 = fVar44;
          fVar54 = fVar64;
          fVar68 = fVar46;
          fVar69 = fVar48;
        }
        bVar8 = pbVar40[3];
      } while( true );
    }
  }
  return;
}


