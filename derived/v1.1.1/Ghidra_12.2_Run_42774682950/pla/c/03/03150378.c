/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03150378; name: FUN_03150378
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03150378(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,long param_6,
                 long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  undefined8 uVar31;
  float fVar33;
  undefined8 uVar32;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  int iVar38;
  undefined8 uVar39;
  float local_70;
  float fStack_6c;
  float fStack_68;
  
  plVar14 = (long *)param_1[5];
  lVar7 = (**(code **)(*plVar14 + 0x80))(plVar14,param_1[4]);
  lVar7 = (**(code **)(*plVar14 + 0x100))(plVar14,*(undefined4 *)(lVar7 + 0x80));
  lVar9 = param_1[7];
  if ('\0' < *(char *)(lVar9 + 0x30)) {
    fVar15 = *(float *)(lVar7 + 0x60) * *(float *)(lVar7 + 0x60);
    fVar20 = *(float *)(lVar7 + 100) * *(float *)(lVar7 + 100);
    fVar21 = *(float *)(lVar7 + 0x68) * *(float *)(lVar7 + 0x68);
    fVar16 = fVar15 + fVar20 + fVar21;
    fVar21 = fVar15 + fVar20 + fVar21;
    uVar31 = CONCAT44(fVar21,fVar16);
    uVar26 = NEON_frsqrte(uVar31,4);
    fVar15 = (float)uVar26;
    fVar20 = (float)((ulong)uVar26 >> 0x20);
    uVar26 = NEON_frsqrts(uVar31,CONCAT44(fVar20 * fVar20,fVar15 * fVar15),4);
    fVar15 = fVar15 * (float)uVar26;
    fVar20 = fVar20 * (float)((ulong)uVar26 >> 0x20);
    uVar31 = NEON_frsqrts(uVar31,CONCAT44(fVar20 * fVar20,fVar15 * fVar15),4);
    iVar22 = -(uint)(fVar16 <= 0.0);
    iVar23 = -(uint)(fVar21 <= 0.0);
    fVar16 = fVar16 * (float)uVar31 * fVar15;
    fVar21 = fVar21 * (float)((ulong)uVar31 >> 0x20) * fVar20;
    auVar19[1] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar22 >> 8);
    auVar19[0] = SUB41(fVar16,0) & ~(byte)iVar22;
    auVar19[2] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
    auVar19[3] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
    auVar19[4] = SUB41(fVar21,0) & ~(byte)iVar23;
    auVar19[5] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar23 >> 8);
    auVar19[6] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
    auVar19[7] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
    uVar11 = 0;
    lVar7 = 0x28;
    lVar10 = 0x24;
    do {
      lVar9 = (long)*(char *)(*(long *)(lVar9 + 0xa0) + lVar10);
      lVar12 = *(long *)(param_1[0x12] + lVar7);
      if (lVar12 != -1) {
        if (param_4[lVar9] != -1) {
          plVar14 = (long *)param_1[5];
          lVar8 = (**(code **)(*plVar14 + 0x80))(plVar14,lVar12);
          lVar8 = (**(code **)(*plVar14 + 0x100))(plVar14,*(undefined4 *)(lVar8 + 0x80));
          plVar14 = (long *)param_1[5];
          uVar31 = *(undefined8 *)(lVar8 + 0x40);
          lVar8 = (**(code **)(*plVar14 + 0x80))(plVar14,param_4[lVar9]);
          lVar8 = (**(code **)(*plVar14 + 0x100))(plVar14,*(undefined4 *)(lVar8 + 0x80));
          if ((float)((int)(short)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x30) << 0x10) <=
              (float)((int)(short)((ulong)uVar31 >> 0x30) << 0x10)) goto LAB_03150440;
        }
        param_4[lVar9] = lVar12;
      }
