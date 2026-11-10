/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026a984; name: FUN_0026a984
 */


void FUN_0026a984(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  long *plVar23;
  code *pcVar24;
  long lVar25;
  code *pcVar26;
  code *pcVar27;
  code *pcVar28;
  code *pcVar29;
  int iVar30;
  long lVar31;
  undefined4 uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  char *pcVar35;
  float *pfVar36;
  long lVar37;
  float *pfVar38;
  long lVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  long local_d0;
  float local_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  float local_80;
  float local_7c [3];
  
  lVar18 = *(long *)(param_2 + 0x3f0);
  if (lVar18 == 0) {
    pcVar24 = (code *)0x0;
    pcVar22 = (code *)0x0;
    lVar18 = *(long *)(param_2 + 0x3e0);
    if (lVar18 == 0) goto LAB_0026a9e8;
LAB_0026a9c4:
    pcVar26 = *(code **)(lVar18 + 0x40);
    pcVar27 = *(code **)(lVar18 + 0x48);
    lVar18 = *(long *)(param_2 + 1000);
    if (lVar18 != 0) goto LAB_0026a9d0;
LAB_0026a9f8:
    pcVar29 = (code *)0x0;
    pcVar28 = (code *)0x0;
  }
  else {
    pcVar22 = *(code **)(lVar18 + 0x40);
    pcVar24 = *(code **)(lVar18 + 0x48);
    lVar18 = *(long *)(param_2 + 0x3e0);
    if (lVar18 != 0) goto LAB_0026a9c4;
LAB_0026a9e8:
    pcVar27 = (code *)0x0;
    pcVar26 = (code *)0x0;
    lVar18 = *(long *)(param_2 + 1000);
    if (lVar18 == 0) goto LAB_0026a9f8;
LAB_0026a9d0:
    pcVar28 = *(code **)(lVar18 + 0x40);
    pcVar29 = *(code **)(lVar18 + 0x48);
  }
  if (0 < *(int *)(param_2 + 0x28)) {
    lVar18 = 0;
    uVar33 = 0;
    iVar30 = 0;
    piVar19 = *(int **)(param_2 + 0xb0);
    iVar9 = *piVar19;
    do {
      if (iVar9 != 0) {
        lVar21 = *(long *)(param_2 + 0xb8);
        pfVar36 = (float *)(piVar19 + 2);
        fVar66 = *(float *)(param_2 + 0x44) - *pfVar36;
        pfVar38 = (float *)(piVar19 + 3);
        fVar67 = *pfVar38;
        uVar32 = (undefined4)uVar33;
        if (fVar67 <= fVar66) {
          if ((pcVar22 != (code *)0x0 || pcVar26 != (code *)0x0) || pcVar28 != (code *)0x0) {
            local_e0 = *(undefined8 *)(piVar19 + 4);
            uStack_d8 = *(ulong *)(piVar19 + 6);
            local_d0 = param_2;
            local_c8 = fVar66;
            fStack_c4 = fVar67;
            local_c0 = uVar32;
            if (pcVar22 != (code *)0x0) {
              (*pcVar22)(&local_e0);
            }
            if (pcVar26 != (code *)0x0) {
              (*pcVar26)(&local_e0);
            }
            if (pcVar28 != (code *)0x0) {
              (*pcVar28)(&local_e0);
            }
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar33 * 0x20 + 0x18) = 0;
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar33 * 0x20 + 0x10) = 0;
          }
          *piVar19 = 0;
          lVar31 = *(long *)(param_2 + 0x240);
        }
        else {
          lVar31 = uVar33 * 0x10;
          puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar31);
          fVar41 = *(float *)(puVar34 + 1);
          uVar43 = *puVar34;
          local_80 = *pfVar38;
          uStack_88 = (ulong)*(uint *)(puVar34 + 1);
          puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar31);
          local_a0 = *puVar34;
          uStack_98 = (ulong)*(uint *)(puVar34 + 1);
          local_90 = uVar43;
          local_7c[0] = *pfVar36;
          uVar17 = FUN_00273408(fVar66,param_1,&local_90,&local_a0,local_7c,&local_80,param_2,
                                uVar33 & 0xffffffff,&local_90,&local_a0);
          puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar31);
          *puVar34 = local_90;
          *(int *)(puVar34 + 1) = (int)uStack_88;
          puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar31);
          *puVar34 = local_a0;
          *(int *)(puVar34 + 1) = (int)uStack_98;
          *pfVar36 = local_7c[0];
          *pfVar38 = local_80;
          fVar42 = local_80;
          if ((pcVar24 != (code *)0x0 || pcVar27 != (code *)0x0) || pcVar29 != (code *)0x0) {
            lVar25 = *(long *)(param_2 + 0xb0) + uVar33 * 0x20;
            local_e0 = *(undefined8 *)(lVar25 + 0x10);
            uStack_d8 = *(ulong *)(lVar25 + 0x18);
            local_d0 = param_2;
            local_c8 = fVar66;
            fStack_c4 = fVar67;
            local_c0 = uVar32;
            if (pcVar24 != (code *)0x0) {
              uVar17 = (*pcVar24)(&local_e0);
            }
            if (pcVar27 != (code *)0x0) {
              uVar17 = (*pcVar27)(&local_e0);
            }
            if (pcVar29 != (code *)0x0) {
              uVar17 = (*pcVar29)(&local_e0);
            }
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar33 * 0x20 + 0x10) = local_e0;
            fVar42 = *pfVar38;
          }
          *(float *)(*(long *)(param_2 + 0x1d0) + lVar31 + 0xc) = fVar42;
          *(float *)(*(long *)(param_2 + 0x1d8) + lVar31 + 0xc) = *pfVar36;
          fVar66 = (float)local_90 - (float)uVar43;
          fVar67 = (float)((ulong)local_90 >> 0x20) - (float)((ulong)uVar43 >> 0x20);
          fVar41 = (float)uStack_88 - fVar41;
          fVar42 = ABS(fVar67);
          bVar11 = false;
          bVar13 = false;
          bVar15 = false;
          if (ABS(fVar66) <= 0.0001) {
            bVar11 = false;
            bVar13 = false;
            bVar15 = true;
            if (!NAN(fVar42)) {
              bVar11 = fVar42 < 0.0001;
              bVar13 = fVar42 == 0.0001;
              bVar15 = false;
            }
          }
          fVar42 = ABS(fVar41);
          bVar12 = false;
          bVar14 = false;
          bVar16 = false;
          if (bVar13 || bVar11 != bVar15) {
            bVar12 = false;
            bVar14 = false;
            bVar16 = true;
            if (!NAN(fVar42)) {
              bVar12 = fVar42 < 0.0001;
              bVar14 = fVar42 == 0.0001;
              bVar16 = false;
            }
          }
          if (!bVar14 && bVar12 == bVar16) {
            puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1e0) + uVar33 * 0x10);
            *puVar34 = CONCAT44(fVar67,fVar66);
            *(float *)(puVar34 + 1) = fVar41;
          }
          if (0 < *(int *)(*(long *)(param_2 + 0x238) + 0x88)) {
            lVar39 = 0;
            lVar25 = lVar21 + 0x148;
            pcVar35 = *(char **)(lVar21 + lVar18);
            lVar1 = lVar21;
            lVar2 = lVar21;
            while (pcVar35 != (char *)0x0) {
              if (((*(long *)(pcVar35 + 0x98) != 0) &&
                  (lVar37 = *(long *)(pcVar35 + 0xa0), *(char *)(lVar37 + 0x7e4) == '\0')) &&
                 (*piVar19 != 0)) {
                fVar66 = *(float *)(lVar21 + uVar33 * 0x158 + 0x80);
                if (*(float *)(pcVar35 + 0x44) == 0.0) {
                  if (*(char *)(*(long *)(pcVar35 + 0x238) + 2) == '\0') {
                    *(undefined8 *)(pcVar35 + 0x360) = *(undefined8 *)(pcVar35 + 0x2e0);
                    *(undefined8 *)(pcVar35 + 0x368) = *(undefined8 *)(pcVar35 + 0x2e8);
                    *(undefined8 *)(pcVar35 + 0x370) = *(undefined8 *)(pcVar35 + 0x2f0);
                    *(undefined8 *)(pcVar35 + 0x378) = *(undefined8 *)(pcVar35 + 0x2f8);
                    *(undefined8 *)(pcVar35 + 0x340) = *(undefined8 *)(pcVar35 + 0x2c0);
                    *(undefined8 *)(pcVar35 + 0x348) = *(undefined8 *)(pcVar35 + 0x2c8);
                    *(undefined8 *)(pcVar35 + 0x350) = *(undefined8 *)(pcVar35 + 0x2d0);
                    *(undefined8 *)(pcVar35 + 0x358) = *(undefined8 *)(pcVar35 + 0x2d8);
                    *(undefined8 *)(pcVar35 + 0x398) = *(undefined8 *)(pcVar35 + 0x318);
                    *(undefined8 *)(pcVar35 + 0x390) = *(undefined8 *)(pcVar35 + 0x310);
                    *(undefined8 *)(pcVar35 + 0x388) = *(undefined8 *)(pcVar35 + 0x308);
                    *(undefined8 *)(pcVar35 + 0x380) = *(undefined8 *)(pcVar35 + 0x300);
                    *(undefined8 *)(pcVar35 + 0x3b8) = *(undefined8 *)(pcVar35 + 0x338);
                    *(undefined8 *)(pcVar35 + 0x3b0) = *(undefined8 *)(pcVar35 + 0x330);
                    *(undefined8 *)(pcVar35 + 0x3a8) = *(undefined8 *)(pcVar35 + 0x328);
                    *(undefined8 *)(pcVar35 + 0x3a0) = *(undefined8 *)(pcVar35 + 800);
                  }
                  else {
                    uVar17 = FUN_0026946c(uVar17,pcVar35,&local_e0,&local_120);
                    *(undefined8 *)(pcVar35 + 0x368) = local_b8;
                    *(undefined8 *)(pcVar35 + 0x378) = local_a8;
                    *(ulong *)(pcVar35 + 0x348) = uStack_d8;
                    *(ulong *)(pcVar35 + 0x358) = CONCAT44(fStack_c4,local_c8);
                    *(long *)(pcVar35 + 0x350) = local_d0;
                    *(undefined8 *)(pcVar35 + 0x340) = local_e0;
                    *(undefined8 *)(pcVar35 + 0x370) = local_b0;
                    *(ulong *)(pcVar35 + 0x360) = CONCAT44(uStack_bc,local_c0);
                    *(undefined8 *)(pcVar35 + 0x390) = local_110;
                    *(undefined8 *)(pcVar35 + 0x380) = local_120;
                    *(undefined8 *)(pcVar35 + 0x398) = uStack_108;
                    *(ulong *)(pcVar35 + 0x388) = uStack_118;
                    *(undefined8 *)(pcVar35 + 0x3a0) = local_100;
                    *(undefined8 *)(pcVar35 + 0x3b0) = local_f0;
                    *(undefined8 *)(pcVar35 + 0x3b8) = uStack_e8;
                    *(undefined8 *)(pcVar35 + 0x3a8) = uStack_f8;
                  }
                }
                fVar67 = (float)NEON_ucvtf(*(undefined4 *)(lVar37 + 0x7f8));
                fVar67 = *pfVar38 * (fVar67 / 100.0);
                if (fVar67 <= fVar66) {
                  if (*(char *)(lVar37 + 0x7f0) == '\0') {
                    if ((*pfVar38 <= fVar66) && (*pcVar35 != '\0')) goto LAB_0026b09c;
                  }
                  else {
                    fVar41 = (float)NEON_ucvtf(*(undefined4 *)(lVar37 + 0x7fc));
                    if (fVar67 + fVar41 <= fVar66) {
LAB_0026b09c:
                      if (*(char *)(lVar25 + lVar18) != '\0') goto LAB_0026aeec;
                    }
                  }
                  puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar31);
                  local_e0 = *puVar34;
                  fVar67 = *(float *)(puVar34 + 1);
                  uStack_d8 = (ulong)(uint)fVar67;
                  puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar31);
                  local_120 = *puVar34;
                  fVar41 = *(float *)(puVar34 + 1);
                  uStack_118 = (ulong)(uint)fVar41;
                  if (*(char *)(*(long *)(param_2 + 0xa0) + 0x753) == '\x01') {
                    pfVar6 = (float *)(*(long *)(param_2 + 0x210) + lVar31);
                    pfVar7 = (float *)(*(long *)(param_2 + 0x218) + lVar31);
                    pfVar8 = (float *)(*(long *)(param_2 + 0x220) + lVar31);
                    fVar42 = (float)local_e0;
                    fVar45 = (float)((ulong)local_e0 >> 0x20);
                    local_e0 = CONCAT44(*pfVar7 * fVar42 + pfVar7[1] * fVar45 + pfVar7[2] * fVar67 +
                                        pfVar7[3],
                                        *pfVar6 * fVar42 + pfVar6[1] * fVar45 + pfVar6[2] * fVar67 +
                                        pfVar6[3]);
                    uStack_d8 = CONCAT44(fVar42 * 0.0 + fVar45 * 0.0 + fVar67 * 0.0 + 0.0,
                                         *pfVar8 * fVar42 + pfVar8[1] * fVar45 + pfVar8[2] * fVar67
                                         + pfVar8[3]);
                    fVar67 = (float)local_120;
                    fVar42 = (float)((ulong)local_120 >> 0x20);
                    local_120 = CONCAT44(*pfVar7 * fVar67 + pfVar7[1] * fVar42 + pfVar7[2] * fVar41
                                         + 0.0,*pfVar6 * fVar67 + pfVar6[1] * fVar42 +
                                               pfVar6[2] * fVar41 + 0.0);
                    uStack_118 = CONCAT44(fVar67 * 0.0 + fVar42 * 0.0 + fVar41 * 0.0 + 0.0,
                                          *pfVar8 * fVar67 + pfVar8[1] * fVar42 + pfVar8[2] * fVar41
                                          + 0.0);
                  }
                  *(undefined8 **)(pcVar35 + 0x5e8) = &local_e0;
                  *(undefined8 **)(pcVar35 + 0x5f0) = &local_120;
                  *(undefined4 *)(pcVar35 + 0x5f8) = uVar32;
                  if ((fVar66 != 0.0) && (*(char *)(lVar37 + 0x7f2) != '\0')) {
                    puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1e0) + uVar33 * 0x10);
                    uVar17 = *puVar34;
                    *(ulong *)(pcVar35 + 0x3d8) = (ulong)*(uint *)(puVar34 + 1);
                    *(undefined8 *)(pcVar35 + 0x3d0) = uVar17;
                  }
                  lVar37 = lVar2 + lVar18;
                  uVar40 = *(undefined4 *)(param_2 + 0x4c);
                  if ((*(char *)(*(long *)(pcVar35 + 0xa0) + 0x753) == '\x01') &&
                     (*(char *)(*(long *)(param_2 + 0xa0) + 0x753) != '\x01')) {
                    *(undefined8 *)(pcVar35 + 0x360) = *(undefined8 *)(pcVar35 + 0x2e0);
                    *(undefined8 *)(pcVar35 + 0x368) = *(undefined8 *)(pcVar35 + 0x2e8);
                    *(undefined8 *)(pcVar35 + 0x370) = *(undefined8 *)(pcVar35 + 0x2f0);
                    *(undefined8 *)(pcVar35 + 0x378) = *(undefined8 *)(pcVar35 + 0x2f8);
                    *(undefined8 *)(pcVar35 + 0x340) = *(undefined8 *)(pcVar35 + 0x2c0);
                    *(undefined8 *)(pcVar35 + 0x348) = *(undefined8 *)(pcVar35 + 0x2c8);
                    *(undefined8 *)(pcVar35 + 0x350) = *(undefined8 *)(pcVar35 + 0x2d0);
                    *(undefined8 *)(pcVar35 + 0x358) = *(undefined8 *)(pcVar35 + 0x2d8);
                    *(undefined8 *)(pcVar35 + 0x398) = *(undefined8 *)(pcVar35 + 0x318);
                    *(undefined8 *)(pcVar35 + 0x388) = *(undefined8 *)(pcVar35 + 0x308);
                    *(undefined8 *)(pcVar35 + 0x390) = *(undefined8 *)(pcVar35 + 0x310);
                    *(undefined8 *)(pcVar35 + 0x380) = *(undefined8 *)(pcVar35 + 0x300);
                    *(undefined8 *)(pcVar35 + 0x3b8) = *(undefined8 *)(pcVar35 + 0x338);
                    *(undefined8 *)(pcVar35 + 0x3b0) = *(undefined8 *)(pcVar35 + 0x330);
                    *(undefined8 *)(pcVar35 + 0x3a8) = *(undefined8 *)(pcVar35 + 0x328);
                    *(undefined8 *)(pcVar35 + 0x3a0) = *(undefined8 *)(pcVar35 + 800);
                    fVar66 = (float)*(undefined8 *)(pcVar35 + 0x340);
                    fVar54 = (float)*(undefined8 *)(param_2 + 0x340);
                    fVar55 = (float)((ulong)*(undefined8 *)(param_2 + 0x340) >> 0x20);
                    fVar56 = (float)*(undefined8 *)(param_2 + 0x348);
                    fVar57 = (float)((ulong)*(undefined8 *)(param_2 + 0x348) >> 0x20);
                    fVar67 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x340) >> 0x20);
                    fVar58 = (float)*(undefined8 *)(param_2 + 0x350);
                    fVar59 = (float)((ulong)*(undefined8 *)(param_2 + 0x350) >> 0x20);
                    fVar60 = (float)*(undefined8 *)(param_2 + 0x358);
                    fVar61 = (float)((ulong)*(undefined8 *)(param_2 + 0x358) >> 0x20);
                    uVar43 = *(undefined8 *)(param_2 + 0x378);
                    uVar17 = *(undefined8 *)(param_2 + 0x370);
                    fVar41 = (float)*(undefined8 *)(pcVar35 + 0x348);
                    fVar62 = (float)*(undefined8 *)(param_2 + 0x360);
                    fVar63 = (float)((ulong)*(undefined8 *)(param_2 + 0x360) >> 0x20);
                    fVar64 = (float)*(undefined8 *)(param_2 + 0x368);
                    fVar65 = (float)((ulong)*(undefined8 *)(param_2 + 0x368) >> 0x20);
                    fVar42 = (float)*(undefined8 *)(pcVar35 + 0x350);
                    fVar47 = (float)*(undefined8 *)(pcVar35 + 0x360);
                    fVar49 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x360) >> 0x20);
                    fVar50 = (float)*(undefined8 *)(pcVar35 + 0x368);
                    fVar45 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x350) >> 0x20);
                    fVar46 = (float)*(undefined8 *)(pcVar35 + 0x358);
                    fVar51 = (float)*(undefined8 *)(pcVar35 + 0x370);
                    fVar52 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x370) >> 0x20);
                    fVar53 = (float)*(undefined8 *)(pcVar35 + 0x378);
                    *(ulong *)(pcVar35 + 0x348) =
                         CONCAT44(fVar57 * fVar66 + fVar61 * fVar67 + fVar65 * fVar41,
                                  fVar56 * fVar66 + fVar60 * fVar67 + fVar64 * fVar41);
                    *(ulong *)(pcVar35 + 0x340) =
                         CONCAT44(fVar55 * fVar66 + fVar59 * fVar67 + fVar63 * fVar41,
                                  fVar54 * fVar66 + fVar58 * fVar67 + fVar62 * fVar41);
                    *(ulong *)(pcVar35 + 0x358) =
                         CONCAT44(fVar57 * fVar42 + fVar61 * fVar45 + fVar65 * fVar46,
                                  fVar56 * fVar42 + fVar60 * fVar45 + fVar64 * fVar46);
                    *(ulong *)(pcVar35 + 0x350) =
                         CONCAT44(fVar55 * fVar42 + fVar59 * fVar45 + fVar63 * fVar46,
                                  fVar54 * fVar42 + fVar58 * fVar45 + fVar62 * fVar46);
                    *(ulong *)(pcVar35 + 0x368) =
                         CONCAT44(fVar57 * fVar47 + fVar61 * fVar49 + fVar65 * fVar50,
                                  fVar56 * fVar47 + fVar60 * fVar49 + fVar64 * fVar50);
                    *(ulong *)(pcVar35 + 0x360) =
                         CONCAT44(fVar55 * fVar47 + fVar59 * fVar49 + fVar63 * fVar50,
                                  fVar54 * fVar47 + fVar58 * fVar49 + fVar62 * fVar50);
                    *(ulong *)(pcVar35 + 0x378) =
                         CONCAT44((float)((ulong)uVar43 >> 0x20) +
                                  fVar57 * fVar51 + fVar61 * fVar52 + fVar65 * fVar53,
                                  (float)uVar43 +
                                  fVar56 * fVar51 + fVar60 * fVar52 + fVar64 * fVar53);
                    *(ulong *)(pcVar35 + 0x370) =
                         CONCAT44((float)((ulong)uVar17 >> 0x20) +
                                  fVar55 * fVar51 + fVar59 * fVar52 + fVar63 * fVar53,
                                  (float)uVar17 +
                                  fVar54 * fVar51 + fVar58 * fVar52 + fVar62 * fVar53);
                    fVar66 = (float)*(undefined8 *)(pcVar35 + 0x380);
                    fVar51 = (float)*(undefined8 *)(param_2 + 0x380);
                    fVar52 = (float)((ulong)*(undefined8 *)(param_2 + 0x380) >> 0x20);
                    fVar53 = (float)*(undefined8 *)(param_2 + 0x388);
                    fVar54 = (float)((ulong)*(undefined8 *)(param_2 + 0x388) >> 0x20);
                    fVar67 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x380) >> 0x20);
                    fVar55 = (float)*(undefined8 *)(param_2 + 0x390);
                    fVar56 = (float)((ulong)*(undefined8 *)(param_2 + 0x390) >> 0x20);
                    fVar57 = (float)*(undefined8 *)(param_2 + 0x398);
                    fVar58 = (float)((ulong)*(undefined8 *)(param_2 + 0x398) >> 0x20);
                    uVar43 = *(undefined8 *)(param_2 + 0x3b8);
                    uVar17 = *(undefined8 *)(param_2 + 0x3b0);
                    fVar41 = (float)*(undefined8 *)(pcVar35 + 0x388);
                    fVar59 = (float)*(undefined8 *)(param_2 + 0x3a0);
                    fVar60 = (float)((ulong)*(undefined8 *)(param_2 + 0x3a0) >> 0x20);
                    fVar61 = (float)*(undefined8 *)(param_2 + 0x3a8);
                    fVar62 = (float)((ulong)*(undefined8 *)(param_2 + 0x3a8) >> 0x20);
                    fVar42 = (float)*(undefined8 *)(pcVar35 + 0x390);
                    fVar45 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x390) >> 0x20);
                    fVar46 = (float)*(undefined8 *)(pcVar35 + 0x398);
                    fVar47 = (float)*(undefined8 *)(pcVar35 + 0x3a0);
                    fVar49 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x3a0) >> 0x20);
                    fVar50 = (float)*(undefined8 *)(pcVar35 + 0x3a8);
                    fVar63 = (float)*(undefined8 *)(pcVar35 + 0x3b0);
                    *(ulong *)(pcVar35 + 0x388) =
                         CONCAT44(fVar54 * fVar66 + fVar58 * fVar67 + fVar62 * fVar41,
                                  fVar53 * fVar66 + fVar57 * fVar67 + fVar61 * fVar41);
                    *(ulong *)(pcVar35 + 0x380) =
                         CONCAT44(fVar52 * fVar66 + fVar56 * fVar67 + fVar60 * fVar41,
                                  fVar51 * fVar66 + fVar55 * fVar67 + fVar59 * fVar41);
                    *(ulong *)(pcVar35 + 0x398) =
                         CONCAT44(fVar54 * fVar42 + fVar58 * fVar45 + fVar62 * fVar46,
                                  fVar53 * fVar42 + fVar57 * fVar45 + fVar61 * fVar46);
                    *(ulong *)(pcVar35 + 0x390) =
                         CONCAT44(fVar52 * fVar42 + fVar56 * fVar45 + fVar60 * fVar46,
                                  fVar51 * fVar42 + fVar55 * fVar45 + fVar59 * fVar46);
                    fVar66 = (float)((ulong)*(undefined8 *)(pcVar35 + 0x3b0) >> 0x20);
                    fVar67 = (float)*(undefined8 *)(pcVar35 + 0x3b8);
                    *(ulong *)(pcVar35 + 0x3a8) =
                         CONCAT44(fVar54 * fVar47 + fVar58 * fVar49 + fVar62 * fVar50,
                                  fVar53 * fVar47 + fVar57 * fVar49 + fVar61 * fVar50);
                    *(ulong *)(pcVar35 + 0x3a0) =
                         CONCAT44(fVar52 * fVar47 + fVar56 * fVar49 + fVar60 * fVar50,
                                  fVar51 * fVar47 + fVar55 * fVar49 + fVar59 * fVar50);
                    *(ulong *)(pcVar35 + 0x3b8) =
                         CONCAT44((float)((ulong)uVar43 >> 0x20) +
                                  fVar54 * fVar63 + fVar58 * fVar66 + fVar62 * fVar67,
                                  (float)uVar43 +
                                  fVar53 * fVar63 + fVar57 * fVar66 + fVar61 * fVar67);
                    *(ulong *)(pcVar35 + 0x3b0) =
                         CONCAT44((float)((ulong)uVar17 >> 0x20) +
                                  fVar52 * fVar63 + fVar56 * fVar66 + fVar60 * fVar67,
                                  (float)uVar17 +
                                  fVar51 * fVar63 + fVar55 * fVar66 + fVar59 * fVar67);
                  }
                  uVar17 = FUN_00269704(uVar40,*(undefined8 *)(pcVar35 + 0x98),lVar37 + 0x88,
                                        lVar37 + 200,lVar37 + 0x108,(char *)(lVar25 + lVar18),
                                        pcVar35,0);
                  pcVar35[0x5f8] = -1;
                  pcVar35[0x5f9] = -1;
                  pcVar35[0x5fa] = -1;
                  pcVar35[0x5fb] = -1;
                  pcVar35[0x5e8] = '\0';
                  pcVar35[0x5e9] = '\0';
                  pcVar35[0x5ea] = '\0';
                  pcVar35[0x5eb] = '\0';
                  pcVar35[0x5ec] = '\0';
                  pcVar35[0x5ed] = '\0';
                  pcVar35[0x5ee] = '\0';
                  pcVar35[0x5ef] = '\0';
                  pcVar35[0x5f0] = '\0';
                  pcVar35[0x5f1] = '\0';
                  pcVar35[0x5f2] = '\0';
                  pcVar35[0x5f3] = '\0';
                  pcVar35[0x5f4] = '\0';
                  pcVar35[0x5f5] = '\0';
                  pcVar35[0x5f6] = '\0';
                  pcVar35[0x5f7] = '\0';
                }
              }
