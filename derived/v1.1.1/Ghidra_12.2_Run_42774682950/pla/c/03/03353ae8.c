/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03353ae8; name: FUN_03353ae8
 */


void FUN_03353ae8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint local_420 [256];
  uint *local_20;
  
  local_20 = (uint *)((ulong)local_420 | 4);
  do {
    uVar4 = local_20[-1];
    uVar9 = (ulong)(uVar4 >> 1);
    local_20 = local_20 + -1;
    while (*(char *)(param_2 + uVar9 * 0x80 + 0x70) == '\0') {
      if ((uVar4 & 1) == 0) {
        lVar2 = param_2 + uVar9 * 0x80;
        pauVar11 = (undefined1 (*) [16])(param_2 + (ulong)*(uint *)(lVar2 + 0x60) * 0x80);
        auVar12 = pauVar11[4];
        auVar36 = pauVar11[5];
        auVar34 = *pauVar11;
        auVar18 = pauVar11[1];
        auVar19 = pauVar11[2];
        auVar31 = pauVar11[3];
        auVar23._4_4_ = auVar31._0_4_;
        auVar23._0_4_ = auVar18._0_4_;
        auVar30._4_4_ = auVar31._4_4_;
        auVar30._0_4_ = auVar18._4_4_;
        auVar31 = NEON_ext(auVar31,auVar31,8,1);
        auVar22 = NEON_ext(auVar36,auVar36,8,1);
        auVar18 = NEON_ext(auVar18,auVar18,8,1);
        auVar14._4_4_ = auVar19._0_4_;
        auVar14._0_4_ = auVar34._0_4_;
        auVar30._8_4_ = auVar36._4_4_;
        auVar30._12_4_ = 0;
        auVar38._4_4_ = auVar31._4_4_;
        auVar38._0_4_ = auVar18._4_4_;
        auVar39._4_4_ = auVar31._0_4_;
        auVar39._0_4_ = auVar18._0_4_;
        auVar18 = NEON_ext(auVar12,auVar12,8,1);
        auVar23._8_4_ = auVar36._0_4_;
        auVar23._12_4_ = 0;
        auVar41._4_4_ = auVar19._4_4_;
        auVar41._0_4_ = auVar34._4_4_;
        auVar38._8_4_ = auVar22._4_4_;
        auVar38._12_4_ = 0;
        auVar41._8_4_ = auVar12._4_4_;
        auVar41._12_4_ = 0;
        auVar31._8_8_ = 0x7f7fffee7f7fffee;
        auVar31._0_8_ = 0x7f7fffee7f7fffee;
        auVar39._8_4_ = auVar22._0_4_;
        auVar39._12_4_ = 0;
        auVar36 = NEON_ext(auVar34,auVar34,8,1);
        auVar14._8_4_ = auVar12._0_4_;
        auVar14._12_4_ = 0;
        auVar12 = NEON_ext(auVar19,auVar19,8,1);
        auVar46._4_4_ = auVar12._0_4_;
        auVar46._0_4_ = auVar36._0_4_;
        auVar12._4_4_ = auVar12._4_4_;
        auVar12._0_4_ = auVar36._4_4_;
        auVar36._8_8_ = 0xff7fffeeff7fffee;
        auVar36._0_8_ = 0xff7fffeeff7fffee;
        auVar46._8_4_ = auVar18._0_4_;
        auVar46._12_4_ = 0;
        auVar12._8_4_ = auVar18._4_4_;
        auVar12._12_4_ = 0;
        if (*(uint *)(lVar2 + 100) != 0) {
          pauVar11 = (undefined1 (*) [16])(param_2 + (ulong)*(uint *)(lVar2 + 100) * 0x80);
          auVar36 = *pauVar11;
          auVar18 = pauVar11[1];
          auVar31 = pauVar11[4];
          auVar34 = pauVar11[5];
          auVar43 = NEON_ext(auVar18,auVar18,8,1);
          auVar47 = NEON_ext(auVar34,auVar34,8,1);
          auVar19 = pauVar11[2];
          auVar22 = pauVar11[3];
          auVar40._4_4_ = auVar22._4_4_;
          auVar40._0_4_ = auVar18._4_4_;
          auVar45 = NEON_ext(auVar22,auVar22,8,1);
          auVar40._8_4_ = auVar34._4_4_;
          auVar40._12_4_ = 0;
          auVar15 = NEON_ext(auVar31,auVar31,8,1);
          auVar13._4_4_ = auVar22._0_4_;
          auVar13._0_4_ = auVar18._0_4_;
          auVar13._8_4_ = auVar34._0_4_;
          auVar13._12_4_ = 0;
          auVar33._4_4_ = auVar19._0_4_;
          auVar33._0_4_ = auVar36._0_4_;
          auVar33._8_4_ = auVar31._0_4_;
          auVar33._12_4_ = 0;
          auVar32._4_4_ = auVar45._0_4_;
          auVar32._0_4_ = auVar43._0_4_;
          auVar18 = NEON_fmax(auVar13,auVar40,4);
          auVar22 = NEON_ext(auVar36,auVar36,8,1);
          auVar32._8_4_ = auVar47._0_4_;
          auVar32._12_4_ = 0;
          auVar7._4_4_ = auVar19._4_4_;
          auVar7._0_4_ = auVar36._4_4_;
          auVar7._8_4_ = auVar31._4_4_;
          auVar7._12_4_ = 0;
          auVar34 = NEON_fmin(auVar33,auVar7,4);
          auVar45._4_4_ = auVar45._4_4_;
          auVar45._0_4_ = auVar43._4_4_;
          auVar45._8_4_ = auVar47._4_4_;
          auVar45._12_4_ = 0;
          auVar36 = NEON_fmax(auVar32,auVar45,4);
          auVar31 = NEON_ext(auVar19,auVar19,8,1);
          auVar36 = NEON_fmax(auVar18,auVar36,4);
          auVar43._4_4_ = auVar31._0_4_;
          auVar43._0_4_ = auVar22._0_4_;
          auVar47._4_4_ = auVar31._4_4_;
          auVar47._0_4_ = auVar22._4_4_;
          auVar43._8_4_ = auVar15._0_4_;
          auVar43._12_4_ = 0;
          auVar47._8_4_ = auVar15._4_4_;
          auVar47._12_4_ = 0;
          auVar18 = NEON_fmin(auVar43,auVar47,4);
          auVar31 = NEON_fmin(auVar34,auVar18,4);
        }
        auVar18 = NEON_fmax(auVar23,auVar30,4);
        auVar19 = NEON_fmax(auVar39,auVar38,4);
        auVar22._8_8_ = 0xff7fffeeff7fffee;
        auVar22._0_8_ = 0xff7fffeeff7fffee;
        auVar34 = NEON_fmin(auVar14,auVar41,4);
        auVar15._8_8_ = 0x7f7fffee7f7fffee;
        auVar15._0_8_ = 0x7f7fffee7f7fffee;
        auVar23 = NEON_fmin(auVar46,auVar12,4);
        if (*(uint *)(lVar2 + 0x68) != 0) {
          pauVar11 = (undefined1 (*) [16])(param_2 + (ulong)*(uint *)(lVar2 + 0x68) * 0x80);
          auVar12 = *pauVar11;
          auVar22 = pauVar11[1];
          auVar15 = pauVar11[4];
          auVar30 = pauVar11[5];
          auVar39 = NEON_ext(auVar22,auVar22,8,1);
          auVar46 = NEON_ext(auVar30,auVar30,8,1);
          auVar14 = pauVar11[2];
          auVar38 = pauVar11[3];
          auVar37._4_4_ = auVar38._4_4_;
          auVar37._0_4_ = auVar22._4_4_;
          auVar41 = NEON_ext(auVar38,auVar38,8,1);
          auVar37._8_4_ = auVar30._4_4_;
          auVar37._12_4_ = 0;
          auVar44._4_4_ = auVar41._4_4_;
          auVar44._0_4_ = auVar39._4_4_;
          auVar44._8_4_ = auVar46._4_4_;
          auVar44._12_4_ = 0;
          auVar45 = NEON_ext(auVar15,auVar15,8,1);
          auVar16._4_4_ = auVar38._0_4_;
          auVar16._0_4_ = auVar22._0_4_;
          auVar16._8_4_ = auVar30._0_4_;
          auVar16._12_4_ = 0;
          auVar29._4_4_ = auVar14._0_4_;
          auVar29._0_4_ = auVar12._0_4_;
          auVar29._8_4_ = auVar15._0_4_;
          auVar29._12_4_ = 0;
          auVar26._4_4_ = auVar41._0_4_;
          auVar26._0_4_ = auVar39._0_4_;
          auVar22 = NEON_fmax(auVar16,auVar37,4);
          auVar38 = NEON_ext(auVar12,auVar12,8,1);
          auVar26._8_4_ = auVar46._0_4_;
          auVar26._12_4_ = 0;
          auVar5._4_4_ = auVar14._4_4_;
          auVar5._0_4_ = auVar12._4_4_;
          auVar5._8_4_ = auVar15._4_4_;
          auVar5._12_4_ = 0;
          auVar30 = NEON_fmin(auVar29,auVar5,4);
          auVar12 = NEON_fmax(auVar26,auVar44,4);
          auVar15 = NEON_ext(auVar14,auVar14,8,1);
          auVar22 = NEON_fmax(auVar22,auVar12,4);
          auVar17._4_4_ = auVar15._0_4_;
          auVar17._0_4_ = auVar38._0_4_;
          auVar27._4_4_ = auVar15._4_4_;
          auVar27._0_4_ = auVar38._4_4_;
          auVar17._8_4_ = auVar45._0_4_;
          auVar17._12_4_ = 0;
          auVar27._8_4_ = auVar45._4_4_;
          auVar27._12_4_ = 0;
          auVar12 = NEON_fmin(auVar17,auVar27,4);
          auVar15 = NEON_fmin(auVar30,auVar12,4);
        }
        auVar12 = NEON_fmax(auVar18,auVar19,4);
        auVar34 = NEON_fmin(auVar34,auVar23,4);
        if (*(uint *)(lVar2 + 0x6c) == 0) {
          auVar18._8_8_ = 0xff7fffeeff7fffee;
          auVar18._0_8_ = 0xff7fffeeff7fffee;
          auVar19._8_8_ = 0x7f7fffee7f7fffee;
          auVar19._0_8_ = 0x7f7fffee7f7fffee;
        }
        else {
          pauVar11 = (undefined1 (*) [16])(param_2 + (ulong)*(uint *)(lVar2 + 0x6c) * 0x80);
          auVar18 = *pauVar11;
          auVar19 = pauVar11[1];
          auVar23 = pauVar11[4];
          auVar30 = pauVar11[5];
          auVar39 = NEON_ext(auVar19,auVar19,8,1);
          auVar46 = NEON_ext(auVar30,auVar30,8,1);
          auVar14 = pauVar11[2];
          auVar38 = pauVar11[3];
          auVar35._4_4_ = auVar38._4_4_;
          auVar35._0_4_ = auVar19._4_4_;
          auVar41 = NEON_ext(auVar38,auVar38,8,1);
          auVar35._8_4_ = auVar30._4_4_;
          auVar35._12_4_ = 0;
          auVar42._4_4_ = auVar41._4_4_;
          auVar42._0_4_ = auVar39._4_4_;
          auVar42._8_4_ = auVar46._4_4_;
          auVar42._12_4_ = 0;
          auVar45 = NEON_ext(auVar23,auVar23,8,1);
          auVar20._4_4_ = auVar38._0_4_;
          auVar20._0_4_ = auVar19._0_4_;
          auVar20._8_4_ = auVar30._0_4_;
          auVar20._12_4_ = 0;
          auVar28._4_4_ = auVar14._0_4_;
          auVar28._0_4_ = auVar18._0_4_;
          auVar28._8_4_ = auVar23._0_4_;
          auVar28._12_4_ = 0;
          auVar24._4_4_ = auVar41._0_4_;
          auVar24._0_4_ = auVar39._0_4_;
          auVar19 = NEON_fmax(auVar20,auVar35,4);
          auVar38 = NEON_ext(auVar18,auVar18,8,1);
          auVar24._8_4_ = auVar46._0_4_;
          auVar24._12_4_ = 0;
          auVar6._4_4_ = auVar14._4_4_;
          auVar6._0_4_ = auVar18._4_4_;
          auVar6._8_4_ = auVar23._4_4_;
          auVar6._12_4_ = 0;
          auVar30 = NEON_fmin(auVar28,auVar6,4);
          auVar18 = NEON_fmax(auVar24,auVar42,4);
          auVar23 = NEON_ext(auVar14,auVar14,8,1);
          auVar18 = NEON_fmax(auVar19,auVar18,4);
          auVar21._4_4_ = auVar23._0_4_;
          auVar21._0_4_ = auVar38._0_4_;
          auVar25._4_4_ = auVar23._4_4_;
          auVar25._0_4_ = auVar38._4_4_;
          auVar21._8_4_ = auVar45._0_4_;
          auVar21._12_4_ = 0;
          auVar25._8_4_ = auVar45._4_4_;
          auVar25._12_4_ = 0;
          auVar19 = NEON_fmin(auVar21,auVar25,4);
          auVar19 = NEON_fmin(auVar30,auVar19,4);
        }
        goto LAB_03353bd4;
      }
      *local_20 = uVar4 & 0xfffffffe;
      lVar2 = param_2 + uVar9 * 0x80;
      uVar3 = *(uint *)(lVar2 + 0x60);
      puVar8 = local_20 + 1;
      if (*(int *)(lVar2 + 0x6c) != 0) {
        local_20[1] = *(int *)(lVar2 + 0x6c) << 1 | 1;
        puVar8 = local_20 + 2;
      }
      local_20 = puVar8;
      if (*(int *)(lVar2 + 0x68) != 0) {
        *local_20 = *(int *)(lVar2 + 0x68) << 1 | 1;
        local_20 = local_20 + 1;
      }
      if (*(int *)(lVar2 + 100) != 0) {
        *local_20 = *(int *)(lVar2 + 100) << 1 | 1;
        local_20 = local_20 + 1;
      }
      uVar4 = uVar3 << 1 | 1;
      uVar9 = (ulong)uVar3 & 0x7fffffff;
    }
    lVar2 = param_2 + uVar9 * 0x80;
    lVar10 = *param_1;
    auVar19._8_4_ = 0x7f7fffee;
    auVar19._0_8_ = 0x7f7fffee7f7fffee;
    auVar19._12_4_ = 0x7f7fffee;
    pauVar11 = (undefined1 (*) [16])(lVar10 + (ulong)*(uint *)(lVar2 + 0x60) * 0x18);
    auVar18._8_4_ = 0xff7fffee;
    auVar18._0_8_ = 0xff7fffeeff7fffee;
    auVar18._12_4_ = 0xff7fffee;
    auVar12 = *pauVar11;
    auVar34._0_8_ = *(undefined8 *)pauVar11[1];
    auVar36 = auVar18;
    auVar31 = auVar19;
    if (*(uint *)(lVar2 + 100) != 0xffffffff) {
      pauVar11 = (undefined1 (*) [16])(lVar10 + (ulong)*(uint *)(lVar2 + 100) * 0x18);
      auVar36 = *pauVar11;
      auVar31._0_8_ = *(undefined8 *)pauVar11[1];
      auVar31._8_4_ = auVar36._12_4_;
      auVar31._12_4_ = 0;
    }
    auVar34._8_4_ = auVar12._12_4_;
    auVar22._8_8_ = auVar18._8_8_;
    auVar22._0_8_ = 0xff7fffeeff7fffee;
    auVar15._8_8_ = auVar19._8_8_;
    auVar15._0_8_ = 0x7f7fffee7f7fffee;
    if (*(uint *)(lVar2 + 0x68) != 0xffffffff) {
      pauVar11 = (undefined1 (*) [16])(lVar10 + (ulong)*(uint *)(lVar2 + 0x68) * 0x18);
      auVar22 = *pauVar11;
      auVar15._0_8_ = *(undefined8 *)pauVar11[1];
      auVar15._8_4_ = auVar22._12_4_;
      auVar15._12_4_ = 0;
    }
    auVar34._12_4_ = 0;
    if (*(uint *)(lVar2 + 0x6c) != 0xffffffff) {
      pauVar11 = (undefined1 (*) [16])(lVar10 + (ulong)*(uint *)(lVar2 + 0x6c) * 0x18);
      auVar18 = *pauVar11;
      auVar19._0_8_ = *(undefined8 *)pauVar11[1];
      auVar19._8_4_ = auVar18._12_4_;
      auVar19._12_4_ = 0;
    }
LAB_03353bd4:
    puVar1 = (undefined8 *)(param_2 + uVar9 * 0x80);
    auVar41 = NEON_ext(auVar34,auVar34,8,1);
    auVar30 = NEON_ext(auVar31,auVar31,8,1);
    auVar46 = NEON_ext(auVar15,auVar15,8,1);
    auVar45 = NEON_ext(auVar19,auVar19,8,1);
    auVar14 = NEON_ext(auVar12,auVar12,8,1);
    auVar23 = NEON_ext(auVar36,auVar36,8,1);
    auVar39 = NEON_ext(auVar22,auVar22,8,1);
    puVar1[5] = CONCAT44(auVar19._4_4_,auVar15._4_4_);
    puVar1[4] = CONCAT44(auVar31._4_4_,auVar34._4_4_);
    puVar1[7] = CONCAT44(auVar18._4_4_,auVar22._4_4_);
    puVar1[6] = CONCAT44(auVar36._4_4_,auVar12._4_4_);
    auVar38 = NEON_ext(auVar18,auVar18,8,1);
    puVar1[1] = CONCAT44(auVar19._0_4_,auVar15._0_4_);
    *puVar1 = CONCAT44(auVar31._0_4_,auVar34._0_4_);
    puVar1[3] = CONCAT44(auVar18._0_4_,auVar22._0_4_);
    puVar1[2] = CONCAT44(auVar36._0_4_,auVar12._0_4_);
    puVar1[9] = CONCAT44(auVar45._0_4_,auVar46._0_4_);
    puVar1[8] = CONCAT44(auVar30._0_4_,auVar41._0_4_);
    puVar1[0xb] = CONCAT44(auVar38._0_4_,auVar39._0_4_);
    puVar1[10] = CONCAT44(auVar23._0_4_,auVar14._0_4_);
    if (local_420 == local_20) {
      return;
    }
  } while( true );
}


