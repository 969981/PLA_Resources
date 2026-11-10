/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f23d9c; name: FUN_02f23d9c
 */


void FUN_02f23d9c(long *param_1,undefined1 (*param_2) [12],uint param_3,uint param_4,long *param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [12];
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  long lVar23;
  float *pfVar24;
  float *pfVar25;
  undefined8 *puVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  undefined8 uVar41;
  float fVar43;
  float fVar45;
  undefined8 uVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 (*local_38) [12];
  
  local_38 = param_2;
  if ((param_3 & 3) == 0) {
    uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
    cVar2 = (char)param_1[4];
  }
  else {
    iVar4 = 4 - (param_3 & 3);
    uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
    if (*(uint *)((long)param_1 + 0x1c) != 0) {
      uVar27 = 0;
      uVar19 = 0;
      do {
        memset(*param_2 + uVar27 * 4 + (ulong)param_3 * 4,0,(ulong)(uint)(iVar4 * 4));
        uVar19 = uVar19 + 1;
        uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
        uVar27 = (ulong)((int)uVar27 + param_4);
      } while (uVar19 < uVar14);
    }
    param_3 = iVar4 + param_3;
    cVar2 = (char)param_1[4];
  }
  if (cVar2 == '\0') {
    puVar26 = (undefined8 *)*param_1;
    uVar16 = (uint)uVar14;
    if (3 < uVar16) {
      do {
        uStack_48 = puVar26[1];
        local_50 = *puVar26;
        uStack_58 = puVar26[3];
        local_60 = puVar26[2];
        uStack_68 = puVar26[5];
        local_70 = puVar26[4];
        uStack_78 = puVar26[7];
        local_80 = puVar26[6];
        FUN_02f24308(param_1,&local_38,param_3,param_4,&local_50,&local_60,&local_70,&local_80,
                     param_5);
        uVar1 = (int)uVar14 - 4;
        uVar14 = (ulong)uVar1;
        puVar26[1] = uStack_48;
        *puVar26 = local_50;
        puVar26[3] = uStack_58;
        puVar26[2] = local_60;
        puVar26[5] = uStack_68;
        puVar26[4] = local_70;
        puVar26[7] = uStack_78;
        puVar26[6] = local_80;
        puVar26 = puVar26 + 8;
      } while (3 < uVar1);
      uVar16 = uVar16 & 3;
      uVar14 = (ulong)uVar16;
    }
    if (1 < uVar16) {
      uVar16 = uVar16 - 2;
      fVar40 = (float)*puVar26;
      fVar36 = (float)((ulong)*puVar26 >> 0x20);
      fVar35 = (float)puVar26[2];
      uStack_58._0_4_ = (float)((ulong)puVar26[2] >> 0x20);
      fVar68 = (float)puVar26[4];
      uStack_68._0_4_ = (float)((ulong)puVar26[4] >> 0x20);
      fVar32 = *(float *)(puVar26 + 6);
      uStack_78._0_4_ = *(float *)((long)puVar26 + 0x34);
      if (param_3 == 0) {
        puVar17 = (undefined8 *)*param_5;
      }
      else {
        pfVar21 = (float *)(param_1[2] +
                           ((ulong)(uint)(*(int *)((long)param_1 + 0x1c) << 5) & 0x20) * 4);
        puVar13 = *local_38;
        fVar10 = *pfVar21;
        fVar11 = pfVar21[1];
        fVar12 = pfVar21[2];
        fVar31 = pfVar21[3];
        uVar34 = *(undefined8 *)(pfVar21 + 6);
        uVar33 = *(undefined8 *)(pfVar21 + 4);
        uVar38 = *(undefined8 *)(pfVar21 + 10);
        uVar37 = *(undefined8 *)(pfVar21 + 8);
        uVar44 = *(undefined8 *)(pfVar21 + 0xe);
        uVar41 = *(undefined8 *)(pfVar21 + 0xc);
        uVar57 = *(undefined8 *)(pfVar21 + 0x12);
        uVar54 = *(undefined8 *)(pfVar21 + 0x10);
        uVar63 = *(undefined8 *)(pfVar21 + 0x16);
        uVar60 = *(undefined8 *)(pfVar21 + 0x14);
        puVar17 = (undefined8 *)*param_5;
        pauVar15 = local_38;
        fVar30 = fVar40;
        fVar28 = fVar35;
        do {
          auVar9 = *(undefined1 (*) [16])(*pauVar15 + (ulong)param_4 * 4);
          fVar69 = auVar9._0_4_;
          local_38 = (undefined1 (*) [12])(pauVar15[1] + 4);
          fVar35 = (float)*(undefined8 *)(*pauVar15 + 8);
          fVar40 = (float)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20);
          fVar71 = (float)*(undefined8 *)*pauVar15;
          fVar72 = (float)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
          auVar66._12_4_ = fVar40;
          auVar66._0_12_ = *pauVar15;
          auVar66 = NEON_ext(auVar9,auVar66,8,1);
          auVar8._12_4_ = fVar40;
          auVar8._0_12_ = *pauVar15;
          auVar66 = NEON_ext(auVar8,auVar66,8,1);
          fVar59 = (float)uVar60;
          fVar61 = (float)((ulong)uVar60 >> 0x20);
          fVar62 = (float)uVar63;
          fVar64 = (float)((ulong)uVar63 >> 0x20);
          fVar53 = (float)uVar54;
          fVar55 = (float)((ulong)uVar54 >> 0x20);
          fVar56 = (float)uVar57;
          fVar58 = (float)((ulong)uVar57 >> 0x20);
          fVar46 = (float)uVar41;
          fVar48 = (float)((ulong)uVar41 >> 0x20);
          fVar50 = (float)uVar44;
          fVar51 = (float)((ulong)uVar44 >> 0x20);
          fVar39 = (float)uVar37;
          fVar42 = (float)((ulong)uVar37 >> 0x20);
          fVar43 = (float)uVar38;
          fVar45 = (float)((ulong)uVar38 >> 0x20);
          fVar70 = auVar9._4_4_;
          fVar29 = (float)uVar33;
          fVar47 = (float)((ulong)uVar33 >> 0x20);
          fVar49 = (float)uVar34;
          fVar52 = (float)((ulong)uVar34 >> 0x20);
          fVar65 = fVar32 * fVar59 + fVar53 * fVar68 + fVar46 * fVar28 + fVar39 * fVar30 +
                   fVar10 * fVar71 + fVar29 * fVar71;
          fVar68 = fVar32 * fVar61 + fVar55 * fVar68 + fVar48 * fVar28 + fVar42 * fVar30 +
                   fVar11 * fVar72 + fVar47 * fVar71;
          auVar67._0_8_ = CONCAT44(fVar68,fVar65);
          auVar67._8_4_ =
               (float)uStack_78 * fVar62 + fVar56 * (float)uStack_68 + fVar50 * (float)uStack_58 +
               fVar43 * fVar36 + fVar12 * fVar69 + fVar49 * fVar69;
          auVar67._12_4_ =
               (float)uStack_78 * fVar64 + fVar58 * (float)uStack_68 + fVar51 * (float)uStack_58 +
               fVar45 * fVar36 + fVar31 * fVar70 + fVar52 * fVar69;
          uStack_58._0_4_ = auVar9._8_4_;
          fVar36 = auVar9._12_4_;
          fVar32 = auVar66._0_4_ * fVar10 + fVar29 * fVar35 + fVar46 * fVar71 + fVar39 * fVar72 +
                   fVar59 * fVar65 + fVar53 * fVar68;
          fVar68 = auVar66._4_4_ * fVar11 + fVar47 * fVar35 + fVar48 * fVar71 + fVar42 * fVar72 +
                   fVar61 * fVar65 + fVar55 * fVar68;
          uStack_78._0_4_ =
               auVar66._8_4_ * fVar12 + fVar49 * (float)uStack_58 + fVar50 * fVar69 +
               fVar43 * fVar70 + fVar62 * auVar67._8_4_ + fVar56 * auVar67._12_4_;
          uStack_68._0_4_ =
               auVar66._12_4_ * fVar31 + fVar52 * (float)uStack_58 + fVar51 * fVar69 +
               fVar45 * fVar70 + fVar64 * auVar67._8_4_ + fVar58 * auVar67._12_4_;
          puVar17[1] = CONCAT44(fVar68,fVar32);
          *puVar17 = auVar67._0_8_;
          auVar9._4_4_ = fVar68;
          auVar9._0_4_ = fVar32;
          auVar9._8_4_ = (float)uStack_78;
          auVar9._12_4_ = (float)uStack_68;
          auVar66 = NEON_ext(auVar9,auVar67,8,1);
          auVar66 = NEON_ext(auVar67,auVar66,8,1);
          puVar17 = (undefined8 *)(*param_5 + (ulong)param_4 * 4);
          puVar17[1] = auVar66._8_8_;
          *puVar17 = auVar66._0_8_;
          puVar17 = (undefined8 *)(*param_5 + 0x10);
          *param_5 = (long)puVar17;
          pauVar15 = local_38;
          fVar30 = fVar40;
          fVar28 = fVar35;
        } while (local_38 < (undefined1 (*) [12])(puVar13 + (ulong)param_3 * 4));
      }
      auVar6._4_4_ = fVar40;
      auVar6._0_4_ = fVar40;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = fVar36;
      auVar7._4_4_ = fVar40;
      auVar7._0_4_ = fVar40;
      auVar7._8_4_ = fVar36;
      auVar7._12_4_ = fVar36;
      auVar66 = NEON_ext(auVar6,auVar7,8,1);
      lVar18 = (ulong)(param_4 * 2 - param_3) * 4;
      local_38 = (undefined1 (*) [12])(*local_38 + lVar18);
      *param_5 = (long)puVar17 + lVar18;
      *puVar26 = CONCAT44(auVar66._0_4_,fVar40);
      *(float *)(puVar26 + 2) = fVar35;
      *(float *)((long)puVar26 + 0x14) = (float)uStack_58;
      *(float *)(puVar26 + 4) = fVar68;
      *(float *)((long)puVar26 + 0x24) = (float)uStack_68;
      uVar14 = (ulong)uVar16;
      *(float *)(puVar26 + 6) = fVar32;
      *(float *)((long)puVar26 + 0x34) = (float)uStack_78;
      goto joined_r0x02f240d8;
    }
  }
  uVar16 = (uint)uVar14;
