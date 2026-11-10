/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03072510; name: FUN_03072510
 */


void FUN_03072510(long param_1,long param_2,float *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar17;
  undefined1 auVar16 [16];
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  float fVar45;
  float fVar46;
  undefined1 auVar44 [16];
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x390);
  uVar32 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x398) >> 0x20);
  uVar47 = *(undefined8 *)*pauVar1;
  auVar9 = *pauVar1;
  auVar8 = *pauVar1;
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  auVar16 = *(undefined1 (*) [16])(param_1 + 0x370);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x380);
  uVar19 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x388) >> 0x20);
  uVar15 = *(undefined8 *)*pauVar1;
  auVar7 = *pauVar1;
  auVar6 = *pauVar1;
  piVar10 = (int *)(*(long *)(param_1 + 0x360) + 0x40);
  puVar11 = (undefined8 *)((long)*piVar10 + (long)piVar10);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x50);
  uVar37 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  auVar56 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar44 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar49._12_4_ = uVar37;
  auVar49._0_12_ = *pauVar1;
  auVar50._12_4_ = uVar37;
  auVar50._0_12_ = *pauVar1;
  auVar49 = NEON_ext(auVar49,auVar50,8,1);
  auVar50 = NEON_ext(auVar56,auVar56,8,1);
  auVar53 = NEON_ext(auVar44,auVar44,8,1);
  uVar23 = *puVar11;
  fVar20 = (float)uVar23 - (float)*(undefined8 *)(param_1 + 0x80);
  fVar24 = (float)((ulong)uVar23 >> 0x20) - (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar26 = *(float *)(puVar11 + 1) - (float)*(undefined8 *)(param_1 + 0x88);
  fVar21 = auVar49._0_4_ * fVar26 +
           (float)*(undefined8 *)*pauVar1 * fVar20 +
           (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar24;
  fVar25 = auVar50._0_4_ * fVar26 + auVar56._0_4_ * fVar20 + auVar56._4_4_ * fVar24;
  fVar27 = auVar53._0_4_ * fVar26 + auVar44._0_4_ * fVar20 + auVar44._4_4_ * fVar24;
  param_3[2] = fVar27;
  param_3[3] = auVar53._4_4_ * fVar26 + auVar44._4_4_ * fVar20 + auVar53._4_4_ * fVar24;
  *param_3 = fVar21;
  param_3[1] = fVar25;
  piVar10 = (int *)(*(long *)(param_1 + 0x360) + 0x40);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x70);
  uVar37 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  iVar2 = *(int *)(*(long *)(param_1 + 0x360) + 0x44);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = 1 / iVar2;
  }
  auVar49 = *(undefined1 (*) [16])(param_1 + 0x50);
  auVar50 = *(undefined1 (*) [16])(param_1 + 0x60);
  puVar11 = (undefined8 *)((long)piVar10 + (ulong)(1 - iVar3 * iVar2) * 0xc + (long)*piVar10);
  auVar53 = NEON_ext(auVar49,auVar49,8,1);
  auVar52 = NEON_ext(auVar50,auVar50,8,1);
  auVar56._12_4_ = uVar37;
  auVar56._0_12_ = *pauVar1;
  auVar44._12_4_ = uVar37;
  auVar44._0_12_ = *pauVar1;
  auVar56 = NEON_ext(auVar56,auVar44,8,1);
  uVar23 = *puVar11;
  fVar24 = (float)uVar23 - (float)*(undefined8 *)(param_1 + 0x80);
  fVar33 = (float)((ulong)uVar23 >> 0x20) - (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar35 = *(float *)(puVar11 + 1) - (float)*(undefined8 *)(param_1 + 0x88);
  fVar26 = auVar53._0_4_ * fVar35 + auVar49._0_4_ * fVar24 + auVar49._4_4_ * fVar33;
  fVar34 = auVar52._0_4_ * fVar35 + auVar50._0_4_ * fVar24 + auVar50._4_4_ * fVar33;
  fVar36 = auVar56._0_4_ * fVar35 + (float)*(undefined8 *)*pauVar1 * fVar24 + fVar20 * fVar33;
  *(ulong *)(param_3 + 6) =
       CONCAT44(auVar56._4_4_ * fVar35 + fVar20 * fVar24 + auVar56._4_4_ * fVar33,fVar36);
  *(ulong *)(param_3 + 4) = CONCAT44(fVar34,fVar26);
  piVar10 = (int *)(*(long *)(param_1 + 0x360) + 0x40);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x70);
  uVar37 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  iVar2 = *(int *)(*(long *)(param_1 + 0x360) + 0x44);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = 2 / iVar2;
  }
  auVar49 = *(undefined1 (*) [16])(param_1 + 0x50);
  auVar50 = *(undefined1 (*) [16])(param_1 + 0x60);
  puVar11 = (undefined8 *)((long)piVar10 + (ulong)(2 - iVar3 * iVar2) * 0xc + (long)*piVar10);
  auVar56 = NEON_ext(auVar49,auVar49,8,1);
  auVar54 = NEON_ext(auVar50,auVar50,8,1);
  auVar51._12_4_ = uVar37;
  auVar51._0_12_ = *pauVar1;
  auVar55._12_4_ = uVar37;
  auVar55._0_12_ = *pauVar1;
  auVar55 = NEON_ext(auVar51,auVar55,8,1);
  uVar23 = *puVar11;
  fVar24 = (float)uVar48;
  fVar33 = (float)uVar23 - *(float *)(param_1 + 0x80);
  fVar38 = (float)((ulong)uVar23 >> 0x20) - *(float *)(param_1 + 0x84);
  fVar40 = *(float *)(puVar11 + 1) - *(float *)(param_1 + 0x88);
  auVar51 = NEON_ext(auVar16,auVar16,8,1);
  auVar53._12_4_ = uVar19;
  auVar53._0_12_ = auVar6;
  auVar52._12_4_ = uVar19;
  auVar52._0_12_ = auVar7;
  auVar44 = NEON_ext(auVar53,auVar52,8,1);
  fVar35 = auVar56._0_4_ * fVar40 + auVar49._0_4_ * fVar33 + auVar49._4_4_ * fVar38;
  fVar39 = auVar54._0_4_ * fVar40 + auVar50._0_4_ * fVar33 + auVar50._4_4_ * fVar38;
  fVar41 = auVar55._0_4_ * fVar40 + (float)*(undefined8 *)*pauVar1 * fVar33 + fVar20 * fVar38;
  auVar54._12_4_ = uVar32;
  auVar54._0_12_ = auVar8;
  auVar4._12_4_ = uVar32;
  auVar4._0_12_ = auVar9;
  auVar56 = NEON_ext(auVar54,auVar4,8,1);
  *(ulong *)(param_3 + 10) =
       CONCAT44(auVar55._4_4_ * fVar40 + fVar20 * fVar33 + auVar55._4_4_ * fVar38,fVar41);
  *(ulong *)(param_3 + 8) = CONCAT44(fVar39,fVar35);
  piVar10 = (int *)(*(long *)(param_1 + 0x360) + 0x40);
  auVar49 = *(undefined1 (*) [16])(param_1 + 0x50);
  auVar50 = *(undefined1 (*) [16])(param_1 + 0x60);
  iVar2 = *(int *)(*(long *)(param_1 + 0x360) + 0x44);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = 3 / iVar2;
  }
  auVar53 = NEON_ext(auVar49,auVar49,8,1);
  fVar40 = (float)uVar12;
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x70);
  uVar19 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar29 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar33 = (float)((ulong)uVar48 >> 0x20);
  auVar52 = NEON_ext(auVar50,auVar50,8,1);
  fVar20 = auVar51._0_4_ * fVar40 + auVar16._0_4_ * fVar24 + auVar16._4_4_ * fVar33;
  fVar38 = auVar44._0_4_ * fVar40 + (float)uVar15 * fVar24 + (float)((ulong)uVar15 >> 0x20) * fVar33
  ;
  fVar24 = auVar56._0_4_ * fVar40 + (float)uVar47 * fVar24 + (float)((ulong)uVar47 >> 0x20) * fVar33
  ;
  puVar11 = (undefined8 *)((long)piVar10 + (ulong)(3 - iVar3 * iVar2) * 0xc + (long)*piVar10);
  uVar47 = *puVar11;
  auVar16._12_4_ = uVar19;
  auVar16._0_12_ = *pauVar1;
  auVar5._12_4_ = uVar19;
  auVar5._0_12_ = *pauVar1;
  auVar16 = NEON_ext(auVar16,auVar5,8,1);
  uVar15 = NEON_fmax(CONCAT44(fVar20 * fVar21 + fVar38 * fVar25 + fVar24 * fVar27,
                              fVar20 * fVar21 + fVar38 * fVar25 + fVar24 * fVar27),
                     0xff7fffeeff7fffee,4);
  fVar42 = (float)uVar47 - *(float *)(param_1 + 0x80);
  fVar45 = (float)((ulong)uVar47 >> 0x20) - *(float *)(param_1 + 0x84);
  fVar46 = *(float *)(puVar11 + 1) - *(float *)(param_1 + 0x88);
  fVar33 = fVar20 * fVar26 + fVar38 * fVar34 + fVar24 * fVar36;
  fVar30 = fVar20 * fVar26 + fVar38 * fVar34 + fVar24 * fVar36;
  uVar43 = -(uint)((float)uVar15 < fVar33);
  uVar47 = NEON_fmax(CONCAT44(fVar30,fVar33),uVar15,4);
  fVar33 = auVar53._0_4_ * fVar46 + auVar49._0_4_ * fVar42 + auVar49._4_4_ * fVar45;
  fVar40 = auVar52._0_4_ * fVar46 + auVar50._0_4_ * fVar42 + auVar50._4_4_ * fVar45;
  fVar18 = auVar16._0_4_ * fVar46 + (float)*(undefined8 *)*pauVar1 * fVar42 + fVar29 * fVar45;
  fVar28 = fVar20 * fVar35 + fVar38 * fVar39 + fVar24 * fVar41;
  fVar31 = fVar20 * fVar35 + fVar38 * fVar39 + fVar24 * fVar41;
  uVar48 = NEON_fmax(CONCAT44(fVar31,fVar28),uVar47,4);
  uVar13 = -(uint)((float)uVar47 < fVar28);
  uVar14 = (uint)fVar21 ^ ((uint)fVar21 ^ (uint)fVar26) & uVar43;
  uVar17 = (uint)fVar25 ^
           ((uint)fVar25 ^ (uint)fVar34) & -(uint)((float)((ulong)uVar15 >> 0x20) < fVar30);
  uVar43 = (uint)fVar27 ^ ((uint)fVar27 ^ (uint)fVar36) & uVar43;
  uVar22 = -(uint)((float)uVar48 < fVar20 * fVar33 + fVar38 * fVar40 + fVar24 * fVar18);
  *(ulong *)(param_3 + 0xe) =
       CONCAT44(auVar16._4_4_ * fVar46 + fVar29 * fVar42 + auVar16._4_4_ * fVar45,fVar18);
  *(ulong *)(param_3 + 0xc) = CONCAT44(fVar40,fVar33);
  fVar21 = *(float *)(*(long *)(param_1 + 0x360) + 0x20);
  uVar14 = uVar14 ^ (uVar14 ^ (uint)fVar35) & uVar13;
  uVar17 = uVar17 ^ (uVar17 ^ (uint)fVar39) & -(uint)((float)((ulong)uVar47 >> 0x20) < fVar31);
  uVar43 = uVar43 ^ (uVar43 ^ (uint)fVar41) & uVar13;
  *param_4 = CONCAT44(fVar38 * fVar21 +
                      (float)(uVar17 ^ (uVar17 ^ (uint)fVar40) &
                                       -(uint)((float)((ulong)uVar48 >> 0x20) <
                                              fVar20 * fVar33 + fVar38 * fVar40 + fVar24 * fVar18)),
                      fVar20 * fVar21 + (float)(uVar14 ^ (uVar14 ^ (uint)fVar33) & uVar22));
  *(float *)(param_4 + 1) = fVar24 * fVar21 + (float)(uVar43 ^ (uVar43 ^ (uint)fVar18) & uVar22);
  *(undefined4 *)(param_4 + 3) = 0;
  *(ulong *)((long)param_4 + 0xc) = CONCAT44(fVar38,fVar20);
  *(float *)((long)param_4 + 0x14) = fVar24;
  return;
}


