/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c05fb8; name: FUN_02c05fb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c05fb8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  void *__s;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  fVar17 = (float)*(undefined8 *)(param_1 + 0x30) * 0.5;
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * 0.5;
  fVar10 = (float)*(undefined8 *)(param_1 + 0x38) * 0.5;
  uStack_48 = CONCAT44(0x80000000,-fVar10);
  local_50 = CONCAT44(-fVar11,-fVar17);
  uStack_38 = (ulong)(uint)fVar10;
  uStack_40 = CONCAT17((char)((uint)fVar11 >> 0x18),
                       CONCAT16((char)((uint)fVar11 >> 0x10),
                                CONCAT15((char)((uint)fVar11 >> 8),CONCAT14(SUB41(fVar11,0),fVar17))
                               ));
  fVar17 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
  fVar10 = (float)*(undefined8 *)(param_1 + 0x20);
  auVar29._0_4_ = fVar10 * fVar10;
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  auVar29._4_4_ = fVar11 * fVar11;
  fVar22 = (float)*(undefined8 *)(param_1 + 0x28);
  auVar29._8_4_ = fVar22 * fVar22;
  fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  auVar29._12_4_ = fVar32 * fVar32;
  auVar18 = NEON_ext(auVar29,auVar29,8,1);
  fVar12 = auVar18._0_4_ + auVar29._0_4_;
  fVar16 = auVar18._4_4_ + auVar29._4_4_;
  fVar9 = fVar12 + fVar16;
  fVar12 = fVar12 + fVar16;
  auVar13._8_8_ = CONCAT44(fVar12,fVar9);
  auVar13._0_8_ = CONCAT44(fVar12,fVar9);
  auVar18 = NEON_frsqrte(auVar13,4);
  iVar4 = -(uint)(fVar9 < fVar17);
  bVar23 = (byte)((uint)iVar4 >> 8);
  bVar24 = (byte)((uint)iVar4 >> 0x10);
  bVar25 = (byte)((uint)iVar4 >> 0x18);
  iVar5 = -(uint)(fVar12 < fVar17);
  iVar26 = -(uint)(fVar9 < fVar17);
  iVar27 = -(uint)(fVar12 < fVar17);
  auVar28._0_4_ = auVar18._0_4_ * fVar9;
  auVar28._4_4_ = auVar18._4_4_ * fVar12;
  auVar28._8_4_ = auVar18._8_4_ * fVar9;
  auVar28._12_4_ = auVar18._12_4_ * fVar12;
  iVar30 = -(uint)((float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~bVar25,
                                   CONCAT12((byte)((uint)fVar9 >> 0x10) & ~bVar24,
                                            CONCAT11((byte)((uint)fVar9 >> 8) & ~bVar23,
                                                     SUB41(fVar9,0) & ~(byte)iVar4))) == 0.0);
  uVar31 = CONCAT13(~(byte)((uint)iVar30 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar30 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar30 >> 8),~(byte)iVar30)));
  auVar29 = NEON_frsqrts(auVar18,auVar28,4);
  auVar19._0_4_ = auVar18._0_4_ * auVar29._0_4_;
  auVar19._4_4_ = auVar18._4_4_ * auVar29._4_4_;
  auVar19._8_4_ = auVar18._8_4_ * auVar29._8_4_;
  auVar19._12_4_ = auVar18._12_4_ * auVar29._12_4_;
  auVar21._8_8_ = _UNK_0388a138;
  auVar21._0_8_ = _DAT_0388a130;
  auVar14._0_4_ = fVar9 * auVar19._0_4_;
  auVar14._4_4_ = fVar12 * auVar19._4_4_;
  auVar14._8_4_ = fVar9 * auVar19._8_4_;
  auVar14._12_4_ = fVar12 * auVar19._12_4_;
  auVar18 = NEON_frsqrts(auVar19,auVar14,4);
  auVar20._4_4_ = uVar31;
  auVar20._0_4_ = uVar31;
  auVar20._8_4_ = uVar31;
  auVar20._12_4_ = uVar31;
  fVar10 = fVar10 * auVar19._0_4_ * auVar18._0_4_;
  fVar11 = fVar11 * auVar19._4_4_ * auVar18._4_4_;
  fVar22 = fVar22 * auVar19._8_4_ * auVar18._8_4_;
  fVar32 = fVar32 * auVar19._12_4_ * auVar18._12_4_;
  auVar18[1] = (byte)((uint)fVar10 >> 8) & ~bVar23;
  auVar18[0] = SUB41(fVar10,0) & ~(byte)iVar4;
  auVar18[2] = (byte)((uint)fVar10 >> 0x10) & ~bVar24;
  auVar18[3] = (byte)((uint)fVar10 >> 0x18) & ~bVar25;
  auVar18[4] = SUB41(fVar11,0) & ~(byte)iVar5;
  auVar18[5] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar5 >> 8);
  auVar18[6] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
  auVar18[7] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
  auVar18[8] = SUB41(fVar22,0) & ~(byte)iVar26;
  auVar18[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar26 >> 8);
  auVar18[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
  auVar18[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
  auVar18[0xc] = SUB41(fVar32,0) & ~(byte)iVar27;
  auVar18[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar27 >> 8);
  auVar18[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  auVar18[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  auVar21 = auVar21 ^ (auVar21 ^ auVar18) & auVar20;
  auVar18 = NEON_ext(auVar21,auVar21,8,1);
  fVar17 = auVar21._0_4_;
  auVar15._0_4_ = fVar17 + fVar17;
  fVar11 = auVar21._4_4_;
  auVar15._4_4_ = fVar11 + fVar11;
  auVar15._8_4_ = auVar21._8_4_ + auVar21._8_4_;
  fVar22 = auVar21._12_4_;
  auVar15._12_4_ = fVar22 + fVar22;
  auVar29 = NEON_ext(auVar15,auVar15,8,1);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  fVar10 = auVar18._0_4_ * auVar29._0_4_;
  uVar33 = NEON_fmov(0x3f800000,4);
  fVar32 = (float)uVar33;
  local_90 = CONCAT44(auVar15._4_4_ * fVar17 + auVar15._8_4_ * fVar22,
                      fVar32 - (auVar15._4_4_ * fVar11 + fVar10));
  uStack_80 = CONCAT44(fVar32 - (auVar15._0_4_ * fVar17 + fVar10),
                       auVar15._4_4_ * fVar17 - auVar15._8_4_ * fVar22);
  local_d8 = 0xbf8000003f800000;
  uStack_88 = (ulong)(uint)(auVar15._8_4_ * fVar17 - auVar15._4_4_ * fVar22);
  uStack_78 = (ulong)(uint)(auVar15._8_4_ * fVar11 + auVar15._0_4_ * fVar22);
  local_d0 = 0x101;
  local_70 = CONCAT44(auVar15._8_4_ * fVar11 - auVar15._0_4_ * fVar22,
                      auVar15._8_4_ * fVar17 + auVar15._4_4_ * fVar22);
  uStack_68 = (ulong)(uint)(fVar32 - (auVar15._0_4_ * fVar17 + auVar15._4_4_ * fVar11));
  local_e0 = 0x3c23d70a;
  local_dc = 1;
  local_92 = 0;
  local_b8 = 1;
  uStack_b0 = 0x3fc0000000000002;
  local_c8 = &DAT_042d95d8;
  uStack_c0 = 0xffffffff;
  local_a8 = 0xc47a0000;
  local_98 = 0xfc;
  local_94 = 0x100;
  local_a0 = &local_90;
  uStack_58 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  __s = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,0x230,0);
  memset(__s,0,0x230);
  FUN_02fd6a7c(0x3c75c28f,__s,&local_50,&local_e0);
  *(undefined8 *)((long)__s + 8) = 0x230;
  plVar6 = (long *)*param_2;
  *param_2 = (long)__s;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  return;
}