joined_r0x02f240d8:
  if (uVar16 != 0) {
    lVar18 = (ulong)(param_4 - param_3) * 4;
    do {
      uVar1 = *(uint *)((long)param_1 + 0x1c);
      uVar5 = uVar1 - (int)uVar14;
      uVar3 = uVar5 >> 2;
      uVar16 = uVar5 & 3;
      uVar19 = (ulong)uVar16;
      if (uVar1 - 1 == uVar5 && (uVar1 & 1) != 0) {
        pfVar21 = (float *)(*param_1 + (ulong)((uVar3 + (uVar1 != 1 && 1 < uVar16)) * 0x10) * 4);
        pfVar22 = pfVar21 + 1;
        pfVar24 = pfVar21 + 2;
        pfVar25 = pfVar21 + 3;
      }
      else {
        pfVar21 = (float *)(*param_1 + (ulong)(uVar3 << 4) * 4 + uVar19 * 4);
        pfVar22 = pfVar21 + 4;
        pfVar24 = pfVar21 + 8;
        pfVar25 = pfVar21 + 0xc;
      }
      fVar40 = *pfVar25;
      fVar36 = *pfVar24;
      fVar35 = *pfVar22;
      fVar32 = *pfVar21;
      if (param_3 == 0) {
        puVar26 = (undefined8 *)*param_5;
      }
      else {
        puVar26 = (undefined8 *)param_1[2];
        puVar13 = *local_38;
        uVar34 = puVar26[1];
        uVar33 = *puVar26;
        fVar68 = *(float *)(puVar26 + 2);
        fVar10 = *(float *)((long)puVar26 + 0x14);
        fVar11 = *(float *)(puVar26 + 3);
        fVar12 = *(float *)((long)puVar26 + 0x1c);
        uVar38 = puVar26[5];
        uVar37 = puVar26[4];
        uVar44 = puVar26[7];
        uVar41 = puVar26[6];
        uVar57 = puVar26[9];
        uVar54 = puVar26[8];
        uVar63 = puVar26[0xb];
        uVar60 = puVar26[10];
        auVar66 = *(undefined1 (*) [16])(puVar26 + 0xc);
        auVar8 = *(undefined1 (*) [16])(puVar26 + 0xe);
        puVar26 = (undefined8 *)*param_5;
        fVar31 = fVar32;
        pauVar15 = local_38;
        fVar30 = fVar35;
        do {
          local_38 = (undefined1 (*) [12])(pauVar15[1] + 4);
          fVar47 = fVar40 * auVar8._0_4_;
          fVar49 = fVar40 * auVar8._4_4_;
          fVar52 = fVar40 * auVar8._12_4_;
          fVar35 = (float)*(undefined8 *)(*pauVar15 + 8);
          fVar32 = (float)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20);
          fVar39 = (float)*(undefined8 *)*pauVar15;
          fVar42 = (float)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
          fVar28 = auVar66._0_4_ * fVar36;
          fVar29 = auVar66._4_4_ * fVar36;
          fVar40 = fVar40 * auVar8._8_4_ + auVar66._8_4_ * fVar36 + (float)uVar63 * fVar30 +
                   (float)uVar57 * fVar31 + (float)uVar34 * fVar35 + fVar11 * fVar35 +
                   (float)uVar38 * fVar42 + (float)uVar44 * fVar39;
          fVar36 = fVar52 + auVar66._12_4_ * fVar36 + (float)((ulong)uVar63 >> 0x20) * fVar30 +
                   (float)((ulong)uVar57 >> 0x20) * fVar31 + (float)((ulong)uVar34 >> 0x20) * fVar32
                   + fVar12 * fVar35 + (float)((ulong)uVar38 >> 0x20) * fVar42 +
                   (float)((ulong)uVar44 >> 0x20) * fVar39;
          puVar26[1] = CONCAT44(fVar36,fVar40);
          *puVar26 = CONCAT44(fVar49 + fVar29 + (float)((ulong)uVar60 >> 0x20) * fVar30 +
                              (float)((ulong)uVar54 >> 0x20) * fVar31 +
                              (float)((ulong)uVar33 >> 0x20) * fVar42 + fVar10 * fVar35 +
                              (float)((ulong)uVar37 >> 0x20) * fVar42 +
                              (float)((ulong)uVar41 >> 0x20) * fVar39,
                              fVar47 + fVar28 + (float)uVar60 * fVar30 + (float)uVar54 * fVar31 +
                              (float)uVar33 * fVar39 + fVar68 * fVar35 + (float)uVar37 * fVar42 +
                              (float)uVar41 * fVar39);
          puVar26 = (undefined8 *)(*param_5 + 0x10);
          *param_5 = (long)puVar26;
          fVar31 = fVar32;
          pauVar15 = local_38;
          fVar30 = fVar35;
        } while (local_38 < (undefined1 (*) [12])(puVar13 + (ulong)param_3 * 4));
      }
      *param_5 = (long)puVar26 + lVar18;
      uVar1 = *(uint *)((long)param_1 + 0x1c);
      if ((uVar1 - 1 == uVar5) && ((uVar1 & 1) != 0)) {
        uVar19 = (ulong)((uVar3 + (1 < uVar16 && uVar1 != 1)) * 0x10);
        lVar20 = uVar19 * 4;
        *(float *)(*param_1 + lVar20) = fVar32;
        *(float *)(*param_1 + lVar20 + 4) = fVar35;
        *(float *)(*param_1 + lVar20 + 8) = fVar36;
        lVar20 = *param_1 + 0xc;
      }
      else {
        lVar20 = (ulong)(uVar3 << 4) * 4;
        lVar23 = uVar19 * 4;
        *(float *)(*param_1 + lVar20 + lVar23) = fVar32;
        *(float *)(*param_1 + lVar20 + lVar23 + 0x10) = fVar35;
        *(float *)(*param_1 + lVar20 + lVar23 + 0x20) = fVar36;
        lVar20 = *param_1 + lVar20 + 0x30;
      }
      local_38 = (undefined1 (*) [12])(*local_38 + lVar18);
      uVar16 = (int)uVar14 - 1;
      uVar14 = (ulong)uVar16;
      *(float *)(lVar20 + uVar19 * 4) = fVar40;
    } while (uVar16 != 0);
  }
  return;
}


