/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e09c70; name: FUN_02e09c70
 */


void FUN_02e09c70(long *param_1,undefined1 (*param_2) [12],uint param_3,uint param_4,
                 undefined8 param_5)

{
  void *__s;
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 *puVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  undefined1 (*pauVar19) [12];
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  float *pfVar23;
  float *pfVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar47;
  undefined8 uVar46;
  float fVar48;
  float fVar50;
  undefined8 uVar49;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar55;
  undefined8 uVar54;
  float fVar56;
  float fVar58;
  undefined8 uVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar65;
  undefined8 uVar64;
  float fVar66;
  float fVar68;
  undefined8 uVar67;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 (*local_58) [12];
  
  local_58 = param_2;
  if ((param_3 & 3) == 0) {
    uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
    cVar2 = (char)param_1[4];
  }
  else {
    iVar4 = 4 - (param_3 & 3);
    uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
    if (*(uint *)((long)param_1 + 0x1c) != 0) {
      __s = *param_2 + (ulong)param_3 * 4;
      uVar16 = (ulong)(uint)(iVar4 * 4);
      memset(__s,0,uVar16);
      uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
      if (1 < *(uint *)((long)param_1 + 0x1c)) {
        memset((void *)((long)__s + (ulong)param_4 * 4),0,uVar16);
        uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
        if (2 < *(uint *)((long)param_1 + 0x1c)) {
          uVar15 = param_4 << 1;
          uVar25 = 2;
          do {
            memset((void *)((long)__s + (ulong)uVar15 * 4),0,uVar16);
            uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c);
            uVar25 = uVar25 + 1;
            uVar15 = uVar15 + param_4;
          } while (uVar25 < uVar14);
        }
      }
    }
    param_3 = iVar4 + param_3;
    cVar2 = (char)param_1[4];
  }
  if (cVar2 == '\0') {
    pfVar24 = (float *)*param_1;
    uVar15 = (uint)uVar14;
    if (3 < uVar15) {
      do {
        uStack_68 = *(undefined8 *)(pfVar24 + 2);
        local_70 = *(undefined8 *)pfVar24;
        uStack_78 = *(undefined8 *)(pfVar24 + 6);
        local_80 = *(undefined8 *)(pfVar24 + 4);
        uStack_88 = *(undefined8 *)(pfVar24 + 10);
        local_90 = *(undefined8 *)(pfVar24 + 8);
        uStack_98 = *(undefined8 *)(pfVar24 + 0xe);
        local_a0 = *(undefined8 *)(pfVar24 + 0xc);
        FUN_02e0a1b0(param_1,&local_58,param_3,param_4,&local_70,&local_80,&local_90,&local_a0,
                     param_5);
        uVar1 = (int)uVar14 - 4;
        uVar14 = (ulong)uVar1;
        *(undefined8 *)(pfVar24 + 2) = uStack_68;
        *(undefined8 *)pfVar24 = local_70;
        *(undefined8 *)(pfVar24 + 6) = uStack_78;
        *(undefined8 *)(pfVar24 + 4) = local_80;
        *(undefined8 *)(pfVar24 + 10) = uStack_88;
        *(undefined8 *)(pfVar24 + 8) = local_90;
        *(undefined8 *)(pfVar24 + 0xe) = uStack_98;
        *(undefined8 *)(pfVar24 + 0xc) = local_a0;
        pfVar24 = pfVar24 + 0x10;
      } while (3 < uVar1);
      uVar15 = uVar15 & 3;
      uVar14 = (ulong)uVar15;
    }
    if (1 < uVar15) {
      uVar15 = uVar15 - 2;
      fVar26 = (float)*(undefined8 *)pfVar24;
      uStack_68._0_4_ = (float)((ulong)*(undefined8 *)pfVar24 >> 0x20);
      local_80._0_4_ = (float)*(undefined8 *)(pfVar24 + 4);
      uStack_78._0_4_ = (float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20);
      local_90._0_4_ = (float)*(undefined8 *)(pfVar24 + 8);
      fVar36 = (float)((ulong)*(undefined8 *)(pfVar24 + 8) >> 0x20);
      local_a0._0_4_ = (float)*(undefined8 *)(pfVar24 + 0xc);
      uStack_98._0_4_ = (float)((ulong)*(undefined8 *)(pfVar24 + 0xc) >> 0x20);
      if (param_3 != 0) {
        puVar22 = (undefined8 *)
                  (param_1[2] + ((ulong)(uint)(*(int *)((long)param_1 + 0x1c) << 5) & 0x20) * 4);
        puVar11 = *local_58;
        uVar39 = puVar22[1];
        uVar37 = *puVar22;
        uVar43 = puVar22[3];
        uVar41 = puVar22[2];
        uVar40 = puVar22[5];
        uVar38 = puVar22[4];
        uVar44 = puVar22[7];
        uVar42 = puVar22[6];
        uVar49 = puVar22[9];
        uVar46 = puVar22[8];
        uVar52 = puVar22[0xb];
        uVar51 = puVar22[10];
        fVar27 = fVar26;
        fVar28 = (float)uStack_68;
        fVar29 = (float)local_80;
        fVar30 = (float)uStack_78;
        while( true ) {
          fVar63 = (float)uVar51;
          fVar65 = (float)((ulong)uVar51 >> 0x20);
          fVar66 = (float)uVar52;
          fVar68 = (float)((ulong)uVar52 >> 0x20);
          local_80._0_4_ = (float)*(undefined8 *)(*local_58 + 8);
          fVar26 = (float)((ulong)*(undefined8 *)(*local_58 + 8) >> 0x20);
          fVar72 = (float)*(undefined8 *)*local_58;
          fVar74 = (float)((ulong)*(undefined8 *)*local_58 >> 0x20);
          pauVar19 = (undefined1 (*) [12])(*local_58 + (ulong)param_4 * 4);
          uStack_78._0_4_ = (float)*(undefined8 *)(*pauVar19 + 8);
          uStack_68._0_4_ = (float)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
          fVar70 = (float)*(undefined8 *)*pauVar19;
          fVar71 = (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20);
          fVar59 = (float)uVar46;
          fVar60 = (float)((ulong)uVar46 >> 0x20);
          fVar61 = (float)uVar49;
          fVar62 = (float)((ulong)uVar49 >> 0x20);
          fVar53 = (float)uVar42;
          fVar55 = (float)((ulong)uVar42 >> 0x20);
          fVar56 = (float)uVar44;
          fVar58 = (float)((ulong)uVar44 >> 0x20);
          auVar8._12_4_ = (float)uStack_68;
          auVar8._0_12_ = *pauVar19;
          auVar9._12_4_ = fVar26;
          auVar9._0_12_ = *local_58;
          auVar77 = NEON_ext(auVar8,auVar9,8,1);
          auVar10._12_4_ = fVar26;
          auVar10._0_12_ = *local_58;
          auVar77 = NEON_ext(auVar10,auVar77,8,1);
          fVar45 = (float)uVar38;
          fVar47 = (float)((ulong)uVar38 >> 0x20);
          fVar48 = (float)uVar40;
          fVar50 = (float)((ulong)uVar40 >> 0x20);
          fVar31 = (float)uVar37;
          fVar32 = (float)((ulong)uVar37 >> 0x20);
          fVar33 = (float)uVar39;
          fVar34 = (float)((ulong)uVar39 >> 0x20);
          fVar35 = (float)uVar41;
          fVar73 = (float)((ulong)uVar41 >> 0x20);
          fVar75 = (float)uVar43;
          fVar76 = (float)((ulong)uVar43 >> 0x20);
          fVar69 = (float)local_a0 * fVar63 + fVar59 * (float)local_90 + fVar53 * fVar29 +
                   fVar45 * fVar27 + fVar31 * fVar72 + fVar35 * fVar72;
          fVar27 = (float)local_a0 * fVar65 + fVar60 * (float)local_90 + fVar55 * fVar29 +
                   fVar47 * fVar27 + fVar32 * fVar74 + fVar73 * fVar72;
          fVar29 = (float)uStack_98 * fVar66 + fVar61 * fVar36 + fVar56 * fVar30 + fVar48 * fVar28 +
                   fVar33 * fVar70 + fVar75 * fVar70;
          fVar28 = (float)uStack_98 * fVar68 + fVar62 * fVar36 + fVar58 * fVar30 + fVar50 * fVar28 +
                   fVar34 * fVar71 + fVar76 * fVar70;
          local_a0._0_4_ =
               auVar77._0_4_ * fVar31 + fVar35 * (float)local_80 + fVar53 * fVar72 + fVar45 * fVar74
               + fVar63 * fVar69 + fVar59 * fVar27;
          local_90._0_4_ =
               auVar77._4_4_ * fVar32 + fVar73 * (float)local_80 + fVar55 * fVar72 + fVar47 * fVar74
               + fVar65 * fVar69 + fVar60 * fVar27;
          uStack_98._0_4_ =
               auVar77._8_4_ * fVar33 + fVar75 * (float)uStack_78 + fVar56 * fVar70 +
               fVar48 * fVar71 + fVar66 * fVar29 + fVar61 * fVar28;
          fVar36 = auVar77._12_4_ * fVar34 + fVar76 * (float)uStack_78 + fVar58 * fVar70 +
                   fVar50 * fVar71 + fVar68 * fVar29 + fVar62 * fVar28;
          auVar77._4_4_ = (float)local_90;
          auVar77._0_4_ = (float)local_a0;
          auVar77._8_4_ = (float)uStack_98;
          auVar77._12_4_ = fVar36;
          auVar6._4_4_ = fVar27;
          auVar6._0_4_ = fVar69;
          auVar6._8_4_ = fVar29;
          auVar6._12_4_ = fVar28;
          auVar77 = NEON_ext(auVar77,auVar6,8,1);
          auVar7._4_4_ = fVar27;
          auVar7._0_4_ = fVar69;
          auVar7._8_4_ = fVar29;
          auVar7._12_4_ = fVar28;
          auVar77 = NEON_ext(auVar7,auVar77,8,1);
          *(ulong *)(*local_58 + 8) = CONCAT44((float)local_90,(float)local_a0);
          *(ulong *)*local_58 = CONCAT44(fVar27,fVar69);
          *(long *)((long)(*local_58 + (ulong)param_4 * 4) + 8) = auVar77._8_8_;
          *(long *)(*local_58 + (ulong)param_4 * 4) = auVar77._0_8_;
          local_58 = (undefined1 (*) [12])(local_58[1] + 4);
          if ((undefined1 (*) [12])(puVar11 + (ulong)param_3 * 4) <= local_58) break;
          fVar27 = fVar26;
          fVar28 = (float)uStack_68;
          fVar29 = (float)local_80;
          fVar30 = (float)uStack_78;
        }
      }
      local_58 = (undefined1 (*) [12])(*local_58 + (ulong)(param_4 * 2 - param_3) * 4);
      *pfVar24 = fVar26;
      pfVar24[4] = (float)local_80;
      pfVar24[8] = (float)local_90;
      pfVar24[0xc] = (float)local_a0;
      pfVar24[1] = (float)uStack_68;
      pfVar24[5] = (float)uStack_78;
      pfVar24[9] = fVar36;
      uVar14 = (ulong)uVar15;
      pfVar24[0xd] = (float)uStack_98;
      goto joined_r0x02e09fb8;
    }
  }
  uVar15 = (uint)uVar14;
