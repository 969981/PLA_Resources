/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc1c14; name: FUN_02fc1c14
 */


void FUN_02fc1c14(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  long lVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  uint uVar29;
  undefined8 uVar30;
  long *plVar31;
  byte *pbVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  undefined1 auVar52 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
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
    lVar18 = param_2[1];
    fVar57 = (float)param_1[3];
    fVar41 = (float)((ulong)param_1[3] >> 0x20);
    uVar30 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar55 = (float)uVar30;
    fVar56 = (float)((ulong)uVar30 >> 0x20);
    fVar60 = (float)param_1[5];
    fVar43 = (float)((ulong)param_1[5] >> 0x20);
    uVar30 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar37 = (float)uVar30;
    fVar39 = (float)((ulong)uVar30 >> 0x20);
    auVar53._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar37);
    auVar53._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar39);
    auVar53._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar60);
    auVar53._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= fVar43);
    lVar26 = *param_1;
    auVar54._0_4_ = -(uint)(fVar55 <= *(float *)(param_3 + 4));
    auVar54._4_4_ = -(uint)(fVar56 <= *(float *)((long)param_3 + 0x24));
    auVar54._8_4_ = -(uint)(fVar57 <= *(float *)(param_3 + 5));
    auVar54._12_4_ = -(uint)(fVar41 <= *(float *)((long)param_3 + 0x2c));
    uVar51 = CONCAT13((byte)((uint)auVar54._0_4_ >> 0x18) & (byte)((uint)auVar53._0_4_ >> 0x18),
                      CONCAT12((byte)((uint)auVar54._0_4_ >> 0x10) &
                               (byte)((uint)auVar53._0_4_ >> 0x10),
                               CONCAT11((byte)((uint)auVar54._0_4_ >> 8) &
                                        (byte)((uint)auVar53._0_4_ >> 8),
                                        (byte)auVar54._0_4_ & (byte)auVar53._0_4_)));
    auVar52._0_8_ =
         CONCAT17((byte)((uint)auVar54._4_4_ >> 0x18) & (byte)((uint)auVar53._4_4_ >> 0x18),
                  CONCAT16((byte)((uint)auVar54._4_4_ >> 0x10) & (byte)((uint)auVar53._4_4_ >> 0x10)
                           ,CONCAT15((byte)((uint)auVar54._4_4_ >> 8) &
                                     (byte)((uint)auVar53._4_4_ >> 8),
                                     CONCAT14((byte)auVar54._4_4_ & (byte)auVar53._4_4_,uVar51))));
    auVar52[8] = (byte)auVar54._8_4_ & (byte)auVar53._8_4_;
    auVar52[9] = (byte)((uint)auVar54._8_4_ >> 8) & (byte)((uint)auVar53._8_4_ >> 8);
    auVar52[10] = (byte)((uint)auVar54._8_4_ >> 0x10) & (byte)((uint)auVar53._8_4_ >> 0x10);
    auVar52[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) & (byte)((uint)auVar53._8_4_ >> 0x18);
    auVar49._12_4_ = fVar41;
    auVar49._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar47 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar49,4);
    auVar50._12_4_ = fVar43;
    auVar50._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar49 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar50,4);
    auVar49 = auVar49 ^ (auVar49 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar53;
    auVar47 = auVar47 ^ (auVar47 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar54;
    param_3[7] = auVar49._8_8_;
    param_3[6] = auVar49._0_8_;
    param_3[9] = auVar47._8_8_;
    param_3[8] = auVar47._0_8_;
    puVar19 = PTR_PTR_0434a080;
    if ((uVar51 & (uint)((ulong)auVar52._0_8_ >> 0x20) & auVar52._8_4_) != 0) {
      uVar24 = 0;
      pbVar32 = (byte *)(lVar26 + (long)param_1);
LAB_02fc1cfc:
      bVar8 = pbVar32[3];
      if ((char)bVar8 < '\0') goto LAB_02fc1f34;
      plVar31 = (long *)*param_3;
      uVar51 = (uint)CONCAT12(bVar8,*(undefined2 *)(pbVar32 + 4));
      uVar20 = (**(code **)(**(long **)(*plVar31 + 0x50) + 0x70))
                         (*(long **)(*plVar31 + 0x50),uVar51);
      uVar21 = (**(code **)(**(long **)(*plVar31 + 0x50) + 0x78))
                         (*(long **)(*plVar31 + 0x50),uVar51);
      iVar22 = (**(code **)(**(long **)(*plVar31 + 0x50) + 0x20))();
      uVar29 = 1;
      if (((uVar21 ^ 0xffffffff) & 7) != 0) {
        uVar29 = 2;
      }
      uVar21 = 0;
      uVar7 = 1;
      if (iVar22 <= (int)uVar51) {
        uVar7 = uVar29;
      }
      do {
        puVar27 = (undefined8 *)plVar31[4];
        uVar29 = ((uVar21 | uVar51 << 1) + 1 <<
                 (ulong)(-((uint)*(byte *)(*plVar31 + 0x1c) + *(int *)((long)puVar27 + 0x1c)) & 0x1f
                        )) - 1 |
                 (&DAT_03aa74b0)[*(int *)((long)puVar27 + 0x1c)] & *(uint *)(puVar27 + 3);
        if (*(long *)plVar31[2] != 0) {
          local_78 = *(undefined8 *)plVar31[5];
          uStack_70 = ((undefined8 *)plVar31[5])[1];
          plVar23 = *(long **)plVar31[2];
          (**(code **)(*plVar23 + 0x40))
                    (plVar23,uVar20,6,*puVar27,puVar27[1],*plVar31,uVar29,0,&local_78);
          lVar26 = plVar31[2];
          if (*(long *)(lVar26 + 8) != 0) {
            local_b0[0] = *(undefined2 *)(lVar26 + 0x10);
            uVar30 = *(undefined8 *)(lVar26 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                 *(undefined4 *)(lVar26 + 0x1c);
            *(undefined8 *)((ulong)local_b0 | 4) = uVar30;
            puVar27 = (undefined8 *)plVar31[3];
            local_a0 = *puVar27;
            local_98 = puVar27[1];
            local_90 = puVar27[2];
            local_88 = *(undefined4 *)(puVar27 + 3);
            local_e8[0] = (undefined2)local_78;
            uVar30 = *(undefined8 *)((ulong)&local_78 | 4);
            local_80 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
            *(undefined8 *)((ulong)local_e8 | 4) = uVar30;
            local_d8 = *(undefined8 *)plVar31[4];
            local_d0 = ((undefined8 *)plVar31[4])[1];
            local_c8 = *plVar31;
            local_b8 = 0;
            local_c0 = uVar29;
            uVar24 = (**(code **)(**(long **)(lVar26 + 8) + 0x40))
                               (*(long **)(lVar26 + 8),6,1,local_b0,local_e8);
            if ((uVar24 & 1) == 0) break;
          }
        }
        plVar23 = (long *)plVar31[6];
        iVar25 = (int)plVar23[1];
        lVar26 = *plVar23;
        iVar22 = iVar25 + 1;
        if ((int)(*(uint *)((long)plVar23 + 0xc) & 0x3fffffff) <= iVar25) {
          lVar26 = FUN_02f7f7b8(puVar19,iVar22);
          *plVar23 = lVar26;
          iVar25 = (int)plVar23[1];
        }
        uVar21 = uVar21 + 1;
        *(uint *)(lVar26 + (long)iVar25 * 4) = uVar29;
        *(int *)(plVar23 + 1) = iVar22;
      } while (uVar21 < uVar7);
      goto LAB_02fc1eec;
    }
  }
  return;
LAB_02fc1f34:
  uVar1 = (long)(int)uVar24 + 1;
  uVar51 = (int)uVar24 + ((uint)*(ushort *)(pbVar32 + 4) | (bVar8 & 0x7f) << 0x10) * 2;
  fVar41 = (fVar37 - fVar55) * 0.0044247787;
  fVar43 = (fVar39 - fVar56) * 0.0044247787;
  fVar44 = (fVar60 - fVar57) * 0.0044247787;
  pbVar32 = (byte *)((long)param_1 + uVar1 * 6 + *param_1);
  pbVar28 = (byte *)((long)param_1 + (long)(int)uVar51 * 6 + *param_1);
  bVar12 = pbVar32[1] >> 4;
  bVar13 = *pbVar32 >> 4;
  bVar8 = *pbVar32 & 0xf;
  bVar14 = pbVar32[2] >> 4;
  bVar2 = pbVar32[2] & 0xf;
  bVar3 = pbVar32[1] & 0xf;
  bVar15 = *pbVar28 >> 4;
  bVar4 = *pbVar28 & 0xf;
  bVar16 = pbVar28[1] >> 4;
  bVar5 = pbVar28[1] & 0xf;
  bVar17 = pbVar28[2] >> 4;
  bVar6 = pbVar28[2] & 0xf;
  fVar45 = fVar55 + (float)(byte)(bVar13 * bVar13) * fVar41;
  fVar36 = fVar55 + (float)(byte)(bVar15 * bVar15) * fVar41;
  fVar59 = fVar37 - (float)(byte)(bVar8 * bVar8) * fVar41;
  fVar58 = fVar37 - (float)(byte)(bVar4 * bVar4) * fVar41;
  fVar37 = fVar56 + (float)(byte)(bVar12 * bVar12) * fVar43;
  fVar41 = fVar56 + (float)(byte)(bVar16 * bVar16) * fVar43;
  fVar38 = fVar39 - (float)(byte)(bVar3 * bVar3) * fVar43;
  fVar43 = fVar39 - (float)(byte)(bVar5 * bVar5) * fVar43;
  fVar39 = fVar57 + (float)(byte)(bVar14 * bVar14) * fVar44;
  fVar48 = fVar60 - (float)(byte)(bVar2 * bVar2) * fVar44;
  fVar34 = fVar57 + (float)(byte)(bVar17 * bVar17) * fVar44;
  fVar44 = fVar60 - (float)(byte)(bVar6 * bVar6) * fVar44;
  auVar42._0_4_ = -(uint)(fVar45 <= *(float *)(param_3 + 4));
  auVar42._4_4_ = -(uint)(fVar37 <= *(float *)((long)param_3 + 0x24));
  auVar42._8_4_ = -(uint)(fVar39 <= *(float *)(param_3 + 5));
  auVar42._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
  auVar47._4_4_ = fVar37;
  auVar47._0_4_ = fVar45;
  auVar47._8_4_ = fVar39;
  auVar47._12_4_ = 0;
  auVar54 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar47,4);
  auVar40._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar59);
  auVar40._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar38);
  auVar40._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar48);
  auVar40._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
  auVar10._4_4_ = fVar38;
  auVar10._0_4_ = fVar59;
  auVar10._8_4_ = fVar48;
  auVar10._12_4_ = 0;
  auVar53 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar10,4);
  auVar53 = auVar53 ^ (auVar53 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar40;
  auVar54 = auVar54 ^ (auVar54 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar42;
  auVar33._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar58);
  auVar33._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar43);
  auVar33._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar44);
  auVar33._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
  auVar35._0_4_ = -(uint)(fVar36 <= *(float *)(param_3 + 4));
  auVar35._4_4_ = -(uint)(fVar41 <= *(float *)((long)param_3 + 0x24));
  auVar35._8_4_ = -(uint)(fVar34 <= *(float *)(param_3 + 5));
  auVar35._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
  uVar29 = CONCAT13((byte)((uint)auVar35._0_4_ >> 0x18) & (byte)((uint)auVar33._0_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar35._0_4_ >> 0x10) &
                             (byte)((uint)auVar33._0_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar35._0_4_ >> 8) &
                                      (byte)((uint)auVar33._0_4_ >> 8),
                                      (byte)auVar35._0_4_ & (byte)auVar33._0_4_)));
  auVar46._0_8_ =
       CONCAT17((byte)((uint)auVar35._4_4_ >> 0x18) & (byte)((uint)auVar33._4_4_ >> 0x18),
                CONCAT16((byte)((uint)auVar35._4_4_ >> 0x10) & (byte)((uint)auVar33._4_4_ >> 0x10),
                         CONCAT15((byte)((uint)auVar35._4_4_ >> 8) &
                                  (byte)((uint)auVar33._4_4_ >> 8),
                                  CONCAT14((byte)auVar35._4_4_ & (byte)auVar33._4_4_,uVar29))));
  auVar46[8] = (byte)auVar35._8_4_ & (byte)auVar33._8_4_;
  auVar46[9] = (byte)((uint)auVar35._8_4_ >> 8) & (byte)((uint)auVar33._8_4_ >> 8);
  auVar46[10] = (byte)((uint)auVar35._8_4_ >> 0x10) & (byte)((uint)auVar33._8_4_ >> 0x10);
  auVar46[0xb] = (byte)((uint)auVar35._8_4_ >> 0x18) & (byte)((uint)auVar33._8_4_ >> 0x18);
  auVar9._4_4_ = fVar41;
  auVar9._0_4_ = fVar36;
  auVar9._8_4_ = fVar34;
  auVar9._12_4_ = 0;
  auVar50 = NEON_fmin(auVar54,auVar9,4);
  auVar11._4_4_ = fVar43;
  auVar11._0_4_ = fVar58;
  auVar11._8_4_ = fVar44;
  auVar11._12_4_ = 0;
  auVar49 = NEON_fmax(auVar53,auVar11,4);
  auVar49 = auVar49 ^ (auVar49 ^ auVar53) & auVar33;
  auVar50 = auVar50 ^ (auVar50 ^ auVar54) & auVar35;
  param_3[7] = auVar49._8_8_;
  param_3[6] = auVar49._0_8_;
  param_3[9] = auVar50._8_8_;
  param_3[8] = auVar50._0_8_;
  bVar8 = (CONCAT13((byte)((uint)auVar42._0_4_ >> 0x18) & (byte)((uint)auVar40._0_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar42._0_4_ >> 0x10) &
                             (byte)((uint)auVar40._0_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar42._0_4_ >> 8) &
                                      (byte)((uint)auVar40._0_4_ >> 8),
                                      (byte)auVar42._0_4_ & (byte)auVar40._0_4_))) &
           CONCAT13((byte)((uint)auVar42._4_4_ >> 0x18) & (byte)((uint)auVar40._4_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar42._4_4_ >> 0x10) &
                             (byte)((uint)auVar40._4_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar42._4_4_ >> 8) &
                                      (byte)((uint)auVar40._4_4_ >> 8),
                                      (byte)auVar42._4_4_ & (byte)auVar40._4_4_))) &
          CONCAT13((byte)((uint)auVar42._8_4_ >> 0x18) & (byte)((uint)auVar40._8_4_ >> 0x18),
                   CONCAT12((byte)((uint)auVar42._8_4_ >> 0x10) &
                            (byte)((uint)auVar40._8_4_ >> 0x10),
                            CONCAT11((byte)((uint)auVar42._8_4_ >> 8) &
                                     (byte)((uint)auVar40._8_4_ >> 8),
                                     (byte)auVar42._8_4_ & (byte)auVar40._8_4_)))) != 0 |
          ((uVar29 & (uint)((ulong)auVar46._0_8_ >> 0x20) & auVar46._8_4_) != 0) << 1;
  uVar24 = uVar1 & 0xffffffff;
  fVar55 = fVar45;
  fVar56 = fVar37;
  fVar57 = fVar39;
  fVar37 = fVar59;
  fVar39 = fVar38;
  fVar60 = fVar48;
  if (bVar8 != 1) {
    if (bVar8 == 3) {
      iVar25 = (int)param_2[1];
      lVar26 = *param_2;
      iVar22 = iVar25 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar25) {
        lVar26 = FUN_02fb5338(puVar19,iVar22,lVar26,iVar25,(long)param_2 + 0xc);
        iVar25 = (int)param_2[1];
        *param_2 = lVar26;
      }
      puVar27 = (undefined8 *)(lVar26 + (long)iVar25 * 0x30);
      *(int *)(param_2 + 1) = iVar22;
      uVar24 = uVar1 & 0xffffffff;
      *(uint *)(puVar27 + 4) = uVar51;
      puVar27[1] = (ulong)(uint)fVar34;
      *puVar27 = CONCAT44(fVar41,fVar36);
      puVar27[3] = (ulong)(uint)fVar44;
      puVar27[2] = CONCAT44(fVar43,fVar58);
    }
    else if (bVar8 == 2) {
      uVar24 = (ulong)uVar51;
      pbVar32 = pbVar28;
      fVar55 = fVar36;
      fVar56 = fVar41;
      fVar57 = fVar34;
      fVar37 = fVar58;
      fVar39 = fVar43;
      fVar60 = fVar44;
    }
    else {
LAB_02fc1eec:
      if ((int)param_2[1] <= (int)lVar18) {
        return;
      }
      iVar22 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar22;
      puVar27 = (undefined8 *)(*param_2 + (long)iVar22 * 0x30);
      uVar24 = (long)*(int *)(puVar27 + 4);
      pbVar32 = (byte *)((long)param_1 + (long)*(int *)(puVar27 + 4) * 6 + *param_1);
      fVar55 = (float)*puVar27;
      fVar56 = (float)((ulong)*puVar27 >> 0x20);
      fVar57 = (float)puVar27[1];
      fVar37 = (float)puVar27[2];
      fVar39 = (float)((ulong)puVar27[2] >> 0x20);
      fVar60 = (float)puVar27[3];
    }
  }
  goto LAB_02fc1cfc;
}


