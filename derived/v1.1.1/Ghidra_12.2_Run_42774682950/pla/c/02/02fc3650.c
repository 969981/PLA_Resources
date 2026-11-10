/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc3650; name: FUN_02fc3650
 */


void FUN_02fc3650(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  long lVar18;
  undefined *puVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  long *plVar23;
  ulong uVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  byte *pbVar28;
  long *plVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined4 uVar33;
  long lVar34;
  byte *pbVar35;
  long *plVar36;
  undefined8 *puVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar48;
  float fVar49;
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar51 [12];
  undefined1 auVar52 [16];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint uVar56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
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
    lVar18 = param_2[1];
    fVar62 = (float)param_1[3];
    fVar46 = (float)((ulong)param_1[3] >> 0x20);
    uVar30 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar60 = (float)uVar30;
    fVar61 = (float)((ulong)uVar30 >> 0x20);
    fVar65 = (float)param_1[5];
    fVar48 = (float)((ulong)param_1[5] >> 0x20);
    uVar30 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar42 = (float)uVar30;
    fVar44 = (float)((ulong)uVar30 >> 0x20);
    auVar58._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar42);
    auVar58._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar44);
    auVar58._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar65);
    auVar58._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= fVar48);
    lVar27 = *param_1;
    auVar59._0_4_ = -(uint)(fVar60 <= *(float *)(param_3 + 4));
    auVar59._4_4_ = -(uint)(fVar61 <= *(float *)((long)param_3 + 0x24));
    auVar59._8_4_ = -(uint)(fVar62 <= *(float *)(param_3 + 5));
    auVar59._12_4_ = -(uint)(fVar46 <= *(float *)((long)param_3 + 0x2c));
    uVar56 = CONCAT13((byte)((uint)auVar59._0_4_ >> 0x18) & (byte)((uint)auVar58._0_4_ >> 0x18),
                      CONCAT12((byte)((uint)auVar59._0_4_ >> 0x10) &
                               (byte)((uint)auVar58._0_4_ >> 0x10),
                               CONCAT11((byte)((uint)auVar59._0_4_ >> 8) &
                                        (byte)((uint)auVar58._0_4_ >> 8),
                                        (byte)auVar59._0_4_ & (byte)auVar58._0_4_)));
    auVar57._0_8_ =
         CONCAT17((byte)((uint)auVar59._4_4_ >> 0x18) & (byte)((uint)auVar58._4_4_ >> 0x18),
                  CONCAT16((byte)((uint)auVar59._4_4_ >> 0x10) & (byte)((uint)auVar58._4_4_ >> 0x10)
                           ,CONCAT15((byte)((uint)auVar59._4_4_ >> 8) &
                                     (byte)((uint)auVar58._4_4_ >> 8),
                                     CONCAT14((byte)auVar59._4_4_ & (byte)auVar58._4_4_,uVar56))));
    auVar57[8] = (byte)auVar59._8_4_ & (byte)auVar58._8_4_;
    auVar57[9] = (byte)((uint)auVar59._8_4_ >> 8) & (byte)((uint)auVar58._8_4_ >> 8);
    auVar57[10] = (byte)((uint)auVar59._8_4_ >> 0x10) & (byte)((uint)auVar58._8_4_ >> 0x10);
    auVar57[0xb] = (byte)((uint)auVar59._8_4_ >> 0x18) & (byte)((uint)auVar58._8_4_ >> 0x18);
    auVar54._12_4_ = fVar46;
    auVar54._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar52 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar54,4);
    auVar55._12_4_ = fVar48;
    auVar55._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar54 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar55,4);
    auVar54 = auVar54 ^ (auVar54 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar58;
    auVar52 = auVar52 ^ (auVar52 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar59;
    param_3[7] = auVar54._8_8_;
    param_3[6] = auVar54._0_8_;
    param_3[9] = auVar52._8_8_;
    param_3[8] = auVar52._0_8_;
    puVar19 = PTR_PTR_0434a080;
    if ((uVar56 & (uint)((ulong)auVar57._0_8_ >> 0x20) & auVar57._8_4_) != 0) {
      puVar37 = (undefined8 *)((ulong)&local_100 | 4);
      uVar24 = 0;
      pbVar35 = (byte *)(lVar27 + (long)param_1);
LAB_02fc374c:
      bVar7 = pbVar35[3];
      if ((char)bVar7 < '\0') goto LAB_02fc37c4;
      plVar36 = (long *)*param_3;
      uVar56 = (uint)CONCAT12(bVar7,*(undefined2 *)(pbVar35 + 4));
      uVar20 = (**(code **)(**(long **)(*plVar36 + 0x50) + 0x70))
                         (*(long **)(*plVar36 + 0x50),uVar56);
      uVar21 = (**(code **)(**(long **)(*plVar36 + 0x50) + 0x78))
                         (*(long **)(*plVar36 + 0x50),uVar56);
      iVar22 = (**(code **)(**(long **)(*plVar36 + 0x50) + 0x20))();
      if ((int)uVar56 < iVar22) {
        uVar26 = 1;
      }
      else {
        uVar26 = 1;
        if (((uVar21 ^ 0xffffffff) & 7) != 0) {
          uVar26 = 2;
        }
      }
      uVar21 = 0;
      do {
        plVar29 = (long *)plVar36[4];
        uVar11 = ((uVar21 | uVar56 << 1) + 1 <<
                 (ulong)(-((uint)*(byte *)(*plVar36 + 0x1c) + *(int *)((long)plVar29 + 0x1c)) & 0x1f
                        )) - 1 |
                 (&DAT_03aa74b0)[*(int *)((long)plVar29 + 0x1c)] & *(uint *)(plVar29 + 3);
        if (*(long *)plVar36[2] == 0) {
          lVar27 = *plVar29;
          plVar29 = (long *)plVar36[6];
          lVar32 = *(long *)plVar36[3];
          uVar33 = 0xffffff;
          local_b0 = 0xffff;
          local_ac = 0;
          local_88 = 0xffff;
          local_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          if (lVar32 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar32 + 0xb0);
            uVar33 = *(undefined4 *)(lVar32 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar33);
          if (lVar27 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar27 + 0xb0);
            local_98 = *(undefined4 *)(lVar27 + 0x50);
          }
        }
        else {
          local_100 = *(undefined8 *)plVar36[5];
          uStack_f8 = ((undefined8 *)plVar36[5])[1];
          plVar23 = *(long **)plVar36[2];
          (**(code **)(*plVar23 + 0x40))
                    (plVar23,uVar20,6,*plVar29,plVar29[1],*plVar36,uVar11,0,&local_100);
          lVar27 = plVar36[2];
          if (*(long *)(lVar27 + 8) != 0) {
            local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar27 + 0x10));
            uVar30 = *(undefined8 *)(lVar27 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                 *(undefined4 *)(lVar27 + 0x1c);
            *(undefined8 *)((ulong)&local_f0 | 4) = uVar30;
            puVar31 = (undefined8 *)plVar36[3];
            local_e0 = *puVar31;
            local_d8 = puVar31[1];
            local_d0 = puVar31[2];
            local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar31 + 3));
            local_138[0] = (undefined2)local_100;
            uVar30 = *puVar37;
            local_c0 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) = *(undefined4 *)(puVar37 + 1)
            ;
            *(undefined8 *)((ulong)local_138 | 4) = uVar30;
            local_128 = *(undefined8 *)plVar36[4];
            local_120 = ((undefined8 *)plVar36[4])[1];
            local_118 = *plVar36;
            local_108 = 0;
            local_110 = uVar11;
            uVar24 = (**(code **)(**(long **)(lVar27 + 8) + 0x40))
                               (*(long **)(lVar27 + 8),6,1,&local_f0,local_138);
            if ((uVar24 & 1) == 0) break;
            lVar27 = plVar36[2];
          }
          plVar29 = (long *)plVar36[6];
          lVar34 = *(long *)plVar36[3];
          lVar32 = *(long *)plVar36[4];
          uVar33 = 0xffffff;
          if (lVar34 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar34 + 0xb0);
            uVar33 = *(undefined4 *)(lVar34 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar33);
          local_b0 = *(undefined2 *)(lVar27 + 0x10);
          uStack_a4 = *(undefined4 *)(lVar27 + 0x1c);
          local_ac = (undefined4)*(undefined8 *)(lVar27 + 0x14);
          uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x14) >> 0x20);
          if (lVar32 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar32 + 0xb0);
            local_98 = *(undefined4 *)(lVar32 + 0x50);
          }
          uStack_7c = *(undefined4 *)(puVar37 + 1);
          local_88 = (undefined2)local_100;
          local_84 = (undefined4)*puVar37;
          uStack_80 = (undefined4)((ulong)*puVar37 >> 0x20);
        }
        local_d0 = local_d0 & 0xffffffff00000000;
        uStack_74 = 0;
        local_78 = 6;
        local_8c = 0xf;
        local_b4 = 0xf;
        local_b8 = 0xffffffff;
        local_d8 = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        local_90 = uVar11;
        (**(code **)(*plVar29 + 0x28))(plVar29,&local_f0);
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar26);
      goto LAB_02fc3cf8;
    }
  }
  return;