LAB_0026aeec:
              lVar39 = lVar39 + 1;
              lVar1 = lVar1 + 8;
              lVar25 = lVar25 + 1;
              lVar2 = lVar2 + 4;
              if (*(int *)(*(long *)(param_2 + 0x238) + 0x88) <= lVar39) break;
              pcVar35 = *(char **)(lVar1 + lVar18);
            }
          }
          iVar30 = iVar30 + 1;
          lVar31 = *(long *)(param_2 + 0x240);
        }
        if (((lVar31 != 0) && (*piVar19 != 0)) &&
           (lVar31 = *(long *)(param_2 + 0x238), 0 < *(int *)(lVar31 + 0x88))) {
          plVar23 = (long *)(lVar21 + uVar33 * 0x158);
          lVar21 = 0;
          lVar25 = *plVar23;
          do {
            if (((lVar25 != 0) &&
                (*(char *)(*(long *)(*(long *)(param_2 + 0x240 + lVar21 * 8) + 0x10) + 0x7e4) !=
                 '\0')) &&
               ((*(long *)(lVar25 + 0x98) != 0 &&
                (*(int *)(lVar25 + 0x550) == *(int *)(param_2 + 0x14))))) {
              *(float *)(lVar25 + 0x564) = *(float *)(param_2 + 0x44) - *pfVar36;
              *(float *)(lVar25 + 0x55c) = *pfVar38;
              cVar10 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
              if (cVar10 == '\0') {
                puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + uVar33 * 0x10);
                uVar17 = *puVar34;
                fVar66 = *(float *)(puVar34 + 1);
LAB_0026aec8:
                uVar20 = (ulong)(uint)fVar66;
              }
              else {
                if ((*(long *)(param_2 + 0x210) != 0) &&
                   ((long)uVar33 <= (long)*(int *)(param_2 + 0x28))) {
                  lVar31 = uVar33 * 0x10;
                  puVar3 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar31);
                  puVar4 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar31);
                  puVar5 = (uint *)(*(long *)(param_2 + 0x220) + lVar31);
                  uStack_180 = CONCAT44(*puVar4,*puVar3);
                  uStack_178 = (ulong)*puVar5;
                  local_190 = CONCAT44(puVar4[1],puVar3[1]);
                  uStack_188 = (ulong)puVar5[1];
                  local_1a0 = CONCAT44(puVar4[2],puVar3[2]);
                  uStack_198 = (ulong)puVar5[2];
                  local_1b0 = CONCAT44(puVar4[3],puVar3[3]);
                  uStack_1a8 = (ulong)puVar5[3];
                }
                puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + uVar33 * 0x10);
                uVar17 = *puVar34;
                fVar66 = *(float *)(puVar34 + 1);
                if (cVar10 != '\x01') goto LAB_0026aec8;
                fVar67 = (float)uVar17;
                fVar41 = (float)((ulong)uVar17 >> 0x20);
                uVar17 = CONCAT44((float)((ulong)local_1b0 >> 0x20) +
                                  (float)((ulong)uStack_180 >> 0x20) * fVar67 +
                                  (float)((ulong)local_190 >> 0x20) * fVar41 +
                                  (float)((ulong)local_1a0 >> 0x20) * fVar66,
                                  (float)local_1b0 +
                                  (float)uStack_180 * fVar67 + (float)local_190 * fVar41 +
                                  (float)local_1a0 * fVar66);
                uVar20 = CONCAT44((float)(uStack_1a8 >> 0x20) +
                                  (float)(uStack_178 >> 0x20) * fVar67 +
                                  (float)(uStack_188 >> 0x20) * fVar41 +
                                  (float)(uStack_198 >> 0x20) * fVar66,
                                  (float)uStack_1a8 +
                                  (float)uStack_178 * fVar67 + (float)uStack_188 * fVar41 +
                                  (float)uStack_198 * fVar66);
              }
              *(ulong *)(lVar25 + 0x5c8) = uVar20;
              *(undefined8 *)(lVar25 + 0x5c0) = uVar17;
              puVar34 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + uVar33 * 0x10);
              uVar17 = *puVar34;
              uVar43 = *(undefined8 *)(param_2 + 0x380);
              uVar44 = *(undefined8 *)(param_2 + 0x390);
              fVar67 = (float)uVar17;
              fVar66 = *(float *)(puVar34 + 1);
              uVar48 = *(undefined8 *)(param_2 + 0x3a0);
              fVar41 = (float)((ulong)uVar17 >> 0x20);
              *(ulong *)(lVar25 + 0x5d8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x388) >> 0x20) * fVar67 +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x398) >> 0x20) * fVar41 +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x3a8) >> 0x20) * fVar66,
                            (float)*(undefined8 *)(param_2 + 0x388) * fVar67 +
                            (float)*(undefined8 *)(param_2 + 0x398) * fVar41 +
                            (float)*(undefined8 *)(param_2 + 0x3a8) * fVar66);
              *(ulong *)(lVar25 + 0x5d0) =
                   CONCAT44((float)((ulong)uVar43 >> 0x20) * fVar67 +
                            (float)((ulong)uVar44 >> 0x20) * fVar41 +
                            (float)((ulong)uVar48 >> 0x20) * fVar66,
                            (float)uVar43 * fVar67 + (float)uVar44 * fVar41 + (float)uVar48 * fVar66
                           );
              lVar31 = *(long *)(param_2 + 0x238);
            }
            lVar21 = lVar21 + 1;
            if (*(int *)(lVar31 + 0x88) <= lVar21) break;
            lVar25 = plVar23[lVar21];
          } while( true );
        }
      }
      uVar20 = (ulong)*(int *)(param_2 + 0x28);
      uVar33 = uVar33 + 1;
      lVar18 = lVar18 + 0x158;
      if ((long)uVar20 <= (long)uVar33) goto LAB_0026b3ac;
      piVar19 = (int *)(*(long *)(param_2 + 0xb0) + uVar33 * 0x20);
      iVar9 = *piVar19;
    } while( true );
  }
  goto LAB_0026b3c4;
