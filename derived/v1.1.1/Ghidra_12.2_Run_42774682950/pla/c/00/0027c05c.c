/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027c05c; name: FUN_0027c05c
 */


void FUN_0027c05c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  char cVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined2 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  long lVar37;
  int *piVar38;
  undefined8 *puVar39;
  long lVar40;
  long lVar41;
  undefined8 *puVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  float fVar67;
  float fVar68;
  int iVar69;
  undefined8 uVar70;
  undefined1 auVar71 [12];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
  undefined1 auVar78 [16];
  int iVar81;
  int iVar82;
  int iVar83;
  undefined1 auVar79 [16];
  undefined1 auVar84 [12];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [12];
  float fVar100;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar101;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar102;
  undefined8 uVar103;
  ulong uVar104;
  float fVar105;
  undefined8 uVar106;
  ulong uVar107;
  undefined8 uVar108;
  ulong uVar109;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar40 = *(long *)(param_2 + 0x10);
  lVar41 = *(long *)(lVar40 + 0x418);
  piVar38 = *(int **)(*(long *)(lVar40 + 0x238) + 0x338);
  lVar30 = FUN_0028d5b8(lVar40 + 0x7a8,*(undefined4 *)(lVar41 + 0x38));
  *(undefined4 *)((long)param_3 + 0x7c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_3 + 0xf) = 0;
  lVar32 = *(long *)(param_2 + 0x10);
  puVar42 = (undefined8 *)(*(long *)(lVar32 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uStack_58 = puVar42[1];
  local_60 = *puVar42;
  FUN_00274278(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(lVar32 + 0x98),param_3,*(undefined8 *)(lVar32 + 0x238),&local_60);
  FUN_00274a98(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 2,
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x238),&local_60);
  fVar67 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x238) + 0x18) + 0x360);
  auVar76._0_8_ = CONCAT44(fVar67 * (float)((ulong)param_3[2] >> 0x20),fVar67 * (float)param_3[2]);
  puVar42 = (undefined8 *)param_3[0xb];
  auVar76._12_4_ = (undefined4)((ulong)param_3[3] >> 0x20);
  auVar76._8_4_ = fVar67 * (float)param_3[3];
  fVar44 = *(float *)(param_3 + 0x11);
  param_3[1] = CONCAT44((int)((ulong)param_3[1] >> 0x20),fVar67 * (float)param_3[1]);
  *param_3 = CONCAT44(fVar67 * (float)((ulong)*param_3 >> 0x20),fVar67 * (float)*param_3);
  param_3[3] = auVar76._8_8_;
  param_3[2] = auVar76._0_8_;
  *(undefined4 *)(param_3 + 0x11) = *(undefined4 *)(param_2 + 0x18);
  if ((*(float *)((long)param_3 + 0x7c) == 0.0) ||
     (0.0 < (float)(int)*(float *)((long)param_3 + 0x7c) - (float)(int)fVar44)) {
    param_3[0xb] = puVar42[7];
    lVar32 = *(long *)(param_2 + 0x10);
    lVar34 = (long)*(int *)(param_2 + 0x20) * 0x10;
    puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1f0) + lVar34);
    uStack_58 = puVar39[1];
    local_60 = *puVar39;
    iVar69 = piVar38[1];
    puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1e8) + lVar34);
    uStack_68 = puVar39[1];
    local_70 = *puVar39;
    uVar31 = FUN_00273964(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                          *(undefined8 *)(lVar32 + 0x98),&local_80,*(undefined8 *)(lVar32 + 0x238),
                          &local_70,&local_60);
    lVar32 = *(long *)(param_2 + 0x10);
    uVar70 = *(undefined8 *)(*(long *)(lVar32 + 0x78) + 0x148);
    uVar46 = *(undefined8 *)(*(long *)(lVar32 + 0x78) + 0x140);
    fVar67 = (float)local_80 * (float)uVar46;
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * (float)((ulong)uVar46 >> 0x20),fVar67);
    uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uVar70 >> 0x20),
                         (float)uStack_78 * (float)uVar70);
    lVar34 = (long)*(int *)(param_2 + 0x20);
    puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1d0) + lVar34 * 0x10);
    uVar46 = *puVar39;
    fVar44 = *(float *)(puVar39 + 1);
    uVar33 = (ulong)(uint)fVar44;
    if (iVar69 == 0) {
      lVar37 = lVar34 * 0x10;
      pfVar2 = (float *)(*(long *)(lVar32 + 0x210) + lVar37);
      pfVar3 = (float *)(*(long *)(lVar32 + 0x218) + lVar37);
      pfVar4 = (float *)(*(long *)(lVar32 + 0x220) + lVar37);
      cVar6 = *(char *)(*(long *)(lVar32 + 0xa0) + 0x753);
      if (cVar6 == '\x02') {
        fVar68 = *pfVar2;
        fVar50 = pfVar2[1];
        fVar80 = *pfVar3;
        fVar48 = *pfVar4;
        fVar100 = pfVar3[1];
        fVar49 = pfVar4[1];
        uVar102 = CONCAT44(pfVar3[2],pfVar2[2]);
        fVar43 = pfVar4[2];
        uVar70 = *(undefined8 *)(lVar32 + 0x370);
        uVar51 = (undefined1)uVar70;
        uVar52 = (undefined1)((ulong)uVar70 >> 8);
        uVar53 = (undefined1)((ulong)uVar70 >> 0x10);
        uVar54 = (undefined1)((ulong)uVar70 >> 0x18);
        uVar55 = (undefined1)((ulong)uVar70 >> 0x20);
        uVar56 = (undefined1)((ulong)uVar70 >> 0x28);
        uVar57 = (undefined1)((ulong)uVar70 >> 0x30);
        uVar58 = (undefined1)((ulong)uVar70 >> 0x38);
        fVar105 = (float)*(undefined8 *)(lVar32 + 0x378);
LAB_0027c4c4:
        uVar33 = (ulong)(uint)fVar43;
        fVar101 = 0.0;
        fVar43 = 0.0;
        uVar63 = SUB41(fVar105,0);
        uVar64 = (undefined1)((uint)fVar105 >> 8);
        uVar65 = (undefined1)((uint)fVar105 >> 0x10);
        uVar66 = (undefined1)((uint)fVar105 >> 0x18);
        uVar59 = 0;
        uVar60 = 0;
        uVar61 = 0;
        uVar62 = 0;
      }
      else {
        if (cVar6 != '\0') {
          fVar68 = *pfVar2;
          fVar50 = pfVar2[1];
          fVar80 = *pfVar3;
          fVar48 = *pfVar4;
          fVar100 = pfVar3[1];
          fVar49 = pfVar4[1];
          fVar43 = pfVar4[2];
          fVar105 = pfVar2[3];
          uVar51 = SUB41(fVar105,0);
          uVar52 = (undefined1)((uint)fVar105 >> 8);
          uVar53 = (undefined1)((uint)fVar105 >> 0x10);
          uVar54 = (undefined1)((uint)fVar105 >> 0x18);
          fVar105 = pfVar3[3];
          uVar55 = SUB41(fVar105,0);
          uVar56 = (undefined1)((uint)fVar105 >> 8);
          uVar57 = (undefined1)((uint)fVar105 >> 0x10);
          uVar58 = (undefined1)((uint)fVar105 >> 0x18);
          uVar102 = CONCAT44(pfVar3[2],pfVar2[2]);
          fVar105 = pfVar4[3];
          goto LAB_0027c4c4;
        }
        fVar68 = *(float *)(lVar32 + 0x340);
        fVar80 = *(float *)(lVar32 + 0x344);
        fVar48 = *(float *)(lVar32 + 0x348);
        fVar43 = *(float *)(lVar32 + 0x34c);
        fVar50 = *(float *)(lVar32 + 0x350);
        fVar100 = *(float *)(lVar32 + 0x354);
        fVar49 = *(float *)(lVar32 + 0x358);
        fVar101 = *(float *)(lVar32 + 0x35c);
        uVar33 = *(ulong *)(lVar32 + 0x368);
        uVar102 = *(undefined8 *)(lVar32 + 0x360);
        uVar70 = *(undefined8 *)(lVar32 + 0x378);
        uVar63 = (undefined1)uVar70;
        uVar64 = (undefined1)((ulong)uVar70 >> 8);
        uVar65 = (undefined1)((ulong)uVar70 >> 0x10);
        uVar66 = (undefined1)((ulong)uVar70 >> 0x18);
        uVar59 = (undefined1)((ulong)uVar70 >> 0x20);
        uVar60 = (undefined1)((ulong)uVar70 >> 0x28);
        uVar61 = (undefined1)((ulong)uVar70 >> 0x30);
        uVar62 = (undefined1)((ulong)uVar70 >> 0x38);
        uVar70 = *(undefined8 *)(lVar32 + 0x370);
        uVar51 = (undefined1)uVar70;
        uVar52 = (undefined1)((ulong)uVar70 >> 8);
        uVar53 = (undefined1)((ulong)uVar70 >> 0x10);
        uVar54 = (undefined1)((ulong)uVar70 >> 0x18);
        uVar55 = (undefined1)((ulong)uVar70 >> 0x20);
        uVar56 = (undefined1)((ulong)uVar70 >> 0x28);
        uVar57 = (undefined1)((ulong)uVar70 >> 0x30);
        uVar58 = (undefined1)((ulong)uVar70 >> 0x38);
      }
      fVar45 = (float)uVar46;
      puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1d8) + lVar34 * 0x10);
      fVar47 = (float)((ulong)uVar46 >> 0x20);
      uVar70 = *puVar39;
      fVar105 = *(float *)(puVar39 + 1);
      if ((cVar6 == '\x02') || (cVar6 != '\0')) {
        uVar103 = CONCAT44(*pfVar3,*pfVar2);
        uVar104 = (ulong)(uint)*pfVar4;
        uVar106 = CONCAT44(pfVar3[1],pfVar2[1]);
        uVar107 = (ulong)(uint)pfVar4[1];
        uVar109 = (ulong)(uint)pfVar4[2];
        uVar108 = CONCAT44(pfVar3[2],pfVar2[2]);
      }
      else {
        uVar104 = *(ulong *)(lVar32 + 0x348);
        uVar103 = *(undefined8 *)(lVar32 + 0x340);
        uVar107 = *(ulong *)(lVar32 + 0x358);
        uVar106 = *(undefined8 *)(lVar32 + 0x350);
        uVar109 = *(ulong *)(lVar32 + 0x368);
        uVar108 = *(undefined8 *)(lVar32 + 0x360);
      }
      uVar46 = CONCAT44((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) +
                        fVar80 * fVar45 + fVar100 * fVar47 +
                        (float)((ulong)uVar102 >> 0x20) * fVar44,
                        (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) +
                        fVar68 * fVar45 + fVar50 * fVar47 + (float)uVar102 * fVar44);
      uVar33 = CONCAT44((float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) +
                        fVar43 * fVar45 + fVar101 * fVar47 + (float)(uVar33 >> 0x20) * fVar44,
                        (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) +
                        fVar48 * fVar45 + fVar49 * fVar47 + (float)uVar33 * fVar44);
      fVar48 = (float)uVar70;
      fVar49 = (float)((ulong)uVar70 >> 0x20);
      fVar44 = (float)uVar103 * fVar48 + (float)uVar106 * fVar49 + (float)uVar108 * fVar105 + 0.0;
      uVar51 = SUB41(fVar44,0);
      uVar52 = (undefined1)((uint)fVar44 >> 8);
      uVar53 = (undefined1)((uint)fVar44 >> 0x10);
      uVar54 = (undefined1)((uint)fVar44 >> 0x18);
      fVar44 = (float)((ulong)uVar103 >> 0x20) * fVar48 + (float)((ulong)uVar106 >> 0x20) * fVar49 +
               (float)((ulong)uVar108 >> 0x20) * fVar105 + 0.0;
      uVar55 = SUB41(fVar44,0);
      uVar56 = (undefined1)((uint)fVar44 >> 8);
      uVar57 = (undefined1)((uint)fVar44 >> 0x10);
      uVar58 = (undefined1)((uint)fVar44 >> 0x18);
      fVar44 = (float)uVar104 * fVar48 + (float)uVar107 * fVar49 + (float)uVar109 * fVar105 + 0.0;
      uVar59 = SUB41(fVar44,0);
      uVar60 = (undefined1)((uint)fVar44 >> 8);
      uVar61 = (undefined1)((uint)fVar44 >> 0x10);
      uVar62 = (undefined1)((uint)fVar44 >> 0x18);
      fVar44 = (float)(uVar104 >> 0x20) * fVar48 + (float)(uVar107 >> 0x20) * fVar49 +
               (float)(uVar109 >> 0x20) * fVar105 + 0.0;
      uVar63 = SUB41(fVar44,0);
      uVar64 = (undefined1)((uint)fVar44 >> 8);
      uVar65 = (undefined1)((uint)fVar44 >> 0x10);
      uVar66 = (undefined1)((uint)fVar44 >> 0x18);
    }
    else {
      puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1d8) + lVar34 * 0x10);
      uVar70 = *puVar39;
      uVar51 = (undefined1)uVar70;
      uVar52 = (undefined1)((ulong)uVar70 >> 8);
      uVar53 = (undefined1)((ulong)uVar70 >> 0x10);
      uVar54 = (undefined1)((ulong)uVar70 >> 0x18);
      uVar55 = (undefined1)((ulong)uVar70 >> 0x20);
      uVar56 = (undefined1)((ulong)uVar70 >> 0x28);
      uVar57 = (undefined1)((ulong)uVar70 >> 0x30);
      uVar58 = (undefined1)((ulong)uVar70 >> 0x38);
      uVar20 = *(undefined4 *)(puVar39 + 1);
      uVar59 = (undefined1)uVar20;
      uVar60 = (undefined1)((uint)uVar20 >> 8);
      uVar61 = (undefined1)((uint)uVar20 >> 0x10);
      uVar62 = (undefined1)((uint)uVar20 >> 0x18);
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      uVar66 = 0;
    }
    param_3[9] = uVar33;
    param_3[8] = uVar46;
    puVar42[1] = CONCAT44(*(undefined4 *)((long)puVar42 + 0xc),(int)uVar33);
    *puVar42 = uVar46;
    puVar42[1] = CONCAT44(fVar67,(int)uVar33);
    *puVar42 = uVar46;
    puVar42[3] = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(uVar62,
                                                  CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))));
    puVar42[2] = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(uVar54,
                                                  CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))));
    if (piVar38[1] == 0) {
      uVar46 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x350);
      uVar33 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x358) & 0xffffffff;
    }
    else {
      uVar46 = DAT_0388a140;
      uVar33 = DAT_0388a148;
    }
    puVar42[5] = uVar33;
    puVar42[4] = uVar46;
    if ((*piVar38 - 1U < 2) &&
       (lVar32 = *(long *)(param_2 + 0x10), *(char *)(*(long *)(lVar32 + 0xa0) + 0x8b2) != '\0')) {
      if (*(int *)(param_3 + 0xe) < 1) {
        uVar46 = puVar42[2];
        uVar70 = puVar42[3];
      }
      else {
        uVar46 = *(undefined8 *)puVar42[6];
        fVar44 = 1.0 / *(float *)(lVar32 + 0x4c);
        uVar46 = CONCAT44(((float)((ulong)*puVar42 >> 0x20) - (float)((ulong)uVar46 >> 0x20)) *
                          fVar44 + 0.0,((float)*puVar42 - (float)uVar46) * fVar44 + 0.0);
        uVar70 = CONCAT44(fVar44 * 0.0 + 0.0,
                          ((float)puVar42[1] - (float)((undefined8 *)puVar42[6])[1]) * fVar44 + 0.0)
        ;
      }
      fVar44 = (float)uVar46 * (float)uVar46;
      fVar67 = (float)((ulong)uVar46 >> 0x20);
      fVar67 = fVar67 * fVar67;
      uVar51 = (undefined1)((uint)fVar67 >> 8);
      uVar52 = (undefined1)((uint)fVar67 >> 0x10);
      uVar53 = (undefined1)((uint)fVar67 >> 0x18);
      fVar48 = (float)uVar70 * (float)uVar70;
      uVar54 = (undefined1)((uint)fVar48 >> 8);
      uVar55 = (undefined1)((uint)fVar48 >> 0x10);
      uVar56 = (undefined1)((uint)fVar48 >> 0x18);
      fVar49 = (float)((ulong)uVar70 >> 0x20);
      fVar49 = fVar49 * fVar49;
      uVar57 = (undefined1)((uint)fVar49 >> 8);
      uVar58 = (undefined1)((uint)fVar49 >> 0x10);
      uVar59 = (undefined1)((uint)fVar49 >> 0x18);
      auVar92[4] = SUB41(fVar67,0);
      auVar92._0_4_ = fVar44;
      auVar92[5] = uVar51;
      auVar92[6] = uVar52;
      auVar92[7] = uVar53;
      auVar92[8] = SUB41(fVar48,0);
      auVar92[9] = uVar54;
      auVar92[10] = uVar55;
      auVar92[0xb] = uVar56;
      auVar92[0xc] = SUB41(fVar49,0);
      auVar92[0xd] = uVar57;
      auVar92[0xe] = uVar58;
      auVar92[0xf] = uVar59;
      auVar13[4] = SUB41(fVar67,0);
      auVar13._0_4_ = fVar44;
      auVar13[5] = uVar51;
      auVar13[6] = uVar52;
      auVar13[7] = uVar53;
      auVar13[8] = SUB41(fVar48,0);
      auVar13[9] = uVar54;
      auVar13[10] = uVar55;
      auVar13[0xb] = uVar56;
      auVar13[0xc] = SUB41(fVar49,0);
      auVar13[0xd] = uVar57;
      auVar13[0xe] = uVar58;
      auVar13[0xf] = uVar59;
      auVar76 = NEON_ext(auVar92,auVar13,8,1);
      fVar44 = auVar76._0_4_ + fVar44;
      fVar67 = auVar76._4_4_ + fVar67;
      fVar48 = fVar44 + fVar67;
      fVar44 = fVar44 + fVar67;
      uVar51 = SUB41(fVar48,0);
      uVar52 = (undefined1)((uint)fVar48 >> 8);
      uVar53 = (undefined1)((uint)fVar48 >> 0x10);
      uVar54 = (undefined1)((uint)fVar48 >> 0x18);
      uVar55 = SUB41(fVar44,0);
      uVar56 = (undefined1)((uint)fVar44 >> 8);
      uVar57 = (undefined1)((uint)fVar44 >> 0x10);
      uVar58 = (undefined1)((uint)fVar44 >> 0x18);
      if (fVar48 < 1e-05) {
        uVar70 = *(undefined8 *)(lVar32 + 0x368);
        uVar46 = *(undefined8 *)(lVar32 + 0x360);
        fVar44 = (float)uVar46 * (float)uVar46;
        fVar67 = (float)((ulong)uVar46 >> 0x20);
        fVar67 = fVar67 * fVar67;
        uVar51 = (undefined1)((uint)fVar67 >> 8);
        uVar52 = (undefined1)((uint)fVar67 >> 0x10);
        uVar53 = (undefined1)((uint)fVar67 >> 0x18);
        fVar48 = (float)uVar70 * (float)uVar70;
        uVar54 = (undefined1)((uint)fVar48 >> 8);
        uVar55 = (undefined1)((uint)fVar48 >> 0x10);
        uVar56 = (undefined1)((uint)fVar48 >> 0x18);
        fVar49 = (float)((ulong)uVar70 >> 0x20);
        fVar49 = fVar49 * fVar49;
        uVar57 = (undefined1)((uint)fVar49 >> 8);
        uVar58 = (undefined1)((uint)fVar49 >> 0x10);
        uVar59 = (undefined1)((uint)fVar49 >> 0x18);
        auVar14[4] = SUB41(fVar67,0);
        auVar14._0_4_ = fVar44;
        auVar14[5] = uVar51;
        auVar14[6] = uVar52;
        auVar14[7] = uVar53;
        auVar14[8] = SUB41(fVar48,0);
        auVar14[9] = uVar54;
        auVar14[10] = uVar55;
        auVar14[0xb] = uVar56;
        auVar14[0xc] = SUB41(fVar49,0);
        auVar14[0xd] = uVar57;
        auVar14[0xe] = uVar58;
        auVar14[0xf] = uVar59;
        auVar15[4] = SUB41(fVar67,0);
        auVar15._0_4_ = fVar44;
        auVar15[5] = uVar51;
        auVar15[6] = uVar52;
        auVar15[7] = uVar53;
        auVar15[8] = SUB41(fVar48,0);
        auVar15[9] = uVar54;
        auVar15[10] = uVar55;
        auVar15[0xb] = uVar56;
        auVar15[0xc] = SUB41(fVar49,0);
        auVar15[0xd] = uVar57;
        auVar15[0xe] = uVar58;
        auVar15[0xf] = uVar59;
        auVar76 = NEON_ext(auVar14,auVar15,8,1);
        fVar44 = auVar76._0_4_ + fVar44;
        fVar67 = auVar76._4_4_ + fVar67;
        fVar48 = fVar44 + fVar67;
        fVar44 = fVar44 + fVar67;
        uVar51 = SUB41(fVar48,0);
        uVar52 = (undefined1)((uint)fVar48 >> 8);
        uVar53 = (undefined1)((uint)fVar48 >> 0x10);
        uVar54 = (undefined1)((uint)fVar48 >> 0x18);
        uVar55 = SUB41(fVar44,0);
        uVar56 = (undefined1)((uint)fVar44 >> 8);
        uVar57 = (undefined1)((uint)fVar44 >> 0x10);
        uVar58 = (undefined1)((uint)fVar44 >> 0x18);
      }
      uVar7 = CONCAT11(uVar52,uVar51);
      uVar29 = CONCAT11(uVar56,uVar55);
      auVar16[1] = uVar52;
      auVar16[0] = uVar51;
      auVar16[2] = uVar53;
      auVar16[3] = uVar54;
      auVar16[4] = uVar55;
      auVar16[5] = uVar56;
      auVar16[6] = uVar57;
      auVar16[7] = uVar58;
      auVar16[8] = uVar51;
      auVar16[9] = uVar52;
      auVar16[10] = uVar53;
      auVar16[0xb] = uVar54;
      auVar16[0xc] = uVar55;
      auVar16[0xd] = uVar56;
      auVar16[0xe] = uVar57;
      auVar16[0xf] = uVar58;
      auVar76 = NEON_frsqrte(auVar16,4);
      auVar86._0_4_ =
           auVar76._0_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
      auVar86._4_4_ =
           auVar76._4_4_ * (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
      auVar86._8_4_ = auVar76._8_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7));
      auVar86._12_4_ = auVar76._12_4_ * (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar29));
      auVar92 = NEON_frsqrts(auVar76,auVar86,4);
      auVar74._0_4_ = auVar76._0_4_ * auVar92._0_4_;
      auVar74._4_4_ = auVar76._4_4_ * auVar92._4_4_;
      auVar74._8_4_ = auVar76._8_4_ * auVar92._8_4_;
      auVar74._12_4_ = auVar76._12_4_ * auVar92._12_4_;
      auVar87._0_4_ =
           (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * auVar74._0_4_;
      auVar87._4_4_ =
           (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) * auVar74._4_4_;
      auVar87._8_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar74._8_4_;
      auVar87._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar29)) * auVar74._12_4_;
      iVar69 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) == 0.0);
      iVar81 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) == 0.0);
      iVar82 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) == 0.0);
      iVar83 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,uVar29)) == 0.0);
      auVar76 = NEON_frsqrts(auVar74,auVar87,4);
      fVar44 = (float)uVar46 * auVar74._0_4_ * auVar76._0_4_;
      fVar67 = (float)((ulong)uVar46 >> 0x20) * auVar74._4_4_ * auVar76._4_4_;
      fVar48 = (float)uVar70 * auVar74._8_4_ * auVar76._8_4_;
      fVar49 = (float)((ulong)uVar70 >> 0x20) * auVar74._12_4_ * auVar76._12_4_;
      local_90 = CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18),
                          CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10),
                                   CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar81 >> 8),
                                            CONCAT14(SUB41(fVar67,0) & ~(byte)iVar81,
                                                     CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                              ~(byte)((uint)iVar69 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar44 >> 0x10)
                                                                       & ~(byte)((uint)iVar69 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar44
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar69
                                                                                       >> 8),
                                                                                SUB41(fVar44,0) &
                                                                                ~(byte)iVar69)))))))
      ;
      uStack_88 = CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                           CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                    CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar83 >> 8),
                                             CONCAT14(SUB41(fVar49,0) & ~(byte)iVar83,
                                                      CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                                               ~(byte)((uint)iVar82 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar48 >> 0x10)
                                                                        & ~(byte)((uint)iVar82 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar48
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar82 >> 8),SUB41(fVar48,0) & ~(byte)iVar82))))))
                          );
      lVar34 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1f8) + lVar34);
      uStack_58 = puVar39[1];
      local_60 = *puVar39;
      puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1f0) + lVar34);
      uStack_68 = puVar39[1];
      local_70 = *puVar39;
      FUN_00274e60(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(lVar32 + 0x98),auStack_a0,
                   *(undefined8 *)(lVar32 + 0x238),&local_60,&local_70);
      puVar39 = puVar42 + 4;
      uVar31 = FUN_00271b20(local_98,puVar39,puVar39,&local_90);
      fVar43 = (float)puVar42[4];
      fVar44 = fVar43 * fVar43;
      fVar68 = (float)((ulong)puVar42[4] >> 0x20);
      fVar67 = fVar68 * fVar68;
      uVar51 = (undefined1)((uint)fVar67 >> 8);
      uVar52 = (undefined1)((uint)fVar67 >> 0x10);
      uVar53 = (undefined1)((uint)fVar67 >> 0x18);
      fVar80 = (float)puVar42[5];
      fVar48 = fVar80 * fVar80;
      uVar54 = (undefined1)((uint)fVar48 >> 8);
      uVar55 = (undefined1)((uint)fVar48 >> 0x10);
      uVar56 = (undefined1)((uint)fVar48 >> 0x18);
      fVar50 = (float)((ulong)puVar42[5] >> 0x20);
      fVar49 = fVar50 * fVar50;
      uVar57 = (undefined1)((uint)fVar49 >> 8);
      uVar58 = (undefined1)((uint)fVar49 >> 0x10);
      uVar59 = (undefined1)((uint)fVar49 >> 0x18);
      auVar17[4] = SUB41(fVar67,0);
      auVar17._0_4_ = fVar44;
      auVar17[5] = uVar51;
      auVar17[6] = uVar52;
      auVar17[7] = uVar53;
      auVar17[8] = SUB41(fVar48,0);
      auVar17[9] = uVar54;
      auVar17[10] = uVar55;
      auVar17[0xb] = uVar56;
      auVar17[0xc] = SUB41(fVar49,0);
      auVar17[0xd] = uVar57;
      auVar17[0xe] = uVar58;
      auVar17[0xf] = uVar59;
      auVar18[4] = SUB41(fVar67,0);
      auVar18._0_4_ = fVar44;
      auVar18[5] = uVar51;
      auVar18[6] = uVar52;
      auVar18[7] = uVar53;
      auVar18[8] = SUB41(fVar48,0);
      auVar18[9] = uVar54;
      auVar18[10] = uVar55;
      auVar18[0xb] = uVar56;
      auVar18[0xc] = SUB41(fVar49,0);
      auVar18[0xd] = uVar57;
      auVar18[0xe] = uVar58;
      auVar18[0xf] = uVar59;
      auVar76 = NEON_ext(auVar17,auVar18,8,1);
      fVar44 = auVar76._0_4_ + fVar44;
      fVar67 = auVar76._4_4_ + fVar67;
      fVar48 = fVar44 + fVar67;
      fVar44 = fVar44 + fVar67;
      uVar51 = SUB41(fVar44,0);
      uVar52 = (undefined1)((uint)fVar44 >> 8);
      uVar53 = (undefined1)((uint)fVar44 >> 0x10);
      uVar54 = (undefined1)((uint)fVar44 >> 0x18);
      auVar19[4] = uVar51;
      auVar19._0_4_ = fVar48;
      auVar19[5] = uVar52;
      auVar19[6] = uVar53;
      auVar19[7] = uVar54;
      auVar19[8] = SUB41(fVar48,0);
      auVar19[9] = (char)((uint)fVar48 >> 8);
      auVar19[10] = (char)((uint)fVar48 >> 0x10);
      auVar19[0xb] = (char)((uint)fVar48 >> 0x18);
      auVar19[0xc] = uVar51;
      auVar19[0xd] = uVar52;
      auVar19[0xe] = uVar53;
      auVar19[0xf] = uVar54;
      auVar76 = NEON_frsqrte(auVar19,4);
      auVar88._0_4_ = auVar76._0_4_ * fVar48;
      auVar88._4_4_ = auVar76._4_4_ * fVar44;
      auVar88._8_4_ = auVar76._8_4_ * fVar48;
      uVar7 = (undefined2)(CONCAT15(uVar52,CONCAT14(uVar51,fVar48)) >> 0x20);
      auVar88._12_4_ = auVar76._12_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7));
      auVar92 = NEON_frsqrts(auVar76,auVar88,4);
      auVar75._0_4_ = auVar76._0_4_ * auVar92._0_4_;
      auVar75._4_4_ = auVar76._4_4_ * auVar92._4_4_;
      auVar75._8_4_ = auVar76._8_4_ * auVar92._8_4_;
      auVar75._12_4_ = auVar76._12_4_ * auVar92._12_4_;
      auVar89._0_4_ = fVar48 * auVar75._0_4_;
      auVar89._4_4_ = fVar44 * auVar75._4_4_;
      auVar89._8_4_ = fVar48 * auVar75._8_4_;
      auVar89._12_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar75._12_4_;
      iVar69 = -(uint)(fVar48 == 0.0);
      iVar81 = -(uint)(fVar44 == 0.0);
      iVar82 = -(uint)(fVar48 == 0.0);
      iVar83 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) == 0.0);
      auVar76 = NEON_frsqrts(auVar75,auVar89,4);
      fVar43 = fVar43 * auVar75._0_4_ * auVar76._0_4_;
      fVar68 = fVar68 * auVar75._4_4_ * auVar76._4_4_;
      fVar80 = fVar80 * auVar75._8_4_ * auVar76._8_4_;
      fVar50 = fVar50 * auVar75._12_4_ * auVar76._12_4_;
      puVar42[5] = CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                            CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                     CONCAT15((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar83 >> 8)
                                              ,CONCAT14(SUB41(fVar50,0) & ~(byte)iVar83,
                                                        CONCAT13((byte)((uint)fVar80 >> 0x18) &
                                                                 ~(byte)((uint)iVar82 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar80 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar82 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar80 >> 8) & ~(byte)((uint)iVar82 >> 8),
                                                  SUB41(fVar80,0) & ~(byte)iVar82)))))));
      puVar42[4] = CONCAT17((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18),
                            CONCAT16((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10),
                                     CONCAT15((byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar81 >> 8)
                                              ,CONCAT14(SUB41(fVar68,0) & ~(byte)iVar81,
                                                        CONCAT13((byte)((uint)fVar43 >> 0x18) &
                                                                 ~(byte)((uint)iVar69 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar43 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar69 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar43 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                                  SUB41(fVar43,0) & ~(byte)iVar69)))))));
      if (*(int *)(param_3 + 0xe) == 1) {
        lVar32 = puVar42[6];
        *(undefined8 *)(lVar32 + 0x28) = puVar42[5];
        *(undefined8 *)(lVar32 + 0x20) = *puVar39;
      }
    }
    iVar69 = *(int *)(param_3 + 0xe);
    if ((float)iVar69 < (float)piVar38[5]) {
      iVar69 = iVar69 + 1;
      *(int *)(param_3 + 0xe) = iVar69;
    }
  }
  else {
    lVar32 = *(long *)(param_2 + 0x10);
    lVar34 = (long)*(int *)(param_2 + 0x20) * 0x10;
    puVar39 = (undefined8 *)(*(long *)(lVar32 + 0x1f0) + lVar34);
    uStack_58 = puVar39[1];
    local_60 = *puVar39;
    puVar39 = (undefined8 *)puVar42[6];
    puVar42 = (undefined8 *)(*(long *)(lVar32 + 0x1e8) + lVar34);
    uStack_68 = puVar42[1];
    local_70 = *puVar42;
    uVar31 = FUN_00273964(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                          *(undefined8 *)(lVar32 + 0x98),&local_80,*(undefined8 *)(lVar32 + 0x238),
                          &local_70,&local_60);
    lVar32 = *(long *)(param_2 + 0x10);
    uVar70 = *(undefined8 *)(*(long *)(lVar32 + 0x78) + 0x148);
    uVar46 = *(undefined8 *)(*(long *)(lVar32 + 0x78) + 0x140);
    fVar44 = (float)local_80 * (float)uVar46;
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * (float)((ulong)uVar46 >> 0x20),fVar44);
    uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uVar70 >> 0x20),
                         (float)uStack_78 * (float)uVar70);
    puVar42 = (undefined8 *)(*(long *)(lVar32 + 0x1d0) + (long)*(int *)(param_2 + 0x20) * 0x10);
    uVar70 = puVar42[1];
    uVar46 = *puVar42;
    if (piVar38[1] == 0) {
      fVar67 = (float)uVar70;
      lVar34 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar36 = (undefined4 *)(*(long *)(lVar32 + 0x210) + lVar34);
      puVar35 = (undefined4 *)(*(long *)(lVar32 + 0x218) + lVar34);
      puVar1 = (undefined4 *)(*(long *)(lVar32 + 0x220) + lVar34);
      cVar6 = *(char *)(*(long *)(lVar32 + 0xa0) + 0x753);
      if (cVar6 == '\x02') {
        auVar72._0_4_ = *puVar36;
        auVar72._4_4_ = *puVar35;
        auVar95._4_12_ = SUB1612(ZEXT816(0),4);
        auVar95._0_4_ = *puVar1;
        auVar84._4_4_ = puVar35[1];
        auVar84._0_4_ = puVar36[1];
        auVar72._8_8_ = auVar95._0_8_;
        auVar71 = auVar72._0_12_;
        auVar84._8_4_ = puVar1[1];
        auVar94._4_4_ = puVar35[2];
        auVar94._0_4_ = puVar36[2];
        auVar94._8_4_ = puVar1[2];
        uVar70 = *(undefined8 *)(lVar32 + 0x370);
        fVar48 = (float)*(undefined8 *)(lVar32 + 0x378);
      }
      else if (cVar6 == '\0') {
        auVar71 = SUB1612(*(undefined1 (*) [16])(lVar32 + 0x340),0);
        auVar84 = SUB1612(*(undefined1 (*) [16])(lVar32 + 0x350),0);
        auVar94 = SUB1612(*(undefined1 (*) [16])(lVar32 + 0x360),0);
        fVar48 = (float)*(undefined8 *)(lVar32 + 0x378);
        uVar70 = *(undefined8 *)(lVar32 + 0x370);
      }
      else {
        auVar73._0_4_ = *puVar36;
        auVar85._0_4_ = puVar36[1];
        auVar73._4_4_ = *puVar35;
        auVar96._4_12_ = SUB1612(ZEXT816(0),4);
        auVar96._0_4_ = *puVar1;
        auVar73._8_8_ = auVar96._0_8_;
        auVar71 = auVar73._0_12_;
        auVar85._4_4_ = puVar35[1];
        auVar97._4_12_ = SUB1612(ZEXT816(0),4);
        auVar97._0_4_ = puVar1[1];
        auVar85._8_8_ = auVar97._0_8_;
        auVar84 = auVar85._0_12_;
        uVar70 = CONCAT44(puVar35[3],puVar36[3]);
        fVar48 = (float)puVar1[3];
        auVar94._4_4_ = puVar35[2];
        auVar94._0_4_ = puVar36[2];
        auVar94._8_4_ = puVar1[2];
      }
      fVar49 = (float)uVar46;
      fVar43 = (float)((ulong)uVar46 >> 0x20);
      uVar46 = CONCAT44((float)((ulong)uVar70 >> 0x20) +
                        auVar71._4_4_ * fVar49 + auVar84._4_4_ * fVar43 + auVar94._4_4_ * fVar67,
                        (float)uVar70 +
                        auVar71._0_4_ * fVar49 + auVar84._0_4_ * fVar43 + auVar94._0_4_ * fVar67);
      uVar70 = CONCAT44(*(undefined4 *)((long)puVar39 + 0xc),
                        fVar48 + auVar71._8_4_ * fVar49 + auVar84._8_4_ * fVar43 +
                                 auVar94._8_4_ * fVar67);
    }
    puVar39[1] = uVar70;
    *puVar39 = uVar46;
    puVar39[1] = CONCAT44(fVar44,(int)uVar70);
    *puVar39 = uVar46;
    uVar46 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x350);
    puVar39[5] = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x358);
    puVar39[4] = uVar46;
    iVar69 = *(int *)(param_3 + 0xe);
  }
  if (iVar69 < 2) goto LAB_0027ca24;
  puVar42 = *(undefined8 **)(param_3[0xb] + 0x30);
  puVar39 = (undefined8 *)puVar42[6];
  fVar67 = (float)*puVar42 - (float)*puVar39;
  fVar48 = (float)((ulong)*puVar42 >> 0x20) - (float)((ulong)*puVar39 >> 0x20);
  uVar46 = CONCAT44(fVar48,fVar67);
  fVar49 = (float)puVar42[1] - (float)puVar39[1];
  uVar33 = (ulong)(uint)fVar49;
  fVar44 = (float)piVar38[10];
  if (fVar44 <= 0.0) {
    puVar42[3] = uVar33;
    puVar42[2] = uVar46;
    iVar69 = *(int *)(param_3 + 0xe);
  }
  else {
    if (2.0 <= *(float *)((long)param_3 + 0x7c)) {
      auVar77._0_4_ = fVar67 * fVar67;
      auVar77._4_4_ = fVar48 * fVar48;
      auVar77._8_4_ = fVar49 * fVar49;
      auVar77._12_4_ = 0;
      auVar76 = NEON_ext(auVar77,auVar77,8,1);
      fVar68 = auVar76._0_4_ + auVar77._0_4_;
      fVar80 = auVar76._4_4_ + auVar77._4_4_;
      fVar43 = fVar68 + fVar80;
      fVar68 = fVar68 + fVar80;
      if (0.0 < fVar43) {
        auVar78._8_8_ = CONCAT44(fVar68,fVar43);
        auVar78._0_8_ = CONCAT44(fVar68,fVar43);
        auVar76 = NEON_frsqrte(auVar78,4);
        auVar98._0_4_ = fVar43 * auVar76._0_4_;
        auVar98._4_4_ = fVar68 * auVar76._4_4_;
        auVar98._8_4_ = fVar43 * auVar76._8_4_;
        auVar98._12_4_ = fVar68 * auVar76._12_4_;
        auVar92 = NEON_frsqrts(auVar76,auVar98,4);
        auVar90._0_4_ = auVar76._0_4_ * auVar92._0_4_;
        auVar90._4_4_ = auVar76._4_4_ * auVar92._4_4_;
        auVar90._8_4_ = auVar76._8_4_ * auVar92._8_4_;
        auVar90._12_4_ = auVar76._12_4_ * auVar92._12_4_;
        auVar99._0_4_ = fVar43 * auVar90._0_4_;
        auVar99._4_4_ = fVar68 * auVar90._4_4_;
        auVar99._8_4_ = fVar43 * auVar90._8_4_;
        auVar99._12_4_ = fVar68 * auVar90._12_4_;
        iVar69 = -(uint)(fVar43 == 0.0);
        iVar81 = -(uint)(fVar68 == 0.0);
        iVar82 = -(uint)(fVar43 == 0.0);
        iVar83 = -(uint)(fVar68 == 0.0);
        auVar76 = NEON_frsqrts(auVar90,auVar99,4);
        fVar67 = fVar67 * auVar90._0_4_ * auVar76._0_4_;
        fVar48 = fVar48 * auVar90._4_4_ * auVar76._4_4_;
        fVar49 = fVar49 * auVar90._8_4_ * auVar76._8_4_;
        fVar43 = auVar90._12_4_ * auVar76._12_4_ * 0.0;
        uVar46 = CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18),
                          CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10),
                                   CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar81 >> 8),
                                            CONCAT14(SUB41(fVar48,0) & ~(byte)iVar81,
                                                     CONCAT13((byte)((uint)fVar67 >> 0x18) &
                                                              ~(byte)((uint)iVar69 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar67 >> 0x10)
                                                                       & ~(byte)((uint)iVar69 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar67
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar69
                                                                                       >> 8),
                                                                                SUB41(fVar67,0) &
                                                                                ~(byte)iVar69)))))))
        ;
        uVar33 = CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                          CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                   CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar83 >> 8),
                                            CONCAT14(SUB41(fVar43,0) & ~(byte)iVar83,
                                                     CONCAT13((byte)((uint)fVar49 >> 0x18) &
                                                              ~(byte)((uint)iVar82 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar49 >> 0x10)
                                                                       & ~(byte)((uint)iVar82 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar49
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar82
                                                                                       >> 8),
                                                                                SUB41(fVar49,0) &
                                                                                ~(byte)iVar82)))))))
        ;
      }
      fVar67 = *(float *)(param_3 + 6) + ((float)uVar46 - *(float *)(param_3 + 6)) * fVar44;
      fVar48 = *(float *)((long)param_3 + 0x34) +
               ((float)((ulong)uVar46 >> 0x20) - *(float *)((long)param_3 + 0x34)) * fVar44;
      uVar46 = CONCAT44(fVar48,fVar67);
      fVar49 = *(float *)(param_3 + 7) + ((float)uVar33 - *(float *)(param_3 + 7)) * fVar44;
      fVar44 = *(float *)((long)param_3 + 0x3c) +
               ((float)(uVar33 >> 0x20) - *(float *)((long)param_3 + 0x3c)) * fVar44;
      uVar33 = CONCAT44(fVar44,fVar49);
      fVar67 = fVar67 * fVar67;
      fVar48 = fVar48 * fVar48;
      uVar51 = (undefined1)((uint)fVar48 >> 8);
      uVar52 = (undefined1)((uint)fVar48 >> 0x10);
      uVar53 = (undefined1)((uint)fVar48 >> 0x18);
      fVar49 = fVar49 * fVar49;
      uVar54 = (undefined1)((uint)fVar49 >> 8);
      uVar55 = (undefined1)((uint)fVar49 >> 0x10);
      uVar56 = (undefined1)((uint)fVar49 >> 0x18);
      fVar44 = fVar44 * fVar44;
      uVar57 = (undefined1)((uint)fVar44 >> 8);
      uVar58 = (undefined1)((uint)fVar44 >> 0x10);
      uVar59 = (undefined1)((uint)fVar44 >> 0x18);
      auVar11[4] = SUB41(fVar48,0);
      auVar11._0_4_ = fVar67;
      auVar11[5] = uVar51;
      auVar11[6] = uVar52;
      auVar11[7] = uVar53;
      auVar11[8] = SUB41(fVar49,0);
      auVar11[9] = uVar54;
      auVar11[10] = uVar55;
      auVar11[0xb] = uVar56;
      auVar11[0xc] = SUB41(fVar44,0);
      auVar11[0xd] = uVar57;
      auVar11[0xe] = uVar58;
      auVar11[0xf] = uVar59;
      auVar12[4] = SUB41(fVar48,0);
      auVar12._0_4_ = fVar67;
      auVar12[5] = uVar51;
      auVar12[6] = uVar52;
      auVar12[7] = uVar53;
      auVar12[8] = SUB41(fVar49,0);
      auVar12[9] = uVar54;
      auVar12[10] = uVar55;
      auVar12[0xb] = uVar56;
      auVar12[0xc] = SUB41(fVar44,0);
      auVar12[0xd] = uVar57;
      auVar12[0xe] = uVar58;
      auVar12[0xf] = uVar59;
      auVar76 = NEON_ext(auVar11,auVar12,8,1);
      fVar67 = auVar76._0_4_ + fVar67;
      fVar48 = auVar76._4_4_ + fVar48;
      fVar44 = fVar67 + fVar48;
      fVar67 = fVar67 + fVar48;
      uVar51 = SUB41(fVar44,0);
      uVar52 = (undefined1)((uint)fVar44 >> 8);
      uVar53 = (undefined1)((uint)fVar44 >> 0x10);
      uVar54 = (undefined1)((uint)fVar44 >> 0x18);
      uVar55 = SUB41(fVar67,0);
      uVar56 = (undefined1)((uint)fVar67 >> 8);
      uVar57 = (undefined1)((uint)fVar67 >> 0x10);
      uVar58 = (undefined1)((uint)fVar67 >> 0x18);
      if (0.0 < fVar44) goto LAB_0027c858;