joined_r0x02e09fb8:
  if (uVar15 != 0) {
    do {
      uVar18 = *(uint *)((long)param_1 + 0x1c);
      uVar5 = uVar18 - (int)uVar14;
      uVar21 = uVar18 - 1;
      uVar15 = uVar18 & 1;
      uVar3 = uVar5 >> 2;
      uVar1 = uVar5 & 3;
      uVar16 = (ulong)uVar1;
      if (uVar21 == uVar5 && uVar15 != 0) {
        pfVar24 = (float *)(*param_1 + (ulong)((uVar3 + (uVar18 != 1 && 1 < uVar1)) * 0x10) * 4);
        pfVar23 = pfVar24 + 1;
        pfVar12 = pfVar24 + 2;
        pfVar13 = pfVar24 + 3;
      }
      else {
        pfVar24 = (float *)(*param_1 + (ulong)(uVar3 << 4) * 4 + uVar16 * 4);
        pfVar23 = pfVar24 + 4;
        pfVar12 = pfVar24 + 8;
        pfVar13 = pfVar24 + 0xc;
      }
      local_70._0_4_ = *pfVar24;
      fVar36 = *pfVar23;
      local_90._0_4_ = *pfVar12;
      local_a0._0_4_ = *pfVar13;
      if (param_3 != 0) {
        puVar22 = (undefined8 *)param_1[2];
        puVar11 = *local_58;
        uVar39 = puVar22[1];
        uVar37 = *puVar22;
        uVar40 = puVar22[3];
        uVar38 = puVar22[2];
        uVar44 = puVar22[5];
        uVar42 = puVar22[4];
        uVar49 = puVar22[7];
        uVar46 = puVar22[6];
        uVar52 = puVar22[9];
        uVar51 = puVar22[8];
        uVar57 = puVar22[0xb];
        uVar54 = puVar22[10];
        uVar67 = puVar22[0xd];
        uVar64 = puVar22[0xc];
        uVar43 = puVar22[0xf];
        uVar41 = puVar22[0xe];
        pauVar19 = local_58;
        while( true ) {
          local_58 = (undefined1 (*) [12])(pauVar19[1] + 4);
          fVar73 = (float)local_a0 * (float)uVar41;
          fVar75 = (float)local_a0 * (float)((ulong)uVar41 >> 0x20);
          fVar76 = (float)local_a0 * (float)((ulong)uVar43 >> 0x20);
          fVar26 = (float)uVar64 * (float)local_90;
          fVar29 = (float)((ulong)uVar64 >> 0x20) * (float)local_90;
          fVar27 = (float)uVar54 * fVar36;
          fVar30 = (float)((ulong)uVar54 >> 0x20) * fVar36;
          fVar32 = (float)uVar57 * fVar36;
          fVar34 = (float)((ulong)uVar57 >> 0x20) * fVar36;
          fVar36 = (float)*(undefined8 *)(*pauVar19 + 8);
          fVar28 = (float)uVar51 * (float)local_70;
          fVar31 = (float)((ulong)uVar51 >> 0x20) * (float)local_70;
          fVar33 = (float)uVar52 * (float)local_70;
          fVar35 = (float)((ulong)uVar52 >> 0x20) * (float)local_70;
          local_70._0_4_ = (float)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20);
          fVar45 = (float)*(undefined8 *)*pauVar19;
          fVar47 = (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20);
          local_a0._0_4_ =
               (float)local_a0 * (float)uVar43 + (float)uVar67 * (float)local_90 + fVar32 + fVar33 +
               (float)uVar39 * fVar36 + (float)uVar40 * fVar36 + (float)uVar44 * fVar47 +
               (float)uVar49 * fVar45;
          local_90._0_4_ =
               fVar76 + (float)((ulong)uVar67 >> 0x20) * (float)local_90 + fVar34 + fVar35 +
               (float)((ulong)uVar39 >> 0x20) * (float)local_70 +
               (float)((ulong)uVar40 >> 0x20) * fVar36 + (float)((ulong)uVar44 >> 0x20) * fVar47 +
               (float)((ulong)uVar49 >> 0x20) * fVar45;
          *(ulong *)(*pauVar19 + 8) = CONCAT44((float)local_90,(float)local_a0);
          *(ulong *)*pauVar19 =
               CONCAT44(fVar75 + fVar29 + fVar30 + fVar31 + (float)((ulong)uVar37 >> 0x20) * fVar47
                        + (float)((ulong)uVar38 >> 0x20) * fVar36 +
                        (float)((ulong)uVar42 >> 0x20) * fVar47 +
                        (float)((ulong)uVar46 >> 0x20) * fVar45,
                        fVar73 + fVar26 + fVar27 + fVar28 + (float)uVar37 * fVar45 +
                        (float)uVar38 * fVar36 + (float)uVar42 * fVar47 + (float)uVar46 * fVar45);
          if ((undefined1 (*) [12])(puVar11 + (ulong)param_3 * 4) <= local_58) break;
          pauVar19 = local_58;
        }
        uVar18 = *(uint *)((long)param_1 + 0x1c);
        uVar21 = uVar18 - 1;
        uVar15 = uVar18 & 1;
      }
      local_58 = (undefined1 (*) [12])(*local_58 + (ulong)(param_4 - param_3) * 4);
      if ((uVar15 == 0) || (uVar21 != uVar5)) {
        lVar17 = (ulong)(uVar3 << 4) * 4;
        lVar20 = uVar16 * 4;
        *(float *)(*param_1 + lVar17 + lVar20) = (float)local_70;
        *(float *)(*param_1 + lVar17 + lVar20 + 0x10) = fVar36;
        *(float *)(*param_1 + lVar17 + lVar20 + 0x20) = (float)local_90;
        lVar17 = *param_1 + lVar17 + 0x30;
      }
      else {
        uVar16 = (ulong)((uVar3 + (1 < uVar1 && uVar18 != 1)) * 0x10);
        lVar17 = uVar16 * 4;
        *(float *)(*param_1 + lVar17) = (float)local_70;
        *(float *)(*param_1 + lVar17 + 4) = fVar36;
        *(float *)(*param_1 + lVar17 + 8) = (float)local_90;
        lVar17 = *param_1 + 0xc;
      }
      uVar15 = (int)uVar14 - 1;
      uVar14 = (ulong)uVar15;
      *(float *)(lVar17 + uVar16 * 4) = (float)local_a0;
    } while (uVar15 != 0);
  }
  return;
}