LAB_02fc37c4:
  uVar1 = (long)(int)uVar24 + 1;
  uVar56 = (int)uVar24 + ((uint)*(ushort *)(pbVar35 + 4) | (bVar7 & 0x7f) << 0x10) * 2;
  fVar46 = (fVar42 - fVar60) * 0.0044247787;
  fVar48 = (fVar44 - fVar61) * 0.0044247787;
  fVar49 = (fVar65 - fVar62) * 0.0044247787;
  pbVar35 = (byte *)((long)param_1 + uVar1 * 6 + *param_1);
  pbVar28 = (byte *)((long)param_1 + (long)(int)uVar56 * 6 + *param_1);
  bVar12 = pbVar35[1] >> 4;
  bVar13 = *pbVar35 >> 4;
  bVar7 = *pbVar35 & 0xf;
  bVar14 = pbVar35[2] >> 4;
  bVar2 = pbVar35[2] & 0xf;
  bVar3 = pbVar35[1] & 0xf;
  bVar15 = *pbVar28 >> 4;
  bVar4 = *pbVar28 & 0xf;
  bVar16 = pbVar28[1] >> 4;
  bVar5 = pbVar28[1] & 0xf;
  bVar17 = pbVar28[2] >> 4;
  bVar6 = pbVar28[2] & 0xf;
  fVar50 = fVar60 + (float)(byte)(bVar13 * bVar13) * fVar46;
  fVar41 = fVar60 + (float)(byte)(bVar15 * bVar15) * fVar46;
  fVar64 = fVar42 - (float)(byte)(bVar7 * bVar7) * fVar46;
  fVar63 = fVar42 - (float)(byte)(bVar4 * bVar4) * fVar46;
  fVar42 = fVar61 + (float)(byte)(bVar12 * bVar12) * fVar48;
  fVar46 = fVar61 + (float)(byte)(bVar16 * bVar16) * fVar48;
  fVar43 = fVar44 - (float)(byte)(bVar3 * bVar3) * fVar48;
  fVar48 = fVar44 - (float)(byte)(bVar5 * bVar5) * fVar48;
  fVar44 = fVar62 + (float)(byte)(bVar14 * bVar14) * fVar49;
  fVar53 = fVar65 - (float)(byte)(bVar2 * bVar2) * fVar49;
  fVar39 = fVar62 + (float)(byte)(bVar17 * bVar17) * fVar49;
  fVar49 = fVar65 - (float)(byte)(bVar6 * bVar6) * fVar49;
  auVar47._0_4_ = -(uint)(fVar50 <= *(float *)(param_3 + 4));
  auVar47._4_4_ = -(uint)(fVar42 <= *(float *)((long)param_3 + 0x24));
  auVar47._8_4_ = -(uint)(fVar44 <= *(float *)(param_3 + 5));
  auVar47._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
  auVar52._4_4_ = fVar42;
  auVar52._0_4_ = fVar50;
  auVar52._8_4_ = fVar44;
  auVar52._12_4_ = 0;
  auVar59 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar52,4);
  auVar45._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar64);
  auVar45._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar43);
  auVar45._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar53);
  auVar45._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
  auVar9._4_4_ = fVar43;
  auVar9._0_4_ = fVar64;
  auVar9._8_4_ = fVar53;
  auVar9._12_4_ = 0;
  auVar58 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar9,4);
  auVar58 = auVar58 ^ (auVar58 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar45;
  auVar59 = auVar59 ^ (auVar59 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar47;
  auVar38._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar63);
  auVar38._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar48);
  auVar38._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar49);
  auVar38._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
  auVar40._0_4_ = -(uint)(fVar41 <= *(float *)(param_3 + 4));
  auVar40._4_4_ = -(uint)(fVar46 <= *(float *)((long)param_3 + 0x24));
  auVar40._8_4_ = -(uint)(fVar39 <= *(float *)(param_3 + 5));
  auVar40._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
  uVar21 = CONCAT13((byte)((uint)auVar40._0_4_ >> 0x18) & (byte)((uint)auVar38._0_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar40._0_4_ >> 0x10) &
                             (byte)((uint)auVar38._0_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar40._0_4_ >> 8) &
                                      (byte)((uint)auVar38._0_4_ >> 8),
                                      (byte)auVar40._0_4_ & (byte)auVar38._0_4_)));
  auVar51._0_8_ =
       CONCAT17((byte)((uint)auVar40._4_4_ >> 0x18) & (byte)((uint)auVar38._4_4_ >> 0x18),
                CONCAT16((byte)((uint)auVar40._4_4_ >> 0x10) & (byte)((uint)auVar38._4_4_ >> 0x10),
                         CONCAT15((byte)((uint)auVar40._4_4_ >> 8) &
                                  (byte)((uint)auVar38._4_4_ >> 8),
                                  CONCAT14((byte)auVar40._4_4_ & (byte)auVar38._4_4_,uVar21))));
  auVar51[8] = (byte)auVar40._8_4_ & (byte)auVar38._8_4_;
  auVar51[9] = (byte)((uint)auVar40._8_4_ >> 8) & (byte)((uint)auVar38._8_4_ >> 8);
  auVar51[10] = (byte)((uint)auVar40._8_4_ >> 0x10) & (byte)((uint)auVar38._8_4_ >> 0x10);
  auVar51[0xb] = (byte)((uint)auVar40._8_4_ >> 0x18) & (byte)((uint)auVar38._8_4_ >> 0x18);
  auVar8._4_4_ = fVar46;
  auVar8._0_4_ = fVar41;
  auVar8._8_4_ = fVar39;
  auVar8._12_4_ = 0;
  auVar55 = NEON_fmin(auVar59,auVar8,4);
  auVar10._4_4_ = fVar48;
  auVar10._0_4_ = fVar63;
  auVar10._8_4_ = fVar49;
  auVar10._12_4_ = 0;
  auVar54 = NEON_fmax(auVar58,auVar10,4);
  auVar54 = auVar54 ^ (auVar54 ^ auVar58) & auVar38;
  auVar55 = auVar55 ^ (auVar55 ^ auVar59) & auVar40;
  param_3[7] = auVar54._8_8_;
  param_3[6] = auVar54._0_8_;
  param_3[9] = auVar55._8_8_;
  param_3[8] = auVar55._0_8_;
  bVar7 = (CONCAT13((byte)((uint)auVar47._0_4_ >> 0x18) & (byte)((uint)auVar45._0_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar47._0_4_ >> 0x10) &
                             (byte)((uint)auVar45._0_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar47._0_4_ >> 8) &
                                      (byte)((uint)auVar45._0_4_ >> 8),
                                      (byte)auVar47._0_4_ & (byte)auVar45._0_4_))) &
           CONCAT13((byte)((uint)auVar47._4_4_ >> 0x18) & (byte)((uint)auVar45._4_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar47._4_4_ >> 0x10) &
                             (byte)((uint)auVar45._4_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar47._4_4_ >> 8) &
                                      (byte)((uint)auVar45._4_4_ >> 8),
                                      (byte)auVar47._4_4_ & (byte)auVar45._4_4_))) &
          CONCAT13((byte)((uint)auVar47._8_4_ >> 0x18) & (byte)((uint)auVar45._8_4_ >> 0x18),
                   CONCAT12((byte)((uint)auVar47._8_4_ >> 0x10) &
                            (byte)((uint)auVar45._8_4_ >> 0x10),
                            CONCAT11((byte)((uint)auVar47._8_4_ >> 8) &
                                     (byte)((uint)auVar45._8_4_ >> 8),
                                     (byte)auVar47._8_4_ & (byte)auVar45._8_4_)))) != 0 |
          ((uVar21 & (uint)((ulong)auVar51._0_8_ >> 0x20) & auVar51._8_4_) != 0) << 1;
  uVar24 = uVar1 & 0xffffffff;
  fVar60 = fVar50;
  fVar61 = fVar42;
  fVar62 = fVar44;
  fVar42 = fVar64;
  fVar44 = fVar43;
  fVar65 = fVar53;
  if (bVar7 != 1) {
    if (bVar7 == 3) {
      iVar25 = (int)param_2[1];
      lVar27 = *param_2;
      iVar22 = iVar25 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar25) {
        lVar27 = FUN_02fb5338(puVar19,iVar22,lVar27,iVar25,(long)param_2 + 0xc);
        iVar25 = (int)param_2[1];
        *param_2 = lVar27;
      }
      puVar31 = (undefined8 *)(lVar27 + (long)iVar25 * 0x30);
      *(int *)(param_2 + 1) = iVar22;
      uVar24 = uVar1 & 0xffffffff;
      *(uint *)(puVar31 + 4) = uVar56;
      puVar31[1] = (ulong)(uint)fVar39;
      *puVar31 = CONCAT44(fVar46,fVar41);
      puVar31[3] = (ulong)(uint)fVar49;
      puVar31[2] = CONCAT44(fVar48,fVar63);
    }
    else if (bVar7 == 2) {
      uVar24 = (ulong)uVar56;
      pbVar35 = pbVar28;
      fVar60 = fVar41;
      fVar61 = fVar46;
      fVar62 = fVar39;
      fVar42 = fVar63;
      fVar44 = fVar48;
      fVar65 = fVar49;
    }
    else {
LAB_02fc3cf8:
      if ((int)param_2[1] <= (int)lVar18) {
        return;
      }
      iVar22 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar22;
      puVar31 = (undefined8 *)(*param_2 + (long)iVar22 * 0x30);
      uVar24 = (long)*(int *)(puVar31 + 4);
      pbVar35 = (byte *)((long)param_1 + (long)*(int *)(puVar31 + 4) * 6 + *param_1);
      fVar60 = (float)*puVar31;
      fVar61 = (float)((ulong)*puVar31 >> 0x20);
      fVar62 = (float)puVar31[1];
      fVar42 = (float)puVar31[2];
      fVar44 = (float)((ulong)puVar31[2] >> 0x20);
      fVar65 = (float)puVar31[3];
    }
  }
  goto LAB_02fc374c;
}