LAB_0027c888:
      param_3[7] = uVar33;
      param_3[6] = uVar46;
    }
    else {
      fVar67 = fVar67 * fVar67;
      fVar48 = fVar48 * fVar48;
      uVar51 = (undefined1)((uint)fVar48 >> 8);
      uVar52 = (undefined1)((uint)fVar48 >> 0x10);
      uVar53 = (undefined1)((uint)fVar48 >> 0x18);
      fVar49 = fVar49 * fVar49;
      uVar54 = (undefined1)((uint)fVar49 >> 8);
      uVar55 = (undefined1)((uint)fVar49 >> 0x10);
      uVar56 = (undefined1)((uint)fVar49 >> 0x18);
      param_3[7] = uVar33;
      param_3[6] = uVar46;
      auVar8[4] = SUB41(fVar48,0);
      auVar8._0_4_ = fVar67;
      auVar8[5] = uVar51;
      auVar8[6] = uVar52;
      auVar8[7] = uVar53;
      auVar8[8] = SUB41(fVar49,0);
      auVar8[9] = uVar54;
      auVar8[10] = uVar55;
      auVar8[0xb] = uVar56;
      auVar8._12_4_ = 0;
      auVar9[4] = SUB41(fVar48,0);
      auVar9._0_4_ = fVar67;
      auVar9[5] = uVar51;
      auVar9[6] = uVar52;
      auVar9[7] = uVar53;
      auVar9[8] = SUB41(fVar49,0);
      auVar9[9] = uVar54;
      auVar9[10] = uVar55;
      auVar9[0xb] = uVar56;
      auVar9._12_4_ = 0;
      auVar76 = NEON_ext(auVar8,auVar9,8,1);
      fVar67 = auVar76._0_4_ + fVar67;
      fVar48 = auVar76._4_4_ + fVar48;
      fVar44 = fVar67 + fVar48;
      fVar67 = fVar67 + fVar48;
      uVar51 = SUB41(fVar44,0);
      uVar52 = (undefined1)((uint)fVar44 >> 8);
      uVar53 = (undefined1)((uint)fVar44 >> 0x10);
      uVar54 = (undefined1)((uint)fVar44 >> 0x18);
      uVar55 = SUB41(fVar67,0);
      uVar56 = (undefined1)((uint)fVar67 >> 8);
      uVar57 = (undefined1)((uint)fVar67 >> 0x10);
      uVar58 = (undefined1)((uint)fVar67 >> 0x18);
      if (0.0 < fVar44) {
LAB_0027c858:
        uVar7 = CONCAT11(uVar52,uVar51);
        uVar29 = CONCAT11(uVar56,uVar55);
        auVar10[1] = uVar52;
        auVar10[0] = uVar51;
        auVar10[2] = uVar53;
        auVar10[3] = uVar54;
        auVar10[4] = uVar55;
        auVar10[5] = uVar56;
        auVar10[6] = uVar57;
        auVar10[7] = uVar58;
        auVar10[8] = uVar51;
        auVar10[9] = uVar52;
        auVar10[10] = uVar53;
        auVar10[0xb] = uVar54;
        auVar10[0xc] = uVar55;
        auVar10[0xd] = uVar56;
        auVar10[0xe] = uVar57;
        auVar10[0xf] = uVar58;
        auVar76 = NEON_frsqrte(auVar10,4);
        auVar91._0_4_ =
             (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * auVar76._0_4_;
        auVar91._4_4_ =
             (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) * auVar76._4_4_;
        auVar91._8_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar76._8_4_;
        auVar91._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar29)) * auVar76._12_4_;
        auVar92 = NEON_frsqrts(auVar76,auVar91,4);
        auVar79._0_4_ = auVar76._0_4_ * auVar92._0_4_;
        auVar79._4_4_ = auVar76._4_4_ * auVar92._4_4_;
        auVar79._8_4_ = auVar76._8_4_ * auVar92._8_4_;
        auVar79._12_4_ = auVar76._12_4_ * auVar92._12_4_;
        auVar93._0_4_ =
             (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * auVar79._0_4_;
        auVar93._4_4_ =
             (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) * auVar79._4_4_;
        auVar93._8_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) * auVar79._8_4_;
        auVar93._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar57,uVar29)) * auVar79._12_4_;
        iVar69 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) == 0.0);
        iVar81 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) == 0.0);
        iVar82 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar53,uVar7)) == 0.0);
        iVar83 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar57,uVar29)) == 0.0);
        auVar76 = NEON_frsqrts(auVar79,auVar93,4);
        fVar44 = (float)uVar46 * auVar79._0_4_ * auVar76._0_4_;
        fVar67 = (float)((ulong)uVar46 >> 0x20) * auVar79._4_4_ * auVar76._4_4_;
        fVar48 = (float)uVar33 * auVar79._8_4_ * auVar76._8_4_;
        fVar49 = (float)(uVar33 >> 0x20) * auVar79._12_4_ * auVar76._12_4_;
        uVar46 = CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18),
                          CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10),
                                   CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar81 >> 8),
                                            CONCAT14(SUB41(fVar67,0) & ~(byte)iVar81,
                                                     CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                              ~(byte)((uint)iVar69 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar44 >> 0x10)
                                                                       & ~(byte)((uint)iVar69 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar44
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar69
                                                                                       >> 8),
                                                                                SUB41(fVar44,0) &
                                                                                ~(byte)iVar69)))))))
        ;
        uVar33 = CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                          CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10),
                                   CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar83 >> 8),
                                            CONCAT14(SUB41(fVar49,0) & ~(byte)iVar83,
                                                     CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                                              ~(byte)((uint)iVar82 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar48 >> 0x10)
                                                                       & ~(byte)((uint)iVar82 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar48
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar82
                                                                                       >> 8),
                                                                                SUB41(fVar48,0) &
                                                                                ~(byte)iVar82)))))))
        ;
        goto LAB_0027c888;
      }
    }
    puVar42[3] = param_3[7];
    puVar42[2] = param_3[6];
    iVar69 = *(int *)(param_3 + 0xe);
  }
  if (iVar69 == 2) {
    puVar39[3] = puVar42[3];
    puVar39[2] = puVar42[2];
  }
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0x80;
  uVar54 = 0x3f;
  if (piVar38[3] == 1) {
    fVar44 = (float)piVar38[5];
    lVar32 = *(long *)(*(long *)(lVar40 + 0x238) + 0x10);
    cVar6 = *(char *)(lVar32 + 0x75c);
  }
  else {
    fVar44 = 1.0;
    if (piVar38[3] == 0) {
      fVar44 = (float)*(int *)(param_3 + 0xe);
    }
    lVar32 = *(long *)(*(long *)(lVar40 + 0x238) + 0x10);
    cVar6 = *(char *)(lVar32 + 0x75c);
  }
  if (cVar6 != '\0') {
    uVar20 = *(undefined4 *)(lVar40 + 0x74);
    uVar51 = (undefined1)uVar20;
    uVar52 = (undefined1)((uint)uVar20 >> 8);
    uVar53 = (undefined1)((uint)uVar20 >> 0x10);
    uVar54 = (undefined1)((uint)uVar20 >> 0x18);
  }
  if (*(char *)(lVar32 + 0x756) != '\0') {
    fVar67 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
             *(float *)(lVar40 + 0x70);
    uVar51 = SUB41(fVar67,0);
    uVar52 = (undefined1)((uint)fVar67 >> 8);
    uVar53 = (undefined1)((uint)fVar67 >> 0x10);
    uVar54 = (undefined1)((uint)fVar67 >> 0x18);
  }
  lVar32 = (long)*(int *)(lVar41 + 0x20) * (long)*(int *)((long)param_3 + 0x74);
  if ((float)piVar38[4] == 0.0) {
    uVar5 = *(uint *)(param_3 + 0xe);
    if ((int)uVar5 < 3) {
      *(undefined4 *)(param_3 + 0xf) = 0;
    }
    else {
      puVar35 = (undefined4 *)param_3[0xb];
      uVar33 = 0;
      puVar36 = (undefined4 *)(lVar30 + lVar32 * 0x50 + 0x50);
      do {
        puVar35 = *(undefined4 **)(puVar35 + 0xc);
        uVar20 = puVar35[8];
        uVar21 = puVar35[9];
        uVar22 = puVar35[10];
        uVar23 = *puVar35;
        uVar24 = puVar35[1];
        uVar25 = puVar35[2];
        fVar67 = (float)puVar35[3];
        uVar26 = puVar35[4];
        uVar27 = puVar35[5];
        uVar28 = puVar35[6];
        puVar36[-0x14] = uVar23;
        puVar36[-0x13] = uVar24;
        puVar36[-0x12] = uVar25;
        puVar36[-0x10] = uVar26;
        puVar36[-0xf] = uVar27;
        puVar36[-0x11] = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * fVar67;
        fVar48 = (float)(int)uVar33;
        uVar33 = uVar33 + 1;
        fVar49 = (1.0 / (fVar44 + -1.0)) * fVar48;
        puVar36[-0xe] = uVar28;
        puVar36[-0xc] = uVar20;
        puVar36[-0xb] = uVar21;
        puVar36[-0xd] = fVar49;
        puVar36[-10] = uVar22;
        puVar36[-9] = fVar48;
        *puVar36 = uVar23;
        puVar36[1] = uVar24;
        *(undefined8 *)(puVar36 + -8) = 0;
        *(undefined8 *)(puVar36 + -6) = 0;
        *(undefined8 *)(puVar36 + -4) = 0;
        *(undefined8 *)(puVar36 + -2) = 0;
        puVar36[2] = uVar25;
        puVar36[4] = uVar26;
        puVar36[5] = uVar27;
        puVar36[3] = -((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) * fVar67);
        puVar36[6] = uVar28;
        puVar36[7] = fVar49;
        puVar36[8] = uVar20;
        puVar36[9] = uVar21;
        puVar36[10] = uVar22;
        puVar36[0xb] = fVar48;
        *(undefined8 *)(puVar36 + 0x10) = 0;
        *(undefined8 *)(puVar36 + 0x12) = 0;
        *(undefined8 *)(puVar36 + 0xc) = 0;
        *(undefined8 *)(puVar36 + 0xe) = 0;
        puVar36 = puVar36 + 0x28;
      } while (uVar5 != uVar33);
      *(uint *)(param_3 + 0xf) = uVar5 << 1;
    }
  }
  else {
    FUN_0027baf8(uVar31,param_3,piVar38,lVar30 + lVar32 * 0x50);
  }
LAB_0027ca24:
  FUN_0028d5c4(*(long *)(param_2 + 0x10) + 0x7a8);
  return;
}


