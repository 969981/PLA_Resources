/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309a860; name: FUN_0309a860
 */


void FUN_0309a860(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                 int param_6,int param_7,long *param_8,undefined8 param_9,long param_10)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  bool bVar17;
  undefined1 *puVar18;
  uint *puVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  short *psVar25;
  int iVar26;
  undefined4 uVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  undefined2 *puVar37;
  undefined4 *puVar38;
  long lVar39;
  ushort *puVar40;
  undefined8 *puVar41;
  byte *pbVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  long lVar46;
  float fVar47;
  double dVar48;
  undefined8 uVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined8 uVar53;
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  undefined8 uVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  float fVar64;
  double dVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 *local_518 [19];
  undefined1 auStack_480 [64];
  undefined1 auStack_440 [64];
  undefined8 local_400;
  undefined8 uStack_3f8;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  long local_330;
  int local_328;
  char local_324;
  long local_320;
  undefined2 local_318;
  undefined2 uStack_316;
  int iStack_314;
  long local_310;
  undefined4 local_308;
  int iStack_304;
  long local_2f8 [2];
  long local_2e8;
  int local_2e0;
  int local_2dc;
  long local_2d0 [2];
  long local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2a8;
  float local_2a0;
  float local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  float local_28c;
  float local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 *local_270;
  undefined1 *local_268;
  long local_260;
  long local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined1 *local_220;
  double *local_218;
  undefined1 auStack_200 [16];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  
  if ((int)param_5[1] == 0) {
    return;
  }
  local_218 = (double *)0x0;
  local_220 = &LAB_0301fa00;
  local_2a0 = (float)*(undefined8 *)(param_2 + 0x568);
  local_29c = *(float *)(param_2 + 0x5ac) * local_2a0;
  local_298 = (undefined4)*(undefined8 *)(param_2 + 0x570);
  local_294 = (undefined4)*(undefined8 *)(param_2 + 0x540);
  local_290 = (undefined4)*(undefined8 *)(param_2 + 0x548);
  local_28c = *(float *)(param_2 + 0x5a4);
  local_288 = local_28c * (float)*(int *)(param_2 + 0x5a8);
  local_284 = (undefined4)*(undefined8 *)(param_2 + 0x600);
  local_280 = (undefined4)*(undefined8 *)(param_2 + 0x608);
  local_230 = *(undefined4 *)(param_2 + 0x530);
  local_270 = auStack_150;
  local_268 = auStack_200;
  local_2d0[0] = 0;
  local_22c = (undefined4)*(undefined8 *)(param_2 + 0x538);
  FUN_032bf524(local_2d0,*(undefined8 *)(param_1 + 0x4e0),param_9);
  local_2f8[0] = 0;
  if (param_10 != 0) {
    FUN_032bf524(local_2f8,*(undefined8 *)(param_1 + 0x4e0),param_10);
  }
  lVar33 = DAT_04434b38;
  local_308 = CONCAT31(local_308._1_3_,1);
  local_328 = param_7 + 1;
  iStack_314 = 0;
  local_310 = 0;
  iStack_304 = 0;
  local_340 = 0x7fffffff7fffffff;
  local_348 = 0;
  local_350 = 0;
  local_324 = '\0';
  lVar28 = tpidr_el0;
  lVar22 = *(long *)(lVar28 + 0x38d490);
  local_338 = param_4;
  local_330 = param_3;
  if (lVar22 == 0) {
    lVar22 = FUN_0333d16c(0,1);
    *(long *)(lVar28 + 0x38d490) = lVar22;
  }
  lVar28 = *(long *)(lVar22 + 0x10);
  if (*(ulong *)(lVar28 + 8) < *(ulong *)(lVar28 + 0x18)) {
    bVar17 = *(int *)(param_1 + 0x790) != 0;
    if (*(int *)(param_1 + 0x780) != 0) {
      if (lVar28 != 0) {
        lVar22 = (long)*(int *)(param_1 + 0x780) << 2;
        puVar38 = *(undefined4 **)(param_1 + 0x778);
        do {
          uVar27 = *puVar38;
          local_518[0] = (undefined8 *)0x0;
          FUN_032d5c74(lVar28,&DAT_038f7b98,local_518,&DAT_04356710,4,4);
          if (local_518[0] != (undefined8 *)0x0) {
            *(undefined4 *)local_518[0] = uVar27;
          }
          puVar38 = puVar38 + 1;
          lVar22 = lVar22 + -4;
        } while (lVar22 != 0);
      }
      bVar16 = true;
      goto joined_r0x0309aa7c;
    }
  }
  else {
    bVar17 = false;
  }
  bVar16 = false;
