/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028a694; name: FUN_0028a694
 */


void FUN_0028a694(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [12];
  undefined8 *puVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  undefined8 *puVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  ulong extraout_d0;
  ulong uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong uVar45;
  float fVar46;
  float fVar47;
  float extraout_var;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  float fVar73;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  undefined1 auVar77 [12];
  float fVar94;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar95;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  undefined8 uVar99;
  ulong uVar100;
  float fVar101;
  undefined8 uVar102;
  float fVar103;
  undefined8 uVar104;
  ulong uVar105;
  float fVar106;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_94;
  
  lVar28 = *(long *)(param_2 + 0x418);
  piVar22 = *(int **)(*(long *)(param_2 + 0x238) + 0x338);
  *(undefined4 *)(lVar28 + 0x24) = 0;
  if (*(long *)(param_2 + 0x7f8) == 0) {
    return;
  }
  local_94 = 0;
  local_d8 = 0;
  FUN_00284370(*(undefined4 *)(param_2 + 0x44),*(undefined8 *)(param_1 + 0x18),&local_d8,&local_94,
               param_2,1,0);
  if (local_94 == 0) {
    return;
  }
  puVar20 = (undefined8 *)FUN_0028d5b8(param_2 + 0x7a8,*(undefined4 *)(lVar28 + 0x28));
  lVar21 = *(long *)(param_2 + 0x238);
  fVar106 = 1.0;
  uVar12 = piVar22[4];
  uVar13 = piVar22[5];
  iVar11 = local_94;
  if (uVar13 - 1 < 2) {
    iVar11 = local_94 + 1;
  }
  if (*(char *)(*(long *)(lVar21 + 0x10) + 0x75c) != '\0') {
    fVar106 = *(float *)(param_2 + 0x74);
  }
  uVar42 = extraout_d0;
  fVar48 = extraout_var;
  if (*(char *)(*(long *)(lVar21 + 0x10) + 0x756) != '\0') {
    uVar42 = (ulong)(uint)*(float *)(param_2 + 0x70);
    fVar48 = 0.0;
    fVar106 = fVar106 * *(float *)(param_2 + 0x70);
  }
  uVar18 = local_94 - 2;
  if ((((local_94 < 2 && uVar13 == 1) || (uVar12 != 0)) || (iVar11 < 2)) &&
     ((local_94 < 3 || ((int)uVar12 < 1)))) goto LAB_0028c588;
  iVar11 = iVar11 + (iVar11 + -1) * uVar12;
  uVar17 = local_94 - 1;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110._0_4_ = 0.0;
  local_110._4_4_ = 0.0;
  uStack_108._0_4_ = 0.0;
  uStack_108._4_4_ = 0.0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (uVar13 == 1) {
    iVar15 = *(int *)(local_d8 + (long)(int)uVar17 * 8 + 4);
    lVar23 = (long)iVar15;
    iVar30 = *(int *)(param_2 + 0x28);
    lVar27 = (long)*(int *)(local_d8 + 4);
    iVar16 = *(int *)(local_d8 + 0xc);
    lVar31 = (long)iVar16;
    if (iVar15 <= iVar30) {
      puVar3 = (ulong *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10);
      if (puVar3 != (ulong *)0x0) {
        fVar48 = *(float *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10 + 8);
        uVar42 = *puVar3;
      }
    }
    lVar25 = lVar23 * 0x10;
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar25);
    cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
    puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar25);
    pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar25);
    if (cVar14 == '\x02') {
      auVar61._0_4_ = puVar4[1];
      uVar43 = CONCAT44(*puVar5,*puVar4);
      fVar57 = *pfVar6;
      auVar61._4_4_ = puVar5[1];
      fVar38 = (float)puVar4[2];
      auVar61._8_4_ = pfVar6[1];
      auVar61._12_4_ = 0;
      fVar51 = pfVar6[2];
      fVar39 = (float)puVar5[2];
      uVar44 = *(undefined8 *)(param_2 + 0x370);
      uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028a9b0:
      fVar50 = 0.0;
      fVar52 = 0.0;
    }
    else {
      if (cVar14 != '\0') {
        auVar61._0_4_ = puVar4[1];
        uVar43 = CONCAT44(*puVar5,*puVar4);
        fVar57 = *pfVar6;
        auVar61._4_4_ = puVar5[1];
        auVar78._4_12_ = SUB1612(ZEXT816(0),4);
        auVar78._0_4_ = pfVar6[1];
        fVar51 = pfVar6[2];
        auVar61._8_8_ = auVar78._0_8_;
        fVar38 = (float)puVar4[2];
        uVar44 = CONCAT44(puVar5[3],puVar4[3]);
        fVar39 = (float)puVar5[2];
        uVar24 = (ulong)(uint)pfVar6[3];
        goto LAB_0028a9b0;
      }
      fVar57 = *(float *)(param_2 + 0x348);
      fVar50 = *(float *)(param_2 + 0x34c);
      uVar43 = *(undefined8 *)(param_2 + 0x340);
      auVar61 = *(undefined1 (*) [16])(param_2 + 0x350);
      fVar38 = *(float *)(param_2 + 0x360);
      fVar39 = *(float *)(param_2 + 0x364);
      fVar51 = *(float *)(param_2 + 0x368);
      fVar52 = *(float *)(param_2 + 0x36c);
      uVar24 = *(ulong *)(param_2 + 0x378);
      uVar44 = *(undefined8 *)(param_2 + 0x370);
    }
    fVar53 = (float)uVar42;
    fVar54 = (float)(uVar42 >> 0x20);
    local_f0 = CONCAT44((float)((ulong)uVar44 >> 0x20) +
                        (float)((ulong)uVar43 >> 0x20) * fVar53 + auVar61._4_4_ * fVar54 +
                        fVar39 * fVar48,
                        (float)uVar44 +
                        (float)uVar43 * fVar53 + auVar61._0_4_ * fVar54 + fVar38 * fVar48);
    uStack_e8 = CONCAT44((float)(uVar24 >> 0x20) +
                         fVar50 * fVar53 + auVar61._12_4_ * fVar54 + fVar52 * fVar48,
                         (float)uVar24 + fVar57 * fVar53 + auVar61._8_4_ * fVar54 + fVar51 * fVar48)
    ;
    uVar43 = local_f0;
    uVar42 = uStack_e8;
    if (*(int *)(local_d8 + 4) <= iVar30) {
      puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar27 * 0x10);
      if (puVar32 != (undefined8 *)0x0) {
        uVar42 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar27 * 0x10 + 8);
        uVar43 = *puVar32;
      }
    }
    lVar27 = lVar27 * 0x10;
    puVar7 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar27);
    puVar8 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar27);
    pfVar9 = (float *)(*(long *)(param_2 + 0x220) + lVar27);
    if (cVar14 == '\x02') {
      auVar62._0_4_ = puVar7[1];
      uVar44 = CONCAT44(*puVar8,*puVar7);
      fVar51 = *pfVar9;
      auVar62._4_4_ = puVar8[1];
      fVar48 = (float)puVar7[2];
      auVar62._8_4_ = pfVar9[1];
      auVar62._12_4_ = 0;
      fVar39 = pfVar9[2];
      fVar38 = (float)puVar8[2];
      uVar55 = *(undefined8 *)(param_2 + 0x370);
      uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028aad0:
      fVar52 = 0.0;
      fVar57 = 0.0;
    }
    else {
      if (cVar14 != '\0') {
        auVar62._0_4_ = puVar7[1];
        uVar44 = CONCAT44(*puVar8,*puVar7);
        fVar51 = *pfVar9;
        auVar62._4_4_ = puVar8[1];
        auVar79._4_12_ = SUB1612(ZEXT816(0),4);
        auVar79._0_4_ = pfVar9[1];
        fVar39 = pfVar9[2];
        auVar62._8_8_ = auVar79._0_8_;
        fVar48 = (float)puVar7[2];
        uVar55 = CONCAT44(puVar8[3],puVar7[3]);
        uVar24 = (ulong)(uint)pfVar9[3];
        fVar38 = (float)puVar8[2];
        goto LAB_0028aad0;
      }
      fVar51 = *(float *)(param_2 + 0x348);
      fVar52 = *(float *)(param_2 + 0x34c);
      uVar44 = *(undefined8 *)(param_2 + 0x340);
      auVar62 = *(undefined1 (*) [16])(param_2 + 0x350);
      fVar48 = *(float *)(param_2 + 0x360);
      fVar38 = *(float *)(param_2 + 0x364);
      fVar39 = *(float *)(param_2 + 0x368);
      fVar57 = *(float *)(param_2 + 0x36c);
      uVar24 = *(ulong *)(param_2 + 0x378);
      uVar55 = *(undefined8 *)(param_2 + 0x370);
    }
    fVar50 = (float)uVar43;
    fVar53 = (float)((ulong)uVar43 >> 0x20);
    fVar54 = (float)uVar42;
    local_110._0_4_ =
         (float)uVar55 + (float)uVar44 * fVar50 + auVar62._0_4_ * fVar53 + fVar48 * fVar54;
    local_110._4_4_ =
         (float)((ulong)uVar55 >> 0x20) +
         (float)((ulong)uVar44 >> 0x20) * fVar50 + auVar62._4_4_ * fVar53 + fVar38 * fVar54;
    uStack_108._0_4_ = (float)uVar24 + fVar51 * fVar50 + auVar62._8_4_ * fVar53 + fVar39 * fVar54;
    uStack_108._4_4_ =
         (float)(uVar24 >> 0x20) + fVar52 * fVar50 + auVar62._12_4_ * fVar53 + fVar57 * fVar54;
    if (*piVar22 - 1U < 2) {
      if (cVar14 == '\0') {
        fVar48 = (float)*(undefined8 *)(param_2 + 0x358);
        uVar43 = *(undefined8 *)(param_2 + 0x350);
      }
      else {
        puVar7 = (undefined4 *)0x0;
        if (iVar15 <= iVar30) {
          puVar7 = puVar4;
        }
        puVar4 = (undefined4 *)0x0;
        if (iVar15 <= iVar30) {
          puVar4 = puVar5;
        }
        pfVar9 = (float *)0x0;
        if (iVar15 <= iVar30) {
          pfVar9 = pfVar6;
        }
        uVar43 = CONCAT44(puVar4[1],puVar7[1]);
        fVar48 = pfVar9[1];
      }
    }
    else {
      uVar43 = 0;
      fVar48 = 0.0;
    }
    lVar23 = *(long *)(param_2 + 0xb0) + lVar23 * 0x20;
    puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar25);
    local_c0 = *puVar32;
    uStack_b8 = puVar32[1];
    auVar85 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar25);
    uStack_c8 = auVar85._8_8_;
    local_d0 = auVar85._0_8_;
    FUN_00273964(*(undefined4 *)(lVar23 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar23 + 8),
                 *(undefined8 *)(param_2 + 0x98),&local_130,lVar21,&local_d0,&local_c0);
    uVar55 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x148);
    uVar44 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
    fVar38 = (float)local_130 * (float)uVar44;
    local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * (float)((ulong)uVar44 >> 0x20),fVar38);
    uStack_128 = CONCAT44((float)(uStack_128 >> 0x20) * (float)((ulong)uVar55 >> 0x20),
                          (float)uStack_128 * (float)uVar55);
    fVar38 = fVar106 * fVar38;
    fVar50 = (float)local_f0;
    fVar53 = (float)((ulong)local_f0 >> 0x20);
    fVar54 = (float)uStack_e8;
    fVar56 = (float)(uStack_e8 >> 0x20);
    if (0 < (int)uVar12) {
      uVar44 = local_130;
      uVar42 = uStack_128;
      if (iVar16 <= *(int *)(param_2 + 0x28)) {
        puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar31 * 0x10);
        if (puVar32 != (undefined8 *)0x0) {
          uVar42 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar31 * 0x10 + 8);
          uVar44 = *puVar32;
        }
      }
      lVar31 = lVar31 * 0x10;
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar31);
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar31);
      pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar31);
      cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      if (cVar14 == '\x02') {
        auVar63._0_4_ = puVar4[1];
        uVar55 = CONCAT44(*puVar5,*puVar4);
        fVar39 = *pfVar6;
        auVar63._4_4_ = puVar5[1];
        auVar63._8_4_ = pfVar6[1];
        auVar63._12_4_ = 0;
        auVar19._4_4_ = puVar5[2];
        auVar19._0_4_ = puVar4[2];
        auVar19._8_4_ = pfVar6[2];
        uVar99 = *(undefined8 *)(param_2 + 0x370);
        uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028ad30:
        fVar51 = 0.0;
        auVar81._12_4_ = 0;
        auVar81._0_12_ = auVar19;
      }
      else {
        if (cVar14 != '\0') {
          auVar63._0_4_ = puVar4[1];
          uVar55 = CONCAT44(*puVar5,*puVar4);
          fVar39 = *pfVar6;
          auVar63._4_4_ = puVar5[1];
          auVar80._4_12_ = SUB1612(ZEXT816(0),4);
          auVar80._0_4_ = pfVar6[1];
          auVar63._8_8_ = auVar80._0_8_;
          uVar99 = CONCAT44(puVar5[3],puVar4[3]);
          uVar24 = (ulong)(uint)pfVar6[3];
          auVar19._4_4_ = puVar5[2];
          auVar19._0_4_ = puVar4[2];
          auVar19._8_4_ = pfVar6[2];
          goto LAB_0028ad30;
        }
        fVar39 = *(float *)(param_2 + 0x348);
        fVar51 = *(float *)(param_2 + 0x34c);
        uVar55 = *(undefined8 *)(param_2 + 0x340);
        auVar63 = *(undefined1 (*) [16])(param_2 + 0x350);
        auVar81 = *(undefined1 (*) [16])(param_2 + 0x360);
        uVar24 = *(ulong *)(param_2 + 0x378);
        uVar99 = *(undefined8 *)(param_2 + 0x370);
      }
      fVar57 = (float)uVar44;
      fVar52 = (float)((ulong)uVar44 >> 0x20);
      fVar101 = (float)uVar42;
      uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar56,(float)uStack_108 - fVar54);
      local_100 = CONCAT44(local_110._4_4_ - fVar53,(float)local_110 - fVar50);
      fVar50 = ((float)uVar99 +
               (float)uVar55 * fVar57 + auVar63._0_4_ * fVar52 + auVar81._0_4_ * fVar101) - fVar50;
      fVar53 = ((float)((ulong)uVar99 >> 0x20) +
               (float)((ulong)uVar55 >> 0x20) * fVar57 + auVar63._4_4_ * fVar52 +
               auVar81._4_4_ * fVar101) - fVar53;
      fVar54 = ((float)uVar24 + fVar39 * fVar57 + auVar63._8_4_ * fVar52 + auVar81._8_4_ * fVar101)
               - fVar54;
      fVar56 = ((float)(uVar24 >> 0x20) +
               fVar51 * fVar57 + auVar63._12_4_ * fVar52 + auVar81._12_4_ * fVar101) - fVar56;
      goto LAB_0028b140;
    }
    uVar44 = local_130;
    uVar42 = uStack_128;
    if (iVar16 <= *(int *)(param_2 + 0x28)) {
      puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar31 * 0x10);
      if (puVar32 != (undefined8 *)0x0) {
        uVar42 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar31 * 0x10 + 8);
        uVar44 = *puVar32;
      }
    }
    lVar31 = lVar31 * 0x10;
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar31);
    puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar31);
    pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar31);
    cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
    if (cVar14 == '\x02') {
      auVar64._0_4_ = puVar4[1];
      uVar55 = CONCAT44(*puVar5,*puVar4);
      fVar52 = *pfVar6;
      auVar64._4_4_ = puVar5[1];
      fVar39 = (float)puVar4[2];
      auVar64._8_4_ = pfVar6[1];
      auVar64._12_4_ = 0;
      fVar57 = pfVar6[2];
      fVar51 = (float)puVar5[2];
      uVar99 = *(undefined8 *)(param_2 + 0x370);
      uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028af2c:
      fVar96 = 0.0;
      fVar101 = 0.0;
    }
    else {
      if (cVar14 != '\0') {
        auVar64._0_4_ = puVar4[1];
        uVar55 = CONCAT44(*puVar5,*puVar4);
        fVar52 = *pfVar6;
        auVar64._4_4_ = puVar5[1];
        auVar83._4_12_ = SUB1612(ZEXT816(0),4);
        auVar83._0_4_ = pfVar6[1];
        fVar57 = pfVar6[2];
        auVar64._8_8_ = auVar83._0_8_;
        fVar39 = (float)puVar4[2];
        uVar99 = CONCAT44(puVar5[3],puVar4[3]);
        uVar24 = (ulong)(uint)pfVar6[3];
        fVar51 = (float)puVar5[2];
        goto LAB_0028af2c;
      }
      fVar52 = *(float *)(param_2 + 0x348);
      fVar96 = *(float *)(param_2 + 0x34c);
      uVar55 = *(undefined8 *)(param_2 + 0x340);
      auVar64 = *(undefined1 (*) [16])(param_2 + 0x350);
      fVar39 = *(float *)(param_2 + 0x360);
      fVar51 = *(float *)(param_2 + 0x364);
      fVar57 = *(float *)(param_2 + 0x368);
      fVar101 = *(float *)(param_2 + 0x36c);
      uVar24 = *(ulong *)(param_2 + 0x378);
      uVar99 = *(undefined8 *)(param_2 + 0x370);
    }
    fVar34 = (float)uVar44;
    fVar35 = (float)((ulong)uVar44 >> 0x20);
    fVar36 = (float)uVar42;
    auVar84._0_8_ = CONCAT44(local_110._4_4_ - fVar53,(float)local_110 - fVar50);
    auVar84._8_4_ = (float)uStack_108 - fVar54;
    auVar84._12_4_ = uStack_108._4_4_ - fVar56;
    uStack_f8 = auVar84._8_8_;
    local_120 = CONCAT44(((float)((ulong)uVar99 >> 0x20) +
                         (float)((ulong)uVar55 >> 0x20) * fVar34 + auVar64._4_4_ * fVar35 +
                         fVar51 * fVar36) - local_110._4_4_,
                         ((float)uVar99 +
                         (float)uVar55 * fVar34 + auVar64._0_4_ * fVar35 + fVar39 * fVar36) -
                         (float)local_110);
    uStack_118 = CONCAT44(((float)(uVar24 >> 0x20) +
                          fVar96 * fVar34 + auVar64._12_4_ * fVar35 + fVar101 * fVar36) -
                          uStack_108._4_4_,
                          ((float)uVar24 +
                          fVar52 * fVar34 + auVar64._8_4_ * fVar35 + fVar57 * fVar36) -
                          (float)uStack_108);
    local_100 = auVar84._0_8_;