LAB_0026b3ac:
  if (iVar30 != 0) {
    *(int *)(param_2 + 0x2c) = iVar30;
    cVar10 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
    goto joined_r0x0026b3bc;
  }
LAB_0026b3c4:
  uVar20 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x234) = 0;
  cVar10 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
joined_r0x0026b3bc:
  if (cVar10 == '\0') {
    puVar34 = *(undefined8 **)(param_2 + 0xc0);
    uVar33 = -(uVar20 >> 0x1f & 1) & 0xfffffff000000000 | (uVar20 & 0xffffffff) << 4;
    memcpy((void *)*puVar34,*(void **)(param_2 + 0x1d0),uVar33);
    memcpy((void *)puVar34[1],*(void **)(param_2 + 0x1d8),uVar33);
    memcpy((void *)puVar34[2],*(void **)(param_2 + 0x1e0),uVar33);
    memcpy((void *)puVar34[4],*(void **)(param_2 + 0x1f0),uVar33);
    memcpy((void *)puVar34[3],*(void **)(param_2 + 0x1e8),uVar33);
    memcpy((void *)puVar34[5],*(void **)(param_2 + 0x1f8),uVar33);
    if ((void *)puVar34[6] != (void *)0x0) {
      memcpy((void *)puVar34[6],*(void **)(param_2 + 0x200),uVar33);
      memcpy((void *)puVar34[7],*(void **)(param_2 + 0x208),uVar33);
    }
    if ((void *)puVar34[8] != (void *)0x0) {
      memcpy((void *)puVar34[8],*(void **)(param_2 + 0x210),uVar33);
      memcpy((void *)puVar34[9],*(void **)(param_2 + 0x218),uVar33);
      memcpy((void *)puVar34[10],*(void **)(param_2 + 0x220),uVar33);
    }
  }
  return;
}


