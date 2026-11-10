/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305efb4; name: FUN_0305efb4
 */


/* WARNING: Removing unreachable block (ram,0x0305f9a8) */
/* WARNING: Removing unreachable block (ram,0x0305f9b4) */

void FUN_0305efb4(long param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  long lVar21;
  int *piVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long *plVar30;
  long local_a78 [2];
  undefined8 *local_a68;
  uint *local_a60;
  uint local_a58;
  int local_a54;
  uint *local_a50;
  long lStack_a48;
  long local_a28;
  uint *local_a20;
  uint local_a18;
  undefined8 *local_a10;
  long local_9f0;
  uint *local_9e8;
  uint local_9e0;
  undefined8 *local_9d8;
  long lStack_9d0;
  long *local_9c8;
  uint local_9c0;
  uint local_9bc;
  uint local_9b8;
  uint local_9b4;
  long *aplStack_9b0 [10];
  uint local_95c;
  uint local_8c0;
  uint local_7bc;
  uint local_6b8;
  uint local_668;
  uint local_614;
  uint local_5f4;
  uint local_4d0;
  uint local_480;
  uint local_414;
  uint local_2f0;
  uint local_2a0;
  uint local_27c;
  uint local_278;
  long *local_270 [2];
  long local_260;
  undefined2 local_258;
  undefined2 local_256;
  int local_254;
  long local_250;
  undefined2 local_248;
  undefined2 local_246;
  int local_244;
  undefined8 local_240;
  undefined1 local_238;
  undefined4 local_234;
  long local_230;
  undefined2 local_228;
  undefined2 local_226;
  int local_224;
  undefined8 local_220;
  undefined1 local_218;
  undefined4 local_214;
  long local_210;
  undefined2 local_208;
  undefined2 local_206;
  int local_204;
  undefined4 local_1f4;
  undefined8 local_1f0;
  long local_1e0;
  long *local_1d0;
  long *local_1c8;
  long local_1c0;
  undefined8 *local_1b8;
  uint *local_1b0;
  uint local_1a8;
  uint local_1a4;
  long local_198;
  undefined8 *local_190;
  uint *local_188;
  uint local_180;
  uint local_17c;
  long local_170;
  undefined8 local_168;
  uint *local_160;
  uint local_158;
  uint local_154;
  long local_148;
  undefined8 local_140;
  uint *local_138;
  uint local_130;
  uint local_12c;
  long local_120;
  undefined8 local_118;
  uint *local_110;
  uint local_108;
  uint local_104;
  long local_f8;
  undefined8 local_f0;
  uint *local_e8;
  uint local_e0;
  uint local_dc;
  long local_d0;
  undefined8 local_c8;
  uint *local_c0;
  uint local_b8;
  uint local_b4;
  long local_a0;
  undefined8 local_98;
  uint *local_90;
  uint local_88;
  uint local_84;
  long local_70;
  
  lVar28 = tpidr_el0;
  if (*(long *)(lVar28 + 0x38d490) == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar28 + 0x38d490) = lVar16;
    lVar28 = *(long *)(lVar16 + 0x10);
  }
  else {
    lVar28 = *(long *)(*(long *)(lVar28 + 0x38d490) + 0x10);
  }
  if (lVar28 != 0) {
    puVar26 = *(undefined8 **)(lVar28 + 8);
    uVar18 = *(ulong *)(lVar28 + 0x10);
    uVar17 = (ulong)((long)puVar26 + 0x17) & 0xfffffffffffffff8;
    if (uVar17 <= uVar18) {
      *(ulong *)(lVar28 + 8) = uVar17;
      if (puVar26 == (undefined8 *)0x0) {
        puVar26 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar26 = "TtNarrowPhase";
        uVar10 = nn::os::GetSystemTick();
        puVar26[1] = uVar10;
        puVar26 = *(undefined8 **)(lVar28 + 8);
        uVar18 = *(ulong *)(lVar28 + 0x10);
      }
    }
    uVar17 = (ulong)((long)puVar26 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar17 <= uVar18) && (*(ulong *)(lVar28 + 8) = uVar17, puVar26 != (undefined8 *)0x0)) {
      *puVar26 = "LtPairsTask";
      puVar26[2] = "StProcess";
      uVar10 = nn::os::GetSystemTick();
      puVar26[1] = uVar10;
    }
  }
  plVar30 = *(long **)(param_1 + 0x2a98);
  uVar23 = *(uint *)(plVar30 + 0x22);
  puVar1 = (uint *)(plVar30 + 0x22);
  uVar18 = (ulong)uVar23 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar19 = *puVar1;
  if (uVar19 != uVar23) {
    ClearExclusiveLocal();
LAB_0305f094:
    do {
      uVar18 = (ulong)(uVar19 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar23 = *puVar1;
      if (uVar23 == uVar19) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar19 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar30 + uVar18 * 4 + 0x114);
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto code_r0x0305f098;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar19 = uVar23;
    } while( true );
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
  if (bVar5) {
    *puVar1 = uVar23 + 0x200 & 0xfffffe00 | puVar1[uVar18 + 1];
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_0305f094;
  puVar20 = puVar1 + uVar18 + 1;
LAB_0305f0d4:
  lVar16 = param_1 + 0x2a20;
  *puVar20 = 0x1ff;
  DataMemoryBarrier(2,3);
  lVar24 = *(long *)(param_1 + 0x2aa8);
  puVar20 = *(uint **)(*plVar30 + uVar18 * 8);
  lVar12 = *(long *)(*(long *)(param_1 + 0x2aa0) + 0x100);
  lVar27 = (long)(int)*puVar20;
  lVar25 = lVar24 + lVar27 * 0x610;
  local_70 = lVar28;
  if (*(char *)(lVar25 + 0x600) == '\0') {
    puVar26 = *(undefined8 **)(puVar20 + 0x138);
    FUN_0305bb88(lVar25,puVar26,
                 "hknpProcessNarrowPhasePairsTask::ThreadOutput::m_activeCacheStreams");
    lVar21 = lVar24 + lVar27 * 0x610;
    FUN_0305bb88(lVar21 + 0x200,puVar26,
                 "hknpProcessNarrowPhasePairsTask::ThreadOutput::m_inactiveCacheStreams");
    plVar8 = (long *)*puVar26;
    *(undefined4 *)(lVar21 + 0x408) = 0;
    *(long **)(lVar21 + 0x400) = plVar8;
    *(undefined1 *)(lVar21 + 0x40c) = 0;
    iVar6 = *(int *)(puVar26 + 0xb) + -1;
    if (*(int *)(puVar26 + 0xb) < 1) {
      lVar21 = puVar26[1];
      (**(code **)(*plVar8 + 0x20))(plVar8,lVar21,6);
      *(undefined4 *)(puVar26 + 0xb) = 5;
      puVar29 = (undefined8 *)(lVar21 + 0x28);
    }
    else {
      *(int *)(puVar26 + 0xb) = iVar6;
      puVar29 = (undefined8 *)(puVar26[1] + (long)iVar6 * 8);
    }
    puVar29 = (undefined8 *)*puVar29;
    lVar21 = lVar24 + lVar27 * 0x610;
    puVar29[2] = 0;
    puVar29[3] = 0;
    *puVar29 = 0;
    puVar29[1] = 0;
    *(undefined4 *)((long)puVar29 + 4) = *(undefined4 *)(lVar21 + 0x418);
    puVar7 = PTR_PTR_0434a080;
    uVar19 = *(uint *)(lVar21 + 0x41c);
    uVar11 = *(uint *)(lVar21 + 0x418);
    plVar8 = (long *)(lVar21 + 0x410);
    uVar23 = uVar11 + 1;
    if ((int)uVar11 < (int)(uVar19 & 0x3fffffff)) {
      lVar9 = *plVar8;
    }
    else {
      lVar9 = *plVar8;
      if (0x3ffffffe < (int)uVar11) {
        FUN_032bd0a8(uVar23);
        uVar19 = *(uint *)(lVar21 + 0x41c);
      }
      uVar19 = (uVar19 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar19) {
        uVar19 = 0x3fffffff;
      }
      uVar2 = uVar23;
      if ((int)uVar23 <= (int)uVar19) {
        uVar2 = uVar19;
      }
      lVar9 = FUN_032bd1d4(puVar7,uVar2,8,lVar9,uVar11,(uint *)(lVar21 + 0x41c));
      *plVar8 = lVar9;
      uVar11 = *(uint *)(lVar21 + 0x418);
    }
    *(undefined8 **)(lVar9 + (long)(int)uVar11 * 8) = puVar29;
    lVar9 = lVar24 + lVar27 * 0x610;
    *(uint *)(lVar21 + 0x418) = uVar23;
    *(char **)(lVar9 + 0x4f0) =
         "hknpProcessNarrowPhasePairsTask::ThreadOutput::m_deferedManifoldsOut";
    plVar8 = (long *)*puVar26;
    *(undefined4 *)(lVar9 + 0x508) = 0;
    *(long **)(lVar9 + 0x500) = plVar8;
    *(undefined1 *)(lVar9 + 0x50c) = 0;
    iVar6 = *(int *)(puVar26 + 0xb) + -1;
    if (*(int *)(puVar26 + 0xb) < 1) {
      lVar21 = puVar26[1];
      (**(code **)(*plVar8 + 0x20))(plVar8,lVar21,6);
      *(undefined4 *)(puVar26 + 0xb) = 5;
      puVar26 = (undefined8 *)(lVar21 + 0x28);
    }
    else {
      *(int *)(puVar26 + 0xb) = iVar6;
      puVar26 = (undefined8 *)(puVar26[1] + (long)iVar6 * 8);
    }
    puVar26 = (undefined8 *)*puVar26;
    lVar21 = lVar24 + lVar27 * 0x610;
    puVar26[2] = 0;
    puVar26[3] = 0;
    *puVar26 = 0;
    puVar26[1] = 0;
    *(undefined4 *)((long)puVar26 + 4) = *(undefined4 *)(lVar21 + 0x518);
    uVar19 = *(uint *)(lVar21 + 0x51c);
    uVar11 = *(uint *)(lVar21 + 0x518);
    plVar8 = (long *)(lVar21 + 0x510);
    uVar23 = uVar11 + 1;
    if ((int)uVar11 < (int)(uVar19 & 0x3fffffff)) {
      lVar9 = *plVar8;
    }
    else {
      lVar9 = *plVar8;
      if (0x3ffffffe < (int)uVar11) {
        FUN_032bd0a8(uVar23);
        uVar19 = *(uint *)(lVar21 + 0x51c);
      }
      uVar19 = (uVar19 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar19) {
        uVar19 = 0x3fffffff;
      }
      uVar2 = uVar23;
      if ((int)uVar23 <= (int)uVar19) {
        uVar2 = uVar19;
      }
      lVar9 = FUN_032bd1d4(puVar7,uVar2,8,lVar9,uVar11,(uint *)(lVar21 + 0x51c));
      *plVar8 = lVar9;
      uVar11 = *(uint *)(lVar21 + 0x518);
    }
    *(undefined8 **)(lVar9 + (long)(int)uVar11 * 8) = puVar26;
    *(uint *)(lVar21 + 0x518) = uVar23;
    *(char **)(lVar24 + lVar27 * 0x610 + 0x5f0) =
         "hknpProcessNarrowPhasePairsTask::ThreadOutput::m_perPairOutput";
    *(undefined1 *)(lVar25 + 0x600) = 1;
  }
  lVar21 = lVar12 + lVar27 * 0x500;
  *(undefined4 *)(param_1 + 0x2a48) = *(undefined4 *)(*(long *)(puVar20 + 2) + 0x51c);
  local_168 = *(undefined8 *)(puVar20 + 0x138);
  local_c0 = *(uint **)(*(long *)(lVar21 + 0x110) + (long)*(int *)(lVar21 + 0x118) * 8 + -8);
  local_d0 = lVar21 + 0x100;
  local_b8 = *local_c0 >> 0x10;
  local_b4 = *local_c0 & 0xffff;
  *(uint *)(lVar21 + 0x108) = *(int *)(lVar21 + 0x108) - local_b4;
  local_90 = *(uint **)(*(long *)(lVar21 + 0x210) + (long)*(int *)(lVar21 + 0x218) * 8 + -8);
  local_a0 = lVar21 + 0x200;
  local_88 = *local_90 >> 0x10;
  local_84 = *local_90 & 0xffff;
  *(uint *)(lVar21 + 0x208) = *(int *)(lVar21 + 0x208) - local_84;
  lVar24 = lVar24 + lVar27 * 0x610;
  local_160 = *(uint **)(*(long *)(lVar24 + 0x10) + (long)*(int *)(lVar24 + 0x18) * 8 + -8);
  local_158 = *local_160 >> 0x10;
  local_154 = *local_160 & 0xffff;
  *(uint *)(lVar24 + 8) = *(int *)(lVar24 + 8) - local_154;
  local_138 = *(uint **)(*(long *)(lVar24 + 0x110) + (long)*(int *)(lVar24 + 0x118) * 8 + -8);
  local_148 = lVar24 + 0x100;
  local_130 = *local_138 >> 0x10;
  local_12c = *local_138 & 0xffff;
  local_120 = lVar24 + 0x200;
  *(uint *)(lVar24 + 0x108) = *(int *)(lVar24 + 0x108) - local_12c;
  local_118 = *(undefined8 *)(puVar20 + 0x138);
  local_110 = *(uint **)(*(long *)(lVar24 + 0x210) + (long)*(int *)(lVar24 + 0x218) * 8 + -8);
  local_108 = *local_110 >> 0x10;
  local_104 = *local_110 & 0xffff;
  *(uint *)(lVar24 + 0x208) = *(int *)(lVar24 + 0x208) - local_104;
  local_e8 = *(uint **)(*(long *)(lVar24 + 0x310) + (long)*(int *)(lVar24 + 0x318) * 8 + -8);
  local_f8 = lVar24 + 0x300;
  local_e0 = *local_e8 >> 0x10;
  local_dc = *local_e8 & 0xffff;
  local_198 = lVar24 + 0x400;
  *(uint *)(lVar24 + 0x308) = *(int *)(lVar24 + 0x308) - local_dc;
  local_190 = *(undefined8 **)(puVar20 + 0x138);
  local_188 = *(uint **)(*(long *)(lVar24 + 0x410) + (long)*(int *)(lVar24 + 0x418) * 8 + -8);
  local_180 = *local_188 >> 0x10;
  local_17c = *local_188 & 0xffff;
  local_1c0 = lVar24 + 0x500;
  *(uint *)(lVar24 + 0x408) = *(int *)(lVar24 + 0x408) - local_17c;
  local_1b8 = *(undefined8 **)(puVar20 + 0x138);
  local_1b0 = *(uint **)(*(long *)(lVar24 + 0x510) + (long)*(int *)(lVar24 + 0x518) * 8 + -8);
  local_1a8 = *local_1b0 >> 0x10;
  local_1a4 = *local_1b0 & 0xffff;
  local_1d0 = &local_d0;
  local_1c8 = &local_a0;
  *(uint *)(lVar24 + 0x508) = *(int *)(lVar24 + 0x508) - local_1a4;
  local_170 = lVar25;
  local_140 = local_168;
  local_f0 = local_118;
  local_c8 = local_168;
  local_98 = local_168;
  (**(code **)(**(long **)(*(long *)(puVar20 + 2) + 0x658) + 0x40))
            (*(long **)(*(long *)(puVar20 + 2) + 0x658),puVar20 + 0x13a,&local_1d0,2);
  local_9f0 = 0;
  local_9e8 = (uint *)0x0;
  local_254 = 0;
  local_244 = 0;
  local_240 = 0;
  local_238 = 0;
  local_234 = 0;
  local_224 = 0;
  local_220 = 0;
  local_218 = 0;
  local_214 = 0;
  local_204 = 0;
  local_1f4 = 0;
  local_1f0 = 0;
  local_a28 = 0;
  local_a20 = (uint *)0x0;
  local_a10 = *(undefined8 **)(puVar20 + 0x138);
  local_a18 = 0;
  local_9e0 = 0;
  local_270[0] = &local_1c0;
  if (lVar28 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(*(ulong *)(lVar28 + 8) < *(ulong *)(lVar28 + 0x18));
  }
  local_9c0 = uVar23 ^ 1;
  local_a50 = puVar20;
  lStack_a48 = lVar16;
  local_9d8 = local_a10;
  lStack_9d0 = param_1;
  local_9c8 = &local_170;
  local_9bc = local_9c0;
  local_9b8 = local_9c0;
  local_9b4 = uVar23;
  if (local_9c0 == 0) {
    memset(aplStack_9b0,0,0x740);
  }
  else {
    lVar24 = 4;
    pplVar13 = aplStack_9b0;
    do {
      lVar24 = lVar24 + -1;
      pplVar14 = pplVar13 + 2;
      pplVar13[1] = (long *)0x100000001;
      *pplVar13 = (long *)0x100000001;
      pplVar13 = pplVar14;
    } while (lVar24 != 0);
    do {
      pplVar14[1] = (long *)0x100000001;
      *pplVar14 = (long *)0x100000001;
      pplVar14[3] = (long *)0x100000001;
      pplVar14[2] = (long *)0x100000001;
      pplVar14[5] = (long *)0x100000001;
      pplVar14[4] = (long *)0x100000001;
      pplVar14[7] = (long *)0x100000001;
      pplVar14[6] = (long *)0x100000001;
      pplVar14[9] = (long *)0x100000001;
      pplVar14[8] = (long *)0x100000001;
      pplVar14[0xb] = (long *)0x100000001;
      pplVar14[10] = (long *)0x100000001;
      pplVar14[0xd] = (long *)0x100000001;
      pplVar14[0xc] = (long *)0x100000001;
      pplVar14[0xf] = (long *)0x100000001;
      pplVar14[0xe] = (long *)0x100000001;
      pplVar14 = pplVar14 + 0x10;
    } while (pplVar14 < local_270);
  }
  local_a68 = *(undefined8 **)(puVar20 + 0x138);
  local_a78[0] = *(long *)(param_1 + 0x2a20);
  local_a54 = 0;
  local_a60 = (uint *)0x0;
  puVar15 = *(undefined4 **)(puVar20 + 300);
  *puVar15 = 0xffffff;
  *(long **)(puVar15 + 4) = local_a78;
  *(undefined2 *)(puVar15 + 1) = 0;
  puVar15[2] = 0;
  puVar15[0x1d] = 0;
  *(long ***)(puVar15 + 8) = aplStack_9b0;
  *(long **)(puVar15 + 0x12) = &local_198;
  *(long **)(puVar15 + 0xe) = &local_198;
  *(long **)(puVar15 + 0x10) = &local_198;
  iVar6 = *(int *)(local_198 + 8);
  *(uint **)(puVar15 + 0x14) = local_188;
  *(short *)(puVar15 + 0x16) = (short)local_180;
  *(short *)((long)puVar15 + 0x5a) = (short)local_17c;
  puVar15[0x17] = -(local_17c + iVar6);
  *(undefined4 *)(*(long *)(puVar20 + 300) + 8) = *(undefined4 *)(param_1 + 0x2a48);
  local_1e0 = *(long *)(puVar20 + 300);
  local_250 = local_9c8[0x16];
  local_248 = (undefined2)local_9c8[0x17];
  local_244 = -(*(int *)((long)local_9c8 + 0xbc) + *(int *)(local_9c8[0x14] + 8));
  local_246 = (undefined2)*(int *)((long)local_9c8 + 0xbc);
  *(undefined4 *)(local_9c8 + 0x19) = 0;
  local_230 = local_9c8[0x1c];
  local_228 = (undefined2)local_9c8[0x1d];
  local_226 = (undefined2)*(int *)((long)local_9c8 + 0xec);
  local_224 = -(*(int *)((long)local_9c8 + 0xec) + *(int *)(local_9c8[0x1a] + 8));
  *(undefined4 *)(local_9c8 + 0x1f) = 0;
  local_210 = local_9c8[2];
  local_208 = (undefined2)local_9c8[3];
  local_206 = (undefined2)*(int *)((long)local_9c8 + 0x1c);
  local_204 = -(*(int *)((long)local_9c8 + 0x1c) + *(int *)(*local_9c8 + 8));
  plVar8 = *(long **)(local_1e0 + 0x38);
  local_260 = plVar8[2];
  local_258 = (undefined2)plVar8[3];
  local_256 = (undefined2)*(int *)((long)plVar8 + 0x1c);
  local_254 = -(*(int *)((long)plVar8 + 0x1c) + *(int *)(*plVar8 + 8));
  local_95c = uVar23;
  local_8c0 = uVar23;
  local_7bc = uVar23;
  local_6b8 = uVar23;
  local_668 = uVar23;
  local_614 = uVar23;
  local_5f4 = uVar23;
  local_4d0 = uVar23;
  local_480 = uVar23;
  local_414 = uVar23;
  local_2f0 = uVar23;
  local_2a0 = uVar23;
  local_27c = uVar23;
  local_278 = uVar23;
  FUN_03064c70(puVar20,lVar16,&local_a50,&local_170,&local_120,lVar12 + lVar27 * 0x500,
               *(undefined8 *)(puVar20 + 0x13a),*(undefined8 *)(puVar20 + 0x13c));
  puVar26 = local_190;
  if (local_17c == 0) {
    piVar22 = (int *)(local_198 + 0x18);
    iVar6 = *piVar22;
    if (iVar6 < 2) goto LAB_0305f7c8;
    iVar3 = *(int *)(local_190 + 0xb);
    lVar12 = *(long *)(*(long *)(local_198 + 0x10) + (long)(iVar6 + -2) * 8);
    lVar16 = local_190[1];
    *(undefined8 *)(lVar16 + (long)iVar3 * 8) =
         *(undefined8 *)(*(long *)(local_198 + 0x10) + (long)(iVar6 + -1) * 8);
    *(int *)(local_190 + 0xb) = iVar3 + 1;
    if (*(int *)((long)local_190 + 0x5c) <= iVar3 + 1) {
      (**(code **)(*(long *)*local_190 + 0x28))
                ((long *)*local_190,lVar16 + (long)(iVar3 + -5) * 8,6);
      *(int *)(puVar26 + 0xb) = iVar3 + -5;
    }
    *(undefined8 *)(lVar12 + 8) = 0;
    uVar23 = 0xffffffff;
  }
  else {
LAB_0305f7c8:
    piVar22 = (int *)(local_198 + 8);
    local_188[2] = 0;
    local_188[3] = 0;
    *local_188 = *local_188 & 0xffff0000 | local_17c & 0xffff;
    *local_188 = *local_188 & 0xffff | local_180 << 0x10;
    uVar23 = local_17c;
  }
  puVar26 = local_1b8;
  *piVar22 = *piVar22 + uVar23;
  local_188 = (uint *)0x0;
  local_198 = 0;
  if (local_1a4 == 0) {
    piVar22 = (int *)(local_1c0 + 0x18);
    iVar6 = *piVar22;
    if (iVar6 < 2) goto LAB_0305f820;
    iVar3 = *(int *)(local_1b8 + 0xb);
    lVar12 = *(long *)(*(long *)(local_1c0 + 0x10) + (long)(iVar6 + -2) * 8);
    lVar16 = local_1b8[1];
    *(undefined8 *)(lVar16 + (long)iVar3 * 8) =
         *(undefined8 *)(*(long *)(local_1c0 + 0x10) + (long)(iVar6 + -1) * 8);
    *(int *)(local_1b8 + 0xb) = iVar3 + 1;
    if (*(int *)((long)local_1b8 + 0x5c) <= iVar3 + 1) {
      (**(code **)(*(long *)*local_1b8 + 0x28))
                ((long *)*local_1b8,lVar16 + (long)(iVar3 + -5) * 8,6);
      *(int *)(puVar26 + 0xb) = iVar3 + -5;
    }
    *(undefined8 *)(lVar12 + 8) = 0;
    uVar23 = 0xffffffff;
  }
  else {
LAB_0305f820:
    piVar22 = (int *)(local_1c0 + 8);
    local_1b0[2] = 0;
    local_1b0[3] = 0;
    *local_1b0 = *local_1b0 & 0xffff0000 | local_1a4 & 0xffff;
    *local_1b0 = *local_1b0 & 0xffff | local_1a8 << 0x10;
    uVar23 = local_1a4;
  }
  *piVar22 = *piVar22 + uVar23;
  local_1b0 = (uint *)0x0;
  local_1c0 = 0;
  lVar16 = *(long *)(puVar20 + 300);
  *(undefined8 *)(lVar16 + 0x10) = 0;
  *(undefined8 *)(lVar16 + 0x20) = 0;
  *(undefined8 *)(lVar16 + 0x38) = 0;
  *(undefined8 *)(lVar16 + 0x40) = 0;
  if ((local_9b4 != 0) && (FUN_0306e23c(aplStack_9b0,lVar28), lVar28 != 0)) {
    puVar26 = *(undefined8 **)(lVar28 + 8);
    uVar18 = *(ulong *)(lVar28 + 0x10);
    uVar17 = (ulong)((long)puVar26 + 0x17) & 0xfffffffffffffff8;
    if (uVar17 <= uVar18) {
      *(ulong *)(lVar28 + 8) = uVar17;
      if (puVar26 == (undefined8 *)0x0) {
        puVar26 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar26 = "MiNumCrossLink";
        *(float *)(puVar26 + 1) = (float)(int)local_9bc;
        puVar26 = *(undefined8 **)(lVar28 + 8);
        uVar18 = *(ulong *)(lVar28 + 0x10);
      }
    }
    uVar17 = (ulong)((long)puVar26 + 0x17) & 0xfffffffffffffff8;
    if (uVar17 <= uVar18) {
      *(ulong *)(lVar28 + 8) = uVar17;
      if (puVar26 == (undefined8 *)0x0) {
        puVar26 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar26 = "MiNumInterrupted";
        *(float *)(puVar26 + 1) = (float)(int)local_9c0;
        puVar26 = *(undefined8 **)(lVar28 + 8);
        uVar18 = *(ulong *)(lVar28 + 0x10);
      }
    }
    uVar17 = (ulong)((long)puVar26 + 0x17) & 0xfffffffffffffff8;
    if ((uVar17 <= uVar18) && (*(ulong *)(lVar28 + 8) = uVar17, puVar26 != (undefined8 *)0x0)) {
      *puVar26 = "MiNumNew";
      *(float *)(puVar26 + 1) = (float)(int)local_9b8;
    }
  }
  puVar26 = local_a68;
  if (lVar28 != 0) {
    puVar29 = *(undefined8 **)(lVar28 + 8);
    uVar18 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
    if ((uVar18 <= *(ulong *)(lVar28 + 0x10)) &&
       (*(ulong *)(lVar28 + 8) = uVar18, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = &DAT_03922da5;
      uVar10 = nn::os::GetSystemTick();
      puVar29[1] = uVar10;
      puVar26 = local_a68;
    }
  }
  local_a68 = puVar26;
  if ((local_a60 != (uint *)0x0) && (local_a78[0] != 0)) {
    if (local_a58 == (*local_a60 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_a78[0] + 0x10) + (long)(int)local_a60[1] * 8) = 0;
      *(undefined1 *)(local_a78[0] + 0xc) = 1;
      iVar6 = *(int *)(puVar26 + 0xb);
      lVar28 = puVar26[1];
      *(uint **)(lVar28 + (long)iVar6 * 8) = local_a60;
      *(int *)(puVar26 + 0xb) = iVar6 + 1;
      if (*(int *)((long)puVar26 + 0x5c) <= iVar6 + 1) {
        (**(code **)(*(long *)*puVar26 + 0x28))((long *)*puVar26,lVar28 + (long)(iVar6 + -5) * 8,6);
        *(int *)(puVar26 + 0xb) = iVar6 + -5;
      }
    }
    else {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_a60,0x10);
        if (bVar5) {
          *local_a60 = *local_a60 - local_a58;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  local_a60 = (uint *)0x0;
  puVar26 = local_a10;
  if ((local_a54 != 0) && (*(char *)(local_a78[0] + 0xc) == '\0')) {
    FUN_032bff9c(local_a78);
    puVar26 = local_a10;
  }
  if (local_a18 != 0) {
    if (local_a18 == (*local_a20 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_a28 + 0x10) + (long)(int)local_a20[1] * 8) = 0;
      *(undefined1 *)(local_a28 + 0xc) = 1;
      iVar6 = *(int *)(puVar26 + 0xb);
      lVar28 = puVar26[1];
      *(uint **)(lVar28 + (long)iVar6 * 8) = local_a20;
      *(int *)(puVar26 + 0xb) = iVar6 + 1;
      if (*(int *)((long)puVar26 + 0x5c) <= iVar6 + 1) {
        local_a10 = puVar26;
        (**(code **)(*(long *)*puVar26 + 0x28))((long *)*puVar26,lVar28 + (long)(iVar6 + -5) * 8,6);
        *(int *)(puVar26 + 0xb) = iVar6 + -5;
      }
    }
    else {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_a20,0x10);
        if (bVar5) {
          *local_a20 = *local_a20 - local_a18;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_a18 = 0;
    *(undefined1 *)(local_a28 + 0xc) = 1;
  }
  puVar29 = local_9d8;
  local_a10 = (undefined8 *)0x0;
  local_a28 = 0;
  puVar26 = local_1b8;
  uVar23 = local_1a4;
  if (local_9e0 != 0) {
    if (local_9e0 == (*local_9e8 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_9f0 + 0x10) + (long)(int)local_9e8[1] * 8) = 0;
      *(undefined1 *)(local_9f0 + 0xc) = 1;
      iVar6 = *(int *)(local_9d8 + 0xb);
      lVar28 = local_9d8[1];
      *(uint **)(lVar28 + (long)iVar6 * 8) = local_9e8;
      *(int *)(local_9d8 + 0xb) = iVar6 + 1;
      if (*(int *)((long)local_9d8 + 0x5c) <= iVar6 + 1) {
        (**(code **)(*(long *)*local_9d8 + 0x28))
                  ((long *)*local_9d8,lVar28 + (long)(iVar6 + -5) * 8,6);
        *(int *)(puVar29 + 0xb) = iVar6 + -5;
      }
    }
    else {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(local_9e8,0x10);
        if (bVar5) {
          *local_9e8 = *local_9e8 - local_9e0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined1 *)(local_9f0 + 0xc) = 1;
    puVar26 = local_1b8;
    uVar23 = local_1a4;
  }
  local_9e0 = 0;
  local_1b8 = puVar26;
  local_1a4 = uVar23;
  puVar29 = local_190;
  uVar19 = local_17c;
  if (local_1c0 != 0) {
    local_9e0 = 0;
    if (uVar23 == 0) {
      piVar22 = (int *)(local_1c0 + 0x18);
      iVar6 = *piVar22;
      if (iVar6 < 2) goto LAB_0305fa68;
      iVar3 = *(int *)(puVar26 + 0xb);
      lVar16 = *(long *)(*(long *)(local_1c0 + 0x10) + (long)(iVar6 + -2) * 8);
      lVar28 = puVar26[1];
      *(undefined8 *)(lVar28 + (long)iVar3 * 8) =
           *(undefined8 *)(*(long *)(local_1c0 + 0x10) + (long)(iVar6 + -1) * 8);
      *(int *)(puVar26 + 0xb) = iVar3 + 1;
      if (*(int *)((long)puVar26 + 0x5c) <= iVar3 + 1) {
        (**(code **)(*(long *)*puVar26 + 0x28))((long *)*puVar26,lVar28 + (long)(iVar3 + -5) * 8,6);
        *(int *)(puVar26 + 0xb) = iVar3 + -5;
      }
      *(undefined8 *)(lVar16 + 8) = 0;
      uVar23 = 0xffffffff;
    }
    else {
LAB_0305fa68:
      piVar22 = (int *)(local_1c0 + 8);
      local_1b0[2] = 0;
      local_1b0[3] = 0;
      *local_1b0 = *local_1b0 & 0xffff0000 | uVar23 & 0xffff;
      *local_1b0 = *local_1b0 & 0xffff | local_1a8 << 0x10;
    }
    *piVar22 = *piVar22 + uVar23;
    local_1b0 = (uint *)0x0;
    puVar29 = local_190;
    uVar19 = local_17c;
  }
  local_1c0 = 0;
  local_190 = puVar29;
  local_17c = uVar19;
  if (local_198 == 0) goto LAB_0305f8c4;
  if (uVar19 == 0) {
    piVar22 = (int *)(local_198 + 0x18);
    iVar6 = *piVar22;
    if (iVar6 < 2) goto LAB_0305fac4;
    iVar3 = *(int *)(puVar29 + 0xb);
    lVar16 = *(long *)(*(long *)(local_198 + 0x10) + (long)(iVar6 + -2) * 8);
    lVar28 = puVar29[1];
    *(undefined8 *)(lVar28 + (long)iVar3 * 8) =
         *(undefined8 *)(*(long *)(local_198 + 0x10) + (long)(iVar6 + -1) * 8);
    *(int *)(puVar29 + 0xb) = iVar3 + 1;
    if (*(int *)((long)puVar29 + 0x5c) <= iVar3 + 1) {
      (**(code **)(*(long *)*puVar29 + 0x28))((long *)*puVar29,lVar28 + (long)(iVar3 + -5) * 8,6);
      *(int *)(puVar29 + 0xb) = iVar3 + -5;
    }
    *(undefined8 *)(lVar16 + 8) = 0;
    uVar19 = 0xffffffff;
  }
  else {
LAB_0305fac4:
    piVar22 = (int *)(local_198 + 8);
    local_188[2] = 0;
    local_188[3] = 0;
    *local_188 = *local_188 & 0xffff0000 | uVar19 & 0xffff;
    *local_188 = *local_188 & 0xffff | local_180 << 0x10;
  }
  *piVar22 = *piVar22 + uVar19;
  local_188 = (uint *)0x0;
  local_198 = 0;
LAB_0305f8c4:
  FUN_0306098c(&local_170);
  uVar19 = *puVar20;
  uVar23 = *(uint *)(plVar30 + 0x22);
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar30 + (long)(int)uVar19 * 4 + 0x114) = uVar23 & 0x1ff;
  uVar11 = *puVar1;
  if (uVar11 == uVar23) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar23 & 0xfffffe00 | uVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_0305f96c:
      if (local_70 != 0) {
        puVar26 = *(undefined8 **)(local_70 + 8);
        uVar18 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
        if ((uVar18 <= *(ulong *)(local_70 + 0x10)) &&
           (*(ulong *)(local_70 + 8) = uVar18, puVar26 != (undefined8 *)0x0)) {
          *puVar26 = &DAT_0390f40e;
          uVar10 = nn::os::GetSystemTick();
          puVar26[1] = uVar10;
        }
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar30 + (long)(int)uVar19 * 4 + 0x114) = uVar11 & 0x1ff;
    uVar23 = *puVar1;
    if (uVar23 == uVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar11 & 0xfffffe00 | uVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0305f96c;
    }
    else {
      ClearExclusiveLocal();
    }
    uVar11 = uVar23;
  } while( true );
code_r0x0305f098:
  puVar20 = (uint *)((long)plVar30 + uVar18 * 4 + 0x114);
  goto LAB_0305f0d4;
}