LAB_03150440:
      auVar19._8_8_ = 0;
      FUN_03150160(*(undefined4 *)(*param_3 + uVar11 * 4),*(undefined4 *)(*param_2 + uVar11 * 4),
                   auVar19,param_1,uVar11 & 0xffffffff,param_5 + lVar9 * 0x60);
      lVar9 = param_1[7];
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0xd0;
      lVar10 = lVar10 + 0x28;
    } while ((long)uVar11 < (long)*(char *)(lVar9 + 0x30));
  }
  *(undefined4 *)(param_5 + 0xc0) = *(undefined4 *)(lVar9 + 0x80);
  uVar6 = DAT_0388a148;
  uVar5 = DAT_0388a140;
  uVar4 = _UNK_03889a88;
  uVar3 = _DAT_03889a80;
  uVar26 = _UNK_03888d18;
  uVar31 = _DAT_03888d10;
  if (0 < *(int *)(param_1[7] + 0xb8)) {
    plVar14 = (long *)(param_5 + 0x38);
    lVar9 = 0;
    lVar7 = 0;
    do {
      fVar15 = *(float *)(plVar14 + -5);
      fVar16 = *(float *)((long)plVar14 + -0x24);
      fVar20 = *(float *)(plVar14 + -4);
      auVar19 = *(undefined1 (*) [16])(plVar14 + -3);
      fVar25 = auVar19._0_4_;
      fVar28 = auVar19._4_4_;
      fVar29 = auVar19._8_4_;
      fVar21 = fVar15 * fVar15 + fVar16 * fVar16 + fVar20 * fVar20;
      fVar24 = fVar15 * fVar15 + fVar16 * fVar16 + fVar20 * fVar20;
      uVar39 = CONCAT44(fVar24,fVar21);
      fVar30 = fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29;
      fVar33 = fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29;
      uVar32 = CONCAT44(fVar33,fVar30);
      uVar36 = NEON_frsqrte(uVar39,4);
      fVar35 = (float)uVar36;
      fVar37 = (float)((ulong)uVar36 >> 0x20);
      uVar36 = NEON_frsqrts(uVar39,CONCAT44(fVar37 * fVar37,fVar35 * fVar35),4);
      fVar35 = fVar35 * (float)uVar36;
      fVar37 = fVar37 * (float)((ulong)uVar36 >> 0x20);
      uVar39 = NEON_frsqrts(uVar39,CONCAT44(fVar37 * fVar37,fVar35 * fVar35),4);
      iVar22 = -(uint)(fVar21 <= 0.0);
      iVar23 = -(uint)(fVar24 <= 0.0);
      fVar35 = (float)uVar39 * fVar35;
      fVar37 = (float)((ulong)uVar39 >> 0x20) * fVar37;
      fVar21 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                               CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar35 >> 8) &
                                                  ~(byte)((uint)iVar22 >> 8),
                                                  SUB41(fVar35,0) & ~(byte)iVar22)));
      iVar22 = -(uint)(fVar30 <= 0.0);
      iVar38 = -(uint)(fVar33 <= 0.0);
      fVar24 = (float)(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                         ~(byte)((uint)iVar23 >> 0x10),
                                         CONCAT15((byte)((uint)fVar37 >> 8) &
                                                  ~(byte)((uint)iVar23 >> 8),
                                                  CONCAT14(SUB41(fVar37,0) & ~(byte)iVar23,fVar21)))
                               ) >> 0x20);
      uVar39 = NEON_frsqrte(uVar32,4);
      *(float *)(plVar14 + -4) = fVar20 * fVar21;
      *(float *)((long)plVar14 + -0x1c) = *(float *)((long)plVar14 + -0x1c) * fVar24;
      *(float *)(plVar14 + -5) = fVar15 * fVar21;
      *(float *)((long)plVar14 + -0x24) = fVar16 * fVar24;
      fVar15 = (float)uVar39;
      fVar16 = (float)((ulong)uVar39 >> 0x20);
      uVar39 = NEON_frsqrts(uVar32,CONCAT44(fVar16 * fVar16,fVar15 * fVar15),4);
      fVar15 = fVar15 * (float)uVar39;
      fVar16 = fVar16 * (float)((ulong)uVar39 >> 0x20);
      uVar39 = NEON_frsqrts(uVar32,CONCAT44(fVar16 * fVar16,fVar15 * fVar15),4);
      fVar15 = (float)uVar39 * fVar15;
      fVar16 = (float)((ulong)uVar39 >> 0x20) * fVar16;
      fVar15 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                               CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar15 >> 8) &
                                                  ~(byte)((uint)iVar22 >> 8),
                                                  SUB41(fVar15,0) & ~(byte)iVar22)));
      puVar1 = (undefined8 *)(param_6 + lVar9);
      fVar16 = (float)(CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                                CONCAT16((byte)((uint)fVar16 >> 0x10) &
                                         ~(byte)((uint)iVar38 >> 0x10),
                                         CONCAT15((byte)((uint)fVar16 >> 8) &
                                                  ~(byte)((uint)iVar38 >> 8),
                                                  CONCAT14(SUB41(fVar16,0) & ~(byte)iVar38,fVar15)))
                               ) >> 0x20);
      auVar17._0_8_ = CONCAT44(fVar28 * fVar16,fVar25 * fVar15);
      auVar17._8_4_ = fVar29 * fVar15;
      auVar17._12_4_ = auVar19._12_4_ * fVar16;
      plVar14[-2] = auVar17._8_8_;
      plVar14[-3] = auVar17._0_8_;
      lVar10 = param_4[lVar7];
      plVar14[-1] = (long)puVar1;
      *plVar14 = (long)puVar1;
      if (lVar10 == -1) {
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        *(undefined2 *)puVar1 = 1;
        *(undefined4 *)(puVar1 + 1) = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[9] = uVar4;
        puVar1[8] = uVar3;
        puVar1[0xb] = uVar6;
        puVar1[10] = uVar5;
        puVar1[0xd] = uVar26;
        puVar1[0xc] = uVar31;
      }
      else {
        plVar13 = (long *)param_1[5];
        lVar12 = (**(code **)(*plVar13 + 0x80))(plVar13,lVar10);
        lVar12 = (**(code **)(*plVar13 + 0x100))(plVar13,*(undefined4 *)(lVar12 + 0x80));
        if (*(int *)(lVar12 + 0x4c) == 0) {
          (**(code **)(*param_1 + 0x78))(param_1,lVar10,puVar1);
        }
        else if ((lVar9 == 0) || (lVar10 != *param_4)) {
          plVar13 = (long *)param_1[5];
          lVar10 = (**(code **)(*plVar13 + 0x80))(plVar13,lVar10);
          lVar10 = (**(code **)(*plVar13 + 0x100))(plVar13,*(undefined4 *)(lVar10 + 0x80));
          FUN_03150870(lVar10,&DAT_03aae430,puVar1);
          plVar13 = (long *)param_1[5];
          lVar12 = (**(code **)(*plVar13 + 0x80))(plVar13,param_1[4]);
          lVar12 = (**(code **)(*plVar13 + 0x100))(plVar13,*(undefined4 *)(lVar12 + 0x80));
          uVar39 = *(undefined8 *)(lVar12 + 0x40);
          auVar18._2_2_ = 0;
          auVar18._0_2_ = (ushort)uVar39;
          auVar18._4_2_ = (short)((ulong)uVar39 >> 0x10);
          auVar18._6_2_ = 0;
          auVar18._8_2_ = (short)((ulong)uVar39 >> 0x20);
          auVar18._10_2_ = 0;
          auVar18._12_2_ = (short)((ulong)uVar39 >> 0x30);
          auVar18._14_2_ = 0;
          auVar19 = NEON_ext(auVar18,auVar18,8,1);
          fVar16 = (float)(auVar19._4_4_ << 0x10);
          uVar39 = *(undefined8 *)(lVar10 + 0x40);
          auVar27._0_4_ = (int)(short)uVar39 << 0x10;
          auVar27._4_4_ = (int)(short)((ulong)uVar39 >> 0x10) << 0x10;
          auVar27._8_4_ = (int)(short)((ulong)uVar39 >> 0x20) << 0x10;
          auVar27._12_4_ = (float)((int)(short)((ulong)uVar39 >> 0x30) << 0x10);
          fVar15 = *(float *)(param_1[7] + 0x98);
          if (fVar15 * fVar16 < auVar27._12_4_) {
            auVar19 = NEON_ext(auVar27,auVar27,8,1);
            uVar39 = CONCAT44(auVar19._4_4_,auVar19._4_4_);
            uVar32 = NEON_frecpe(uVar39,4);
            uVar36 = NEON_frecps(uVar39,uVar32,4);
            fVar20 = (float)uVar32 * (float)uVar36;
            fVar21 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar36 >> 0x20);
            uVar39 = NEON_frecps(uVar39,CONCAT44(fVar21,fVar20),4);
            fVar20 = fVar15 * fVar16 * fVar20 * (float)uVar39;
            fVar15 = fVar15 * fVar16 * fVar21 * (float)((ulong)uVar39 >> 0x20);
            uVar32 = puVar1[7];
            uVar39 = puVar1[6];
            *(float *)(puVar1 + 7) = (float)uVar32 * fVar20;
            *(float *)((long)puVar1 + 0x3c) = (float)((ulong)uVar32 >> 0x20) * fVar15;
            *(float *)(puVar1 + 6) = (float)uVar39 * fVar20;
            *(float *)((long)puVar1 + 0x34) = (float)((ulong)uVar39 >> 0x20) * fVar15;
          }
          auVar19 = *(undefined1 (*) [16])(lVar10 + 0x60);
          FUN_03016510(lVar10,&local_70);
          uVar39 = *puVar1;
          puVar2 = (undefined8 *)(param_7 + lVar9);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
          *puVar2 = uVar39;
          uVar39 = puVar1[2];
          puVar2[3] = puVar1[3];
          puVar2[2] = uVar39;
          uVar39 = puVar1[4];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar39;
          uVar39 = puVar1[6];
          puVar2[7] = puVar1[7];
          puVar2[6] = uVar39;
          uVar39 = puVar1[8];
          puVar2[9] = puVar1[9];
          puVar2[8] = uVar39;
          uVar39 = puVar1[10];
          puVar2[0xb] = puVar1[0xb];
          puVar2[10] = uVar39;
          uVar39 = puVar1[0xc];
          puVar2[0xd] = puVar1[0xd];
          puVar2[0xc] = uVar39;
          uVar39 = puVar1[0xe];
          puVar2[0xf] = puVar1[0xf];
          puVar2[0xe] = uVar39;
          *plVar14 = (long)puVar2;
          uVar34 = puVar1[0xd];
          uVar36 = puVar1[0xc];
          fVar15 = *(float *)(puVar1 + 8);
          fVar16 = *(float *)((long)puVar1 + 0x44);
          fVar20 = *(float *)(puVar1 + 9);
          fVar21 = *(float *)((long)puVar1 + 0x4c);
          uVar32 = puVar1[0xb];
          uVar39 = puVar1[10];
          puVar2[3] = auVar19._8_8_;
          puVar2[2] = auVar19._0_8_;
          *(float *)(puVar2 + 5) =
               (float)uVar34 * fStack_68 + fVar20 * local_70 + (float)uVar32 * fStack_6c;
          *(float *)((long)puVar2 + 0x2c) =
               (float)((ulong)uVar34 >> 0x20) * fStack_68 +
               fVar21 * local_70 + (float)((ulong)uVar32 >> 0x20) * fStack_6c;
          *(float *)(puVar2 + 4) =
               (float)uVar36 * fStack_68 + fVar15 * local_70 + (float)uVar39 * fStack_6c;
          *(float *)((long)puVar2 + 0x24) =
               (float)((ulong)uVar36 >> 0x20) * fStack_68 +
               fVar16 * local_70 + (float)((ulong)uVar39 >> 0x20) * fStack_6c;
        }
        else {
          plVar14[-1] = *(long *)(param_5 + 0x30);
          *plVar14 = *(long *)(param_5 + 0x38);
        }
      }
      lVar7 = lVar7 + 1;
      plVar14 = plVar14 + 0xc;
      lVar9 = lVar9 + 0x80;
    } while (lVar7 < *(int *)(param_1[7] + 0xb8));
  }
  return;
}