LAB_0028b14c:
    *puVar20 = local_f0;
    *(int *)(puVar20 + 1) = (int)uStack_e8;
    puVar20[10] = local_f0;
    *(int *)(puVar20 + 0xb) = (int)uStack_e8;
    puVar20[2] = local_100;
    *(int *)(puVar20 + 3) = (int)uStack_f8;
    puVar20[0xc] = local_100;
    *(int *)(puVar20 + 0xd) = (int)uStack_f8;
    puVar20[4] = uVar43;
    *(float *)(puVar20 + 5) = fVar48;
    puVar20[0xe] = uVar43;
    *(float *)(puVar20 + 0xf) = fVar48;
    *(float *)((long)puVar20 + 0xc) = -fVar38;
    *(float *)((long)puVar20 + 0x5c) = fVar38;
    *(undefined4 *)((long)puVar20 + 0x2c) = 0;
    *(undefined4 *)((long)puVar20 + 0x7c) = 0;
    fVar39 = 0.0 / (float)(iVar11 + -1);
    *(float *)((long)puVar20 + 0x1c) = fVar39;
    *(float *)((long)puVar20 + 0x6c) = fVar39;
    uVar42 = 1;
    *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 2;
  }
  else {
    if (uVar13 == 2) {
      iVar15 = *(int *)(local_d8 + 4);
      lVar23 = (long)iVar15;
      iVar30 = *(int *)(param_2 + 0x28);
      iVar16 = *(int *)(local_d8 + 0xc);
      lVar31 = (long)iVar16;
      if (iVar15 <= iVar30) {
        puVar3 = (ulong *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10);
        if (puVar3 != (ulong *)0x0) {
          fVar48 = *(float *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10 + 8);
          uVar42 = *puVar3;
        }
      }
      lVar27 = lVar23 * 0x10;
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar27);
      cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar27);
      pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar27);
      if (cVar14 == '\x02') {
        auVar85._0_4_ = puVar4[1];
        uVar43 = CONCAT44(*puVar5,*puVar4);
        fVar57 = *pfVar6;
        auVar85._4_4_ = puVar5[1];
        fVar38 = (float)puVar4[2];
        auVar85._8_4_ = pfVar6[1];
        auVar85._12_4_ = 0;
        fVar51 = pfVar6[2];
        fVar39 = (float)puVar5[2];
        uVar44 = *(undefined8 *)(param_2 + 0x370);
        uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028ae10:
        fVar50 = 0.0;
        fVar52 = 0.0;
      }
      else {
        if (cVar14 != '\0') {
          auVar85._0_4_ = puVar4[1];
          uVar43 = CONCAT44(*puVar5,*puVar4);
          fVar57 = *pfVar6;
          auVar85._4_4_ = puVar5[1];
          auVar82._4_12_ = SUB1612(ZEXT816(0),4);
          auVar82._0_4_ = pfVar6[1];
          fVar51 = pfVar6[2];
          auVar85._8_8_ = auVar82._0_8_;
          fVar38 = (float)puVar4[2];
          uVar44 = CONCAT44(puVar5[3],puVar4[3]);
          fVar39 = (float)puVar5[2];
          uVar24 = (ulong)(uint)pfVar6[3];
          goto LAB_0028ae10;
        }
        fVar57 = *(float *)(param_2 + 0x348);
        fVar50 = *(float *)(param_2 + 0x34c);
        uVar43 = *(undefined8 *)(param_2 + 0x340);
        auVar85 = *(undefined1 (*) [16])(param_2 + 0x350);
        fVar38 = *(float *)(param_2 + 0x360);
        fVar39 = *(float *)(param_2 + 0x364);
        fVar51 = *(float *)(param_2 + 0x368);
        fVar52 = *(float *)(param_2 + 0x36c);
        uVar24 = *(ulong *)(param_2 + 0x378);
        uVar44 = *(undefined8 *)(param_2 + 0x370);
      }
      fVar53 = (float)uVar42;
      fVar54 = (float)(uVar42 >> 0x20);
      local_110._0_4_ =
           (float)uVar44 + (float)uVar43 * fVar53 + auVar85._0_4_ * fVar54 + fVar38 * fVar48;
      local_110._4_4_ =
           (float)((ulong)uVar44 >> 0x20) +
           (float)((ulong)uVar43 >> 0x20) * fVar53 + auVar85._4_4_ * fVar54 + fVar39 * fVar48;
      uStack_108._0_4_ = (float)uVar24 + fVar57 * fVar53 + auVar85._8_4_ * fVar54 + fVar51 * fVar48;
      uStack_108._4_4_ =
           (float)(uVar24 >> 0x20) + fVar50 * fVar53 + auVar85._12_4_ * fVar54 + fVar52 * fVar48;
      if (*piVar22 - 1U < 2) {
        if (cVar14 == '\0') {
          fVar48 = (float)*(undefined8 *)(param_2 + 0x358);
          uVar43 = *(undefined8 *)(param_2 + 0x350);
        }
        else {
          puVar7 = (undefined4 *)0x0;
          if (iVar15 <= iVar30) {
            puVar7 = puVar4;
          }
          puVar4 = (undefined4 *)0x0;
          if (iVar15 <= iVar30) {
            puVar4 = puVar5;
          }
          pfVar9 = (float *)0x0;
          if (iVar15 <= iVar30) {
            pfVar9 = pfVar6;
          }
          uVar43 = CONCAT44(puVar4[1],puVar7[1]);
          fVar48 = pfVar9[1];
        }
      }
      else {
        uVar43 = 0;
        fVar48 = 0.0;
      }
      lVar23 = *(long *)(param_2 + 0xb0) + lVar23 * 0x20;
      puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar27);
      local_c0 = *puVar32;
      uStack_b8 = puVar32[1];
      auVar85 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar27);
      uStack_c8 = auVar85._8_8_;
      local_d0 = auVar85._0_8_;
      FUN_00273964(*(undefined4 *)(lVar23 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar23 + 8)
                   ,*(undefined8 *)(param_2 + 0x98),&local_130,lVar21,&local_d0,&local_c0);
      uVar55 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x148);
      uVar44 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
      fVar38 = (float)local_130 * (float)uVar44;
      local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * (float)((ulong)uVar44 >> 0x20),fVar38
                          );
      uStack_128 = CONCAT44((float)(uStack_128 >> 0x20) * (float)((ulong)uVar55 >> 0x20),
                            (float)uStack_128 * (float)uVar55);
      uStack_e8 = *(ulong *)(param_2 + 0x378);
      local_f0 = *(undefined8 *)(param_2 + 0x370);
      fVar38 = fVar106 * fVar38;
      fVar39 = (float)local_f0;
      fVar51 = (float)((ulong)local_f0 >> 0x20);
      fVar57 = (float)uStack_e8;
      fVar52 = (float)(uStack_e8 >> 0x20);
      if ((int)uVar12 < 1) {
        local_100 = CONCAT44(local_110._4_4_ - fVar51,(float)local_110 - fVar39);
        uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar52,(float)uStack_108 - fVar57);
        goto LAB_0028b14c;
      }
      uVar44 = local_130;
      uVar42 = uStack_128;
      if (iVar16 <= *(int *)(param_2 + 0x28)) {
        puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar31 * 0x10);
        if (puVar32 != (undefined8 *)0x0) {
          uVar42 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar31 * 0x10 + 8);
          uVar44 = *puVar32;
        }
      }
      lVar31 = lVar31 * 0x10;
      pfVar6 = (float *)(*(long *)(param_2 + 0x210) + lVar31);
      pfVar9 = (float *)(*(long *)(param_2 + 0x218) + lVar31);
      pfVar10 = (float *)(*(long *)(param_2 + 0x220) + lVar31);
      cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      uVar55 = local_f0;
      if (cVar14 == '\x02') {
        fVar53 = *pfVar6;
        fVar101 = pfVar6[1];
        fVar54 = *pfVar9;
        fVar56 = *pfVar10;
        fVar96 = pfVar9[1];
        fVar34 = pfVar10[1];
        uVar99 = CONCAT44(pfVar9[2],pfVar6[2]);
        fVar50 = pfVar10[2];
        uVar24 = uStack_e8 & 0xffffffff;
LAB_0028b10c:
        uVar45 = (ulong)(uint)fVar50;
        fVar35 = 0.0;
        fVar50 = 0.0;
      }
      else {
        if (cVar14 != '\0') {
          fVar53 = *pfVar6;
          fVar101 = pfVar6[1];
          fVar54 = *pfVar9;
          fVar56 = *pfVar10;
          fVar96 = pfVar9[1];
          fVar34 = pfVar10[1];
          fVar50 = pfVar10[2];
          uVar24 = (ulong)(uint)pfVar10[3];
          uVar99 = CONCAT44(pfVar9[2],pfVar6[2]);
          uVar55 = CONCAT44(pfVar9[3],pfVar6[3]);
          goto LAB_0028b10c;
        }
        fVar53 = *(float *)(param_2 + 0x340);
        fVar54 = *(float *)(param_2 + 0x344);
        fVar56 = *(float *)(param_2 + 0x348);
        fVar50 = *(float *)(param_2 + 0x34c);
        fVar101 = *(float *)(param_2 + 0x350);
        fVar96 = *(float *)(param_2 + 0x354);
        fVar34 = *(float *)(param_2 + 0x358);
        fVar35 = *(float *)(param_2 + 0x35c);
        uVar45 = *(ulong *)(param_2 + 0x368);
        uVar99 = *(undefined8 *)(param_2 + 0x360);
        uVar24 = uStack_e8;
      }
      fVar36 = (float)uVar44;
      fVar37 = (float)((ulong)uVar44 >> 0x20);
      fVar40 = (float)uVar42;
      fVar101 = (float)uVar55 + fVar53 * fVar36 + fVar101 * fVar37 + (float)uVar99 * fVar40;
      fVar96 = (float)((ulong)uVar55 >> 0x20) +
               fVar54 * fVar36 + fVar96 * fVar37 + (float)((ulong)uVar99 >> 0x20) * fVar40;
      fVar34 = (float)uVar24 + fVar56 * fVar36 + fVar34 * fVar37 + (float)uVar45 * fVar40;
      fVar35 = (float)(uVar24 >> 0x20) +
               fVar50 * fVar36 + fVar35 * fVar37 + (float)(uVar45 >> 0x20) * fVar40;
      fVar50 = fVar101 - fVar39;
      fVar53 = fVar96 - fVar51;
      fVar54 = fVar34 - fVar57;
      fVar56 = fVar35 - fVar52;
      auVar85 = NEON_fmov(0x3e800000,4);
      uStack_f8 = CONCAT44(((uStack_108._4_4_ - fVar52) + (uStack_108._4_4_ - fVar35)) *
                           auVar85._12_4_,
                           (((float)uStack_108 - fVar57) + ((float)uStack_108 - fVar34)) *
                           auVar85._8_4_);
      local_100 = CONCAT44(((local_110._4_4_ - fVar51) + (local_110._4_4_ - fVar96)) * auVar85._4_4_
                           ,(((float)local_110 - fVar39) + ((float)local_110 - fVar101)) *
                            auVar85._0_4_);
