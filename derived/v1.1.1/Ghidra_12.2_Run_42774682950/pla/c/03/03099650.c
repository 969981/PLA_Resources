/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03099650; name: FUN_03099650
 */


void FUN_03099650(long param_1,long param_2,undefined4 *param_3,long param_4,uint param_5,
                 undefined8 param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  long lVar16;
  bool bVar17;
  undefined1 *puVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  short *psVar24;
  int iVar25;
  undefined4 uVar26;
  long lVar27;
  byte *pbVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  ulong uVar33;
  ulong *puVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  long *plVar37;
  uint uVar38;
  uint *puVar39;
  undefined2 *puVar40;
  ulong uVar41;
  ushort *puVar42;
  float fVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined8 uVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  float fVar60;
  double dVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  long local_558;
  float local_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  undefined8 *local_4b8;
  undefined4 *local_498 [19];
  undefined1 auStack_400 [64];
  undefined1 auStack_3c0 [64];
  undefined8 local_380;
  undefined8 uStack_378;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined1 local_2e0 [16];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  long local_2b0;
  uint local_2a8;
  char local_2a4;
  undefined1 auStack_2a0 [16];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  ulong uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 local_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  ulong uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 local_190;
  ulong uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 *local_110;
  undefined1 *local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 *local_c0;
  double *local_b8;
  
  lVar16 = DAT_04434b38;
  local_b8 = (double *)0x0;
  local_c0 = &LAB_0301fa00;
  local_140 = (float)*(undefined8 *)(param_3 + 0xe);
  local_13c = (float)param_3[0x1f] * local_140;
  local_138 = (undefined4)*(undefined8 *)(param_3 + 0x10);
  local_134 = (undefined4)*(undefined8 *)(param_3 + 4);
  local_130 = (undefined4)*(undefined8 *)(param_3 + 6);
  local_12c = (float)param_3[0x1d];
  local_128 = local_12c * (float)(int)param_3[0x1e];
  local_124 = (undefined4)*(undefined8 *)(param_3 + 0x34);
  local_120 = (undefined4)*(undefined8 *)(param_3 + 0x36);
  local_d0 = *param_3;
  local_110 = auStack_1f0;
  local_c8 = 0x7fff00007fff;
  local_108 = auStack_2a0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2a4 = '\0';
  local_2c0 = 0x7fffffff7fffffff;
  local_cc = (undefined4)*(undefined8 *)(param_3 + 2);
  lVar27 = tpidr_el0;
  lVar21 = *(long *)(lVar27 + 0x38d490);
  local_2b8 = param_6;
  local_2b0 = param_4;
  local_2a8 = param_5;
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar27 + 0x38d490) = lVar21;
  }
  lVar27 = *(long *)(lVar21 + 0x10);
  if (*(ulong *)(lVar27 + 8) < *(ulong *)(lVar27 + 0x18)) {
    bVar17 = *(int *)(param_1 + 0x790) != 0;
    bVar14 = false;
    if (*(int *)(param_1 + 0x780) != 0) {
      if (lVar27 == 0) {
        bVar14 = true;
      }
      else {
        lVar21 = (long)*(int *)(param_1 + 0x780) << 2;
        puVar36 = *(undefined4 **)(param_1 + 0x778);
        do {
          uVar26 = *puVar36;
          local_498[0] = (undefined4 *)0x0;
          FUN_032d5c74(lVar27,&DAT_038f7b98,local_498,&DAT_04356710,4,4);
          if (local_498[0] != (undefined4 *)0x0) {
            *local_498[0] = uVar26;
          }
          puVar36 = puVar36 + 1;
          lVar21 = lVar21 + -4;
          bVar14 = true;
        } while (lVar21 != 0);
      }
    }
  }
  else {
    bVar17 = false;
    bVar14 = false;
  }
  if (0 < (int)param_5) {
    auVar45 = NEON_fmov(0x3f800000,4);
    iVar29 = 0x30;
    puVar36 = &local_2f0;
    if (!bVar17) {
      iVar29 = 0;
      puVar36 = (undefined4 *)0x0;
    }
    fStack_508 = auVar45._8_4_;
    fStack_504 = auVar45._12_4_;
    local_510 = auVar45._0_4_;
    fStack_50c = auVar45._4_4_;
    uVar41 = 0;
    do {
      plVar37 = (long *)(param_4 + uVar41 * 0x68);
      puVar42 = (ushort *)((long)plVar37 + 0x42);
      if (((*(byte *)puVar42 >> 2 & 1) != 0) &&
         ((puVar39 = (uint *)(param_4 + uVar41 * 0x68 + 8), (~*puVar39 & 0xffffff) != 0 ||
          ((~*(uint *)(param_4 + uVar41 * 0x68 + 0x18) & 0xffffff) != 0)))) {
        lVar21 = *plVar37;
        puVar34 = (ulong *)(param_4 + uVar41 * 0x68 + 8);
        uVar33 = *puVar34;
        uVar32 = (uint)uVar33;
        if (lVar21 == -1) {
          lVar22 = lVar16 + 0x9c0;
        }
        else {
          uVar38 = uVar32 & 0xffffff;
          if ((((uVar38 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar38)) ||
              (lVar22 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar22 + (ulong)uVar38 * 0xc0 + 0x54) & 3) == 0)) ||
             (*(uint *)(lVar22 + (ulong)uVar38 * 0xc0 + 0x50) != uVar32)) {
            if (lVar21 < 0) {
              uVar32 = (uint)lVar21;
            }
            else {
              uVar33 = FUN_032c0fa4(param_2 + 0x948,lVar21,local_498);
              if ((uVar33 & 1) == 0) {
                uVar32 = 0xffffff;
              }
              else {
                uVar32 = (uint)local_498[0];
              }
            }
            uVar38 = uVar32 & 0xffffff;
            if (((uVar38 == 0xffffff) || (*puVar39 = uVar32, *(uint *)(param_2 + 0x40) <= uVar38))
               || ((lVar22 = *(long *)(param_2 + 0x38),
                   (*(byte *)(lVar22 + (ulong)uVar38 * 0xc0 + 0x54) & 3) == 0 ||
                   (*(uint *)(lVar22 + (ulong)uVar38 * 0xc0 + 0x50) != uVar32)))) goto LAB_03099900;
            uVar33 = *puVar34;
          }
          lVar22 = lVar22 + (uVar33 & 0xffffff) * 0xc0;
          if ((*(byte *)(lVar22 + 0x88) & 1) == 0) goto LAB_03099900;
        }
        lVar21 = plVar37[2];
        uVar33 = plVar37[3];
        uVar38 = (uint)uVar33;
        if (lVar21 == -1) {
          lVar23 = lVar16 + 0x9c0;
        }
        else {
          uVar20 = uVar38 & 0xffffff;
          if (((uVar20 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar20)) ||
             ((lVar23 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar23 + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0 ||
              (*(uint *)(lVar23 + (ulong)uVar20 * 0xc0 + 0x50) != uVar38)))) {
            if (lVar21 < 0) {
              uVar38 = (uint)lVar21;
            }
            else {
              uVar33 = FUN_032c0fa4(param_2 + 0x948,lVar21,local_498);
              if ((uVar33 & 1) == 0) {
                uVar38 = 0xffffff;
              }
              else {
                uVar38 = (uint)local_498[0];
              }
            }
            uVar20 = uVar38 & 0xffffff;
            if ((((uVar20 == 0xffffff) ||
                 (*(uint *)(plVar37 + 3) = uVar38, *(uint *)(param_2 + 0x40) <= uVar20)) ||
                (lVar23 = *(long *)(param_2 + 0x38),
                (*(byte *)(lVar23 + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0)) ||
               (*(uint *)(lVar23 + (ulong)uVar20 * 0xc0 + 0x50) != uVar38)) goto LAB_03099900;
            uVar33 = plVar37[3];
          }
          lVar23 = lVar23 + (uVar33 & 0xffffff) * 0xc0;
          if ((*(byte *)(lVar23 + 0x88) & 1) == 0) goto LAB_03099900;
        }
        if (((*(byte *)(lVar22 + 0x54) & 5) == 0) || ((*(byte *)(lVar23 + 0x54) & 5) == 0)) {
          iVar2 = *(int *)(lVar23 + 0x80);
          iVar3 = *(int *)(lVar22 + 0x80);
          if (iVar3 != iVar2) {
            puVar35 = (undefined8 *)(*(long *)(param_2 + 0x150) + (long)iVar3 * 0x80);
            iVar30 = *(int *)((long)puVar35 + 0x4c);
            puVar1 = (undefined8 *)(*(long *)(param_2 + 0x150) + (long)iVar2 * 0x80);
            bVar4 = *(byte *)((long)puVar1 + 0x5e);
            bVar5 = *(byte *)((long)puVar35 + 0x5e);
            if (iVar30 == 0x7fffffff) {
              iVar30 = 0;
            }
            iVar31 = *(int *)((long)puVar1 + 0x4c);
            if (iVar31 == 0x7fffffff) {
              iVar31 = 0;
            }
            local_100 = lVar22;
            local_f8 = lVar23;
            if (bVar17 || bVar14) {
              FUN_03099530(plVar37,lVar22,lVar23,&local_2f0);
            }
            if (lVar27 != 0 && bVar14) {
              FUN_032d5af0(lVar27,&DAT_0398be87,2);
              local_498[0] = (undefined4 *)0x0;
              FUN_032d5c74(lVar27,&DAT_038f7b98,local_498,&DAT_04356660,0x18,4);
              if (local_498[0] != (undefined4 *)0x0) {
                *local_498[0] = local_2f0;
                local_498[0][1] = uStack_2ec;
                local_498[0][2] = uStack_2e8;
                *(long *)(local_498[0] + 3) = local_2e0._0_8_;
                local_498[0][5] = local_2e0._8_4_;
              }
            }
            local_300 = *(undefined8 *)(param_4 + uVar41 * 0x68 + 0x58);
            local_2f8 = local_300;
            if (((param_8 != 0) && ((*(byte *)(lVar22 + 0x54) & 1) == 0)) &&
               ((*(byte *)(lVar23 + 0x54) & 1) == 0)) {
              if (*(int *)(param_8 + 0x18) < 0xed9) {
                piVar19 = (int *)(*(long *)(param_8 + 0x10) + (long)*(int *)(param_8 + 0x18) + 0x20)
                ;
              }
              else {
                piVar19 = (int *)FUN_032bf82c(param_8);
              }
              *piVar19 = iVar3;
              piVar19[1] = iVar2;
              *(int *)(param_8 + 0x18) = *(int *)(param_8 + 0x18) + 8;
              *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
            }
            uStack_328 = auVar45._8_8_;
            local_330 = auVar45._0_8_;
            lVar21 = *(long *)(param_1 + 0x40);
            uVar6 = *puVar42;
            local_320 = local_330;
            uStack_318 = uStack_328;
            if ((*(uint *)(lVar21 + 0x948) & (uint)uVar6) == 0) {
              uVar20 = (uint)*(ushort *)(param_4 + uVar41 * 0x68 + 0x52);
              bVar15 = false;
              iVar25 = 0;
            }
            else {
              local_4b8 = (undefined8 *)(lVar21 + 0x958);
              local_558 = 1;
              while( true ) {
                if ((uVar6 & *(ushort *)(local_4b8 + -1)) != 0) {
                  (**(code **)(*(long *)*local_4b8 + 0x68))
                            ((long *)*local_4b8,param_1,plVar37,&local_320,&local_330);
                }
                if (*(int *)(lVar21 + 0x94c) <= local_558) break;
                local_558 = local_558 + 1;
                uVar6 = *puVar42;
                local_4b8 = local_4b8 + 2;
              }
              if (uStack_318._4_4_ == fStack_504 &&
                  ((float)uStack_318 == fStack_508 &&
                  ((float)local_320 == local_510 && local_320._4_4_ == fStack_50c))) {
                uVar20 = (uint)*(ushort *)(param_4 + uVar41 * 0x68 + 0x52);
                if (!(uStack_328._4_4_ != fStack_504 ||
                     ((float)uStack_328 != fStack_508 ||
                     ((float)local_330 != local_510 || local_330._4_4_ != fStack_50c)))) {
                  iVar25 = 0;
                  bVar15 = false;
                  goto LAB_03099af8;
                }
              }
              else {
                uVar20 = (uint)*(ushort *)(param_4 + uVar41 * 0x68 + 0x52);
              }
              iVar25 = 0x40;
              bVar15 = true;
            }
LAB_03099af8:
            if ((int)(uVar20 + iVar29 + iVar25 + *(int *)(param_7 + 0x18)) < 0xee1) {
              puVar18 = (undefined1 *)
                        (*(long *)(param_7 + 0x10) + (long)*(int *)(param_7 + 0x18) + 0x20);
            }
            else {
              puVar18 = (undefined1 *)FUN_032bf82c(param_7);
            }
            *puVar18 = 1;
            if ((*(byte *)puVar42 >> 1 & 1) == 0) {
              uVar26 = *(undefined4 *)(param_4 + uVar41 * 0x68 + 0x30);
            }
            else {
              uVar26 = 0x7fffffff;
            }
            *(undefined4 *)(puVar18 + 0x10) = uVar26;
            lVar21 = param_4 + uVar41 * 0x68;
            *(undefined8 *)(puVar18 + 0x18) = local_300;
            puVar18[0x2a] = 0;
            *(undefined2 *)(puVar18 + 0x28) = *(undefined2 *)(lVar21 + 0x40);
            pbVar28 = (byte *)(lVar21 + 0x55);
            puVar18[0xf] = *pbVar28 & 0x1f;
            puVar18[1] = 8;
            local_308 = puVar18 + 0x30;
            bVar7 = (byte)((uint)bVar4 - (uint)bVar5 >> 0x18);
            *(int *)(puVar18 + 4) = iVar30;
            *(int *)(puVar18 + 8) = iVar31;
            puVar18[0xc] = bVar5;
            puVar18[0xd] = bVar4;
            puVar18[0x20] = bVar7 >> 4 & 8;
            puVar18[2] = *(byte *)puVar42;
            if ((long)(uVar41 + 1) < (long)(int)local_2a8) {
              uVar26 = *(undefined4 *)(param_4 + (uVar41 + 1) * 0x68 + 0x34);
            }
            else {
              uVar26 = 0x7fffffff;
            }
            FUN_0309a694(&local_2d0,*(undefined4 *)(param_4 + uVar41 * 0x68 + 0x34),uVar26,puVar18);
            local_348 = 0.0;
            dVar51 = (double)*(float *)(lVar22 + 0x30) + (double)*(float *)(lVar22 + 0x40);
            dVar48 = (double)*(float *)(lVar22 + 0x34) + (double)*(float *)(lVar22 + 0x44);
            dVar44 = (double)*(float *)(lVar22 + 0x3c) + (double)*(float *)(lVar22 + 0x4c);
            dVar50 = (double)*(float *)(lVar22 + 0x38) + (double)*(float *)(lVar22 + 0x48);
            if (*(int *)((long)puVar35 + 0x4c) == 0) {
              local_360 = dVar51;
              local_358 = dVar48;
              local_350 = dVar50;
              local_348 = dVar44;
              if ((~uVar32 & 0xffffff) == 0) {
                psVar24 = *(short **)(param_4 + uVar41 * 0x68 + 0x48);
                if (*psVar24 == 3) {
                  uVar52 = *(undefined8 *)(psVar24 + 0xc);
                  uVar63 = *(undefined8 *)(psVar24 + 8);
                }
                else {
                  if (*psVar24 != 2) goto LAB_03099ca8;
                  uVar52 = *(undefined8 *)(psVar24 + 0x24);
                  uVar63 = *(undefined8 *)(psVar24 + 0x20);
                }
                local_360 = dVar51 + (double)(float)uVar63;
                local_358 = dVar48 + (double)(float)((ulong)uVar63 >> 0x20);
                local_350 = dVar50 + (double)(float)uVar52;
                local_348 = dVar44 + (double)(float)((ulong)uVar52 >> 0x20);
              }
            }
            else {
              local_360 = (double)puVar35[2];
              local_358 = (double)puVar35[3];
              local_350 = (double)puVar35[4];
            }
LAB_03099ca8:
            dVar56 = (double)*(float *)(lVar23 + 0x30) +
                     (double)(float)*(undefined8 *)(lVar23 + 0x40);
            dVar55 = (double)*(float *)(lVar23 + 0x34) +
                     (double)(float)((ulong)*(undefined8 *)(lVar23 + 0x40) >> 0x20);
            dVar54 = (double)*(float *)(lVar23 + 0x38) +
                     (double)(float)*(undefined8 *)(lVar23 + 0x48);
            dVar53 = (double)*(float *)(lVar23 + 0x3c) +
                     (double)(float)((ulong)*(undefined8 *)(lVar23 + 0x48) >> 0x20);
            dVar57 = 0.0;
            dVar58 = (double)puVar1[2];
            dVar59 = (double)puVar1[3];
            dVar61 = (double)puVar1[4];
            if (*(int *)((long)puVar1 + 0x4c) == 0) {
              dVar57 = dVar53;
              dVar58 = dVar56;
              dVar59 = dVar55;
              dVar61 = dVar54;
              if ((~uVar38 & 0xffffff) == 0) {
                psVar24 = *(short **)(param_4 + uVar41 * 0x68 + 0x48);
                if (*psVar24 == 3) {
                  uVar52 = *(undefined8 *)(psVar24 + 0x14);
                  uVar63 = *(undefined8 *)(psVar24 + 0x10);
                }
                else {
                  if (*psVar24 != 2) goto LAB_03099cc0;
                  uVar52 = *(undefined8 *)(psVar24 + 0x44);
                  uVar63 = *(undefined8 *)(psVar24 + 0x40);
                }
                dVar58 = dVar56 + (double)(float)uVar63;
                dVar59 = dVar55 + (double)(float)((ulong)uVar63 >> 0x20);
                dVar61 = dVar54 + (double)(float)uVar52;
                dVar57 = dVar53 + (double)(float)((ulong)uVar52 >> 0x20);
              }
            }
LAB_03099cc0:
            uStack_1d8 = puVar35[0xd];
            local_1e0 = puVar35[0xc];
            uStack_1c8 = puVar35[0xf];
            local_1d0 = puVar35[0xe];
            uVar63 = puVar35[8];
            fVar62 = (float)((int)(short)uVar63 << 0x10);
            fVar64 = (float)((int)(short)((ulong)uVar63 >> 0x10) << 0x10);
            local_1c0 = CONCAT44(fVar64,fVar62);
            fVar65 = (float)((int)(short)((ulong)uVar63 >> 0x20) << 0x10);
            fVar66 = (float)((int)(short)((ulong)uVar63 >> 0x30) << 0x10);
            uStack_1b8 = CONCAT44(fVar66,fVar65);
            fVar67 = -(float)*puVar35;
            fVar69 = -(float)((ulong)*puVar35 >> 0x20);
            fVar71 = -(float)puVar35[1];
            fVar43 = (float)((ulong)puVar35[1] >> 0x20);
            uStack_148 = puVar35[6];
            local_150 = puVar35[5];
            fVar73 = fVar67 + fVar67;
            fVar74 = fVar69 + fVar69;
            fVar75 = fVar71 + fVar71;
            uStack_160 = puVar35[7];
            auVar76._4_4_ = fVar69;
            auVar76._0_4_ = fVar67;
            auVar76._8_4_ = fVar71;
            auVar76._12_4_ = fVar43;
            auVar77._4_4_ = fVar69;
            auVar77._0_4_ = fVar67;
            auVar77._8_4_ = fVar71;
            auVar77._12_4_ = fVar43;
            auVar76 = NEON_ext(auVar76,auVar77,8,1);
            auVar10._4_4_ = fVar74;
            auVar10._0_4_ = fVar73;
            auVar10._8_4_ = fVar75;
            auVar10._12_4_ = fVar43 + fVar43;
            auVar11._4_4_ = fVar74;
            auVar11._0_4_ = fVar73;
            auVar11._8_4_ = fVar75;
            auVar11._12_4_ = fVar43 + fVar43;
            auVar77 = NEON_ext(auVar10,auVar11,8,1);
            uStack_158 = uStack_148 >> 0x20;
            fVar68 = auVar76._0_4_ * auVar77._0_4_;
            uVar63 = NEON_fmov(0x3f800000,4);
            fVar60 = (float)uVar63;
            uStack_1a0 = CONCAT44(fVar60 - (fVar73 * fVar67 + fVar68),
                                  fVar74 * fVar67 - fVar75 * fVar43);
            uStack_1a8 = (ulong)(uint)(fVar75 * fVar67 - fVar74 * fVar43);
            local_1b0 = CONCAT44(fVar74 * fVar67 + fVar75 * fVar43,
                                 fVar60 - (fVar74 * fVar69 + fVar68));
            uStack_198 = (ulong)(uint)(fVar75 * fVar69 + fVar73 * fVar43);
            uStack_188 = (ulong)(uint)(fVar60 - (fVar73 * fVar67 + fVar74 * fVar69));
            local_190 = CONCAT44(fVar75 * fVar69 - fVar73 * fVar43,fVar75 * fVar67 + fVar74 * fVar43
                                );
            local_178 = 0;
            local_180 = 0;
            uStack_168 = CONCAT44(fVar43,fVar71);
            local_170 = CONCAT44(fVar69,fVar67);
            uStack_288 = puVar1[0xd];
            local_290 = puVar1[0xc];
            local_f0 = CONCAT44((float)(dVar48 - local_358),(float)(dVar51 - local_360));
            local_280 = puVar1[0xe];
            uStack_278 = puVar1[0xf];
            uStack_e0 = CONCAT44((float)(dVar55 - local_358),(float)(dVar56 - local_360));
            uVar63 = puVar1[8];
            fVar43 = (float)((int)(short)uVar63 << 0x10);
            fVar67 = (float)((int)(short)((ulong)uVar63 >> 0x10) << 0x10);
            auVar46._0_8_ = CONCAT44(fVar67,fVar43);
            auVar46._8_4_ = (float)((int)(short)((ulong)uVar63 >> 0x20) << 0x10);
            auVar46._12_4_ = (float)((int)(short)((ulong)uVar63 >> 0x30) << 0x10);
            fVar69 = (float)((ulong)puVar1[1] >> 0x20);
            fVar71 = -(float)*puVar1;
            fVar73 = -(float)((ulong)*puVar1 >> 0x20);
            fVar74 = -(float)puVar1[1];
            uStack_e8 = CONCAT44((float)(dVar44 - local_348),(float)(dVar50 - local_350));
            local_210 = puVar1[7];
            uStack_230 = CONCAT44((float)(dVar59 - local_358),(float)(dVar58 - local_360));
            uStack_d8 = CONCAT44((float)(dVar53 - local_348),(float)(dVar54 - local_350));
            uStack_1f8 = puVar1[6];
            uStack_200 = puVar1[5];
            fVar75 = fVar71 + fVar71;
            fVar70 = fVar73 + fVar73;
            fVar72 = fVar74 + fVar74;
            auVar12._4_4_ = fVar73;
            auVar12._0_4_ = fVar71;
            auVar12._8_4_ = fVar74;
            auVar12._12_4_ = fVar69;
            auVar13._4_4_ = fVar73;
            auVar13._0_4_ = fVar71;
            auVar13._8_4_ = fVar74;
            auVar13._12_4_ = fVar69;
            auVar77 = NEON_ext(auVar12,auVar13,8,1);
            uStack_208 = uStack_1f8 >> 0x20;
            auVar8._4_4_ = fVar70;
            auVar8._0_4_ = fVar75;
            auVar8._8_4_ = fVar72;
            auVar8._12_4_ = fVar69 + fVar69;
            auVar9._4_4_ = fVar70;
            auVar9._0_4_ = fVar75;
            auVar9._8_4_ = fVar72;
            auVar9._12_4_ = fVar69 + fVar69;
            auVar76 = NEON_ext(auVar8,auVar9,8,1);
            fVar68 = auVar77._0_4_ * auVar76._0_4_;
            uStack_228 = CONCAT44((float)(dVar57 - local_348),(float)(dVar61 - local_350));
            uStack_218 = CONCAT44(fVar69,fVar74);
            local_220 = CONCAT44(fVar73,fVar71);
            uStack_258 = (ulong)(uint)(fVar72 * fVar71 - fVar70 * fVar69);
            uStack_248 = (ulong)(uint)(fVar72 * fVar73 + fVar75 * fVar69);
            uStack_250 = CONCAT44(fVar60 - (fVar75 * fVar71 + fVar68),
                                  fVar70 * fVar71 - fVar72 * fVar69);
            local_260 = CONCAT44(fVar70 * fVar71 + fVar72 * fVar69,
                                 fVar60 - (fVar70 * fVar73 + fVar68));
            uStack_238 = (ulong)(uint)(fVar60 - (fVar75 * fVar71 + fVar70 * fVar73));
            local_240 = CONCAT44(fVar72 * fVar73 - fVar75 * fVar69,fVar72 * fVar71 + fVar70 * fVar69
                                );
            local_b8 = &local_360;
            local_270 = auVar46._0_8_;
            uStack_268 = auVar46._8_8_;
            if (bVar15) {
              auVar49._0_8_ =
                   CONCAT44(fVar64 * (float)((ulong)local_320 >> 0x20),fVar62 * (float)local_320);
              auVar49._8_4_ = fVar65 * (float)uStack_318;
              auVar49._12_4_ = fVar66 * (float)((ulong)uStack_318 >> 0x20);
              auVar47._0_8_ =
                   CONCAT44((float)((ulong)local_330 >> 0x20) * fVar67,(float)local_330 * fVar43);
              auVar47._8_4_ = (float)uStack_328 * auVar46._8_4_;
              auVar47._12_4_ = (float)((ulong)uStack_328 >> 0x20) * auVar46._12_4_;
              uStack_1b8 = auVar49._8_8_;
              uStack_268 = auVar47._8_8_;
              local_380 = auVar46._0_8_;
              uStack_378 = auVar46._8_8_;
              fStack_370 = fVar62;
              fStack_36c = fVar64;
              fStack_368 = fVar65;
              fStack_364 = fVar66;
              local_270 = auVar47._0_8_;
              local_1c0 = auVar49._0_8_;
              FUN_0301f9d0(&local_1c0,&local_270,&local_308);
            }
            lVar21 = param_4 + uVar41 * 0x68;
            local_498[0] = (undefined4 *)((ulong)local_498[0] & 0xffffffff00000000);
            puVar35 = (undefined8 *)(lVar21 + 0x48);
            puVar40 = (undefined2 *)(lVar21 + 0x50);
            FUN_0301fa10(*puVar35,*puVar40,auStack_3c0,auStack_400,local_498,&local_140,&local_308,
                         plVar37,puVar36);
            if (local_2a4 != '\0') {
              bVar7 = bVar7 >> 7;
              if (lVar27 == 0) {
                FUN_0309df60(*puVar35,*puVar40,auStack_3c0,auStack_400,local_498,&local_140,
                             &local_308,plVar37,local_2c8,iVar3,iVar2,iVar30,iVar31,bVar7);
              }
              else {
                FUN_032d5af0(lVar27,"TtPrepareConstraintGroupDirectSolving",0x25);
                FUN_0309df60(*puVar35,*puVar40,auStack_3c0,auStack_400,local_498,&local_140,
                             &local_308,plVar37,local_2c8,iVar3,iVar2,iVar30,iVar31,bVar7);
                FUN_032d5b34(lVar27,&DAT_0390f40e);
              }
            }
            if (bVar15) {
              FUN_0301f9d0(&fStack_370,&local_380,&local_308);
            }
            *(uint *)(param_7 + 0x28) = *(int *)(param_7 + 0x28) + (*pbVar28 & 0x1f) * 4;
            uVar32 = (int)local_308 - (int)puVar18;
            puVar18[0xe] = (char)(uVar32 >> 4);
            *(uint *)(param_7 + 0x18) = *(int *)(param_7 + 0x18) + uVar32;
            *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
            if ((bool)(lVar27 != 0 & bVar14)) {
              FUN_032d5b34(lVar27,&DAT_0390f40e);
            }
          }
        }
      }
LAB_03099900:
      uVar41 = uVar41 + 1;
    } while (uVar41 != param_5);
  }
  return;
}


