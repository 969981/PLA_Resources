/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bbd64; name: FUN_031bbd64
 */


bool FUN_031bbd64(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined1 local_60 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_34 [4];
  
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  fVar6 = (float)uVar23;
  fVar5 = (float)*(undefined8 *)(param_3 + 0x10) - fVar6;
  fVar8 = (float)((ulong)uVar23 >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) - fVar8;
  fVar10 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar9 = (float)*(undefined8 *)(param_3 + 0x18) - fVar10;
  fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar12 = fVar19 * fVar5;
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar17 = fVar20 * fVar7;
  fVar21 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar18 = fVar21 * fVar9;
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  auVar15 = *(undefined1 (*) [16])(param_4 + 0x10);
  fVar13 = -(fVar12 + fVar17 + fVar18);
  fVar12 = -(fVar12 + fVar17 + fVar18);
  fVar5 = fVar5 + fVar19 * fVar13;
  fVar7 = fVar7 + fVar20 * fVar12;
  fVar9 = fVar9 + fVar21 * fVar13;
  fVar12 = ((float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) - fVar24) + fVar22 * fVar12;
  if (param_5 != -1) {
    FUN_031bb1e0(param_1,param_5,0,&local_50,auStack_34);
    FUN_031bb1e0(param_1,param_5,1,local_60,auStack_34);
    fVar13 = fVar5 * (local_60._0_4_ - local_50);
    fVar17 = fVar7 * (local_60._4_4_ - fStack_4c);
    fVar18 = fVar9 * (local_60._8_4_ - fStack_48);
    fVar11 = fVar12 * (local_60._12_4_ - fStack_44);
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar13;
    auVar14._8_4_ = fVar18;
    auVar14._12_4_ = fVar11;
    auVar1._4_4_ = fVar17;
    auVar1._0_4_ = fVar13;
    auVar1._8_4_ = fVar18;
    auVar1._12_4_ = fVar11;
    auVar14 = NEON_ext(auVar14,auVar1,8,1);
    if ((*(char *)(param_3 + 4) != '\0') == fVar13 + fVar17 + auVar14._0_4_ <= 0.0) {
      return false;
    }
  }
  fVar6 = auVar15._0_4_ - fVar6;
  fVar8 = auVar15._4_4_ - fVar8;
  fVar10 = auVar15._8_4_ - fVar10;
  fVar13 = fVar6 * fVar19;
  fVar18 = fVar8 * fVar20;
  fVar11 = fVar10 * fVar21;
  fVar17 = -(fVar13 + fVar18 + fVar11);
  fVar13 = -(fVar13 + fVar18 + fVar11);
  fVar6 = fVar6 + fVar19 * fVar17;
  fVar8 = fVar8 + fVar20 * fVar13;
  fVar10 = fVar10 + fVar21 * fVar17;
  fVar13 = (auVar15._12_4_ - fVar24) + fVar22 * fVar13;
  fVar6 = fVar6 * fVar6;
  fVar8 = fVar8 * fVar8;
  fVar10 = fVar10 * fVar10;
  fVar13 = fVar13 * fVar13;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar6;
  auVar15._8_4_ = fVar10;
  auVar15._12_4_ = fVar13;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar13;
  auVar15 = NEON_ext(auVar15,auVar2,8,1);
  auVar16._0_4_ = fVar5 * fVar5;
  auVar16._4_4_ = fVar7 * fVar7;
  auVar16._8_4_ = fVar9 * fVar9;
  auVar16._12_4_ = fVar12 * fVar12;
  auVar14 = NEON_ext(auVar16,auVar16,8,1);
  if (auVar14._0_4_ + auVar16._0_4_ + auVar16._4_4_ <= auVar15._0_4_ + fVar6 + fVar8) {
    bVar3 = false;
  }
  else {
    iVar4 = FUN_031babf0(param_1,(undefined8 *)(param_2 + 0x10),param_3 + 0x20,param_4 + 0x20);
    bVar3 = iVar4 != *(char *)(param_3 + 4);
  }
  return bVar3;
}


