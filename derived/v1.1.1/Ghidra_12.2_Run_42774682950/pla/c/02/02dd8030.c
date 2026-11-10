/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd8030; name: FUN_02dd8030
 */


void FUN_02dd8030(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  
  lVar4 = **(long **)(param_1 + 0xb8);
  lVar3 = lVar4 + param_2 * 0x70;
  local_b0 = 0;
  uStack_a8 = 0;
  auVar8 = *(undefined1 (*) [16])(lVar3 + 0x40);
  puVar2 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x10) + 0x38) + (*(ulong *)(lVar3 + 8) & 0xffffff) * 0xc0)
  ;
  fVar17 = auVar8._0_4_;
  auVar12._0_4_ = fVar17 + fVar17;
  fVar10 = auVar8._4_4_;
  auVar12._4_4_ = fVar10 + fVar10;
  auVar12._8_4_ = auVar8._8_4_ + auVar8._8_4_;
  fVar9 = auVar8._12_4_;
  auVar12._12_4_ = fVar9 + fVar9;
  fVar14 = (float)*(undefined8 *)(lVar3 + 0x30);
  fVar19 = (float)*puVar2;
  fVar20 = (float)((ulong)*puVar2 >> 0x20);
  fVar21 = (float)puVar2[1];
  fVar22 = (float)((ulong)puVar2[1] >> 0x20);
  fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar23 = (float)puVar2[2];
  fVar24 = (float)((ulong)puVar2[2] >> 0x20);
  fVar25 = (float)puVar2[3];
  fVar26 = (float)((ulong)puVar2[3] >> 0x20);
  fVar16 = (float)*(undefined8 *)(lVar3 + 0x38);
  fVar28 = (float)puVar2[4];
  fVar29 = (float)((ulong)puVar2[4] >> 0x20);
  fVar30 = (float)puVar2[5];
  fVar31 = (float)((ulong)puVar2[5] >> 0x20);
  fVar27 = auVar12._8_4_ * fVar17 + auVar12._4_4_ * fVar9;
  fVar32 = auVar12._8_4_ * fVar10 - auVar12._0_4_ * fVar9;
  fVar18 = auVar12._8_4_ * fVar10 + auVar12._0_4_ * fVar9;
  auVar8 = NEON_ext(auVar8,auVar8,8,1);
  auVar13 = NEON_ext(auVar12,auVar12,8,1);
  fVar6 = auVar8._0_4_ * auVar13._0_4_;
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar7 = (float)uVar11;
  fVar33 = fVar7 - (auVar12._0_4_ * fVar17 + auVar12._4_4_ * fVar10);
  uStack_78 = CONCAT44(fVar31 * fVar33 + fVar22 * fVar27 + fVar26 * fVar32,
                       fVar30 * fVar33 + fVar21 * fVar27 + fVar25 * fVar32);
  local_80 = CONCAT44(fVar29 * fVar33 + fVar20 * fVar27 + fVar24 * fVar32,
                      fVar28 * fVar33 + fVar19 * fVar27 + fVar23 * fVar32);
  fVar27 = auVar12._4_4_ * fVar17 - auVar12._8_4_ * fVar9;
  fVar32 = fVar7 - (auVar12._0_4_ * fVar17 + fVar6);
  fVar7 = fVar7 - (auVar12._4_4_ * fVar10 + fVar6);
  fVar6 = auVar12._4_4_ * fVar17 + auVar12._8_4_ * fVar9;
  fVar17 = auVar12._8_4_ * fVar17 - auVar12._4_4_ * fVar9;
  uStack_88 = CONCAT44(fVar31 * fVar18 + fVar22 * fVar27 + fVar26 * fVar32,
                       fVar30 * fVar18 + fVar21 * fVar27 + fVar25 * fVar32);
  local_a0 = fVar28 * fVar17 + fVar23 * fVar6 + fVar19 * fVar7;
  fStack_9c = fVar29 * fVar17 + fVar24 * fVar6 + fVar20 * fVar7;
  fStack_98 = fVar30 * fVar17 + fVar25 * fVar6 + fVar21 * fVar7;
  fStack_94 = fVar31 * fVar17 + fVar26 * fVar6 + fVar22 * fVar7;
  uStack_90 = CONCAT44(fVar29 * fVar18 + fVar20 * fVar27 + fVar24 * fVar32,
                       fVar28 * fVar18 + fVar19 * fVar27 + fVar23 * fVar32);
  fVar17 = fVar28 * fVar16 + fVar19 * fVar14 + fVar23 * fVar15 + *(float *)(puVar2 + 6);
  fVar6 = fVar29 * fVar16 + fVar20 * fVar14 + fVar24 * fVar15 + *(float *)((long)puVar2 + 0x34);
  fVar7 = fVar30 * fVar16 + fVar21 * fVar14 + fVar25 * fVar15 + *(float *)(puVar2 + 7);
  fVar10 = fVar31 * fVar16 + fVar22 * fVar14 + fVar26 * fVar15 + *(float *)((long)puVar2 + 0x3c);
  local_60 = (double)fVar17;
  dStack_58 = (double)fVar6;
  _fStack_68 = CONCAT44(fVar10,fVar7);
  _local_70 = CONCAT44(fVar6,fVar17);
  local_50 = (double)fVar7;
  dStack_48 = (double)fVar10;
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
  (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(lVar3 + 0x10),&local_a0,&local_60,0);
  (**(code **)(**(long **)(param_1 + 0x10) + 400))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(lVar3 + 0x10),&local_b0,&local_b0,0);
  if (*(int *)(lVar3 + 0x58) != 0) {
    uVar5 = 0;
    do {
      FUN_02dd8030(param_1,(long)*(int *)(*(long *)(lVar4 + param_2 * 0x70 + 0x50) + uVar5 * 4));
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(long)*(int *)(lVar3 + 0x58));
  }
  return;
}


