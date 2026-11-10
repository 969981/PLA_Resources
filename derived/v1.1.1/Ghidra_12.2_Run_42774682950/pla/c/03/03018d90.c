/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03018d90; name: FUN_03018d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03018d90(long param_1,long param_2,long param_3,long param_4,uint param_5,
                 undefined8 *param_6,undefined8 *param_7)

{
  undefined2 *puVar1;
  long lVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [14];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar25;
  undefined1 auVar20 [12];
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar26;
  byte bVar30;
  byte bVar31;
  byte bVar35;
  byte bVar36;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  byte bVar32;
  float fVar33;
  int iVar34;
  byte bVar37;
  undefined1 auVar29 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar12 = _UNK_0388a1f8;
  uVar11 = _DAT_0388a1f0;
  if (0 < (int)param_5) {
    auVar21._8_8_ = _UNK_0388a1f8;
    auVar21._0_8_ = _DAT_0388a1f0;
    auVar21 = a64_TBL(ZEXT816(0),ZEXT816(0),auVar21);
    uVar40 = *(undefined8 *)(param_2 + 0x98);
    uVar39 = *(undefined8 *)(param_2 + 0x90);
    lVar14 = *(long *)(param_1 + 0x30);
    uVar13 = 0;
    do {
      iVar3 = *(int *)(param_4 + uVar13 * 4);
      if ((long)uVar13 < (long)(int)(param_5 - 4)) {
        lVar2 = param_3 + (ulong)*(uint *)(param_4 + uVar13 * 4 + 0x10) * 0x80;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x40,0,0,0);
        Hint_Prefetch(lVar2 + 0x40,0,0,0);
        Hint_Prefetch(lVar2 + 0x80,0,0,0);
      }
      lVar2 = param_3 + (long)iVar3 * 0x80;
      lVar15 = lVar14 + (ulong)*(ushort *)(lVar2 + 0x58) * 0x70;
      uVar27 = *(undefined8 *)(lVar2 + 0x40);
      fVar18 = *(float *)(lVar15 + 8);
      auVar38._2_2_ = 0;
      auVar38._0_2_ = (ushort)uVar27;
      auVar38._4_2_ = (short)((ulong)uVar27 >> 0x10);
      auVar38._6_2_ = 0;
      auVar38._8_2_ = (short)((ulong)uVar27 >> 0x20);
      auVar38._10_2_ = 0;
      auVar38._12_2_ = (short)((ulong)uVar27 >> 0x30);
      auVar38._14_2_ = 0;
      uVar5 = *(uint *)(lVar15 + 4) | 2;
      auVar28 = NEON_ext(auVar38,auVar38,8,1);
      fVar19 = (float)uVar39 * fVar18;
      fVar24 = (float)((ulong)uVar39 >> 0x20) * fVar18;
      fVar25 = (float)uVar40 * fVar18;
      fVar18 = (float)((ulong)uVar40 >> 0x20) * fVar18;
      fVar33 = (float)(auVar28._4_4_ << 0x10);
      iVar26 = -(uint)(fVar33 == 0.0);
      iVar34 = -(uint)(fVar33 == 0.0);
      lVar15 = *(long *)(param_1 + 0x40);
      fVar33 = *(float *)(lVar2 + 0x60);
      fVar8 = *(float *)(lVar2 + 100);
      fVar9 = *(float *)(lVar2 + 0x68);
      fVar10 = *(float *)(lVar2 + 0x6c);
      bVar30 = (byte)((uint)iVar26 >> 8);
      bVar31 = (byte)((uint)iVar26 >> 0x10);
      bVar32 = (byte)((uint)iVar26 >> 0x18);
      bVar35 = (byte)((uint)iVar34 >> 8);
      bVar36 = (byte)((uint)iVar34 >> 0x10);
      bVar37 = (byte)((uint)iVar34 >> 0x18);
      fVar19 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~bVar32,
                               CONCAT12((byte)((uint)fVar19 >> 0x10) & ~bVar31,
                                        CONCAT11((byte)((uint)fVar19 >> 8) & ~bVar30,
                                                 SUB41(fVar19,0) & ~(byte)iVar26)));
      auVar20._0_8_ =
           CONCAT17((byte)((uint)fVar24 >> 0x18) & ~bVar37,
                    CONCAT16((byte)((uint)fVar24 >> 0x10) & ~bVar36,
                             CONCAT15((byte)((uint)fVar24 >> 8) & ~bVar35,
                                      CONCAT14(SUB41(fVar24,0) & ~(byte)iVar34,fVar19))));
      auVar20[8] = SUB41(fVar25,0) & ~(byte)iVar26;
      auVar20[9] = (byte)((uint)fVar25 >> 8) & ~bVar30;
      auVar20[10] = (byte)((uint)fVar25 >> 0x10) & ~bVar31;
      auVar20[0xb] = (byte)((uint)fVar25 >> 0x18) & ~bVar32;
      auVar28[0xc] = SUB41(fVar18,0) & ~(byte)iVar34;
      auVar28._0_12_ = auVar20;
      auVar28[0xd] = (byte)((uint)fVar18 >> 8) & ~bVar35;
      auVar28[0xe] = (byte)((uint)fVar18 >> 0x10) & ~bVar36;
      auVar28[0xf] = (byte)((uint)fVar18 >> 0x18) & ~bVar37;
      if ((*(uint *)(lVar15 + 0xb58) & uVar5) != 0) {
        lVar16 = 0;
        puVar17 = (undefined8 *)(lVar15 + 0xb68);
        fVar18 = (float)*(undefined8 *)(param_2 + 0x40);
        fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
        auVar23._0_8_ = CONCAT44(fVar24 * (float)((ulong)auVar20._0_8_ >> 0x20),fVar18 * fVar19);
        auVar23._8_4_ = fVar18 * auVar20._8_4_;
        auVar23._12_4_ = fVar24 * auVar28._12_4_;
        uStack_28 = auVar23._8_8_;
        local_30 = auVar23._0_8_;
        do {
          if ((*(uint *)(puVar17 + -1) & uVar5) != 0) {
            (**(code **)(*(long *)*puVar17 + 0xa0))((long *)*puVar17,param_1,iVar3,&local_30);
          }
          lVar16 = lVar16 + 1;
          puVar17 = puVar17 + 2;
        } while (lVar16 < *(int *)(lVar15 + 0xb5c));
        fVar18 = (float)*(undefined8 *)(param_2 + 0x38);
        auVar28._0_4_ = fVar18 * (float)local_30;
        fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
        auVar28._4_4_ = fVar19 * local_30._4_4_;
        auVar28._8_4_ = fVar18 * (float)uStack_28;
        auVar28._12_4_ = fVar19 * uStack_28._4_4_;
      }
      auVar22._0_8_ = CONCAT44(fVar8 + auVar28._4_4_,fVar33 + auVar28._0_4_);
      auVar22._8_4_ = fVar9 + auVar28._8_4_;
      auVar22._12_4_ = fVar10 + auVar28._12_4_;
      auVar6._8_8_ = uVar12;
      auVar6._0_8_ = uVar11;
      auVar38 = a64_TBL(ZEXT816(0),auVar22,auVar6);
      auVar28 = *(undefined1 (*) [16])(lVar2 + 0x70);
      *(undefined2 *)(param_6 + 3) = *(undefined2 *)(lVar2 + 0x40);
      *(undefined2 *)((long)param_6 + 0x1a) = *(undefined2 *)(lVar2 + 0x42);
      *(undefined2 *)((long)param_6 + 0x1c) = *(undefined2 *)(lVar2 + 0x44);
      auVar29._0_12_ = auVar28._0_12_;
      auVar29._12_4_ = auVar38._12_4_;
      uVar4 = *(undefined2 *)(lVar2 + 0x5c);
      *(undefined2 *)((long)param_6 + 0x1e) = *(undefined2 *)(lVar2 + 0x46);
      param_6[2] = auVar22._0_8_;
      param_6[1] = auVar29._8_8_;
      *param_6 = auVar28._0_8_;
      auVar7._2_12_ = auVar29._4_12_;
      auVar7._0_2_ = uVar4;
      puVar1 = (undefined2 *)((long)param_7 + 0x1e);
      param_6 = param_6 + 4;
      uVar27 = *(undefined8 *)(param_2 + 0x18);
      param_7[2] = 0;
      param_7[1] = (ulong)auVar21._12_4_ << 0x20;
      *param_7 = 0;
      *(int *)(param_7 + 3) = iVar3;
      uVar13 = uVar13 + 1;
      *(ushort *)((long)param_7 + 0x1c) = *(ushort *)(lVar2 + 0x58);
      param_7 = param_7 + 4;
      *puVar1 = (short)((uint)((float)uVar27 * (float)(auVar7._0_4_ << 0x10)) >> 0x10);
    } while (uVar13 != param_5);
  }
  return;
}


