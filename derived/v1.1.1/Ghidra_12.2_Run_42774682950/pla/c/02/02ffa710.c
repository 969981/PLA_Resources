/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffa710; name: FUN_02ffa710
 */


void FUN_02ffa710(long param_1,long param_2,long param_3,long param_4,long param_5,long *param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  short sVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  float *pfVar25;
  int iVar26;
  ulong uVar27;
  undefined1 (*pauVar28) [16];
  float *pfVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar38;
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined8 uVar61;
  float fVar65;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar66;
  undefined8 uVar67;
  float fVar71;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  uint local_33c;
  undefined1 *local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined1 local_2e3;
  undefined1 *local_2e0;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [64];
  undefined1 *local_290;
  undefined8 local_288;
  undefined1 auStack_280 [528];
  
  puVar15 = PTR_PTR_0434a080;
  if (*(int *)(param_2 + 100) != 0) {
    local_290 = auStack_280;
    local_288 = 0x8000002000000000;
    local_2e0 = auStack_2d0;
    local_2d8 = 0x8000002000000000;
    iVar26 = *(int *)(param_2 + 0x54);
    if (0 < iVar26) {
      lVar22 = 0;
      piVar1 = (int *)(param_2 + 0x58);
      local_33c = 0;
      do {
        bVar7 = *(byte *)(param_2 + 0x50 + lVar22 * 4 + (long)*(int *)(param_2 + 0x50) + 2);
        if (bVar7 != 0) {
          uVar27 = 0;
          iVar26 = bVar7 - 1;
          do {
            bVar8 = *(byte *)((long)piVar1 + (long)(int)(iVar26 + local_33c) + (long)*piVar1);
            bVar9 = *(byte *)((long)piVar1 + uVar27 + local_33c + (long)*piVar1);
            if (bVar8 < bVar9) {
              iVar26 = (int)(uVar27 + local_33c) * 0x10;
              puVar20 = (undefined8 *)(param_4 + (ulong)bVar8 * 0x10);
              uVar67 = puVar20[1];
              uVar61 = *puVar20;
              auVar58 = *(undefined1 (*) [16])(param_4 + (ulong)bVar9 * 0x10);
              pauVar28 = (undefined1 (*) [16])(param_3 + (ulong)bVar8 * 0x60);
              fVar50 = auVar58._0_4_;
              fVar52 = auVar58._4_4_;
              fVar31 = auVar58._8_4_;
              fVar55 = auVar58._12_4_;
              pfVar29 = (float *)(param_3 + (ulong)bVar9 * 0x60);
              auVar34._0_4_ = *(float *)pauVar28[1] * (fVar50 - *(float *)*pauVar28);
              auVar34._4_4_ = *(float *)(pauVar28[1] + 4) * (fVar52 - *(float *)(*pauVar28 + 4));
              auVar34._8_4_ = *(float *)(pauVar28[1] + 8) * (fVar31 - *(float *)(*pauVar28 + 8));
              auVar34._12_4_ =
                   *(float *)(pauVar28[1] + 0xc) * (fVar55 - *(float *)(*pauVar28 + 0xc));
              auVar45 = NEON_ext(auVar34,auVar34,8,1);
              pfVar25 = pfVar29 + 4;
              sVar10 = (short)iVar26;
              if (-0.02 <= auVar34._0_4_ + auVar34._4_4_ + auVar45._0_4_) {
LAB_02ffa8cc:
                uVar24 = 0x10;
              }
              else {
                fVar60 = (float)uVar61;
                fVar65 = (float)((ulong)uVar61 >> 0x20);
                fVar66 = (float)uVar67;
                fVar71 = (float)((ulong)uVar67 >> 0x20);
                auVar45._0_4_ = *pfVar25 * (fVar60 - *pfVar29);
                auVar45._4_4_ = pfVar29[5] * (fVar65 - pfVar29[1]);
                auVar45._8_4_ = pfVar29[6] * (fVar66 - pfVar29[2]);
                auVar45._12_4_ = pfVar29[7] * (fVar71 - pfVar29[3]);
                auVar34 = NEON_ext(auVar45,auVar45,8,1);
                if (-0.02 <= auVar34._0_4_ + auVar45._0_4_ + auVar45._4_4_) goto LAB_02ffa8cc;
                fVar32 = fVar60 + (fVar50 - fVar60) * 0.5;
                fVar38 = fVar65 + (fVar52 - fVar65) * 0.5;
                fVar40 = fVar66 + (fVar31 - fVar66) * 0.5;
                fVar42 = fVar71 + (fVar55 - fVar71) * 0.5;
                fVar33 = powf(2.0,4.0);
                uVar4 = local_288;
                puVar16 = local_290;
                uVar68 = CONCAT44(fVar42,fVar40);
                uVar62 = CONCAT44(fVar38,fVar32);
                uVar21 = (uint)fVar33;
                uVar24 = uVar21 >> 1;
                auVar34 = *pauVar28;
                auVar45 = pauVar28[1];
                fVar33 = auVar34._0_4_;
                fVar39 = auVar34._4_4_;
                fVar41 = auVar34._8_4_;
                fVar43 = auVar34._12_4_;
                fVar44 = auVar45._0_4_;
                fVar49 = fVar44 * (fVar32 - fVar33);
                fVar46 = auVar45._4_4_;
                fVar51 = fVar46 * (fVar38 - fVar39);
                fVar47 = auVar45._8_4_;
                fVar53 = fVar47 * (fVar40 - fVar41);
                fVar48 = auVar45._12_4_;
                fVar54 = fVar48 * (fVar42 - fVar43);
                auVar11._4_4_ = fVar51;
                auVar11._0_4_ = fVar49;
                auVar11._8_4_ = fVar53;
                auVar11._12_4_ = fVar54;
                auVar12._4_4_ = fVar51;
                auVar12._0_4_ = fVar49;
                auVar12._8_4_ = fVar53;
                auVar12._12_4_ = fVar54;
                auVar34 = NEON_ext(auVar11,auVar12,8,1);
                if (0.0 < fVar49 + fVar51 + auVar34._0_4_) {
                  uVar18 = uVar24 + uVar21;
                  uVar19 = uVar24;
                  fVar60 = fVar50;
                  fVar65 = fVar52;
                  fVar66 = fVar31;
                  fVar71 = fVar55;
LAB_02ffaadc:
                  uVar24 = uVar21;
                  fVar32 = fVar32 + (fVar60 - fVar32) * 0.5;
                  fVar38 = fVar38 + (fVar65 - fVar38) * 0.5;
                  uVar63 = CONCAT44(fVar38,fVar32);
                  fVar40 = fVar40 + (fVar66 - fVar40) * 0.5;
                  fVar42 = fVar42 + (fVar71 - fVar42) * 0.5;
                  uVar69 = CONCAT44(fVar42,fVar40);
                  auVar56._0_4_ = fVar44 * (fVar32 - fVar33);
                  auVar56._4_4_ = fVar46 * (fVar38 - fVar39);
                  auVar56._8_4_ = fVar47 * (fVar40 - fVar41);
                  auVar56._12_4_ = fVar48 * (fVar42 - fVar43);
                  auVar58 = NEON_ext(auVar56,auVar56,8,1);
                  if (0.0 < auVar56._0_4_ + auVar56._4_4_ + auVar58._0_4_) {
                    uVar19 = uVar18 >> 1;
                    uVar21 = uVar19 + uVar24;
                    auVar58._12_4_ = fVar55;
                    auVar58._8_4_ = fVar31;
                    auVar58._4_4_ = fVar52;
                    auVar58._0_4_ = fVar50;
                  }
                  else {
                    auVar57._0_4_ = *pfVar25 * (fVar32 - *pfVar29);
                    auVar57._4_4_ = pfVar29[5] * (fVar38 - pfVar29[1]);
                    auVar57._8_4_ = pfVar29[6] * (fVar40 - pfVar29[2]);
                    auVar57._12_4_ = pfVar29[7] * (fVar42 - pfVar29[3]);
                    auVar58 = NEON_ext(auVar57,auVar57,8,1);
                    uVar24 = uVar18 >> 1;
                    if (auVar57._0_4_ + auVar57._4_4_ + auVar58._0_4_ <= 0.0) {
                      auVar58._12_4_ = fVar55;
                      auVar58._8_4_ = fVar31;
                      auVar58._4_4_ = fVar52;
                      auVar58._0_4_ = fVar50;
                      uVar61 = uVar62;
                      uVar67 = uVar68;
                      uVar62 = uVar63;
                      uVar68 = uVar69;
                      goto LAB_02ffabc4;
                    }
                    fVar31 = (float)uVar68;
                    fVar55 = (float)((ulong)uVar68 >> 0x20);
                    fVar50 = (float)uVar62;
                    fVar52 = (float)((ulong)uVar62 >> 0x20);
                    auVar58._8_8_ = uVar69;
                    auVar58._0_8_ = uVar63;
                    uVar21 = uVar24 + uVar19;
                    uVar63 = uVar62;
                    uVar69 = uVar68;
                  }
                  fVar32 = fVar32 + (fVar50 - fVar32) * 0.5;
                  fVar38 = fVar38 + (fVar52 - fVar38) * 0.5;
                  uVar64 = CONCAT44(fVar38,fVar32);
                  fVar40 = fVar40 + (fVar31 - fVar40) * 0.5;
                  fVar42 = fVar42 + (fVar55 - fVar42) * 0.5;
                  uVar70 = CONCAT44(fVar42,fVar40);
                  auVar36._0_4_ = fVar44 * (fVar32 - fVar33);
                  auVar36._4_4_ = fVar46 * (fVar38 - fVar39);
                  auVar36._8_4_ = fVar47 * (fVar40 - fVar41);
                  auVar36._12_4_ = fVar48 * (fVar42 - fVar43);
                  auVar34 = NEON_ext(auVar36,auVar36,8,1);
                  if (0.0 < auVar36._0_4_ + auVar36._4_4_ + auVar34._0_4_) {
                    uVar19 = uVar24 + (uVar21 >> 1);
                    auVar59 = auVar58;
                  }
                  else {
                    auVar37._0_4_ = *pfVar25 * (fVar32 - *pfVar29);
                    auVar37._4_4_ = pfVar29[5] * (fVar38 - pfVar29[1]);
                    auVar37._8_4_ = pfVar29[6] * (fVar40 - pfVar29[2]);
                    auVar37._12_4_ = pfVar29[7] * (fVar42 - pfVar29[3]);
                    auVar34 = NEON_ext(auVar37,auVar37,8,1);
                    if (auVar37._0_4_ + auVar37._4_4_ + auVar34._0_4_ <= 0.0) {
                      uVar24 = uVar21 >> 1;
                      uVar61 = uVar63;
                      uVar67 = uVar69;
                      uVar62 = uVar64;
                      uVar68 = uVar70;
                      goto LAB_02ffabc4;
                    }
                    auVar59._8_8_ = uVar69;
                    auVar59._0_8_ = uVar63;
                    auVar58._8_8_ = uVar70;
                    auVar58._0_8_ = uVar64;
                    uVar19 = uVar19 + (uVar21 >> 1);
                    uVar64 = uVar63;
                    uVar70 = uVar69;
                  }
                  uVar24 = uVar19 >> 1;
                  uVar62 = CONCAT44(fVar38 + (auVar59._4_4_ - fVar38) * 0.5,
                                    fVar32 + (auVar59._0_4_ - fVar32) * 0.5);
                  uVar68 = CONCAT44(fVar42 + (auVar59._12_4_ - fVar42) * 0.5,
                                    fVar40 + (auVar59._8_4_ - fVar40) * 0.5);
                  uVar61 = uVar64;
                  uVar67 = uVar70;
                }
                else {
                  fVar50 = *pfVar25 * (fVar32 - (float)*(undefined8 *)pfVar29);
                  fVar52 = pfVar29[5] * (fVar38 - (float)((ulong)*(undefined8 *)pfVar29 >> 0x20));
                  fVar31 = pfVar29[6] * (fVar40 - (float)*(undefined8 *)(pfVar29 + 2));
                  fVar55 = pfVar29[7] *
                           (fVar42 - (float)((ulong)*(undefined8 *)(pfVar29 + 2) >> 0x20));
                  auVar13._4_4_ = fVar52;
                  auVar13._0_4_ = fVar50;
                  auVar13._8_4_ = fVar31;
                  auVar13._12_4_ = fVar55;
                  auVar14._4_4_ = fVar52;
                  auVar14._0_4_ = fVar50;
                  auVar14._8_4_ = fVar31;
                  auVar14._12_4_ = fVar55;
                  auVar34 = NEON_ext(auVar13,auVar14,8,1);
                  if (0.0 < fVar50 + fVar52 + auVar34._0_4_) {
                    fVar50 = fVar32;
                    fVar52 = fVar38;
                    fVar31 = fVar40;
                    fVar55 = fVar42;
                    uVar62 = uVar61;
                    uVar68 = uVar67;
                    uVar21 = uVar24;
                    uVar19 = 0;
                    uVar18 = uVar24;
                    goto LAB_02ffaadc;
                  }
                }
LAB_02ffabc4:
                uVar21 = (int)local_288 + 1;
                if ((int)(local_288._4_4_ & 0x3fffffff) <= (int)local_288) {
                  if (0x3ffffffe < (int)local_288) {
                    FUN_032bd0a8(uVar21);
                  }
                  uVar18 = (local_288._4_4_ & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar18) {
                    uVar18 = 0x3fffffff;
                  }
                  uVar19 = uVar21;
                  if ((int)uVar21 <= (int)uVar18) {
                    uVar19 = uVar18;
                  }
                  local_290 = (undefined1 *)
                              FUN_032bd1d4(puVar15,uVar19,0x10,puVar16,uVar4 & 0xffffffff,
                                           (ulong)&local_290 | 0xc);
                }
                uVar4 = local_2d8;
                puVar16 = local_2e0;
                *(undefined8 *)((long)(local_290 + (long)(int)local_288 * 0x10) + 8) = uVar68;
                *(undefined8 *)(local_290 + (long)(int)local_288 * 0x10) = uVar62;
                local_288 = CONCAT44(local_288._4_4_,uVar21);
                uVar21 = (int)local_2d8 + 1;
                if ((int)(local_2d8._4_4_ & 0x3fffffff) <= (int)local_2d8) {
                  if (0x3ffffffe < (int)local_2d8) {
                    FUN_032bd0a8(uVar21);
                  }
                  uVar18 = (local_2d8._4_4_ & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar18) {
                    uVar18 = 0x3fffffff;
                  }
                  uVar19 = uVar21;
                  if ((int)uVar21 <= (int)uVar18) {
                    uVar19 = uVar18;
                  }
                  local_2e0 = (undefined1 *)
                              FUN_032bd1d4(puVar15,uVar19,2,puVar16,uVar4 & 0xffffffff,
                                           (long)&local_2d8 + 4);
                }
                *(short *)(local_2e0 + (long)(int)local_2d8 * 2) = sVar10 + (short)uVar24 + -0x7ff0;
                local_2d8 = CONCAT44(local_2d8._4_4_,uVar21);
              }
              fVar50 = (float)((ulong)uVar61 >> 0x20);
              fVar52 = (float)((ulong)uVar67 >> 0x20);
              lVar30 = 0;
              do {
                uVar4 = local_288;
                puVar16 = local_290;
                if ((*(char *)(*(long *)(param_5 + 0x10) + lVar30 + 0x60) != '\0') &&
                   (uVar18 = (uint)*(ushort *)(*(long *)(param_5 + 0x10) + lVar30 * 2 + 0x50),
                   uVar21 = uVar18 & 0xf,
                   (uVar18 & 0x7ff0) == (iVar26 + 0x10U & 0xffff) && uVar21 != uVar24)) {
                  fVar31 = (float)uVar21 * 0.0625;
                  auVar35._8_4_ = (float)uVar67 + (auVar58._8_4_ - (float)uVar67) * fVar31;
                  auVar35._12_4_ = fVar52 + (auVar58._12_4_ - fVar52) * fVar31;
                  uVar18 = (int)local_288 + 1;
                  if ((int)(local_288._4_4_ & 0x3fffffff) <= (int)local_288) {
                    if (0x3ffffffe < (int)local_288) {
                      FUN_032bd0a8(uVar18);
                    }
                    uVar19 = (local_288._4_4_ & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar19) {
                      uVar19 = 0x3fffffff;
                    }
                    uVar2 = uVar18;
                    if ((int)uVar18 <= (int)uVar19) {
                      uVar2 = uVar19;
                    }
                    local_290 = (undefined1 *)
                                FUN_032bd1d4(puVar15,uVar2,0x10,puVar16,uVar4 & 0xffffffff,
                                             (ulong)&local_290 | 0xc);
                  }
                  puVar16 = local_2e0;
                  uVar62 = CONCAT44(fVar50 + (auVar58._4_4_ - fVar50) * fVar31,
                                    (float)uVar61 + (auVar58._0_4_ - (float)uVar61) * fVar31);
                  auVar35._0_8_ = uVar62;
                  *(long *)((long)(local_290 + (long)(int)local_288 * 0x10) + 8) = auVar35._8_8_;
                  *(undefined8 *)(local_290 + (long)(int)local_288 * 0x10) = uVar62;
                  uVar4 = local_2d8 & 0xffffffff;
                  local_288 = CONCAT44(local_288._4_4_,uVar18);
                  uVar18 = (int)local_2d8 + 1;
                  if ((int)(local_2d8._4_4_ & 0x3fffffff) <= (int)local_2d8) {
                    if (0x3ffffffe < (int)local_2d8) {
                      FUN_032bd0a8(uVar18);
                    }
                    uVar19 = (local_2d8._4_4_ & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar19) {
                      uVar19 = 0x3fffffff;
                    }
                    uVar2 = uVar18;
                    if ((int)uVar18 <= (int)uVar19) {
                      uVar2 = uVar19;
                    }
                    local_2e0 = (undefined1 *)
                                FUN_032bd1d4(puVar15,uVar2,2,puVar16,uVar4,(long)&local_2d8 + 4);
                  }
                  *(ushort *)(local_2e0 + (long)(int)local_2d8 * 2) =
                       (ushort)uVar21 | sVar10 + 0x8010U;
                  local_2d8 = CONCAT44(local_2d8._4_4_,uVar18);
                }
                lVar30 = lVar30 + 1;
              } while (lVar30 != 8);
            }
            iVar26 = (int)uVar27;
            uVar27 = uVar27 + 1;
          } while (uVar27 != bVar7);
          iVar26 = *(int *)(param_2 + 0x54);
        }
        lVar22 = lVar22 + 1;
        local_33c = local_33c + bVar7;
      } while (lVar22 < iVar26);
      iVar26 = (int)local_288;
      if ((int)local_288 != 0) {
        if ((int)(*(uint *)((long)param_6 + 0xc) & 0x3fffffff) < (int)local_288) {
          lVar22 = FUN_02ffe910(puVar15,local_288 & 0xffffffff,*param_6,(int)param_6[1]);
          *param_6 = lVar22;
        }
        iVar3 = (int)param_6[1];
        if (iVar3 < iVar26) {
          lVar22 = (long)iVar3 * -0x60 + (long)iVar26 * 0x60;
          *(int *)(param_6 + 1) = iVar26;
          puVar20 = (undefined8 *)(*param_6 + (long)iVar3 * 0x60 + 0x48);
          do {
            *(undefined2 *)(puVar20 + -1) = 0xffff;
            lVar22 = lVar22 + -0x60;
            *(undefined4 *)((long)puVar20 + -4) = 0;
            *puVar20 = 0;
            puVar20 = puVar20 + 0xc;
          } while (lVar22 != 0);
        }
        else if (iVar26 < iVar3) {
          *(int *)(param_6 + 1) = iVar26;
        }
        local_2e8 = 0x7f7fffee;
        uStack_2ec = *(undefined4 *)(param_2 + 0x20);
        local_2f0 = (int)local_288;
        local_2f8 = local_290;
        local_2e3 = (*(ushort *)(*(long *)(param_5 + 0x10) + 10) & 0x180) != 0;
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xf0))
                  (param_1,&local_2f8,*param_6);
        if (0 < (int)param_6[1]) {
          lVar30 = 0;
          lVar22 = 0;
          do {
            if (*(float *)(*param_6 + lVar30 + 0x30) <= *(float *)(param_5 + 0x18)) {
              sVar10 = *(short *)(local_2e0 + lVar22 * 2);
              *(short *)(*param_6 + lVar30 + 0x34) = sVar10;
              lVar23 = *(long *)(param_5 + 0x10);
              pcVar17 = (char *)(lVar23 + 0x60);
              cVar5 = *pcVar17;
              if (*(short *)(lVar23 + 0x50) != sVar10 || cVar5 == '\0') {
                pcVar17 = (char *)(lVar23 + 0x61);
                if (*(short *)(lVar23 + 0x52) != sVar10 || *pcVar17 == '\0') {
                  iVar26 = -(uint)(cVar5 != '\0');
                  if (*pcVar17 == '\0' && cVar5 != '\0') {
                    iVar26 = 1;
                  }
                  pcVar17 = (char *)(lVar23 + 0x62);
                  cVar5 = *pcVar17;
                  if (*(short *)(lVar23 + 0x54) != sVar10 || cVar5 == '\0') {
                    pcVar17 = (char *)(lVar23 + 99);
                    cVar6 = *pcVar17;
                    iVar3 = 2;
                    if (cVar5 != '\0' || iVar26 != -1) {
                      iVar3 = iVar26;
                    }
                    if ((*(short *)(lVar23 + 0x56) != sVar10) || (cVar6 == '\0')) {
                      pcVar17 = (char *)(lVar23 + 100);
                      cVar5 = *pcVar17;
                      iVar26 = 3;
                      if (cVar6 != '\0' || iVar3 != -1) {
                        iVar26 = iVar3;
                      }
                      if ((*(short *)(lVar23 + 0x58) != sVar10) || (cVar5 == '\0')) {
                        pcVar17 = (char *)(lVar23 + 0x65);
                        cVar6 = *pcVar17;
                        iVar3 = 4;
                        if (cVar5 != '\0' || iVar26 != -1) {
                          iVar3 = iVar26;
                        }
                        if ((*(short *)(lVar23 + 0x5a) != sVar10) || (cVar6 == '\0')) {
                          pcVar17 = (char *)(lVar23 + 0x66);
                          cVar5 = *pcVar17;
                          iVar26 = 5;
                          if (cVar6 != '\0' || iVar3 != -1) {
                            iVar26 = iVar3;
                          }
                          if ((*(short *)(lVar23 + 0x5c) != sVar10) || (cVar5 == '\0')) {
                            pcVar17 = (char *)(lVar23 + 0x67);
                            iVar3 = 6;
                            if (cVar5 != '\0' || iVar26 != -1) {
                              iVar3 = iVar26;
                            }
                            if ((*(short *)(lVar23 + 0x5e) != sVar10) || (*pcVar17 == '\0')) {
                              iVar26 = 7;
                              if (*pcVar17 != '\0' || iVar3 != -1) {
                                iVar26 = iVar3;
                              }
                              if (iVar26 != -1) {
                                *(short *)(lVar23 + (long)iVar26 * 2 + 0x50) = sVar10;
                                *(undefined1 *)(*(long *)(param_5 + 0x10) + (long)iVar26 + 0x60) = 2
                                ;
                              }
                              goto LAB_02ffaea4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              *pcVar17 = '\x02';
            }
LAB_02ffaea4:
            lVar22 = lVar22 + 1;
            lVar30 = lVar30 + 0x60;
          } while (lVar22 < (int)param_6[1]);
        }
      }
    }
    uVar27 = local_2d8;
    lVar22 = *(long *)(param_5 + 0x10);
    if (*(char *)(lVar22 + 0x60) != '\0') {
      *(char *)(lVar22 + 0x60) = *(char *)(lVar22 + 0x60) + -1;
      lVar22 = *(long *)(param_5 + 0x10);
    }
    if (*(char *)(lVar22 + 0x61) != '\0') {
      *(char *)(lVar22 + 0x61) = *(char *)(lVar22 + 0x61) + -1;
      lVar22 = *(long *)(param_5 + 0x10);
    }
    if (*(char *)(lVar22 + 0x62) != '\0') {
      *(char *)(lVar22 + 0x62) = *(char *)(lVar22 + 0x62) + -1;
      lVar22 = *(long *)(param_5 + 0x10);
    }
    if (*(char *)(lVar22 + 99) != '\0') {
      *(char *)(lVar22 + 99) = *(char *)(lVar22 + 99) + -1;
      lVar22 = *(long *)(param_5 + 0x10);
    }
    if (*(char *)(lVar22 + 100) != '\0') {
      *(char *)(lVar22 + 100) = *(char *)(lVar22 + 100) + -1;
      lVar22 = *(long *)(param_5 + 0x10);
    }
    if (*(char *)(lVar22 + 0x65) != '\0') {
      *(char *)(lVar22 + 0x65) = *(char *)(lVar22 + 0x65) + -1;
      lVar22 = *(long *)(param_5 + 0x10);
    }
    if (*(char *)(lVar22 + 0x66) != '\0') {
      *(char *)(lVar22 + 0x66) = *(char *)(lVar22 + 0x66) + -1;
      lVar22 = *(long *)(param_5 + 0x10);
    }
    if (*(char *)(lVar22 + 0x67) != '\0') {
      *(char *)(lVar22 + 0x67) = *(char *)(lVar22 + 0x67) + -1;
    }
    puVar15 = PTR_PTR_0434a080;
    uVar24 = local_2d8._4_4_;
    local_2d8 = (ulong)local_2d8._4_4_ << 0x20;
    if ((-1 < (long)uVar27) && (local_2e0 != (undefined1 *)0x0)) {
      FUN_032cf244(PTR_PTR_0434a080,local_2e0,2,uVar24 & 0x3fffffff);
    }
    uVar27 = local_288;
    uVar24 = local_288._4_4_;
    local_288 = (ulong)local_288._4_4_ << 0x20;
    if ((-1 < (long)uVar27) && (local_290 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar15,local_290,0x10,uVar24 & 0x3fffffff);
    }
  }
  return;
}