LAB_0028b140:
      local_120 = CONCAT44(fVar53 * 0.5,fVar50 * 0.5);
      uStack_118 = CONCAT44(fVar56 * 0.5,fVar54 * 0.5);
      goto LAB_0028b14c;
    }
    uVar42 = 0;
    fVar38 = 0.0;
    uVar43 = 0;
    fVar48 = 0.0;
  }
  if (((0 < (int)uVar12) && (0 < (int)uVar12)) && (uVar13 - 1 < 2)) {
    puVar32 = puVar20 + uVar42 * 0x14 + 10;
    uVar24 = 0;
    do {
      uVar45 = uVar24 + 1;
      fVar39 = (1.0 / (float)(int)(uVar12 + 1)) * (float)(int)uVar45;
      fVar51 = 1.0 - fVar39;
      uVar44 = CONCAT44(local_100._4_4_ * fVar51 + local_120._4_4_ * fVar39,
                        (float)local_100 * fVar51 + (float)local_120 * fVar39);
      fVar39 = (float)uStack_f8 * fVar51 + (float)uStack_118 * fVar39;
      FUN_00271a40(&local_c0,&local_f0,&local_100,&local_110,&local_120);
      fVar51 = (float)((int)uVar42 + (int)uVar24);
      puVar32[-10] = local_c0;
      *(int *)(puVar32 + -9) = (int)uStack_b8;
      *puVar32 = local_c0;
      *(int *)(puVar32 + 1) = (int)uStack_b8;
      puVar32[-8] = uVar44;
      *(float *)(puVar32 + -7) = fVar39;
      puVar32[2] = uVar44;
      *(float *)(puVar32 + 3) = fVar39;
      fVar39 = fVar51 / (float)(iVar11 + -1);
      puVar32[4] = uVar43;
      puVar32[-6] = uVar43;
      *(float *)((long)puVar32 + -0x44) = -fVar38;
      *(float *)((long)puVar32 + 0xc) = fVar38;
      *(float *)(puVar32 + -5) = fVar48;
      *(float *)((long)puVar32 + -0x24) = fVar51;
      *(float *)(puVar32 + 5) = fVar48;
      *(float *)((long)puVar32 + 0x2c) = fVar51;
      *(float *)((long)puVar32 + -0x34) = fVar39;
      *(float *)((long)puVar32 + 0x1c) = fVar39;
      puVar32 = puVar32 + 0x14;
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 2;
      uVar24 = uVar45;
    } while (uVar12 != uVar45);
    uVar42 = (ulong)((int)uVar42 + uVar12);
  }
  uVar29 = (uint)uVar42;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (0 < (int)uVar17) {
    uVar45 = 0;
    uVar105 = 0;
    uVar43 = 0;
    uVar24 = 0;
    do {
      fVar48 = 0.0;
      iVar15 = *(int *)(local_d8 + uVar24 * 8 + 4);
      lVar23 = (long)iVar15;
      uVar2 = uVar24 + 1;
      iVar16 = *(int *)(local_d8 + uVar2 * 8 + 4);
      lVar21 = (long)iVar16;
      iVar30 = *(int *)(param_2 + 0x28);
      if (iVar15 <= iVar30) {
        puVar3 = (ulong *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10);
        if (puVar3 != (ulong *)0x0) {
          fVar48 = *(float *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10 + 8);
          uVar45 = *puVar3;
        }
      }
      lVar31 = lVar23 * 0x10;
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar31);
      cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar31);
      pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar31);
      if (cVar14 == '\x02') {
        auVar65._0_4_ = puVar4[1];
        uVar44 = CONCAT44(*puVar5,*puVar4);
        fVar57 = *pfVar6;
        auVar65._4_4_ = puVar5[1];
        fVar51 = pfVar6[2];
        fVar38 = (float)puVar4[2];
        auVar65._8_4_ = pfVar6[1];
        auVar65._12_4_ = 0;
        uVar55 = *(undefined8 *)(param_2 + 0x370);
        fVar39 = (float)puVar5[2];
        uVar100 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028b4a8:
        fVar50 = 0.0;
        fVar52 = 0.0;
      }
      else {
        if (cVar14 != '\0') {
          auVar65._0_4_ = puVar4[1];
          uVar44 = CONCAT44(*puVar5,*puVar4);
          fVar57 = *pfVar6;
          auVar65._4_4_ = puVar5[1];
          auVar86._4_12_ = SUB1612(ZEXT816(0),4);
          auVar86._0_4_ = pfVar6[1];
          fVar51 = pfVar6[2];
          auVar65._8_8_ = auVar86._0_8_;
          fVar38 = (float)puVar4[2];
          uVar55 = CONCAT44(puVar5[3],puVar4[3]);
          fVar39 = (float)puVar5[2];
          uVar100 = (ulong)(uint)pfVar6[3];
          goto LAB_0028b4a8;
        }
        fVar57 = *(float *)(param_2 + 0x348);
        fVar50 = *(float *)(param_2 + 0x34c);
        uVar44 = *(undefined8 *)(param_2 + 0x340);
        auVar65 = *(undefined1 (*) [16])(param_2 + 0x350);
        fVar38 = *(float *)(param_2 + 0x360);
        fVar39 = *(float *)(param_2 + 0x364);
        fVar51 = *(float *)(param_2 + 0x368);
        fVar52 = *(float *)(param_2 + 0x36c);
        uVar100 = *(ulong *)(param_2 + 0x378);
        uVar55 = *(undefined8 *)(param_2 + 0x370);
      }
      fVar53 = (float)uVar45;
      fVar54 = (float)(uVar45 >> 0x20);
      local_f0 = CONCAT44((float)((ulong)uVar55 >> 0x20) +
                          (float)((ulong)uVar44 >> 0x20) * fVar53 + auVar65._4_4_ * fVar54 +
                          fVar39 * fVar48,
                          (float)uVar55 +
                          (float)uVar44 * fVar53 + auVar65._0_4_ * fVar54 + fVar38 * fVar48);
      uStack_e8 = CONCAT44((float)(uVar100 >> 0x20) +
                           fVar50 * fVar53 + auVar65._12_4_ * fVar54 + fVar52 * fVar48,
                           (float)uVar100 +
                           fVar57 * fVar53 + auVar65._8_4_ * fVar54 + fVar51 * fVar48);
      uVar44 = local_f0;
      uVar45 = uStack_e8;
      if (iVar16 <= iVar30) {
        puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10);
        if (puVar32 != (undefined8 *)0x0) {
          uVar45 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10 + 8);
          uVar44 = *puVar32;
        }
      }
      lVar27 = lVar21 * 0x10;
      puVar7 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar27);
      puVar8 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar27);
      pfVar9 = (float *)(*(long *)(param_2 + 0x220) + lVar27);
      if (cVar14 == '\x02') {
        auVar66._0_4_ = puVar7[1];
        uVar55 = CONCAT44(*puVar8,*puVar7);
        fVar51 = *pfVar9;
        auVar66._4_4_ = puVar8[1];
        fVar39 = pfVar9[2];
        fVar48 = (float)puVar7[2];
        auVar66._8_4_ = pfVar9[1];
        auVar66._12_4_ = 0;
        uVar99 = *(undefined8 *)(param_2 + 0x370);
        fVar38 = (float)puVar8[2];
        uVar100 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028b5d0:
        fVar52 = 0.0;
        fVar57 = 0.0;
      }
      else {
        if (cVar14 != '\0') {
          auVar66._0_4_ = puVar7[1];
          uVar55 = CONCAT44(*puVar8,*puVar7);
          fVar51 = *pfVar9;
          auVar66._4_4_ = puVar8[1];
          auVar87._4_12_ = SUB1612(ZEXT816(0),4);
          auVar87._0_4_ = pfVar9[1];
          fVar39 = pfVar9[2];
          auVar66._8_8_ = auVar87._0_8_;
          fVar48 = (float)puVar7[2];
          uVar99 = CONCAT44(puVar8[3],puVar7[3]);
          fVar38 = (float)puVar8[2];
          uVar100 = (ulong)(uint)pfVar9[3];
          goto LAB_0028b5d0;
        }
        fVar51 = *(float *)(param_2 + 0x348);
        fVar52 = *(float *)(param_2 + 0x34c);
        uVar55 = *(undefined8 *)(param_2 + 0x340);
        auVar66 = *(undefined1 (*) [16])(param_2 + 0x350);
        fVar48 = *(float *)(param_2 + 0x360);
        fVar38 = *(float *)(param_2 + 0x364);
        fVar39 = *(float *)(param_2 + 0x368);
        fVar57 = *(float *)(param_2 + 0x36c);
        uVar100 = *(ulong *)(param_2 + 0x378);
        uVar99 = *(undefined8 *)(param_2 + 0x370);
      }
      fVar50 = (float)uVar44;
      fVar53 = (float)((ulong)uVar44 >> 0x20);
      fVar54 = (float)uVar45;
      local_110 = CONCAT44((float)((ulong)uVar99 >> 0x20) +
                           (float)((ulong)uVar55 >> 0x20) * fVar50 + auVar66._4_4_ * fVar53 +
                           fVar38 * fVar54,
                           (float)uVar99 +
                           (float)uVar55 * fVar50 + auVar66._0_4_ * fVar53 + fVar48 * fVar54);
      uStack_108 = CONCAT44((float)(uVar100 >> 0x20) +
                            fVar52 * fVar50 + auVar66._12_4_ * fVar53 + fVar57 * fVar54,
                            (float)uVar100 +
                            fVar51 * fVar50 + auVar66._8_4_ * fVar53 + fVar39 * fVar54);
      if (*piVar22 - 1U < 2) {
        if (cVar14 == '\0') {
          uVar105 = *(ulong *)(param_2 + 0x358);
          uVar43 = *(undefined8 *)(param_2 + 0x350);
        }
        else {
          puVar7 = (undefined4 *)0x0;
          if (iVar15 <= iVar30) {
            puVar7 = puVar4;
          }
          puVar4 = (undefined4 *)0x0;
          if (iVar15 <= iVar30) {
            puVar4 = puVar5;
          }
          pfVar9 = (float *)0x0;
          if (iVar15 <= iVar30) {
            pfVar9 = pfVar6;
          }
          uVar43 = CONCAT44(puVar4[1],puVar7[1]);
          uVar105 = (ulong)(uint)pfVar9[1];
        }
      }
      lVar27 = *(long *)(param_2 + 0xb0) + lVar23 * 0x20;
      puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar31);
      local_c0 = *puVar32;
      uStack_b8 = puVar32[1];
      auVar85 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar31);
      uStack_c8 = auVar85._8_8_;
      local_d0 = auVar85._0_8_;
      FUN_00273964(*(undefined4 *)(lVar27 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar27 + 8)
                   ,*(undefined8 *)(param_2 + 0x98),&local_130,*(undefined8 *)(param_2 + 0x238),
                   &local_d0,&local_c0);
      uVar55 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x148);
      uVar44 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
      fVar48 = (float)local_130 * (float)uVar44;
      local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * (float)((ulong)uVar44 >> 0x20),fVar48
                          );
      uStack_128 = CONCAT44((float)(uStack_128 >> 0x20) * (float)((ulong)uVar55 >> 0x20),
                            (float)uStack_128 * (float)uVar55);
      fVar48 = fVar106 * fVar48;
      if ((int)uVar12 < 1) {
        uVar44 = local_130;
        uVar24 = uStack_128;
        if (iVar15 <= *(int *)(param_2 + 0x28)) {
          puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10);
          if (puVar32 != (undefined8 *)0x0) {
            uVar24 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10 + 8);
            uVar44 = *puVar32;
          }
        }
        puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar31);
        cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
        puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar31);
        pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar31);
        if (cVar14 == '\x02') {
          auVar67._0_4_ = puVar4[1];
          uVar55 = CONCAT44(*puVar5,*puVar4);
          fVar57 = *pfVar6;
          auVar67._4_4_ = puVar5[1];
          fVar51 = pfVar6[2];
          fVar38 = (float)puVar4[2];
          auVar67._8_4_ = pfVar6[1];
          auVar67._12_4_ = 0;
          uVar99 = *(undefined8 *)(param_2 + 0x370);
          fVar39 = (float)puVar5[2];
          uVar45 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028b894:
          fVar50 = 0.0;
          fVar52 = 0.0;
        }
        else {
          if (cVar14 != '\0') {
            auVar67._0_4_ = puVar4[1];
            uVar55 = CONCAT44(*puVar5,*puVar4);
            fVar57 = *pfVar6;
            auVar67._4_4_ = puVar5[1];
            auVar88._4_12_ = SUB1612(ZEXT816(0),4);
            auVar88._0_4_ = pfVar6[1];
            fVar51 = pfVar6[2];
            auVar67._8_8_ = auVar88._0_8_;
            fVar38 = (float)puVar4[2];
            uVar99 = CONCAT44(puVar5[3],puVar4[3]);
            fVar39 = (float)puVar5[2];
            uVar45 = (ulong)(uint)pfVar6[3];
            goto LAB_0028b894;
          }
          fVar57 = *(float *)(param_2 + 0x348);
          fVar50 = *(float *)(param_2 + 0x34c);
          uVar55 = *(undefined8 *)(param_2 + 0x340);
          auVar67 = *(undefined1 (*) [16])(param_2 + 0x350);
          fVar38 = *(float *)(param_2 + 0x360);
          fVar39 = *(float *)(param_2 + 0x364);
          fVar51 = *(float *)(param_2 + 0x368);
          fVar52 = *(float *)(param_2 + 0x36c);
          uVar45 = *(ulong *)(param_2 + 0x378);
          uVar99 = *(undefined8 *)(param_2 + 0x370);
        }
        fVar53 = (float)uVar44;
        fVar56 = (float)((ulong)uVar44 >> 0x20);
        fVar101 = (float)uVar24;
        fVar54 = (float)uVar55 * fVar53 + auVar67._0_4_ * fVar56 + fVar38 * fVar101;
        fVar39 = (float)((ulong)uVar55 >> 0x20) * fVar53 + auVar67._4_4_ * fVar56 + fVar39 * fVar101
        ;
        uVar44 = CONCAT44(fVar39,fVar54);
        fVar38 = fVar57 * fVar53 + auVar67._8_4_ * fVar56 + fVar51 * fVar101;
        fVar54 = (float)uVar99 + fVar54;
        fVar39 = (float)((ulong)uVar99 >> 0x20) + fVar39;
        local_f0 = CONCAT44(fVar39,fVar54);
        fVar51 = (float)uVar45 + fVar38;
        fVar57 = (float)(uVar45 >> 0x20) +
                 fVar50 * fVar53 + auVar67._12_4_ * fVar56 + fVar52 * fVar101;
        uStack_e8 = CONCAT44(fVar57,fVar51);
        if (iVar16 <= *(int *)(param_2 + 0x28)) {
          puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10);
          if (puVar32 != (undefined8 *)0x0) {
            fVar38 = *(float *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10 + 8);
            uVar44 = *puVar32;
          }
        }
        lVar21 = lVar21 * 0x10;
        pfVar6 = (float *)(*(long *)(param_2 + 0x210) + lVar21);
        pfVar9 = (float *)(*(long *)(param_2 + 0x218) + lVar21);
        pfVar10 = (float *)(*(long *)(param_2 + 0x220) + lVar21);
        if (cVar14 == '\x02') {
          fVar52 = *pfVar6;
          fVar56 = pfVar6[1];
          fVar50 = *pfVar9;
          fVar53 = *pfVar10;
          fVar101 = pfVar9[1];
          fVar96 = pfVar10[1];
          fVar34 = pfVar10[2];
          uVar99 = *(undefined8 *)(param_2 + 0x370);
          uVar55 = CONCAT44(pfVar9[2],pfVar6[2]);
          uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028b9bc:
          uVar45 = (ulong)(uint)fVar34;
          fVar35 = 0.0;
          fVar34 = 0.0;
        }
        else {
          if (cVar14 != '\0') {
            fVar52 = *pfVar6;
            fVar56 = pfVar6[1];
            fVar50 = *pfVar9;
            fVar53 = *pfVar10;
            fVar101 = pfVar9[1];
            fVar96 = pfVar10[1];
            fVar34 = pfVar10[2];
            uVar99 = CONCAT44(pfVar9[3],pfVar6[3]);
            uVar55 = CONCAT44(pfVar9[2],pfVar6[2]);
            uVar24 = (ulong)(uint)pfVar10[3];
            goto LAB_0028b9bc;
          }
          fVar52 = *(float *)(param_2 + 0x340);
          fVar50 = *(float *)(param_2 + 0x344);
          fVar53 = *(float *)(param_2 + 0x348);
          fVar34 = *(float *)(param_2 + 0x34c);
          fVar56 = *(float *)(param_2 + 0x350);
          fVar101 = *(float *)(param_2 + 0x354);
          fVar96 = *(float *)(param_2 + 0x358);
          fVar35 = *(float *)(param_2 + 0x35c);
          uVar45 = *(ulong *)(param_2 + 0x368);
          uVar55 = *(undefined8 *)(param_2 + 0x360);
          uVar24 = *(ulong *)(param_2 + 0x378);
          uVar99 = *(undefined8 *)(param_2 + 0x370);
        }
        fVar36 = (float)uVar44;
        fVar37 = (float)((ulong)uVar44 >> 0x20);
        fVar52 = (float)uVar99 + fVar52 * fVar36 + fVar56 * fVar37 + (float)uVar55 * fVar38;
        fVar50 = (float)((ulong)uVar99 >> 0x20) +
                 fVar50 * fVar36 + fVar101 * fVar37 + (float)((ulong)uVar55 >> 0x20) * fVar38;
        local_110 = CONCAT44(fVar50,fVar52);
        fVar53 = (float)uVar24 + fVar53 * fVar36 + fVar96 * fVar37 + (float)uVar45 * fVar38;
        fVar38 = (float)(uVar24 >> 0x20) +
                 fVar34 * fVar36 + fVar35 * fVar37 + (float)(uVar45 >> 0x20) * fVar38;
        uStack_108 = CONCAT44(fVar38,fVar53);
        local_100 = CONCAT44(fVar50 - fVar39,fVar52 - fVar54);
        uStack_f8 = CONCAT44(fVar38 - fVar57,fVar53 - fVar51);
      }
      else {
        fVar38 = (float)local_f0;
        fVar39 = (float)((ulong)local_f0 >> 0x20);
        fVar51 = (float)uStack_e8;
        fVar57 = (float)(uStack_e8 >> 0x20);
        if (uVar24 == 0) {
          lVar21 = (long)*(int *)(local_d8 + 0x14);
          uVar44 = local_130;
          uVar24 = uStack_128;
          if (*(int *)(local_d8 + 0x14) <= *(int *)(param_2 + 0x28)) {
            puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10);
            if (puVar32 != (undefined8 *)0x0) {
              uVar24 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10 + 8);
              uVar44 = *puVar32;
            }
          }
          lVar21 = lVar21 * 0x10;
          puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar21);
          puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar21);
          pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar21);
          cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
          if (cVar14 == '\x02') {
            auVar68._0_4_ = puVar4[1];
            uVar55 = CONCAT44(*puVar5,*puVar4);
            fVar54 = *pfVar6;
            auVar68._4_4_ = puVar5[1];
            fVar53 = pfVar6[2];
            fVar52 = (float)puVar4[2];
            auVar68._8_4_ = pfVar6[1];
            auVar68._12_4_ = 0;
            uVar99 = *(undefined8 *)(param_2 + 0x370);
            fVar50 = (float)puVar5[2];
            uVar45 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028bb2c:
            fVar101 = 0.0;
            fVar56 = 0.0;
          }
          else {
            if (cVar14 != '\0') {
              auVar68._0_4_ = puVar4[1];
              uVar55 = CONCAT44(*puVar5,*puVar4);
              fVar54 = *pfVar6;
              auVar68._4_4_ = puVar5[1];
              auVar89._4_12_ = SUB1612(ZEXT816(0),4);
              auVar89._0_4_ = pfVar6[1];
              fVar53 = pfVar6[2];
              auVar68._8_8_ = auVar89._0_8_;
              fVar52 = (float)puVar4[2];
              uVar99 = CONCAT44(puVar5[3],puVar4[3]);
              fVar50 = (float)puVar5[2];
              uVar45 = (ulong)(uint)pfVar6[3];
              goto LAB_0028bb2c;
            }
            fVar54 = *(float *)(param_2 + 0x348);
            fVar101 = *(float *)(param_2 + 0x34c);
            uVar55 = *(undefined8 *)(param_2 + 0x340);
            auVar68 = *(undefined1 (*) [16])(param_2 + 0x350);
            fVar52 = *(float *)(param_2 + 0x360);
            fVar50 = *(float *)(param_2 + 0x364);
            fVar53 = *(float *)(param_2 + 0x368);
            fVar56 = *(float *)(param_2 + 0x36c);
            uVar45 = *(ulong *)(param_2 + 0x378);
            uVar99 = *(undefined8 *)(param_2 + 0x370);
          }
          fVar96 = (float)uVar44;
          fVar34 = (float)((ulong)uVar44 >> 0x20);
          fVar35 = (float)uVar24;
          uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar57,(float)uStack_108 - fVar51);
          local_100 = CONCAT44(local_110._4_4_ - fVar39,(float)local_110 - fVar38);
          auVar71._8_4_ = 0x3f000000;
          auVar71._0_8_ = &DAT_3f0000003f000000;
          auVar71._12_4_ = 0x3f000000;
          fVar38 = ((float)uVar99 +
                   (float)uVar55 * fVar96 + auVar68._0_4_ * fVar34 + fVar52 * fVar35) - fVar38;
          fVar39 = ((float)((ulong)uVar99 >> 0x20) +
                   (float)((ulong)uVar55 >> 0x20) * fVar96 + auVar68._4_4_ * fVar34 +
                   fVar50 * fVar35) - fVar39;
          fVar51 = ((float)uVar45 + fVar54 * fVar96 + auVar68._8_4_ * fVar34 + fVar53 * fVar35) -
                   fVar51;
          fVar57 = ((float)(uVar45 >> 0x20) +
                   fVar101 * fVar96 + auVar68._12_4_ * fVar34 + fVar56 * fVar35) - fVar57;
        }
        else {
          iVar30 = *(int *)(local_d8 + uVar24 * 8 + -4);
          lVar21 = (long)iVar30;
          if (uVar24 != uVar18) {
            iVar15 = *(int *)(local_d8 + (ulong)((int)uVar24 + 2) * 8 + 4);
            lVar23 = (long)iVar15;
            uVar44 = local_130;
            uVar24 = uStack_128;
            if (iVar30 <= *(int *)(param_2 + 0x28)) {
              puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10);
              if (puVar32 != (undefined8 *)0x0) {
                uVar24 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10 + 8);
                uVar44 = *puVar32;
              }
            }
            fVar52 = (float)uVar24;
            lVar21 = lVar21 * 0x10;
            puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar21);
            puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar21);
            pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar21);
            cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
            if (cVar14 == '\x02') {
              auVar69._0_4_ = puVar4[1];
              uVar55 = CONCAT44(*puVar5,*puVar4);
              fVar56 = *pfVar6;
              auVar69._4_4_ = puVar5[1];
              auVar90._4_12_ = SUB1612(ZEXT816(0),4);
              auVar90._0_4_ = pfVar6[1];
              uVar99 = CONCAT44(puVar5[2],puVar4[2]);
              fVar101 = pfVar6[2];
              auVar69._8_8_ = auVar90._0_8_;
              fVar53 = *(float *)(param_2 + 0x370);
              fVar54 = *(float *)(param_2 + 0x374);
              fVar50 = *(float *)(param_2 + 0x378);
LAB_0028bc18:
              fVar96 = 0.0;
              uVar24 = (ulong)(uint)fVar101;
              fVar101 = 0.0;
            }
            else {
              if (cVar14 != '\0') {
                auVar69._0_4_ = puVar4[1];
                uVar55 = CONCAT44(*puVar5,*puVar4);
                fVar56 = *pfVar6;
                auVar69._4_4_ = puVar5[1];
                auVar91._4_12_ = SUB1612(ZEXT816(0),4);
                auVar91._0_4_ = pfVar6[1];
                fVar101 = pfVar6[2];
                auVar69._8_8_ = auVar91._0_8_;
                fVar53 = (float)puVar4[3];
                fVar54 = (float)puVar5[3];
                uVar99 = CONCAT44(puVar5[2],puVar4[2]);
                fVar50 = pfVar6[3];
                goto LAB_0028bc18;
              }
              fVar56 = *(float *)(param_2 + 0x348);
              fVar96 = *(float *)(param_2 + 0x34c);
              uVar55 = *(undefined8 *)(param_2 + 0x340);
              auVar69 = *(undefined1 (*) [16])(param_2 + 0x350);
              uVar24 = *(ulong *)(param_2 + 0x368);
              uVar99 = *(undefined8 *)(param_2 + 0x360);
              fVar53 = *(float *)(param_2 + 0x370);
              fVar54 = *(float *)(param_2 + 0x374);
              fVar50 = *(float *)(param_2 + 0x378);
              fVar101 = *(float *)(param_2 + 0x37c);
            }
            fVar40 = (float)uVar44;
            fVar46 = (float)((ulong)uVar44 >> 0x20);
            fVar34 = (float)uVar99 * fVar52;
            fVar35 = (float)((ulong)uVar99 >> 0x20) * fVar52;
            fVar36 = (float)uVar24 * fVar52;
            fVar37 = (float)(uVar24 >> 0x20) * fVar52;
            if (iVar15 <= *(int *)(param_2 + 0x28)) {
              puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10);
              if (puVar32 != (undefined8 *)0x0) {
                fVar52 = *(float *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10 + 8);
                uVar44 = *puVar32;
              }
            }
            lVar23 = lVar23 * 0x10;
            pfVar6 = (float *)(*(long *)(param_2 + 0x210) + lVar23);
            pfVar9 = (float *)(*(long *)(param_2 + 0x218) + lVar23);
            pfVar10 = (float *)(*(long *)(param_2 + 0x220) + lVar23);
            if (cVar14 == '\x02') {
              fVar58 = *pfVar6;
              fVar74 = pfVar6[1];
              fVar73 = *pfVar9;
              fVar97 = *pfVar10;
              fVar94 = pfVar9[1];
              fVar98 = pfVar10[1];
              fVar103 = pfVar10[2];
              uVar102 = *(undefined8 *)(param_2 + 0x370);
              uVar99 = CONCAT44(pfVar9[2],pfVar6[2]);
              uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028bd3c:
              uVar45 = (ulong)(uint)fVar103;
              fVar95 = 0.0;
              fVar103 = 0.0;
            }
            else {
              if (cVar14 != '\0') {
                fVar58 = *pfVar6;
                fVar74 = pfVar6[1];
                fVar73 = *pfVar9;
                fVar97 = *pfVar10;
                fVar94 = pfVar9[1];
                fVar98 = pfVar10[1];
                fVar103 = pfVar10[2];
                uVar102 = CONCAT44(pfVar9[3],pfVar6[3]);
                uVar99 = CONCAT44(pfVar9[2],pfVar6[2]);
                uVar24 = (ulong)(uint)pfVar10[3];
                goto LAB_0028bd3c;
              }
              fVar58 = *(float *)(param_2 + 0x340);
              fVar73 = *(float *)(param_2 + 0x344);
              fVar97 = *(float *)(param_2 + 0x348);
              fVar103 = *(float *)(param_2 + 0x34c);
              fVar74 = *(float *)(param_2 + 0x350);
              fVar94 = *(float *)(param_2 + 0x354);
              fVar98 = *(float *)(param_2 + 0x358);
              fVar95 = *(float *)(param_2 + 0x35c);
              uVar45 = *(ulong *)(param_2 + 0x368);
              uVar99 = *(undefined8 *)(param_2 + 0x360);
              uVar24 = *(ulong *)(param_2 + 0x378);
              uVar102 = *(undefined8 *)(param_2 + 0x370);
            }
            fVar41 = (float)uVar44;
            fVar47 = (float)((ulong)uVar44 >> 0x20);
            local_100 = CONCAT44((local_110._4_4_ -
                                 (fVar54 + (float)((ulong)uVar55 >> 0x20) * fVar40 +
                                           auVar69._4_4_ * fVar46 + fVar35)) * 0.5,
                                 ((float)local_110 -
                                 (fVar53 + (float)uVar55 * fVar40 + auVar69._0_4_ * fVar46 + fVar34)
                                 ) * 0.5);
            uStack_f8 = CONCAT44((uStack_108._4_4_ -
                                 (fVar101 + fVar96 * fVar40 + auVar69._12_4_ * fVar46 + fVar37)) *
                                 0.5,((float)uStack_108 -
                                     (fVar50 + fVar56 * fVar40 + auVar69._8_4_ * fVar46 + fVar36)) *
                                     0.5);
            local_120 = CONCAT44((((float)((ulong)uVar102 >> 0x20) +
                                  fVar73 * fVar41 + fVar94 * fVar47 +
                                  (float)((ulong)uVar99 >> 0x20) * fVar52) - fVar39) * 0.5,
                                 (((float)uVar102 +
                                  fVar58 * fVar41 + fVar74 * fVar47 + (float)uVar99 * fVar52) -
                                 fVar38) * 0.5);
            uStack_118 = CONCAT44((((float)(uVar24 >> 0x20) +
                                   fVar103 * fVar41 + fVar95 * fVar47 +
                                   (float)(uVar45 >> 0x20) * fVar52) - fVar57) * 0.5,
                                  (((float)uVar24 +
                                   fVar97 * fVar41 + fVar98 * fVar47 + (float)uVar45 * fVar52) -
                                  fVar51) * 0.5);
            goto LAB_0028beb8;
          }
          uVar44 = local_130;
          uVar24 = uStack_128;
          if (iVar30 <= *(int *)(param_2 + 0x28)) {
            puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10);
            if (puVar32 != (undefined8 *)0x0) {
              uVar24 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10 + 8);
              uVar44 = *puVar32;
            }
          }
          lVar21 = lVar21 * 0x10;
          puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar21);
          puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar21);
          pfVar6 = (float *)(*(long *)(param_2 + 0x220) + lVar21);
          cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
          if (cVar14 == '\x02') {
            auVar70._0_4_ = puVar4[1];
            uVar55 = CONCAT44(*puVar5,*puVar4);
            fVar54 = *pfVar6;
            auVar70._4_4_ = puVar5[1];
            fVar53 = pfVar6[2];
            fVar52 = (float)puVar4[2];
            auVar70._8_4_ = pfVar6[1];
            auVar70._12_4_ = 0;
            uVar99 = *(undefined8 *)(param_2 + 0x370);
            fVar50 = (float)puVar5[2];
            uVar45 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028be74:
            fVar101 = 0.0;
            fVar56 = 0.0;
          }
          else {
            if (cVar14 != '\0') {
              auVar70._0_4_ = puVar4[1];
              uVar55 = CONCAT44(*puVar5,*puVar4);
              fVar54 = *pfVar6;
              auVar70._4_4_ = puVar5[1];
              auVar92._4_12_ = SUB1612(ZEXT816(0),4);
              auVar92._0_4_ = pfVar6[1];
              fVar53 = pfVar6[2];
              auVar70._8_8_ = auVar92._0_8_;
              fVar52 = (float)puVar4[2];
              uVar99 = CONCAT44(puVar5[3],puVar4[3]);
              fVar50 = (float)puVar5[2];
              uVar45 = (ulong)(uint)pfVar6[3];
              goto LAB_0028be74;
            }
            fVar54 = *(float *)(param_2 + 0x348);
            fVar101 = *(float *)(param_2 + 0x34c);
            uVar55 = *(undefined8 *)(param_2 + 0x340);
            auVar70 = *(undefined1 (*) [16])(param_2 + 0x350);
            fVar52 = *(float *)(param_2 + 0x360);
            fVar50 = *(float *)(param_2 + 0x364);
            fVar53 = *(float *)(param_2 + 0x368);
            fVar56 = *(float *)(param_2 + 0x36c);
            uVar45 = *(ulong *)(param_2 + 0x378);
            uVar99 = *(undefined8 *)(param_2 + 0x370);
          }
          fVar96 = (float)uVar44;
          fVar34 = (float)((ulong)uVar44 >> 0x20);
          fVar35 = (float)uVar24;
          fVar52 = (float)uVar99 + (float)uVar55 * fVar96 + auVar70._0_4_ * fVar34 + fVar52 * fVar35
          ;
          fVar50 = (float)((ulong)uVar99 >> 0x20) +
                   (float)((ulong)uVar55 >> 0x20) * fVar96 + auVar70._4_4_ * fVar34 +
                   fVar50 * fVar35;
          fVar53 = (float)uVar45 + fVar54 * fVar96 + auVar70._8_4_ * fVar34 + fVar53 * fVar35;
          fVar54 = (float)(uVar45 >> 0x20) +
                   fVar101 * fVar96 + auVar70._12_4_ * fVar34 + fVar56 * fVar35;
          local_100 = CONCAT44((local_110._4_4_ - fVar50) * 0.5,((float)local_110 - fVar52) * 0.5);
          uStack_f8 = CONCAT44((uStack_108._4_4_ - fVar54) * 0.5,((float)uStack_108 - fVar53) * 0.5)
          ;
          fVar38 = (fVar38 - (float)local_110) + (fVar38 - fVar52);
          fVar39 = (fVar39 - local_110._4_4_) + (fVar39 - fVar50);
          fVar51 = (fVar51 - (float)uStack_108) + (fVar51 - fVar53);
          fVar57 = (fVar57 - uStack_108._4_4_) + (fVar57 - fVar54);
          auVar71 = NEON_fmov(0xbe800000,4);
        }
        local_120 = CONCAT44(fVar39 * auVar71._4_4_,fVar38 * auVar71._0_4_);
        uStack_118 = CONCAT44(fVar57 * auVar71._12_4_,fVar51 * auVar71._8_4_);
      }