joined_r0x0309aa7c:
  if (param_6 <= param_7) {
    auVar51 = NEON_fmov(0x3f800000,4);
    iVar31 = 0x31;
    if (!bVar17) {
      iVar31 = 1;
    }
    uVar45 = 0xffffffff;
    puVar4 = &local_370;
    if (!bVar17) {
      puVar4 = (undefined8 *)0x0;
    }
    uVar53 = auVar51._8_8_;
    uVar49 = auVar51._0_8_;
    lVar22 = (long)param_6;
    do {
      lVar23 = *param_5;
      uVar21 = (uint)*(ushort *)(lVar23 + lVar22 * 0xc + 2);
      if (uVar45 == uVar21) {
      }
      else {
        if (uVar45 != 0xffffffff) {
          FUN_032bffbc(&local_320,local_2d0);
          iStack_304 = local_2a8;
          if (iStack_314 != 0) {
            if (local_2b8 < 0xec1) {
              plVar20 = (long *)(local_2c0 + local_2b8 + 0x20);
            }
            else {
              plVar20 = (long *)FUN_032bf82c(local_2d0);
            }
            plVar20[1] = CONCAT44(iStack_314,CONCAT22(uStack_316,local_318));
            plVar20[3] = CONCAT44(iStack_304,local_308);
            plVar20[2] = local_310;
            *plVar20 = local_320;
            lVar23 = (long)(int)uVar45;
            plVar30 = (long *)(*param_8 + lVar23 * 0x20);
            if (*(int *)((long)plVar30 + 0xc) == 0) {
              lVar46 = plVar20[3];
              plVar30[1] = plVar20[1];
              plVar30[3] = lVar46;
              lVar46 = *plVar20;
              plVar30[2] = plVar20[2];
              *plVar30 = lVar46;
            }
            else {
              *(int *)((long)plVar20 + 0x1c) =
                   *(int *)((long)plVar20 + 0x1c) +
                   *(int *)(*(long *)(param_8[2] + lVar23 * 8) + 0x1c);
              plVar30 = *(long **)(param_8[2] + lVar23 * 8);
              if (*(int *)((long)plVar30 + 0xc) == 0) {
                lVar46 = plVar20[3];
                plVar30[1] = plVar20[1];
                plVar30[3] = lVar46;
                lVar46 = *plVar20;
                plVar30[2] = plVar20[2];
                *plVar30 = lVar46;
              }
              else {
                plVar20[2] = plVar30[2];
                plVar30[2] = (long)plVar20;
              }
              *(long **)(param_8[2] + lVar23 * 8) = plVar20;
            }
            *(undefined1 *)(param_8[4] + lVar23) = 1;
            local_2b8 = local_2b8 + 0x20;
            local_2b4 = local_2b4 + 1;
          }
        }
        local_320 = local_2c0;
        local_318 = (undefined2)local_2b8;
        uStack_316 = (undefined2)local_2b4;
        local_2a8 = 0;
        iStack_314 = -(local_2b4 + *(int *)(local_2d0[0] + 8));
        lVar23 = *param_5;
        uVar45 = uVar21;
      }
      uVar24 = (ulong)*(uint *)(lVar23 + lVar22 * 0xc + 4);
      lVar46 = param_3 + uVar24 * 0x68;
      uVar34 = *(ulong *)(lVar46 + 8) & 0xffffff;
      lVar23 = lVar33 + 0x9c0;
      if (uVar34 != 0xffffff) {
        lVar23 = *(long *)(param_2 + 0x38) + uVar34 * 0xc0;
      }
      uVar32 = *(ulong *)(lVar46 + 0x18) & 0xffffff;
      lVar44 = lVar33 + 0x9c0;
      if (uVar32 != 0xffffff) {
        lVar44 = *(long *)(param_2 + 0x38) + uVar32 * 0xc0;
      }
      uVar21 = *(uint *)(lVar23 + 0x80);
      uVar29 = (ulong)uVar21;
      puVar36 = (undefined8 *)(*(long *)(param_2 + 0x150) + uVar29 * 0x80);
      uVar5 = *(uint *)(lVar44 + 0x80);
      uVar35 = (ulong)uVar5;
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x150) + uVar35 * 0x80);
      iVar6 = *(int *)((long)puVar36 + 0x4c);
      iVar26 = *(int *)((long)puVar2 + 0x4c);
      iVar3 = 0;
      if (iVar6 != 0x7fffffff) {
        iVar3 = iVar6;
      }
      iVar6 = 0;
      if (iVar26 != 0x7fffffff) {
        iVar6 = iVar26;
      }
      if (iVar6 != 0 || iVar3 != 0) {
        bVar7 = *(byte *)((long)puVar36 + 0x5e);
        bVar8 = *(byte *)((long)puVar2 + 0x5e);
        if (((param_10 != 0) && ((*(byte *)(lVar23 + 0x54) & 1) == 0)) &&
           ((*(byte *)(lVar44 + 0x54) & 1) == 0)) {
          if (local_2e0 < 0xed9) {
            puVar19 = (uint *)(local_2e8 + local_2e0 + 0x20);
          }
          else {
            puVar19 = (uint *)FUN_032bf82c(local_2f8);
          }
          *puVar19 = uVar21;
          puVar19[1] = uVar5;
          local_2e0 = local_2e0 + 8;
          local_2dc = local_2dc + 1;
        }
        local_228 = 0x7fff00007fff;
        local_260 = lVar23;
        local_258 = lVar44;
        if (bVar17 || bVar16) {
          FUN_03099530(lVar46,lVar23,lVar44,&local_370);
        }
        if (lVar28 != 0 && bVar16) {
          FUN_032d5af0(lVar28,&DAT_0398be87,2);
          local_518[0] = (undefined8 *)0x0;
          FUN_032d5c74(lVar28,&DAT_038f7b98,local_518,&DAT_04356660,0x18,4);
          if (local_518[0] != (undefined8 *)0x0) {
            *local_518[0] = local_370;
            *(int *)(local_518[0] + 1) = (int)uStack_368;
            *(undefined8 *)((long)local_518[0] + 0xc) = local_360;
            *(int *)((long)local_518[0] + 0x14) = (int)uStack_358;
          }
        }
        lVar39 = param_3 + uVar24 * 0x68;
        local_380 = *(undefined8 *)(lVar39 + 0x58);
        lVar43 = *(long *)(param_1 + 0x40);
        puVar40 = (ushort *)(lVar39 + 0x42);
        uVar9 = *puVar40;
        local_3b0 = uVar49;
        uStack_3a8 = uVar53;
        local_3a0 = uVar49;
        uStack_398 = uVar53;
        local_378 = local_380;
        if ((*(uint *)(lVar43 + 0x948) & (uint)uVar9) == 0) {
          uVar21 = (uint)*(ushort *)(param_3 + uVar24 * 0x68 + 0x52);
          bVar1 = false;
          iVar26 = 0;
        }
        else {
          puVar41 = (undefined8 *)(lVar43 + 0x958);
          lVar39 = 1;
          while( true ) {
            if ((uVar9 & *(ushort *)(puVar41 + -1)) != 0) {
              (**(code **)(*(long *)*puVar41 + 0x68))
                        ((long *)*puVar41,param_1,lVar46,&local_3a0,&local_3b0);
            }
            if (*(int *)(lVar43 + 0x94c) <= lVar39) break;
            uVar9 = *puVar40;
            lVar39 = lVar39 + 1;
            puVar41 = puVar41 + 2;
          }
          if ((float)((ulong)uStack_398 >> 0x20) == auVar51._12_4_ &&
              ((float)uStack_398 == auVar51._8_4_ &&
              ((float)local_3a0 == auVar51._0_4_ &&
              (float)((ulong)local_3a0 >> 0x20) == auVar51._4_4_))) {
            uVar9 = *(ushort *)(param_3 + uVar24 * 0x68 + 0x52);
            uVar21 = (uint)uVar9;
            if ((float)((ulong)uStack_3a8 >> 0x20) == auVar51._12_4_ &&
                ((float)uStack_3a8 == auVar51._8_4_ &&
                ((float)local_3b0 == auVar51._0_4_ &&
                (float)((ulong)local_3b0 >> 0x20) == auVar51._4_4_))) {
              iVar26 = 0;
              bVar1 = false;
              goto LAB_0309af80;
            }
          }
          else {
            uVar9 = *(ushort *)(param_3 + uVar24 * 0x68 + 0x52);
          }
          uVar21 = (uint)uVar9;
          iVar26 = 0x40;
          bVar1 = true;
        }
LAB_0309af80:
        if ((int)(uVar21 + iVar31 + iVar26 + local_2b8) < 0xee1) {
          puVar18 = (undefined1 *)(local_2c0 + local_2b8 + 0x20);
        }
        else {
          puVar18 = (undefined1 *)FUN_032bf82c(local_2d0);
        }
        *puVar18 = 1;
        if ((*(byte *)puVar40 >> 1 & 1) == 0) {
          uVar27 = *(undefined4 *)(param_3 + uVar24 * 0x68 + 0x30);
        }
        else {
          uVar27 = 0x7fffffff;
        }
        *(undefined8 *)(puVar18 + 0x18) = local_380;
        lVar39 = param_3 + uVar24 * 0x68;
        *(undefined4 *)(puVar18 + 0x10) = uVar27;
        puVar18[0x2a] = 0;
        *(undefined2 *)(puVar18 + 0x28) = *(undefined2 *)(lVar39 + 0x40);
        pbVar42 = (byte *)(lVar39 + 0x55);
        puVar18[0xf] = *pbVar42 & 0x1f;
        puVar18[1] = 8;
        local_388 = puVar18 + 0x30;
        *(int *)(puVar18 + 4) = iVar3;
        *(int *)(puVar18 + 8) = iVar6;
        puVar18[0xc] = bVar7;
        puVar18[0xd] = bVar8;
        bVar7 = (byte)((uint)bVar8 - (uint)bVar7 >> 0x18);
        puVar18[0x20] = bVar7 >> 4 & 8;
        puVar18[2] = *(byte *)puVar40;
        if (lVar22 + 1 < (long)local_328) {
          uVar27 = *(undefined4 *)
                    (param_3 + (ulong)*(uint *)(*param_5 + (lVar22 + 1) * 0xc + 4) * 0x68 + 0x34);
        }
        else {
          uVar27 = 0x7fffffff;
        }
        FUN_0309a694(&local_350,*(undefined4 *)(param_3 + uVar24 * 0x68 + 0x34),uVar27,puVar18);
        local_3c8 = 0.0;
        dVar55 = (double)(float)*(undefined8 *)(lVar23 + 0x30) + (double)*(float *)(lVar23 + 0x40);
        dVar50 = (double)(float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20) +
                 (double)*(float *)(lVar23 + 0x44);
        dVar48 = (double)(float)((ulong)*(undefined8 *)(lVar23 + 0x38) >> 0x20) +
                 (double)*(float *)(lVar23 + 0x4c);
        dVar54 = (double)(float)*(undefined8 *)(lVar23 + 0x38) + (double)*(float *)(lVar23 + 0x48);
        if (*(int *)((long)puVar36 + 0x4c) == 0) {
          local_3e0 = dVar55;
          local_3d8 = dVar50;
          local_3d0 = dVar54;
          local_3c8 = dVar48;
          if (uVar34 == 0xffffff) {
            psVar25 = *(short **)(param_3 + uVar24 * 0x68 + 0x48);
            if (*psVar25 == 3) {
              uVar56 = *(undefined8 *)(psVar25 + 0xc);
              uVar67 = *(undefined8 *)(psVar25 + 8);
            }
            else {
              if (*psVar25 != 2) goto LAB_0309b178;
              uVar56 = *(undefined8 *)(psVar25 + 0x24);
              uVar67 = *(undefined8 *)(psVar25 + 0x20);
            }
            local_3e0 = dVar55 + (double)(float)uVar67;
            local_3d8 = dVar50 + (double)(float)((ulong)uVar67 >> 0x20);
            local_3d0 = dVar54 + (double)(float)uVar56;
            local_3c8 = dVar48 + (double)(float)((ulong)uVar56 >> 0x20);
          }
        }
        else {
          local_3e0 = (double)puVar36[2];
          local_3d8 = (double)puVar36[3];
          local_3d0 = (double)puVar36[4];
        }
LAB_0309b178:
        dVar60 = (double)*(float *)(lVar44 + 0x30) + (double)(float)*(undefined8 *)(lVar44 + 0x40);
        dVar59 = (double)*(float *)(lVar44 + 0x34) +
                 (double)(float)((ulong)*(undefined8 *)(lVar44 + 0x40) >> 0x20);
        dVar58 = (double)*(float *)(lVar44 + 0x38) + (double)(float)*(undefined8 *)(lVar44 + 0x48);
        dVar57 = (double)*(float *)(lVar44 + 0x3c) +
                 (double)(float)((ulong)*(undefined8 *)(lVar44 + 0x48) >> 0x20);
        dVar61 = 0.0;
        dVar62 = (double)puVar2[2];
        dVar63 = (double)puVar2[3];
        dVar65 = (double)puVar2[4];
        if ((*(int *)((long)puVar2 + 0x4c) == 0) &&
           (dVar61 = dVar57, dVar62 = dVar60, dVar63 = dVar59, dVar65 = dVar58, uVar32 == 0xffffff))
        {
          psVar25 = *(short **)(param_3 + uVar24 * 0x68 + 0x48);
          if (*psVar25 == 3) {
            uVar56 = *(undefined8 *)(psVar25 + 0x14);
            uVar67 = *(undefined8 *)(psVar25 + 0x10);
          }
          else {
            if (*psVar25 != 2) goto LAB_0309b190;
            uVar56 = *(undefined8 *)(psVar25 + 0x44);
            uVar67 = *(undefined8 *)(psVar25 + 0x40);
          }
          dVar62 = dVar60 + (double)(float)uVar67;
          dVar63 = dVar59 + (double)(float)((ulong)uVar67 >> 0x20);
          dVar65 = dVar58 + (double)(float)uVar56;
          dVar61 = dVar57 + (double)(float)((ulong)uVar56 >> 0x20);
        }
LAB_0309b190:
        uStack_138 = puVar36[0xd];
        local_140 = puVar36[0xc];
        uStack_128 = puVar36[0xf];
        local_130 = puVar36[0xe];
        uVar67 = puVar36[8];
        fVar66 = (float)((int)(short)uVar67 << 0x10);
        fVar68 = (float)((int)(short)((ulong)uVar67 >> 0x10) << 0x10);
        local_120 = CONCAT44(fVar68,fVar66);
        fVar69 = (float)((int)(short)((ulong)uVar67 >> 0x20) << 0x10);
        fVar70 = (float)((int)(short)((ulong)uVar67 >> 0x30) << 0x10);
        uStack_118 = CONCAT44(fVar70,fVar69);
        fVar72 = -(float)*puVar36;
        fVar75 = -(float)((ulong)*puVar36 >> 0x20);
        fVar77 = -(float)puVar36[1];
        fVar47 = (float)((ulong)puVar36[1] >> 0x20);
        uStack_a8 = puVar36[6];
        local_b0 = puVar36[5];
        fVar79 = fVar72 + fVar72;
        fVar80 = fVar75 + fVar75;
        fVar81 = fVar77 + fVar77;
        uStack_c0 = puVar36[7];
        auVar82._4_4_ = fVar75;
        auVar82._0_4_ = fVar72;
        auVar82._8_4_ = fVar77;
        auVar82._12_4_ = fVar47;
        auVar83._4_4_ = fVar75;
        auVar83._0_4_ = fVar72;
        auVar83._8_4_ = fVar77;
        auVar83._12_4_ = fVar47;
        auVar82 = NEON_ext(auVar82,auVar83,8,1);
        auVar12._4_4_ = fVar80;
        auVar12._0_4_ = fVar79;
        auVar12._8_4_ = fVar81;
        auVar12._12_4_ = fVar47 + fVar47;
        auVar13._4_4_ = fVar80;
        auVar13._0_4_ = fVar79;
        auVar13._8_4_ = fVar81;
        auVar13._12_4_ = fVar47 + fVar47;
        auVar83 = NEON_ext(auVar12,auVar13,8,1);
        uStack_b8 = uStack_a8 >> 0x20;
        fVar73 = auVar82._0_4_ * auVar83._0_4_;
        uVar67 = NEON_fmov(0x3f800000,4);
        fVar64 = (float)uVar67;
        uStack_100 = CONCAT44(fVar64 - (fVar79 * fVar72 + fVar73),fVar80 * fVar72 - fVar81 * fVar47)
        ;
        uStack_108 = (ulong)(uint)(fVar81 * fVar72 - fVar80 * fVar47);
        local_110 = CONCAT44(fVar80 * fVar72 + fVar81 * fVar47,fVar64 - (fVar80 * fVar75 + fVar73));
        uStack_f8 = (ulong)(uint)(fVar81 * fVar75 + fVar79 * fVar47);
        uStack_e8 = (ulong)(uint)(fVar64 - (fVar79 * fVar72 + fVar80 * fVar75));
        local_f0 = CONCAT44(fVar81 * fVar75 - fVar79 * fVar47,fVar81 * fVar72 + fVar80 * fVar47);
        local_d8 = 0;
        local_e0 = 0;
        uStack_c8 = CONCAT44(fVar47,fVar77);
        local_d0 = CONCAT44(fVar75,fVar72);
        uStack_1e8 = puVar2[0xd];
        local_1f0 = puVar2[0xc];
        local_250 = CONCAT44((float)(dVar50 - local_3d8),(float)(dVar55 - local_3e0));
        uStack_1d8 = puVar2[0xf];
        local_1e0 = puVar2[0xe];
        uStack_240 = CONCAT44((float)(dVar59 - local_3d8),(float)(dVar60 - local_3e0));
        uVar67 = puVar2[8];
        fVar47 = (float)((int)(short)uVar67 << 0x10);
        fVar72 = (float)((int)(short)((ulong)uVar67 >> 0x10) << 0x10);
        uVar56 = CONCAT44(fVar72,fVar47);
        fVar73 = (float)((int)(short)((ulong)uVar67 >> 0x20) << 0x10);
        fVar75 = (float)((int)(short)((ulong)uVar67 >> 0x30) << 0x10);
        uVar67 = CONCAT44(fVar75,fVar73);
        fVar79 = (float)((ulong)puVar2[1] >> 0x20);
        fVar80 = -(float)*puVar2;
        fVar81 = -(float)((ulong)*puVar2 >> 0x20);
        fVar71 = -(float)puVar2[1];
        uStack_248 = CONCAT44((float)(dVar48 - local_3c8),(float)(dVar54 - local_3d0));
        local_170 = puVar2[7];
        uStack_190 = CONCAT44((float)(dVar63 - local_3d8),(float)(dVar62 - local_3e0));
        uStack_238 = CONCAT44((float)(dVar57 - local_3c8),(float)(dVar58 - local_3d0));
        uStack_158 = puVar2[6];
        uStack_160 = puVar2[5];
        fVar74 = fVar80 + fVar80;
        fVar76 = fVar81 + fVar81;
        fVar78 = fVar71 + fVar71;
        auVar14._4_4_ = fVar81;
        auVar14._0_4_ = fVar80;
        auVar14._8_4_ = fVar71;
        auVar14._12_4_ = fVar79;
        auVar15._4_4_ = fVar81;
        auVar15._0_4_ = fVar80;
        auVar15._8_4_ = fVar71;
        auVar15._12_4_ = fVar79;
        auVar83 = NEON_ext(auVar14,auVar15,8,1);
        uStack_168 = uStack_158 >> 0x20;
        auVar10._4_4_ = fVar76;
        auVar10._0_4_ = fVar74;
        auVar10._8_4_ = fVar78;
        auVar10._12_4_ = fVar79 + fVar79;
        auVar11._4_4_ = fVar76;
        auVar11._0_4_ = fVar74;
        auVar11._8_4_ = fVar78;
        auVar11._12_4_ = fVar79 + fVar79;
        auVar82 = NEON_ext(auVar10,auVar11,8,1);
        fVar77 = auVar83._0_4_ * auVar82._0_4_;
        uStack_188 = CONCAT44((float)(dVar61 - local_3c8),(float)(dVar65 - local_3d0));
        uStack_178 = CONCAT44(fVar79,fVar71);
        local_180 = CONCAT44(fVar81,fVar80);
        uStack_1b8 = (ulong)(uint)(fVar78 * fVar80 - fVar76 * fVar79);
        uStack_1a8 = (ulong)(uint)(fVar78 * fVar81 + fVar74 * fVar79);
        uStack_1b0 = CONCAT44(fVar64 - (fVar74 * fVar80 + fVar77),fVar76 * fVar80 - fVar78 * fVar79)
        ;
        local_1c0 = CONCAT44(fVar76 * fVar80 + fVar78 * fVar79,fVar64 - (fVar76 * fVar81 + fVar77));
        uStack_198 = (ulong)(uint)(fVar64 - (fVar74 * fVar80 + fVar76 * fVar81));
        local_1a0 = CONCAT44(fVar78 * fVar81 - fVar74 * fVar79,fVar78 * fVar80 + fVar76 * fVar79);
        local_218 = &local_3e0;
        local_1d0 = uVar56;
        uStack_1c8 = uVar67;
        if (bVar1) {
          auVar52._0_8_ =
               CONCAT44(fVar68 * (float)((ulong)local_3a0 >> 0x20),fVar66 * (float)local_3a0);
          auVar52._8_4_ = fVar69 * (float)uStack_398;
          auVar52._12_4_ = fVar70 * (float)((ulong)uStack_398 >> 0x20);
          local_1d0 = CONCAT44((float)((ulong)local_3b0 >> 0x20) * fVar72,(float)local_3b0 * fVar47)
          ;
          uStack_1c8 = CONCAT44((float)((ulong)uStack_3a8 >> 0x20) * fVar75,
                                (float)uStack_3a8 * fVar73);
          uStack_118 = auVar52._8_8_;
          local_400 = uVar56;
          uStack_3f8 = uVar67;
          fStack_3f0 = fVar66;
          fStack_3ec = fVar68;
          fStack_3e8 = fVar69;
          fStack_3e4 = fVar70;
          local_120 = auVar52._0_8_;
          FUN_0301f9d0(&local_120,&local_1d0,&local_388);
        }
        local_518[0] = (undefined8 *)((ulong)local_518[0] & 0xffffffff00000000);
        lVar23 = param_3 + uVar24 * 0x68;
        puVar36 = (undefined8 *)(lVar23 + 0x48);
        puVar37 = (undefined2 *)(lVar23 + 0x50);
        FUN_0301fa10(*puVar36,*puVar37,auStack_440,auStack_480,local_518,&local_2a0,&local_388,
                     lVar46,puVar4);
        if (local_324 != '\0') {
          bVar7 = bVar7 >> 7;
          if (lVar28 == 0) {
            FUN_0309df60(*puVar36,*puVar37,auStack_440,auStack_480,local_518,&local_2a0,&local_388,
                         lVar46,local_348,uVar29,uVar35,iVar3,iVar6,bVar7);
          }
          else {
            FUN_032d5af0(lVar28,"TtPrepareConstraintGroupDirectSolving",0x25);
            FUN_0309df60(*puVar36,*puVar37,auStack_440,auStack_480,local_518,&local_2a0,&local_388,
                         lVar46,local_348,uVar29,uVar35,iVar3,iVar6,bVar7);
            FUN_032d5b34(lVar28,&DAT_0390f40e);
          }
        }
        if (bVar1) {
          FUN_0301f9d0(&fStack_3f0,&local_400,&local_388);
        }
        local_2a8 = local_2a8 + (*pbVar42 & 0x1f) * 4;
        uVar21 = (int)local_388 - (int)puVar18;
        puVar18[0xe] = (char)(uVar21 >> 4);
        local_2b8 = local_2b8 + uVar21;
        local_2b4 = local_2b4 + 1;
        if ((bool)(lVar28 != 0 & bVar16)) {
          FUN_032d5b34(lVar28,&DAT_0390f40e);
        }
      }
      bVar1 = lVar22 < param_7;
      lVar22 = lVar22 + 1;
    } while (bVar1);
    if (uVar45 != 0xffffffff) {
      FUN_032bffbc(&local_320,local_2d0);
      iStack_304 = local_2a8;
      if (iStack_314 != 0) {
        if (local_2b8 < 0xec1) {
          plVar20 = (long *)(local_2c0 + local_2b8 + 0x20);
        }
        else {
          plVar20 = (long *)FUN_032bf82c(local_2d0);
        }
        plVar20[1] = CONCAT44(iStack_314,CONCAT22(uStack_316,local_318));
        plVar20[3] = CONCAT44(iStack_304,local_308);
        plVar20[2] = local_310;
        *plVar20 = local_320;
        lVar28 = (long)(int)uVar45;
        plVar30 = (long *)(*param_8 + lVar28 * 0x20);
        if (*(int *)((long)plVar30 + 0xc) == 0) {
          lVar33 = plVar20[3];
          plVar30[1] = plVar20[1];
          plVar30[3] = lVar33;
          lVar33 = *plVar20;
          plVar30[2] = plVar20[2];
          *plVar30 = lVar33;
        }
        else {
          *(int *)((long)plVar20 + 0x1c) =
               *(int *)((long)plVar20 + 0x1c) + *(int *)(*(long *)(param_8[2] + lVar28 * 8) + 0x1c);
          plVar30 = *(long **)(param_8[2] + lVar28 * 8);
          if (*(int *)((long)plVar30 + 0xc) == 0) {
            lVar33 = plVar20[3];
            plVar30[1] = plVar20[1];
            plVar30[3] = lVar33;
            lVar33 = *plVar20;
            plVar30[2] = plVar20[2];
            *plVar30 = lVar33;
          }
          else {
            plVar20[2] = plVar30[2];
            plVar30[2] = (long)plVar20;
          }
          *(long **)(param_8[2] + lVar28 * 8) = plVar20;
        }
        *(undefined1 *)(param_8[4] + lVar28) = 1;
        local_2b8 = local_2b8 + 0x20;
        local_2b4 = local_2b4 + 1;
      }
    }
  }
  if (param_10 != 0) {
    FUN_032bf564(local_2f8);
  }
  FUN_032bf564(local_2d0);
  if (local_2f8[0] != 0) {
    FUN_032bf564(local_2f8);
  }
  if (local_2d0[0] != 0) {
    FUN_032bf564(local_2d0);
  }
  return;
}


