/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328f758; name: FUN_0328f758
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0328f758(float param_1,long param_2,float *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [160];
  undefined8 local_d0;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_28;
  
  uVar9 = NEON_fmov(0x3f800000,4);
  uVar9 = CONCAT44(param_1,param_1) ^
          (CONCAT44(param_1,param_1) ^ uVar9) &
          CONCAT44(-(uint)(param_1 <= 0.0),-(uint)(param_1 <= 0.0));
  uVar22 = *(uint *)(param_2 + 0x20);
  local_40 = 0;
  uStack_38 = 0;
  if ((int)uVar22 < 1) {
    auVar23._8_4_ = 0x7f7fffee;
    auVar23._0_8_ = 0x7f7fffee7f7fffee;
    auVar23._12_4_ = 0x7f7fffee;
    auVar11._8_4_ = 0xff7fffee;
    auVar11._0_8_ = 0xff7fffeeff7fffee;
    auVar11._12_4_ = 0xff7fffee;
  }
  else {
    if (uVar22 == 1) {
      auVar11._8_4_ = 0xff7fffee;
      auVar11._0_8_ = 0xff7fffeeff7fffee;
      auVar11._12_4_ = 0xff7fffee;
      lVar6 = 0;
      auVar23._8_4_ = 0x7f7fffee;
      auVar23._0_8_ = 0x7f7fffee7f7fffee;
      auVar23._12_4_ = 0x7f7fffee;
    }
    else {
      auVar11._8_4_ = 0xff7fffee;
      auVar11._0_8_ = 0xff7fffeeff7fffee;
      auVar11._12_4_ = 0xff7fffee;
      lVar6 = 0;
      auVar23._8_4_ = 0x7f7fffee;
      auVar23._0_8_ = 0x7f7fffee7f7fffee;
      auVar23._12_4_ = 0x7f7fffee;
      lVar7 = ((ulong)uVar22 & 1) - (ulong)uVar22;
      do {
        pauVar1 = (undefined1 (*) [16])(*(long *)(param_2 + 0x18) + lVar6);
        lVar6 = lVar6 + 0x20;
        lVar7 = lVar7 + 2;
        auVar27 = *pauVar1;
        auVar17 = pauVar1[1];
        auVar23 = NEON_fmin(auVar27,auVar23,4);
        auVar11 = NEON_fmax(auVar27,auVar11,4);
        auVar23 = NEON_fmin(auVar17,auVar23,4);
        auVar11 = NEON_fmax(auVar17,auVar11,4);
      } while (lVar7 != 0);
      if ((uVar22 & 1) == 0) goto joined_r0x0328f7d4;
    }
    auVar27 = *(undefined1 (*) [16])(lVar6 + *(long *)(param_2 + 0x18));
    auVar11 = NEON_fmax(auVar27,auVar11,4);
    auVar23 = NEON_fmin(auVar27,auVar23,4);
  }
joined_r0x0328f7d4:
  if (uVar22 == 0) {
    uStack_188 = 0;
    local_190 = 0;
  }
  else {
    fVar8 = auVar11._0_4_ - auVar23._0_4_;
    fVar12 = auVar11._4_4_ - auVar23._4_4_;
    fVar13 = auVar11._8_4_ - auVar23._8_4_;
    fVar14 = auVar11._12_4_ - auVar23._12_4_;
    uStack_38 = CONCAT44(fVar14,fVar13);
    local_40 = CONCAT44(fVar12,fVar8);
    auVar27._0_8_ = CONCAT44(auVar23._4_4_ + fVar12 * 0.5,auVar23._0_4_ + fVar8 * 0.5);
    auVar27._8_4_ = auVar23._8_4_ + fVar13 * 0.5;
    auVar27._12_4_ = auVar23._12_4_ + fVar14 * 0.5;
    uStack_188 = auVar27._8_8_;
    local_190 = auVar27._0_8_;
  }
  local_90[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_28 = uVar9;
  FUN_0328f168(&local_40,local_90);
  uStack_78 = uStack_188;
  local_80 = local_190;
  auVar17._0_8_ = CONCAT44(-local_190._4_4_,-(float)local_190);
  auVar17._8_4_ = -(float)uStack_188;
  auVar17._12_4_ = -uStack_188._4_4_;
  uStack_178 = auVar17._8_8_;
  local_180 = auVar17._0_8_;
  FUN_03290c38(auStack_170,param_2,&local_180);
  if ((float)local_d0 <= 0.0) {
    *(undefined8 *)param_3 = local_90[0];
    *(undefined8 *)(param_3 + 6) = uStack_188;
    *(undefined8 *)(param_3 + 4) = local_190;
    *(undefined8 *)(param_3 + 10) = uStack_68;
    *(undefined8 *)(param_3 + 8) = local_70;
    *(undefined8 *)(param_3 + 0xe) = uStack_58;
    *(undefined8 *)(param_3 + 0xc) = local_60;
    *(undefined8 *)(param_3 + 0x12) = uStack_48;
    *(undefined8 *)(param_3 + 0x10) = local_50;
  }
  else {
    uVar10 = NEON_frecpe(local_d0,4);
    uVar15 = NEON_frecps(local_d0,uVar10,4);
    fVar8 = (float)uVar10 * (float)uVar15;
    fVar12 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar15 >> 0x20);
    uVar10 = NEON_frecps(local_d0,CONCAT44(fVar12,fVar8),4);
    local_180 = CONCAT44((float)(uVar9 >> 0x20) * fVar12 * (float)((ulong)uVar10 >> 0x20),
                         (float)uVar9 * fVar8 * (float)uVar10);
    *param_3 = (float)local_d0;
    param_3[1] = (float)uVar9;
    FUN_03290f48(auStack_170,&local_28,&local_180,param_3 + 4,param_3 + 8);
    puVar5 = PTR_DAT_043723a0;
    auVar11 = *(undefined1 (*) [16])(param_3 + 8);
    auVar29._0_8_ = CONCAT44(local_190._4_4_ + param_3[5],(float)local_190 + param_3[4]);
    auVar29._8_4_ = (float)uStack_188 + param_3[6];
    auVar29._12_4_ = uStack_188._4_4_ + param_3[7];
    *(long *)(param_3 + 6) = auVar29._8_8_;
    *(undefined8 *)(param_3 + 4) = auVar29._0_8_;
    auVar19._8_8_ = uStack_68;
    auVar19._0_8_ = local_70;
    auVar3._8_8_ = uStack_58;
    auVar3._0_8_ = local_60;
    auVar4._8_8_ = uStack_48;
    auVar4._0_8_ = local_50;
    auVar19 = auVar19 ^ (auVar19 ^ auVar3) & *(undefined1 (*) [16])(puVar5 + 0x20);
    auVar19 = auVar19 ^ (auVar19 ^ auVar4) & *(undefined1 (*) [16])(puVar5 + 0x40);
    pauVar1 = (undefined1 (*) [16])(param_3 + 0xc);
    pauVar2 = (undefined1 (*) [16])(param_3 + 0x10);
    auVar16._0_4_ = auVar19._0_4_ * 0.1;
    auVar16._4_4_ = auVar19._4_4_ * 0.1;
    auVar16._8_4_ = auVar19._8_4_ * 0.1;
    auVar16._12_4_ = auVar19._12_4_ * 0.1;
    auVar27 = auVar11 ^ (auVar11 ^ *pauVar1) & *(undefined1 (*) [16])(puVar5 + 0x20);
    auVar27 = auVar27 ^ (auVar27 ^ *pauVar2) & *(undefined1 (*) [16])(puVar5 + 0x40);
    iVar18 = -(uint)(auVar27._0_4_ < auVar16._0_4_);
    iVar21 = -(uint)(auVar27._4_4_ < auVar16._4_4_);
    auVar20._0_8_ = CONCAT44(iVar21,iVar18);
    auVar20._8_4_ = -(uint)(auVar27._8_4_ < auVar16._8_4_);
    auVar20._12_4_ = -(uint)(auVar27._12_4_ < auVar16._12_4_);
    auVar28._8_8_ = auVar20._8_8_;
    auVar28._0_8_ = auVar20._0_8_;
    uVar22 = (uint)(byte)((byte)iVar18 & (byte)_DAT_03889700);
    auVar25._0_8_ =
         CONCAT17((byte)((uint)iVar21 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                  (uint7)CONCAT14((byte)iVar21 & (byte)((ulong)_DAT_03889700 >> 0x20),uVar22));
    auVar25[8] = (byte)auVar20._8_4_ & (byte)_UNK_03889708;
    auVar25[9] = (byte)((uint)auVar20._8_4_ >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
    auVar25[10] = (byte)((uint)auVar20._8_4_ >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
    auVar25[0xb] = (byte)((uint)auVar20._8_4_ >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
    auVar26[0xc] = (byte)auVar20._12_4_ & (byte)((ulong)_UNK_03889708 >> 0x20);
    auVar26._0_12_ = auVar25;
    auVar26[0xd] = (byte)((uint)auVar20._12_4_ >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
    auVar26[0xe] = (byte)((uint)auVar20._12_4_ >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
    auVar26[0xf] = (byte)((uint)auVar20._12_4_ >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
    auVar30._8_8_ = auVar20._8_8_;
    auVar30._0_8_ = auVar20._0_8_;
    auVar24._8_8_ = uStack_188;
    auVar24._0_8_ = local_190;
    auVar27 = auVar27 ^ (auVar27 ^ auVar16) & auVar30;
    auVar29 = auVar29 ^ (auVar29 ^ auVar24) & auVar28;
    auVar23 = ZEXT816(0);
    uVar22 = uVar22 + (int)((ulong)auVar25._0_8_ >> 0x20) + auVar25._8_4_ + auVar26._12_4_;
    *(long *)(param_3 + 6) = auVar29._8_8_;
    *(long *)(param_3 + 4) = auVar29._0_8_;
    auVar17 = *pauVar1 ^ (*pauVar1 ^ auVar27) & *(undefined1 (*) [16])(puVar5 + 0x20);
    auVar11 = auVar11 ^ (auVar11 ^ auVar27) & *(undefined1 (*) [16])(puVar5 + 0x10);
    auVar27 = *pauVar2 ^ (*pauVar2 ^ auVar27) & *(undefined1 (*) [16])(puVar5 + 0x40);
    *(long *)(param_3 + 10) = auVar11._8_8_;
    *(long *)(param_3 + 8) = auVar11._0_8_;
    *(long *)(param_3 + 0xe) = auVar17._8_8_;
    *(long *)(param_3 + 0xc) = auVar17._0_8_;
    *(long *)(param_3 + 0x12) = auVar27._8_8_;
    *(long *)(param_3 + 0x10) = auVar27._0_8_;
    if ((uVar22 & 1) != 0) {
      auVar11 = NEON_fmax(auVar11,auVar23,4);
      auVar24 = NEON_ext(auVar11,auVar11,8,1);
      uVar10 = NEON_ext(auVar11._0_8_,auVar24._0_8_,4,1);
      param_3[0xc] = auVar11._4_4_;
      *(undefined8 *)(param_3 + 9) = uVar10;
      param_3[0x10] = auVar11._8_4_;
    }
    if ((uVar22 >> 1 & 1) != 0) {
      auVar11 = NEON_fmax(auVar17,auVar23,4);
      param_3[9] = auVar11._0_4_;
      param_3[0xc] = auVar11._0_4_;
      param_3[0x11] = auVar11._8_4_;
      param_3[0xe] = auVar11._8_4_;
    }
    if ((uVar22 >> 2 & 1) != 0) {
      auVar11 = NEON_fmax(auVar27,auVar23,4);
      param_3[10] = auVar11._0_4_;
      *(long *)(param_3 + 0x10) = auVar11._0_8_;
      param_3[0xe] = auVar11._4_4_;
    }
  }
  return;
}