LAB_0028beb8:
      iVar30 = (int)uVar42;
      puVar26 = puVar20 + (long)iVar30 * 0x14;
      puVar32 = puVar20 + ((long)(iVar30 * 2) | 1U) * 10;
      *puVar26 = local_f0;
      *(int *)(puVar26 + 1) = (int)uStack_e8;
      *puVar32 = local_f0;
      *(int *)(puVar32 + 1) = (int)uStack_e8;
      puVar26[2] = local_100;
      *(int *)(puVar26 + 3) = (int)uStack_f8;
      puVar32[2] = local_100;
      *(int *)(puVar32 + 3) = (int)uStack_f8;
      fVar38 = (float)iVar30;
      uVar29 = iVar30 + 1;
      fVar39 = fVar38 / (float)(iVar11 + -1);
      puVar26[4] = uVar43;
      uVar49 = (undefined4)uVar105;
      *(undefined4 *)(puVar26 + 5) = uVar49;
      puVar32[4] = uVar43;
      *(undefined4 *)(puVar32 + 5) = uVar49;
      *(float *)((long)puVar26 + 0xc) = -fVar48;
      *(float *)((long)puVar32 + 0xc) = fVar48;
      *(float *)((long)puVar26 + 0x1c) = fVar39;
      *(float *)((long)puVar32 + 0x1c) = fVar39;
      *(float *)((long)puVar26 + 0x2c) = fVar38;
      *(float *)((long)puVar32 + 0x2c) = fVar38;
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 2;
      if (0 < (int)uVar12) {
        uVar33 = 0;
        iVar30 = iVar30 * 2;
        do {
          uVar1 = uVar33 + 1;
          fVar38 = (1.0 / (float)(int)(uVar12 + 1)) * (float)(int)uVar1;
          fVar39 = 1.0 - fVar38;
          uVar44 = CONCAT44(local_100._4_4_ * fVar39 + local_120._4_4_ * fVar38,
                            (float)local_100 * fVar39 + (float)local_120 * fVar38);
          fVar38 = (float)uStack_f8 * fVar39 + (float)uStack_118 * fVar38;
          FUN_00271a40(&local_c0,&local_f0,&local_100,&local_110,&local_120);
          puVar26 = puVar20 + (long)(iVar30 + 2) * 10;
          fVar39 = (float)(int)(uVar29 + uVar33);
          puVar32 = puVar20 + (long)(iVar30 + 3) * 10;
          *puVar26 = local_c0;
          *(int *)(puVar26 + 1) = (int)uStack_b8;
          *puVar32 = local_c0;
          *(int *)(puVar32 + 1) = (int)uStack_b8;
          puVar26[2] = uVar44;
          *(float *)(puVar26 + 3) = fVar38;
          puVar32[2] = uVar44;
          *(float *)(puVar32 + 3) = fVar38;
          fVar38 = fVar39 / (float)(iVar11 + -1);
          *(undefined4 *)(puVar26 + 5) = uVar49;
          *(float *)((long)puVar26 + 0x2c) = fVar39;
          puVar26[4] = uVar43;
          puVar32[4] = uVar43;
          *(undefined4 *)(puVar32 + 5) = uVar49;
          *(float *)((long)puVar32 + 0x2c) = fVar39;
          *(float *)((long)puVar26 + 0xc) = -fVar48;
          *(float *)((long)puVar32 + 0xc) = fVar48;
          *(float *)((long)puVar26 + 0x1c) = fVar38;
          *(float *)((long)puVar32 + 0x1c) = fVar38;
          *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 2;
          uVar33 = uVar1;
          iVar30 = iVar30 + 2;
        } while (uVar12 != uVar1);
        uVar29 = uVar29 + uVar1;
      }
      uVar45 = (ulong)(uint)fVar38;
      uVar42 = (ulong)uVar29;
      uVar24 = uVar2;
    } while (uVar2 != uVar17);
  }
  if (local_94 < 2) goto LAB_0028c588;
  local_f0 = 0;
  uStack_e8 = 0;
  iVar30 = *(int *)(local_d8 + (long)(int)uVar17 * 8 + 4);
  lVar23 = (long)iVar30;
  lVar21 = lVar23 * 0x10;
  if (*piVar22 - 1U < 2) {
    if (*(char *)(*(long *)(param_2 + 0xa0) + 0x753) == '\0') {
      uVar49 = (undefined4)*(undefined8 *)(param_2 + 0x358);
      uVar43 = *(undefined8 *)(param_2 + 0x350);
    }
    else {
      iVar15 = *(int *)(param_2 + 0x28);
      lVar31 = 0;
      if (iVar30 <= iVar15) {
        lVar31 = *(long *)(param_2 + 0x210) + lVar21;
      }
      lVar27 = 0;
      if (iVar30 <= iVar15) {
        lVar27 = *(long *)(param_2 + 0x218) + lVar21;
      }
      uVar43 = CONCAT44(*(undefined4 *)(lVar27 + 4),*(undefined4 *)(lVar31 + 4));
      lVar31 = 0;
      if (iVar30 <= iVar15) {
        lVar31 = *(long *)(param_2 + 0x220) + lVar21;
      }
      uVar49 = *(undefined4 *)(lVar31 + 4);
    }
  }
  else {
    uVar43 = 0;
    uVar49 = 0;
  }
  lVar31 = *(long *)(param_2 + 0xb0) + lVar23 * 0x20;
  puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar21);
  local_c0 = *puVar32;
  uStack_b8 = puVar32[1];
  auVar85 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar21);
  uStack_c8 = auVar85._8_8_;
  local_d0 = auVar85._0_8_;
  FUN_00273964(*(undefined4 *)(lVar31 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar31 + 8),
               *(undefined8 *)(param_2 + 0x98),&local_f0,*(undefined8 *)(param_2 + 0x238),&local_d0,
               &local_c0);
  uVar42 = *(ulong *)(*(long *)(param_2 + 0x78) + 0x148);
  uVar44 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x140);
  fVar48 = (float)local_f0 * (float)uVar44;
  local_f0 = CONCAT44((float)((ulong)local_f0 >> 0x20) * (float)((ulong)uVar44 >> 0x20),fVar48);
  uStack_e8 = CONCAT44((float)(uStack_e8 >> 0x20) * (float)(uVar42 >> 0x20),
                       (float)uStack_e8 * (float)uVar42);
  iVar15 = *(int *)(param_2 + 0x28);
  if (iVar30 <= iVar15) {
    puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10);
    if (puVar32 != (undefined8 *)0x0) {
      uVar42 = (ulong)*(uint *)(*(long *)(param_2 + 0x1d0) + lVar23 * 0x10 + 8);
      uVar44 = *puVar32;
    }
  }
  lVar27 = *(long *)(param_2 + 0x210);
  pfVar6 = (float *)(lVar27 + lVar21);
  lVar31 = *(long *)(param_2 + 0x218);
  lVar23 = *(long *)(param_2 + 0x220);
  cVar14 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
  pfVar9 = (float *)(lVar31 + lVar21);
  pfVar10 = (float *)(lVar23 + lVar21);
  if (cVar14 == '\x02') {
    fVar39 = *pfVar6;
    fVar52 = pfVar6[1];
    fVar51 = *pfVar9;
    fVar57 = *pfVar10;
    fVar50 = pfVar9[1];
    fVar53 = pfVar10[1];
    fVar38 = pfVar10[2];
    uVar55 = CONCAT44(pfVar9[2],pfVar6[2]);
    uVar99 = *(undefined8 *)(param_2 + 0x370);
    uVar24 = *(ulong *)(param_2 + 0x378) & 0xffffffff;
LAB_0028c25c:
    uVar45 = (ulong)(uint)fVar38;
    fVar54 = 0.0;
    fVar38 = 0.0;
  }
  else {
    if (cVar14 != '\0') {
      fVar39 = *pfVar6;
      fVar52 = pfVar6[1];
      fVar51 = *pfVar9;
      fVar57 = *pfVar10;
      fVar50 = pfVar9[1];
      fVar53 = pfVar10[1];
      fVar38 = pfVar10[2];
      uVar99 = CONCAT44(pfVar9[3],pfVar6[3]);
      uVar24 = (ulong)(uint)pfVar10[3];
      uVar55 = CONCAT44(pfVar9[2],pfVar6[2]);
      goto LAB_0028c25c;
    }
    fVar39 = *(float *)(param_2 + 0x340);
    fVar51 = *(float *)(param_2 + 0x344);
    fVar57 = *(float *)(param_2 + 0x348);
    fVar38 = *(float *)(param_2 + 0x34c);
    fVar52 = *(float *)(param_2 + 0x350);
    fVar50 = *(float *)(param_2 + 0x354);
    fVar53 = *(float *)(param_2 + 0x358);
    fVar54 = *(float *)(param_2 + 0x35c);
    uVar45 = *(ulong *)(param_2 + 0x368);
    uVar55 = *(undefined8 *)(param_2 + 0x360);
    uVar24 = *(ulong *)(param_2 + 0x378);
    uVar99 = *(undefined8 *)(param_2 + 0x370);
  }
  fVar56 = (float)uVar44;
  fVar101 = (float)((ulong)uVar44 >> 0x20);
  fVar96 = (float)uVar42;
  auVar59._0_4_ = fVar39 * fVar56 + fVar52 * fVar101 + (float)uVar55 * fVar96;
  auVar59._4_4_ = fVar51 * fVar56 + fVar50 * fVar101 + (float)((ulong)uVar55 >> 0x20) * fVar96;
  auVar59._8_4_ = fVar57 * fVar56 + fVar53 * fVar101 + (float)uVar45 * fVar96;
  uVar44 = CONCAT44((float)((ulong)uVar99 >> 0x20) + auVar59._4_4_,(float)uVar99 + auVar59._0_4_);
  fVar39 = (float)uVar24 + auVar59._8_4_;
  uVar55 = CONCAT44((float)(uVar24 >> 0x20) +
                    fVar38 * fVar56 + fVar54 * fVar101 + (float)(uVar45 >> 0x20) * fVar96,fVar39);
  if ((uVar13 & 0xfffffffd) == 0) {
    iVar30 = *(int *)(local_d8 + (long)(int)uVar18 * 8 + 4);
    lVar21 = (long)iVar30;
    if (iVar30 <= iVar15) {
      puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10);
      if (puVar32 != (undefined8 *)0x0) {
        auVar59._8_4_ = (float)*(undefined4 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10 + 8);
        auVar59._0_8_ = *puVar32;
      }
    }
    lVar21 = lVar21 * 0x10;
    puVar4 = (undefined4 *)(lVar27 + lVar21);
    puVar5 = (undefined4 *)(lVar31 + lVar21);
    puVar7 = (undefined4 *)(lVar23 + lVar21);
    if (cVar14 == '\x02') {
      auVar75._4_4_ = *puVar5;
      auVar75._0_4_ = *puVar4;
      uVar99 = CONCAT44(puVar5[1],puVar4[1]);
      fVar38 = (float)puVar7[1];
      auVar75._8_4_ = *puVar7;
      fVar51 = (float)puVar7[2];
      uVar102 = CONCAT44(puVar5[2],puVar4[2]);
      uVar104 = *(undefined8 *)(param_2 + 0x370);
      fVar57 = (float)*(undefined8 *)(param_2 + 0x378);
    }
    else if (cVar14 == '\0') {
      auVar75 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x340),0);
      fVar38 = (float)*(undefined8 *)(param_2 + 0x358);
      uVar99 = *(undefined8 *)(param_2 + 0x350);
      fVar51 = (float)*(undefined8 *)(param_2 + 0x368);
      uVar102 = *(undefined8 *)(param_2 + 0x360);
      fVar57 = (float)*(undefined8 *)(param_2 + 0x378);
      uVar104 = *(undefined8 *)(param_2 + 0x370);
    }
    else {
      auVar75._4_4_ = *puVar5;
      auVar75._0_4_ = *puVar4;
      auVar75._8_4_ = *puVar7;
      uVar99 = CONCAT44(puVar5[1],puVar4[1]);
      fVar38 = (float)puVar7[1];
      fVar51 = (float)puVar7[2];
      uVar104 = CONCAT44(puVar5[3],puVar4[3]);
      uVar102 = CONCAT44(puVar5[2],puVar4[2]);
      fVar57 = (float)puVar7[3];
    }
    fVar52 = auVar59._0_4_;
    fVar50 = auVar59._4_4_;
    fVar53 = auVar59._8_4_;
    auVar60._0_4_ =
         (float)uVar104 + auVar75._0_4_ * fVar52 + (float)uVar99 * fVar50 + (float)uVar102 * fVar53;
    auVar60._4_4_ =
         (float)((ulong)uVar104 >> 0x20) +
         auVar75._4_4_ * fVar52 + (float)((ulong)uVar99 >> 0x20) * fVar50 +
         (float)((ulong)uVar102 >> 0x20) * fVar53;
    auVar60._8_4_ = fVar57 + auVar75._8_4_ * fVar52 + fVar38 * fVar50 + fVar51 * fVar53;
    auVar93._8_8_ = uVar55;
    auVar93._0_8_ = uVar44;
    auVar77 = auVar93._0_12_;
  }
  else {
    if (uVar13 != 1) goto LAB_0028c588;
    lVar21 = (long)*(int *)(local_d8 + 4);
    if (*(int *)(local_d8 + 4) <= iVar15) {
      puVar32 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10);
      if (puVar32 != (undefined8 *)0x0) {
        auVar59._8_4_ = (float)*(undefined4 *)(*(long *)(param_2 + 0x1d0) + lVar21 * 0x10 + 8);
        auVar59._0_8_ = *puVar32;
      }
    }
    lVar21 = lVar21 * 0x10;
    puVar4 = (undefined4 *)(lVar27 + lVar21);
    puVar5 = (undefined4 *)(lVar31 + lVar21);
    puVar7 = (undefined4 *)(lVar23 + lVar21);
    if (cVar14 == '\x02') {
      auVar76._4_4_ = *puVar5;
      auVar76._0_4_ = *puVar4;
      uVar99 = CONCAT44(puVar5[1],puVar4[1]);
      fVar38 = (float)puVar7[1];
      auVar76._8_4_ = *puVar7;
      fVar51 = (float)puVar7[2];
      uVar102 = CONCAT44(puVar5[2],puVar4[2]);
      uVar104 = *(undefined8 *)(param_2 + 0x370);
      fVar57 = (float)*(undefined8 *)(param_2 + 0x378);
    }
    else if (cVar14 == '\0') {
      auVar76 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x340),0);
      fVar38 = (float)*(undefined8 *)(param_2 + 0x358);
      uVar99 = *(undefined8 *)(param_2 + 0x350);
      fVar51 = (float)*(undefined8 *)(param_2 + 0x368);
      uVar102 = *(undefined8 *)(param_2 + 0x360);
      fVar57 = (float)*(undefined8 *)(param_2 + 0x378);
      uVar104 = *(undefined8 *)(param_2 + 0x370);
    }
    else {
      auVar76._4_4_ = *puVar5;
      auVar76._0_4_ = *puVar4;
      auVar76._8_4_ = *puVar7;
      uVar99 = CONCAT44(puVar5[1],puVar4[1]);
      fVar38 = (float)puVar7[1];
      fVar51 = (float)puVar7[2];
      uVar104 = CONCAT44(puVar5[3],puVar4[3]);
      uVar102 = CONCAT44(puVar5[2],puVar4[2]);
      fVar57 = (float)puVar7[3];
    }
    fVar52 = auVar59._0_4_;
    fVar50 = auVar59._4_4_;
    fVar53 = auVar59._8_4_;
    auVar72._8_8_ = uVar55;
    auVar72._0_8_ = uVar44;
    auVar60 = auVar72._0_12_;
    auVar77._0_4_ =
         (float)uVar104 + auVar76._0_4_ * fVar52 + (float)uVar99 * fVar50 + (float)uVar102 * fVar53;
    auVar77._4_4_ =
         (float)((ulong)uVar104 >> 0x20) +
         auVar76._4_4_ * fVar52 + (float)((ulong)uVar99 >> 0x20) * fVar50 +
         (float)((ulong)uVar102 >> 0x20) * fVar53;
    auVar77._8_4_ = fVar57 + auVar76._8_4_ * fVar52 + fVar38 * fVar50 + fVar51 * fVar53;
  }
  puVar32 = puVar20 + (long)(int)uVar29 * 0x14;
  *puVar32 = uVar44;
  *(float *)(puVar32 + 1) = fVar39;
  uVar55 = CONCAT44(auVar77._4_4_ - auVar60._4_4_,auVar77._0_4_ - auVar60._0_4_);
  fVar38 = auVar77._8_4_ - auVar60._8_4_;
  puVar20 = puVar20 + ((long)(int)(uVar29 << 1) | 1U) * 10;
  *puVar20 = uVar44;
  *(float *)(puVar20 + 1) = fVar39;
  fVar106 = fVar106 * fVar48;
  puVar32[2] = uVar55;
  *(float *)(puVar32 + 3) = fVar38;
  puVar20[2] = uVar55;
  *(float *)(puVar20 + 3) = fVar38;
  puVar32[4] = uVar43;
  *(undefined4 *)(puVar32 + 5) = uVar49;
  puVar20[4] = uVar43;
  *(undefined4 *)(puVar20 + 5) = uVar49;
  *(float *)((long)puVar32 + 0xc) = -fVar106;
  *(float *)((long)puVar20 + 0xc) = fVar106;
  fVar48 = (float)(int)uVar29;
  fVar106 = fVar48 / (float)(iVar11 + -1);
  *(float *)((long)puVar32 + 0x1c) = fVar106;
  *(float *)((long)puVar20 + 0x1c) = fVar106;
  *(float *)((long)puVar32 + 0x2c) = fVar48;
  *(float *)((long)puVar20 + 0x2c) = fVar48;
  *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 2;
LAB_0028c588:
  FUN_0028d5c4(param_2 + 0x7a8);
  return;
}


