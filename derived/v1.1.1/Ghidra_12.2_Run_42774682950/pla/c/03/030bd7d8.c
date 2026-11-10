/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030bd7d8; name: FUN_030bd7d8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_030bd7d8(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined4 *puVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  uint uVar34;
  long *plVar35;
  uint *puVar36;
  uint uVar37;
  long lVar38;
  int *piVar39;
  uint *puVar40;
  undefined8 *puVar41;
  ulong uVar42;
  uint *puVar43;
  long lVar44;
  long lVar45;
  uint uVar46;
  long lVar47;
  uint uVar48;
  uint *puVar49;
  uint uVar50;
  long lVar51;
  uint *puVar52;
  uint *puVar53;
  uint local_1b20;
  uint local_1b1c;
  uint local_1b04;
  uint local_1af4;
  long local_1a38 [2];
  undefined8 *local_1a28;
  uint *local_1a20;
  uint local_1a18;
  int local_1a14;
  long local_1a10;
  long local_1a08;
  int local_1a00;
  uint local_19fc;
  long local_19f8;
  uint local_19f0;
  undefined8 *local_19e8;
  undefined8 local_19e0 [10];
  undefined4 local_198c;
  undefined4 local_18f0;
  undefined4 local_17ec;
  undefined4 local_16e8;
  undefined4 local_1698;
  undefined4 local_1644;
  undefined4 local_1624;
  undefined4 local_1500;
  undefined4 local_14b0;
  undefined4 local_1444;
  undefined4 local_1320;
  undefined4 local_12d0;
  undefined4 local_12ac;
  undefined4 local_12a8;
  undefined8 uStack_12a0;
  undefined1 auStack_1298 [24];
  long local_1280;
  uint *local_1278;
  uint local_1270;
  undefined8 *local_1268;
  uint *local_1260;
  long local_1258;
  int local_1250;
  uint local_124c;
  long local_1248;
  uint *local_1240;
  uint local_1238;
  undefined8 *local_1230;
  long local_1210;
  uint *local_1208;
  uint local_1200;
  undefined8 *local_11f8;
  long local_11f0;
  undefined8 *local_11e8;
  uint *local_11e0;
  uint local_11d8;
  uint local_11d4;
  long local_11c8;
  undefined8 *local_11c0;
  uint *local_11b8;
  uint local_11b0;
  uint local_11ac;
  long local_11a0;
  undefined8 *local_1198;
  uint *local_1190;
  uint local_1188;
  uint local_1184;
  long *local_1178;
  long *local_1170;
  int local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  uint *local_158;
  uint local_150;
  uint local_14c;
  long local_140;
  undefined8 local_138;
  uint *local_130;
  uint local_128;
  uint local_124;
  long local_118;
  undefined8 local_110;
  uint *local_108;
  uint local_100;
  uint local_fc;
  long local_f0;
  undefined8 local_e8;
  uint *local_e0;
  uint local_d8;
  uint local_d4;
  long local_c8;
  undefined8 local_c0;
  uint *local_b8;
  uint local_b0;
  uint local_ac;
  int local_a0;
  long local_98;
  undefined8 local_90;
  uint *local_88;
  uint local_80;
  uint local_7c;
  int local_70;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    return;
  }
  lVar27 = *(long *)(param_2 + 8);
  if (lVar27 == 0) {
    lVar27 = tpidr_el0;
    if (*(long *)(lVar27 + 0x38d490) == 0) {
      lVar38 = FUN_0333d16c(0,1);
      *(long *)(lVar27 + 0x38d490) = lVar38;
      lVar27 = *(long *)(lVar38 + 0x10);
    }
    else {
      lVar27 = *(long *)(*(long *)(lVar27 + 0x38d490) + 0x10);
    }
    if (lVar27 != 0) {
      puVar41 = *(undefined8 **)(lVar27 + 8);
      uVar28 = (long)puVar41 + 0x17U & 0xfffffffffffffff8;
      if ((uVar28 <= *(ulong *)(lVar27 + 0x10)) &&
         (*(ulong *)(lVar27 + 8) = uVar28, puVar41 != (undefined8 *)0x0)) {
        *puVar41 = "TtNarrowPhase";
        uVar22 = nn::os::GetSystemTick();
        puVar41[1] = uVar22;
      }
      goto LAB_030bd848;
    }
    bVar15 = true;
  }
  else {
    puVar41 = *(undefined8 **)(lVar27 + 8);
    uVar28 = (long)puVar41 + 0x17U & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar27 + 0x10)) &&
       (*(ulong *)(lVar27 + 8) = uVar28, puVar41 != (undefined8 *)0x0)) {
      *puVar41 = "TtNarrowPhase";
      uVar22 = nn::os::GetSystemTick();
      puVar41[1] = uVar22;
    }
LAB_030bd848:
    puVar41 = *(undefined8 **)(lVar27 + 8);
    uVar28 = (long)puVar41 + 0x1fU & 0xfffffffffffffff8;
    if (*(ulong *)(lVar27 + 0x10) < uVar28) {
      bVar15 = false;
    }
    else {
      *(ulong *)(lVar27 + 8) = uVar28;
      if (puVar41 != (undefined8 *)0x0) {
        *puVar41 = "LtGridTask";
        puVar41[2] = "StProcess";
        uVar22 = nn::os::GetSystemTick();
        puVar41[1] = uVar22;
      }
      bVar15 = false;
    }
  }
  plVar35 = *(long **)(param_1 + 0xa8);
  puVar1 = (uint *)(plVar35 + 0x22);
  uVar25 = *(uint *)(plVar35 + 0x22);
  uVar28 = (ulong)uVar25 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar31 = *puVar1;
  if (uVar31 != uVar25) {
    ClearExclusiveLocal();
LAB_030bd8d4:
    do {
      uVar28 = (ulong)(uVar31 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar25 = *puVar1;
      if (uVar25 == uVar31) {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar13) {
          *puVar1 = uVar31 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar35 + uVar28 * 4 + 0x114);
          cVar12 = ExclusiveMonitorsStatus();
        }
        if (cVar12 == '\0') goto code_r0x030bd8d8;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar31 = uVar25;
    } while( true );
  }
  cVar12 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
  if (bVar13) {
    *puVar1 = uVar25 + 0x200 & 0xfffffe00 | puVar1[uVar28 + 1];
    cVar12 = ExclusiveMonitorsStatus();
  }
  if (cVar12 != '\0') goto LAB_030bd8d4;
  puVar40 = puVar1 + uVar28 + 1;
LAB_030bd914:
  *puVar40 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar40 = *(uint **)(*plVar35 + uVar28 * 8);
  lVar51 = (long)(int)*puVar40;
  lVar38 = *(long *)(param_1 + 200);
  lVar45 = *(long *)(*(long *)(param_1 + 0xd8) + 0x100);
  lVar47 = lVar38 + lVar51 * 0x710;
  if (*(char *)(lVar47 + 0x700) == '\0') {
    *(undefined1 *)(lVar47 + 0x700) = 1;
    FUN_0305bb88(lVar47,*(undefined8 *)(puVar40 + 0x138),
                 "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_activeCacheStream");
    lVar44 = lVar38 + lVar51 * 0x710;
    FUN_0305bb88(lVar44 + 0x200,*(undefined8 *)(puVar40 + 0x138),
                 "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_inactiveCacheStream");
    puVar41 = *(undefined8 **)(puVar40 + 0x138);
    plVar20 = (long *)*puVar41;
    *(long **)(lVar44 + 0x400) = plVar20;
    *(undefined4 *)(lVar44 + 0x408) = 0;
    *(undefined1 *)(lVar44 + 0x40c) = 0;
    iVar14 = *(int *)(puVar41 + 0xb) + -1;
    if (*(int *)(puVar41 + 0xb) < 1) {
      lVar44 = puVar41[1];
      (**(code **)(*plVar20 + 0x20))(plVar20,lVar44,6);
      *(undefined4 *)(puVar41 + 0xb) = 5;
      puVar41 = (undefined8 *)(lVar44 + 0x28);
    }
    else {
      *(int *)(puVar41 + 0xb) = iVar14;
      puVar41 = (undefined8 *)(puVar41[1] + (long)iVar14 * 8);
    }
    puVar41 = (undefined8 *)*puVar41;
    lVar44 = lVar38 + lVar51 * 0x710;
    puVar41[2] = 0;
    puVar41[3] = 0;
    *puVar41 = 0;
    puVar41[1] = 0;
    *(undefined4 *)((long)puVar41 + 4) = *(undefined4 *)(lVar44 + 0x418);
    puVar18 = PTR_PTR_0434a080;
    uVar31 = *(uint *)(lVar44 + 0x41c);
    uVar48 = *(uint *)(lVar44 + 0x418);
    plVar20 = (long *)(lVar44 + 0x410);
    uVar25 = uVar48 + 1;
    if ((int)uVar48 < (int)(uVar31 & 0x3fffffff)) {
      lVar21 = *plVar20;
    }
    else {
      lVar21 = *plVar20;
      if (0x3ffffffe < (int)uVar48) {
        FUN_032bd0a8(uVar25);
        uVar31 = *(uint *)(lVar44 + 0x41c);
      }
      uVar31 = (uVar31 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar31) {
        uVar31 = 0x3fffffff;
      }
      uVar2 = uVar25;
      if ((int)uVar25 <= (int)uVar31) {
        uVar2 = uVar31;
      }
      lVar21 = FUN_032bd1d4(puVar18,uVar2,8,lVar21,uVar48,(uint *)(lVar44 + 0x41c));
      *plVar20 = lVar21;
      uVar48 = *(uint *)(lVar44 + 0x418);
    }
    lVar29 = lVar38 + lVar51 * 0x710;
    *(undefined8 **)(lVar21 + (long)(int)uVar48 * 8) = puVar41;
    *(uint *)(lVar44 + 0x418) = uVar25;
    *(char **)(lVar29 + 0x4f0) = "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_deferredWork";
    puVar41 = *(undefined8 **)(puVar40 + 0x138);
    plVar20 = (long *)*puVar41;
    *(undefined4 *)(lVar29 + 0x508) = 0;
    *(long **)(lVar29 + 0x500) = plVar20;
    *(undefined1 *)(lVar29 + 0x50c) = 0;
    iVar14 = *(int *)(puVar41 + 0xb) + -1;
    if (*(int *)(puVar41 + 0xb) < 1) {
      lVar44 = puVar41[1];
      (**(code **)(*plVar20 + 0x20))(plVar20,lVar44,6);
      *(undefined4 *)(puVar41 + 0xb) = 5;
      puVar41 = (undefined8 *)(lVar44 + 0x28);
    }
    else {
      *(int *)(puVar41 + 0xb) = iVar14;
      puVar41 = (undefined8 *)(puVar41[1] + (long)iVar14 * 8);
    }
    puVar41 = (undefined8 *)*puVar41;
    lVar44 = lVar38 + lVar51 * 0x710;
    puVar41[2] = 0;
    puVar41[3] = 0;
    *puVar41 = 0;
    puVar41[1] = 0;
    *(undefined4 *)((long)puVar41 + 4) = *(undefined4 *)(lVar44 + 0x518);
    uVar31 = *(uint *)(lVar44 + 0x51c);
    uVar48 = *(uint *)(lVar44 + 0x518);
    plVar20 = (long *)(lVar44 + 0x510);
    uVar25 = uVar48 + 1;
    if ((int)uVar48 < (int)(uVar31 & 0x3fffffff)) {
      lVar21 = *plVar20;
    }
    else {
      lVar21 = *plVar20;
      if (0x3ffffffe < (int)uVar48) {
        FUN_032bd0a8(uVar25);
        uVar31 = *(uint *)(lVar44 + 0x51c);
      }
      uVar31 = (uVar31 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar31) {
        uVar31 = 0x3fffffff;
      }
      uVar2 = uVar25;
      if ((int)uVar25 <= (int)uVar31) {
        uVar2 = uVar31;
      }
      lVar21 = FUN_032bd1d4(puVar18,uVar2,8,lVar21,uVar48,(uint *)(lVar44 + 0x51c));
      *plVar20 = lVar21;
      uVar48 = *(uint *)(lVar44 + 0x518);
    }
    lVar29 = lVar38 + lVar51 * 0x710;
    *(undefined8 **)(lVar21 + (long)(int)uVar48 * 8) = puVar41;
    *(uint *)(lVar44 + 0x518) = uVar25;
    *(char **)(lVar29 + 0x5f0) =
         "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_deferedFixedManifoldsOut";
    puVar41 = *(undefined8 **)(puVar40 + 0x138);
    plVar20 = (long *)*puVar41;
    *(undefined4 *)(lVar29 + 0x608) = 0;
    *(long **)(lVar29 + 0x600) = plVar20;
    *(undefined1 *)(lVar29 + 0x60c) = 0;
    iVar14 = *(int *)(puVar41 + 0xb) + -1;
    if (*(int *)(puVar41 + 0xb) < 1) {
      lVar44 = puVar41[1];
      (**(code **)(*plVar20 + 0x20))(plVar20,lVar44,6);
      *(undefined4 *)(puVar41 + 0xb) = 5;
      puVar41 = (undefined8 *)(lVar44 + 0x28);
    }
    else {
      *(int *)(puVar41 + 0xb) = iVar14;
      puVar41 = (undefined8 *)(puVar41[1] + (long)iVar14 * 8);
    }
    puVar41 = (undefined8 *)*puVar41;
    lVar44 = lVar38 + lVar51 * 0x710;
    puVar41[2] = 0;
    puVar41[3] = 0;
    *puVar41 = 0;
    puVar41[1] = 0;
    *(undefined4 *)((long)puVar41 + 4) = *(undefined4 *)(lVar44 + 0x618);
    uVar31 = *(uint *)(lVar44 + 0x61c);
    uVar48 = *(uint *)(lVar44 + 0x618);
    plVar20 = (long *)(lVar44 + 0x610);
    uVar25 = uVar48 + 1;
    if ((int)uVar48 < (int)(uVar31 & 0x3fffffff)) {
      lVar21 = *plVar20;
    }
    else {
      lVar21 = *plVar20;
      if (0x3ffffffe < (int)uVar48) {
        FUN_032bd0a8(uVar25);
        uVar31 = *(uint *)(lVar44 + 0x61c);
      }
      uVar31 = (uVar31 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar31) {
        uVar31 = 0x3fffffff;
      }
      uVar2 = uVar25;
      if ((int)uVar25 <= (int)uVar31) {
        uVar2 = uVar31;
      }
      lVar21 = FUN_032bd1d4(puVar18,uVar2,8,lVar21,uVar48,(uint *)(lVar44 + 0x61c));
      *plVar20 = lVar21;
      uVar48 = *(uint *)(lVar44 + 0x618);
    }
    *(undefined8 **)(lVar21 + (long)(int)uVar48 * 8) = puVar41;
    *(uint *)(lVar44 + 0x618) = uVar25;
    *(char **)(lVar38 + lVar51 * 0x710 + 0x6f0) =
         "hknpProcessNarrowPhaseGridTask::ThreadOutput::m_deferedMovingManifoldsOut";
  }
  lVar44 = lVar45 + lVar51 * 0x500;
  local_160 = *(undefined8 *)(puVar40 + 0x138);
  local_b8 = *(uint **)(*(long *)(lVar44 + 0x110) + (long)*(int *)(lVar44 + 0x118) * 8 + -8);
  local_c8 = lVar44 + 0x100;
  local_b0 = *local_b8 >> 0x10;
  local_ac = *local_b8 & 0xffff;
  *(uint *)(lVar44 + 0x108) = *(int *)(lVar44 + 0x108) - local_ac;
  local_88 = *(uint **)(*(long *)(lVar44 + 0x210) + (long)*(int *)(lVar44 + 0x218) * 8 + -8);
  local_98 = lVar44 + 0x200;
  local_80 = *local_88 >> 0x10;
  local_7c = *local_88 & 0xffff;
  *(uint *)(lVar44 + 0x208) = *(int *)(lVar44 + 0x208) - local_7c;
  lVar38 = lVar38 + lVar51 * 0x710;
  local_158 = *(uint **)(*(long *)(lVar38 + 0x10) + (long)*(int *)(lVar38 + 0x18) * 8 + -8);
  local_150 = *local_158 >> 0x10;
  local_14c = *local_158 & 0xffff;
  *(uint *)(lVar38 + 8) = *(int *)(lVar38 + 8) - local_14c;
  local_130 = *(uint **)(*(long *)(lVar38 + 0x110) + (long)*(int *)(lVar38 + 0x118) * 8 + -8);
  local_140 = lVar38 + 0x100;
  local_128 = *local_130 >> 0x10;
  local_124 = *local_130 & 0xffff;
  local_118 = lVar38 + 0x200;
  *(uint *)(lVar38 + 0x108) = *(int *)(lVar38 + 0x108) - local_124;
  local_110 = *(undefined8 *)(puVar40 + 0x138);
  local_108 = *(uint **)(*(long *)(lVar38 + 0x210) + (long)*(int *)(lVar38 + 0x218) * 8 + -8);
  local_100 = *local_108 >> 0x10;
  local_fc = *local_108 & 0xffff;
  *(uint *)(lVar38 + 0x208) = *(int *)(lVar38 + 0x208) - local_fc;
  local_e0 = *(uint **)(*(long *)(lVar38 + 0x310) + (long)*(int *)(lVar38 + 0x318) * 8 + -8);
  local_f0 = lVar38 + 0x300;
  local_d8 = *local_e0 >> 0x10;
  local_d4 = *local_e0 & 0xffff;
  *(uint *)(lVar38 + 0x308) = *(int *)(lVar38 + 0x308) - local_d4;
  local_1178 = &local_c8;
  local_1170 = &local_98;
  local_168 = lVar47;
  local_138 = local_160;
  local_e8 = local_110;
  local_c0 = local_160;
  local_90 = local_160;
  (**(code **)(**(long **)(*(long *)(puVar40 + 2) + 0x658) + 0x40))
            (*(long **)(*(long *)(puVar40 + 2) + 0x658),puVar40 + 0x13a,&local_1178,2);
  local_170 = *(undefined8 *)(param_1 + 0x100);
  local_178 = 0;
  lVar38 = *(long *)(param_1 + 200) + (long)(int)*puVar40 * 0x710;
  local_1198 = *(undefined8 **)(puVar40 + 0x138);
  local_11a0 = lVar38 + 0x400;
  local_1190 = *(uint **)(*(long *)(lVar38 + 0x410) + (long)*(int *)(lVar38 + 0x418) * 8 + -8);
  local_1188 = *local_1190 >> 0x10;
  local_1184 = *local_1190 & 0xffff;
  *(uint *)(lVar38 + 0x408) = *(int *)(lVar38 + 0x408) - local_1184;
  lVar38 = *(long *)(param_1 + 200) + (long)(int)*puVar40 * 0x710;
  local_11c0 = *(undefined8 **)(puVar40 + 0x138);
  local_11c8 = lVar38 + 0x500;
  local_11b8 = *(uint **)(*(long *)(lVar38 + 0x510) + (long)*(int *)(lVar38 + 0x518) * 8 + -8);
  local_11b0 = *local_11b8 >> 0x10;
  local_11ac = *local_11b8 & 0xffff;
  *(uint *)(lVar38 + 0x508) = *(int *)(lVar38 + 0x508) - local_11ac;
  lVar38 = *(long *)(param_1 + 200) + (long)(int)*puVar40 * 0x710;
  local_11e8 = *(undefined8 **)(puVar40 + 0x138);
  local_11f0 = lVar38 + 0x600;
  local_11e0 = *(uint **)(*(long *)(lVar38 + 0x610) + (long)*(int *)(lVar38 + 0x618) * 8 + -8);
  local_11d8 = *local_11e0 >> 0x10;
  local_11d4 = *local_11e0 & 0xffff;
  *(uint *)(lVar38 + 0x608) = *(int *)(lVar38 + 0x608) - local_11d4;
  local_1268 = *(undefined8 **)(puVar40 + 0x138);
  local_1240 = (uint *)0x0;
  local_1248 = 0;
  local_1208 = (uint *)0x0;
  local_1210 = 0;
  local_1238 = 0;
  local_1200 = 0;
  local_1270 = 0;
  local_1278 = (uint *)0x0;
  local_1280 = *(long *)(*(long *)(puVar40 + 2) + 0x500) + 0x120;
  local_1230 = local_1268;
  local_11f8 = local_1268;
  if ((bVar15) || (*(ulong *)(lVar27 + 0x18) <= *(ulong *)(lVar27 + 8))) {
    lVar38 = 0;
    do {
      *(undefined8 *)((long)local_19e0 + lVar38 + 8) = 0x100000001;
      *(undefined8 *)((long)local_19e0 + lVar38) = 0x100000001;
      lVar38 = lVar38 + 0x10;
    } while (lVar38 != 0x40);
    puVar41 = local_19e0 + 8;
    do {
      puVar41[1] = 0x100000001;
      *puVar41 = 0x100000001;
      puVar41[3] = 0x100000001;
      puVar41[2] = 0x100000001;
      puVar41[5] = 0x100000001;
      puVar41[4] = 0x100000001;
      puVar41[7] = 0x100000001;
      puVar41[6] = 0x100000001;
      puVar41[9] = 0x100000001;
      puVar41[8] = 0x100000001;
      puVar41[0xb] = 0x100000001;
      puVar41[10] = 0x100000001;
      puVar41[0xd] = 0x100000001;
      puVar41[0xc] = 0x100000001;
      puVar41[0xf] = 0x100000001;
      puVar41[0xe] = 0x100000001;
      puVar41 = puVar41 + 0x10;
    } while (puVar41 < &uStack_12a0);
    local_198c = 0;
  }
  else {
    memset(local_19e0,0,0x740);
    local_198c = 1;
  }
  piVar39 = (int *)(param_1 + 0xc0);
  iVar14 = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(long *)(puVar40 + 2) + 0x51c);
  do {
    iVar26 = *piVar39;
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar39,0x10);
    if (bVar13) {
      *piVar39 = iVar26 + 1;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  local_18f0 = local_198c;
  local_17ec = local_198c;
  local_16e8 = local_198c;
  local_1698 = local_198c;
  local_1644 = local_198c;
  local_1624 = local_198c;
  local_1500 = local_198c;
  local_14b0 = local_198c;
  local_1444 = local_198c;
  local_1320 = local_198c;
  local_12d0 = local_198c;
  local_12ac = local_198c;
  local_12a8 = local_198c;
  if (iVar26 < iVar14) {
    do {
      uVar31 = local_7c;
      uVar2 = local_80;
      puVar36 = local_88;
      uVar25 = local_ac;
      uVar48 = local_b0;
      puVar24 = local_b8;
      puVar41 = local_1230;
      lVar38 = *(long *)(param_1 + 0xb0) + (long)iVar26 * 8;
      uVar42 = (ulong)*(ushort *)(lVar38 + 4);
      bVar10 = *(byte *)(lVar38 + 6);
      uVar28 = (ulong)bVar10;
      local_1af4._0_2_ = (undefined2)local_b0;
      iVar26 = *(int *)(local_c8 + 8);
      local_1b04._0_2_ = (undefined2)local_80;
      local_a0 = 0;
      iVar4 = *(int *)(local_98 + 8);
      local_70 = 0;
      lVar38 = *(long *)(*(long *)(puVar40 + 2) + 0x500);
      lVar47 = *(long *)(param_1 + 0xe8) + uVar42 * 0x10;
      iVar5 = *(int *)(lVar47 + 0xc);
      if (iVar5 == 0) {
LAB_030bec68:
        local_1258 = 0;
      }
      else {
        puVar49 = *(uint **)(*(long *)(param_1 + 0xe8) + uVar42 * 0x10);
        if (puVar49 == local_1240) {
          local_124c = (uint)*(ushort *)(lVar47 + 10);
          local_1238 = local_1238 + local_124c;
        }
        else {
          if (local_1238 != 0) {
            if (local_1238 == (*local_1240 & 0xffff)) {
              *(undefined8 *)(*(long *)(local_1248 + 0x10) + (long)(int)local_1240[1] * 8) = 0;
              *(undefined1 *)(local_1248 + 0xc) = 1;
              iVar6 = *(int *)(local_1230 + 0xb);
              lVar44 = local_1230[1];
              *(uint **)(lVar44 + (long)iVar6 * 8) = local_1240;
              *(int *)(local_1230 + 0xb) = iVar6 + 1;
              if (*(int *)((long)local_1230 + 0x5c) <= iVar6 + 1) {
                (**(code **)(*(long *)*local_1230 + 0x28))
                          ((long *)*local_1230,lVar44 + (long)(iVar6 + -5) * 8,6);
                *(int *)(puVar41 + 0xb) = iVar6 + -5;
              }
            }
            else {
              do {
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(local_1240,0x10);
                if (bVar13) {
                  *local_1240 = *local_1240 - local_1238;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
            }
            *(undefined1 *)(local_1248 + 0xc) = 1;
          }
          local_124c = (uint)*(ushort *)(lVar47 + 10);
          local_1238 = (uint)*(ushort *)(lVar47 + 10);
          local_1248 = lVar38 + 0x20;
          local_1240 = puVar49;
        }
        local_1258 = (long)puVar49 + (ulong)*(ushort *)(lVar47 + 8) + 0x20;
        local_1250 = iVar5 - local_124c;
        local_1260 = puVar49;
        if (local_124c == 0) goto LAB_030bec68;
      }
      puVar41 = local_11f8;
      lVar38 = lVar38 + 0x120;
      if (local_1210 != lVar38) {
        if (local_1200 != 0) {
          if (local_1200 == (*local_1208 & 0xffff)) {
            *(undefined8 *)(*(long *)(local_1210 + 0x10) + (long)(int)local_1208[1] * 8) = 0;
            *(undefined1 *)(local_1210 + 0xc) = 1;
            iVar5 = *(int *)(local_11f8 + 0xb);
            lVar47 = local_11f8[1];
            *(uint **)(lVar47 + (long)iVar5 * 8) = local_1208;
            *(int *)(local_11f8 + 0xb) = iVar5 + 1;
            if (*(int *)((long)local_11f8 + 0x5c) <= iVar5 + 1) {
              (**(code **)(*(long *)*local_11f8 + 0x28))
                        ((long *)*local_11f8,lVar47 + (long)(iVar5 + -5) * 8,6);
              *(int *)(puVar41 + 0xb) = iVar5 + -5;
            }
          }
          else {
            do {
              cVar12 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(local_1208,0x10);
              if (bVar13) {
                *local_1208 = *local_1208 - local_1200;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
          local_1200 = 0;
          *(undefined1 *)(local_1210 + 0xc) = 1;
        }
        local_1210 = lVar38;
      }
      uVar37 = local_14c;
      uVar50 = local_150;
      puVar49 = local_158;
      uVar34 = local_11ac;
      uVar16 = local_11b0;
      puVar53 = local_11b8;
      uVar46 = local_11d4;
      uVar17 = local_11d8;
      puVar52 = local_11e0;
      local_1a28 = *(undefined8 **)(puVar40 + 0x138);
      local_1a20 = (uint *)0x0;
      local_1a14 = 0;
      local_1a38[0] = *(long *)(*(long *)(puVar40 + 2) + 0x500) + 0x20;
      if (*(long *)(param_1 + 0xf0) == 0) {
LAB_030be718:
        local_1a08 = 0;
      }
      else {
        plVar20 = (long *)(*(long *)(param_1 + 0xf0) + uVar42 * 0x10);
        iVar5 = *(int *)((long)plVar20 + 0xc);
        if (iVar5 == 0) goto LAB_030be718;
        local_19f8 = *(long *)(*(long *)(puVar40 + 2) + 0x500);
        *(undefined1 *)(local_19f8 + 0x42c) = 1;
        local_19f8 = local_19f8 + 0x420;
        local_1a10 = *plVar20;
        local_1a08 = local_1a10 + (ulong)*(ushort *)(plVar20 + 1) + 0x20;
        uVar11 = *(ushort *)((long)plVar20 + 10);
        local_19f0 = (uint)uVar11;
        local_19fc = (uint)uVar11;
        local_1a00 = iVar5 - local_19fc;
        if (uVar11 == 0) {
          local_1a08 = 0;
        }
        if (local_1a10 == 0) {
          local_19f0 = 0;
        }
        local_19e8 = local_1a28;
      }
      iVar5 = *(int *)(local_168 + 8);
      iVar6 = *(int *)(local_11c8 + 8);
      local_1b20._0_2_ = (undefined2)local_11b0;
      local_1b1c._0_2_ = (undefined2)local_11d8;
      puVar30 = *(undefined4 **)(*(long *)(puVar40 + 0x14c) + (long)(int)puVar40[0x14e] * 8 + -8);
      iVar7 = *(int *)(local_11f0 + 8);
      uVar8 = *puVar30;
      uVar9 = *puVar30;
      *(undefined4 **)(puVar40 + 0x1cc) = puVar30;
      *(short *)(puVar40 + 0x1ce) = (short)((uint)uVar8 >> 0x10);
      *(short *)((long)puVar40 + 0x73a) = (short)uVar9;
      puVar40[0x1cf] = -puVar40[0x14a];
      FUN_030612c8(puVar40,param_1 + 0x30,uVar42,0xffffffff,param_1 + 0xe1,&local_1260,&local_1a10,
                   local_1a38,auStack_1298,&local_11a0,&local_1178,&local_168,&local_118,
                   lVar45 + lVar51 * 0x500,&local_11c8,&local_11f0,*(undefined8 *)(puVar40 + 0x13a),
                   *(undefined8 *)(puVar40 + 0x13c),local_19e0);
      if (puVar40[0x1cf] + puVar40[0x14a] == 0) {
        puVar40[0x1cf] = 0;
      }
      else {
        puVar33 = *(uint **)(puVar40 + 0x1cc);
        if ((puVar33 != *(uint **)(*(long *)(puVar40 + 0x14c) + (long)(int)puVar40[0x14e] * 8 + -8))
           && ((uint)*(ushort *)((long)puVar40 + 0x73a) == (*puVar33 & 0xffff))) {
          puVar33 = *(uint **)(puVar33 + 2);
          puVar40[0x1ce] = 0;
        }
        uVar32 = *puVar33;
        *(uint **)(puVar40 + 0x1cc) = puVar33;
        puVar40[0x1cf] = puVar40[0x1cf] + puVar40[0x14a];
        lVar38 = *(long *)(puVar40 + 0x1c8);
        *(short *)((long)puVar40 + 0x73a) = (short)uVar32 - *(short *)((long)puVar40 + 0x73a);
        puVar41 = *(undefined8 **)(*(long *)(lVar38 + 0x10) + uVar42 * 8);
        if (*(int *)((long)puVar41 + 0xc) == 0) {
          puVar41[1] = *(undefined8 *)(puVar40 + 0x1ce);
          uVar22 = *(undefined8 *)(puVar40 + 0x1cc);
          puVar41[2] = *(undefined8 *)(puVar40 + 0x1d0);
          *puVar41 = uVar22;
        }
        else {
          puVar33 = *(uint **)(*(long *)(puVar40 + 0x14c) + (long)(int)puVar40[0x14e] * 8 + -8);
          uVar22 = *(undefined8 *)(puVar40 + 0x138);
          uVar32 = *puVar33;
          if (0x3a < uVar32 >> 0x16) {
            puVar43 = puVar33;
            do {
              puVar33 = (uint *)FUN_032be688(puVar40 + 0x148,uVar22);
              *(uint **)(puVar43 + 2) = puVar33;
              uVar32 = *puVar33;
              puVar43 = puVar33;
            } while (0x3a < uVar32 >> 0x16);
          }
          uVar32 = uVar32 >> 0x10;
          do {
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar33,0x10);
            if (bVar13) {
              *puVar33 = *puVar33 + 0x200001;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          puVar40[0x14a] = puVar40[0x14a] + 1;
          uVar22 = *(undefined8 *)(puVar40 + 0x1ce);
          uVar3 = *(undefined8 *)(puVar40 + 0x1d0);
          puVar23 = (undefined8 *)((long)puVar33 + (ulong)uVar32 + 0x20);
          *puVar23 = *(undefined8 *)(puVar40 + 0x1cc);
          *(undefined8 *)((long)puVar33 + (ulong)uVar32 + 0x28) = uVar22;
          *(undefined8 *)((long)puVar33 + (ulong)uVar32 + 0x30) = uVar3;
          if (*(int *)((long)puVar41 + 0xc) == 0) {
            puVar41[1] = *(undefined8 *)((long)puVar33 + (ulong)uVar32 + 0x28);
            uVar22 = *puVar23;
            puVar41[2] = *(undefined8 *)((long)puVar33 + (ulong)uVar32 + 0x30);
            *puVar41 = uVar22;
          }
          else {
            *(undefined8 *)((long)puVar33 + (ulong)uVar32 + 0x30) = puVar41[2];
            puVar41[2] = puVar23;
          }
          *(undefined8 **)(*(long *)(lVar38 + 0x10) + uVar42 * 8) = puVar23;
        }
      }
      puVar30 = *(undefined4 **)(*(long *)(puVar40 + 0x14c) + (long)(int)puVar40[0x14e] * 8 + -8);
      uVar8 = *puVar30;
      uVar9 = *puVar30;
      *(undefined4 **)(puVar40 + 0x1cc) = puVar30;
      *(short *)(puVar40 + 0x1ce) = (short)((uint)uVar8 >> 0x10);
      *(short *)((long)puVar40 + 0x73a) = (short)uVar9;
      puVar40[0x1cf] = -puVar40[0x14a];
      iVar5 = (*(int *)(local_168 + 8) - (iVar5 + uVar37)) + local_14c;
      if (iVar5 != 0) {
        uVar32 = local_14c;
        if (local_158 != puVar49) {
          if ((uVar37 & 0xffff) == (*puVar49 & 0xffff)) {
            puVar49 = *(uint **)(puVar49 + 2);
            uVar50 = 0;
            uVar37 = 0;
          }
          if (puVar49 == local_158) {
            puVar49 = local_158;
          }
          else {
            uVar32 = *puVar49;
          }
        }
        uVar37 = uVar32 - uVar37;
      }
      puVar41 = (undefined8 *)(*(long *)(param_1 + 0xf8) + uVar42 * 0x10);
      *puVar41 = puVar49;
      *(short *)(puVar41 + 1) = (short)uVar50;
      *(short *)((long)puVar41 + 10) = (short)uVar37;
      *(int *)((long)puVar41 + 0xc) = iVar5;
      iVar5 = (*(int *)(local_11c8 + 8) - (iVar6 + uVar34)) + local_11ac;
      if (iVar5 != 0) {
        uVar37 = local_11ac;
        if (local_11b8 != puVar53) {
          if ((uVar34 & 0xffff) == (*puVar53 & 0xffff)) {
            puVar53 = *(uint **)(puVar53 + 2);
            uVar34 = 0;
            local_1b20 = 0;
            uVar16 = local_1b20;
          }
          local_1b20._0_2_ = (undefined2)uVar16;
          if (puVar53 == local_11b8) {
            puVar53 = local_11b8;
          }
          else {
            uVar37 = *puVar53;
          }
        }
        uVar34 = uVar37 - uVar34;
      }
      iVar6 = (*(int *)(local_11f0 + 8) - (iVar7 + uVar46)) + local_11d4;
      if (iVar6 != 0) {
        uVar37 = local_11d4;
        if (local_11e0 != puVar52) {
          if ((uVar46 & 0xffff) == (*puVar52 & 0xffff)) {
            puVar52 = *(uint **)(puVar52 + 2);
            uVar46 = 0;
            local_1b1c = 0;
            uVar17 = local_1b1c;
          }
          local_1b1c._0_2_ = (undefined2)uVar17;
          if (puVar52 == local_11e0) {
            puVar52 = local_11e0;
          }
          else {
            uVar37 = *puVar52;
          }
        }
        uVar46 = uVar37 - uVar46;
      }
      if ((iVar5 != 0) && (bVar10 != 0xff)) {
        lVar38 = *(long *)(*(long *)(puVar40 + 2) + 0x500);
        puVar41 = *(undefined8 **)(*(long *)(lVar38 + 0x970) + uVar28 * 8);
        if (*(int *)((long)puVar41 + 0xc) == 0) {
          *(undefined2 *)(puVar41 + 1) = (undefined2)local_1b20;
          *puVar41 = puVar53;
          *(int *)((long)puVar41 + 0xc) = iVar5;
          puVar41[2] = 0;
          *(short *)((long)puVar41 + 10) = (short)uVar34;
        }
        else {
          if ((int)local_11b0 < 0xec1) {
            puVar23 = (undefined8 *)((long)local_11b8 + (long)(int)local_11b0 + 0x20);
          }
          else {
            puVar23 = (undefined8 *)FUN_032bf82c(&local_11c8);
          }
          *(undefined2 *)(puVar23 + 1) = (undefined2)local_1b20;
          *puVar23 = puVar53;
          *(int *)((long)puVar23 + 0xc) = iVar5;
          *(short *)((long)puVar23 + 10) = (short)uVar34;
          puVar23[2] = 0;
          if (*(int *)((long)puVar41 + 0xc) == 0) {
            puVar41[1] = puVar23[1];
            uVar22 = *puVar23;
            puVar41[2] = puVar23[2];
            *puVar41 = uVar22;
          }
          else {
            puVar23[2] = puVar41[2];
            puVar41[2] = puVar23;
          }
          local_11ac = local_11ac + 1;
          local_11b0 = local_11b0 + 0x20;
          *(undefined8 **)(*(long *)(lVar38 + 0x970) + uVar28 * 8) = puVar23;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x80) + uVar28) = 1;
      }
      if (iVar6 != 0) {
        lVar38 = *(long *)(*(long *)(puVar40 + 2) + 0x500);
        puVar41 = *(undefined8 **)(*(long *)(lVar38 + 0x990) + uVar42 * 8);
        if (*(int *)((long)puVar41 + 0xc) == 0) {
          *puVar41 = puVar52;
          *(short *)((long)puVar41 + 10) = (short)uVar46;
          *(int *)((long)puVar41 + 0xc) = iVar6;
          *(undefined2 *)(puVar41 + 1) = (undefined2)local_1b1c;
          puVar41[2] = 0;
        }
        else {
          if ((int)local_11d8 < 0xec1) {
            puVar23 = (undefined8 *)((long)local_11e0 + (long)(int)local_11d8 + 0x20);
          }
          else {
            puVar23 = (undefined8 *)FUN_032bf82c(&local_11f0);
          }
          *puVar23 = puVar52;
          *(short *)((long)puVar23 + 10) = (short)uVar46;
          *(int *)((long)puVar23 + 0xc) = iVar6;
          *(undefined2 *)(puVar23 + 1) = (undefined2)local_1b1c;
          puVar23[2] = 0;
          if (*(int *)((long)puVar41 + 0xc) == 0) {
            puVar41[1] = puVar23[1];
            uVar22 = *puVar23;
            puVar41[2] = puVar23[2];
            *puVar41 = uVar22;
          }
          else {
            puVar23[2] = puVar41[2];
            puVar41[2] = puVar23;
          }
          local_11d4 = local_11d4 + 1;
          local_11d8 = local_11d8 + 0x20;
          *(undefined8 **)(*(long *)(lVar38 + 0x990) + uVar42 * 8) = puVar23;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xd8) + 0x30) + uVar42) = 1;
      }
      iVar6 = local_70;
      iVar5 = local_a0;
      iVar26 = (*(int *)(local_c8 + 8) - (iVar26 + uVar25)) + local_ac;
      if (iVar26 != 0) {
        uVar37 = local_ac;
        if (local_b8 != puVar24) {
          if ((uVar25 & 0xffff) == (*puVar24 & 0xffff)) {
            puVar24 = *(uint **)(puVar24 + 2);
            uVar25 = 0;
            local_1af4 = 0;
            uVar48 = local_1af4;
          }
          local_1af4._0_2_ = (undefined2)uVar48;
          if (puVar24 == local_b8) {
            puVar24 = local_b8;
          }
          else {
            uVar37 = *puVar24;
          }
        }
        uVar25 = uVar37 - uVar25;
      }
      iVar4 = (*(int *)(local_98 + 8) - (iVar4 + uVar31)) + local_7c;
      if (iVar4 != 0) {
        uVar48 = local_7c;
        if (local_88 != puVar36) {
          if ((uVar31 & 0xffff) == (*puVar36 & 0xffff)) {
            puVar36 = *(uint **)(puVar36 + 2);
            uVar31 = 0;
            local_1b04 = 0;
            uVar2 = local_1b04;
          }
          local_1b04._0_2_ = (undefined2)uVar2;
          if (puVar36 == local_88) {
            puVar36 = local_88;
          }
          else {
            uVar48 = *puVar36;
          }
        }
        uVar31 = uVar48 - uVar31;
      }
      lVar38 = *(long *)(param_1 + 0xd8);
      puVar41 = *(undefined8 **)(*(long *)(lVar38 + 0x20) + uVar42 * 8);
      iVar7 = *(int *)((long)puVar41 + 0x1c) + local_a0;
      if (iVar26 == 0) {
        *(int *)((long)puVar41 + 0x1c) = iVar7;
      }
      else {
        if (*(int *)((long)puVar41 + 0xc) == 0) {
          *puVar41 = puVar24;
          *(short *)((long)puVar41 + 10) = (short)uVar25;
          *(int *)((long)puVar41 + 0xc) = iVar26;
          puVar41[2] = 0;
          *(undefined1 *)(puVar41 + 3) = 0;
          *(undefined2 *)(puVar41 + 1) = (undefined2)local_1af4;
          *(undefined1 *)((long)puVar41 + 0x1b) = 0;
          *(undefined2 *)((long)puVar41 + 0x19) = 0;
          *(int *)((long)puVar41 + 0x1c) = local_a0;
        }
        else {
          if ((int)local_b0 < 0xec1) {
            puVar23 = (undefined8 *)((long)local_b8 + (long)(int)local_b0 + 0x20);
          }
          else {
            puVar23 = (undefined8 *)FUN_032bf82c(&local_c8);
          }
          *puVar23 = puVar24;
          *(undefined2 *)(puVar23 + 1) = (undefined2)local_1af4;
          *(short *)((long)puVar23 + 10) = (short)uVar25;
          *(int *)((long)puVar23 + 0xc) = iVar26;
          puVar23[2] = 0;
          *(undefined1 *)(puVar23 + 3) = 0;
          *(undefined1 *)((long)puVar23 + 0x1b) = 0;
          *(undefined2 *)((long)puVar23 + 0x19) = 0;
          *(int *)((long)puVar23 + 0x1c) = iVar5;
          if (*(int *)((long)puVar41 + 0xc) == 0) {
            uVar22 = puVar23[3];
            puVar41[1] = puVar23[1];
            puVar41[3] = uVar22;
            uVar22 = *puVar23;
            puVar41[2] = puVar23[2];
            *puVar41 = uVar22;
          }
          else {
            puVar23[2] = puVar41[2];
            puVar41[2] = puVar23;
          }
          local_ac = local_ac + 1;
          local_b0 = local_b0 + 0x20;
          *(undefined8 **)(*(long *)(lVar38 + 0x20) + uVar42 * 8) = puVar23;
        }
        *(int *)(*(long *)(*(long *)(lVar38 + 0x20) + uVar42 * 8) + 0x1c) = iVar7;
        *(undefined1 *)(*(long *)(lVar38 + 0x30) + uVar42) = 1;
      }
      if (bVar10 != 0xff) {
        puVar41 = *(undefined8 **)(*(long *)(lVar38 + 0x70) + uVar28 * 8);
        iVar26 = *(int *)((long)puVar41 + 0x1c) + iVar6;
        if (iVar4 == 0) {
          *(int *)((long)puVar41 + 0x1c) = iVar26;
        }
        else {
          if (*(int *)((long)puVar41 + 0xc) == 0) {
            *puVar41 = puVar36;
            *(short *)((long)puVar41 + 10) = (short)uVar31;
            *(int *)((long)puVar41 + 0xc) = iVar4;
            puVar41[2] = 0;
            *(undefined1 *)(puVar41 + 3) = 0;
            *(undefined2 *)(puVar41 + 1) = (undefined2)local_1b04;
            *(undefined1 *)((long)puVar41 + 0x1b) = 0;
            *(undefined2 *)((long)puVar41 + 0x19) = 0;
            *(int *)((long)puVar41 + 0x1c) = iVar6;
          }
          else {
            if ((int)local_80 < 0xec1) {
              puVar23 = (undefined8 *)((long)local_88 + (long)(int)local_80 + 0x20);
            }
            else {
              puVar23 = (undefined8 *)FUN_032bf82c(&local_98);
            }
            *(undefined2 *)(puVar23 + 1) = (undefined2)local_1b04;
            *puVar23 = puVar36;
            *(short *)((long)puVar23 + 10) = (short)uVar31;
            puVar23[2] = 0;
            *(undefined1 *)(puVar23 + 3) = 0;
            *(int *)((long)puVar23 + 0xc) = iVar4;
            *(undefined1 *)((long)puVar23 + 0x1b) = 0;
            *(undefined2 *)((long)puVar23 + 0x19) = 0;
            *(int *)((long)puVar23 + 0x1c) = iVar6;
            if (*(int *)((long)puVar41 + 0xc) == 0) {
              uVar22 = puVar23[3];
              puVar41[1] = puVar23[1];
              puVar41[3] = uVar22;
              uVar22 = *puVar23;
              puVar41[2] = puVar23[2];
              *puVar41 = uVar22;
            }
            else {
              puVar23[2] = puVar41[2];
              puVar41[2] = puVar23;
            }
            local_7c = local_7c + 1;
            local_80 = local_80 + 0x20;
            *(undefined8 **)(*(long *)(lVar38 + 0x70) + uVar28 * 8) = puVar23;
          }
          *(int *)(*(long *)(*(long *)(lVar38 + 0x70) + uVar28 * 8) + 0x1c) = iVar26;
          *(undefined1 *)(*(long *)(lVar38 + 0x80) + uVar28) = 1;
        }
      }
      puVar41 = local_1a28;
      if ((local_1a20 != (uint *)0x0) && (local_1a38[0] != 0)) {
        if (local_1a18 == (*local_1a20 & 0xffff)) {
          *(undefined8 *)(*(long *)(local_1a38[0] + 0x10) + (long)(int)local_1a20[1] * 8) = 0;
          *(undefined1 *)(local_1a38[0] + 0xc) = 1;
          iVar26 = *(int *)(local_1a28 + 0xb);
          lVar38 = local_1a28[1];
          *(uint **)(lVar38 + (long)iVar26 * 8) = local_1a20;
          *(int *)(local_1a28 + 0xb) = iVar26 + 1;
          if (*(int *)((long)local_1a28 + 0x5c) <= iVar26 + 1) {
            (**(code **)(*(long *)*local_1a28 + 0x28))
                      ((long *)*local_1a28,lVar38 + (long)(iVar26 + -5) * 8,6);
            *(int *)(puVar41 + 0xb) = iVar26 + -5;
          }
        }
        else {
          do {
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(local_1a20,0x10);
            if (bVar13) {
              *local_1a20 = *local_1a20 - local_1a18;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
        }
      }
      local_1a20 = (uint *)0x0;
      if ((local_1a14 != 0) && (local_1a20 = (uint *)0x0, *(char *)(local_1a38[0] + 0xc) == '\0')) {
        FUN_032bff9c(local_1a38);
      }
      do {
        iVar26 = *piVar39;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar39,0x10);
        if (bVar13) {
          *piVar39 = iVar26 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      bVar13 = true;
    } while (iVar26 < iVar14);
  }
  else {
    bVar13 = false;
  }
  *(bool *)(param_1 + 0xe1) = *(int *)(*(long *)(*(long *)(puVar40 + 2) + 0x4a8) + 0x1c) != 0;
  if (bVar13) {
    FUN_0306e23c(local_19e0,lVar27);
  }
  puVar41 = local_1230;
  if (local_1238 != 0) {
    if (local_1238 == (*local_1240 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1248 + 0x10) + (long)(int)local_1240[1] * 8) = 0;
      *(undefined1 *)(local_1248 + 0xc) = 1;
      iVar14 = *(int *)(local_1230 + 0xb);
      lVar38 = local_1230[1];
      *(uint **)(lVar38 + (long)iVar14 * 8) = local_1240;
      *(int *)(local_1230 + 0xb) = iVar14 + 1;
      if (*(int *)((long)local_1230 + 0x5c) <= iVar14 + 1) {
        (**(code **)(*(long *)*local_1230 + 0x28))
                  ((long *)*local_1230,lVar38 + (long)(iVar14 + -5) * 8,6);
        *(int *)(puVar41 + 0xb) = iVar14 + -5;
      }
    }
    else {
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(local_1240,0x10);
        if (bVar13) {
          *local_1240 = *local_1240 - local_1238;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    local_1238 = 0;
    *(undefined1 *)(local_1248 + 0xc) = 1;
  }
  puVar41 = local_11f8;
  local_1230 = (undefined8 *)0x0;
  local_1248 = 0;
  if (local_1200 != 0) {
    if (local_1200 == (*local_1208 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1210 + 0x10) + (long)(int)local_1208[1] * 8) = 0;
      *(undefined1 *)(local_1210 + 0xc) = 1;
      iVar14 = *(int *)(local_11f8 + 0xb);
      lVar38 = local_11f8[1];
      *(uint **)(lVar38 + (long)iVar14 * 8) = local_1208;
      *(int *)(local_11f8 + 0xb) = iVar14 + 1;
      if (*(int *)((long)local_11f8 + 0x5c) <= iVar14 + 1) {
        (**(code **)(*(long *)*local_11f8 + 0x28))
                  ((long *)*local_11f8,lVar38 + (long)(iVar14 + -5) * 8,6);
        *(int *)(puVar41 + 0xb) = iVar14 + -5;
      }
    }
    else {
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(local_1208,0x10);
        if (bVar13) {
          *local_1208 = *local_1208 - local_1200;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    local_1200 = 0;
    *(undefined1 *)(local_1210 + 0xc) = 1;
  }
  puVar41 = local_1268;
  local_11f8 = (undefined8 *)0x0;
  local_1210 = 0;
  if (local_1270 != 0) {
    if (local_1270 == (*local_1278 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1280 + 0x10) + (long)(int)local_1278[1] * 8) = 0;
      *(undefined1 *)(local_1280 + 0xc) = 1;
      iVar14 = *(int *)(local_1268 + 0xb);
      lVar38 = local_1268[1];
      *(uint **)(lVar38 + (long)iVar14 * 8) = local_1278;
      *(int *)(local_1268 + 0xb) = iVar14 + 1;
      if (*(int *)((long)local_1268 + 0x5c) <= iVar14 + 1) {
        (**(code **)(*(long *)*local_1268 + 0x28))
                  ((long *)*local_1268,lVar38 + (long)(iVar14 + -5) * 8,6);
        *(int *)(puVar41 + 0xb) = iVar14 + -5;
      }
    }
    else {
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(local_1278,0x10);
        if (bVar13) {
          *local_1278 = *local_1278 - local_1270;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
    local_1270 = 0;
    *(undefined1 *)(local_1280 + 0xc) = 1;
  }
  local_1268 = (undefined8 *)0x0;
  local_1280 = 0;
  if (local_178 != 0) {
    FUN_030600f0(local_170,&local_1178);
    local_178 = 0;
  }
  puVar41 = local_1198;
  if (local_1184 == 0) {
    piVar39 = (int *)(local_11a0 + 0x18);
    iVar14 = *piVar39;
    if (iVar14 < 2) goto LAB_030bdfe8;
    lVar45 = *(long *)(*(long *)(local_11a0 + 0x10) + (long)(iVar14 + -2) * 8);
    iVar26 = *(int *)(local_1198 + 0xb);
    lVar38 = local_1198[1];
    *(undefined8 *)(lVar38 + (long)iVar26 * 8) =
         *(undefined8 *)(*(long *)(local_11a0 + 0x10) + (long)(iVar14 + -1) * 8);
    *(int *)(local_1198 + 0xb) = iVar26 + 1;
    if (*(int *)((long)local_1198 + 0x5c) <= iVar26 + 1) {
      (**(code **)(*(long *)*local_1198 + 0x28))
                ((long *)*local_1198,lVar38 + (long)(iVar26 + -5) * 8,6);
      *(int *)(puVar41 + 0xb) = iVar26 + -5;
    }
    *(undefined8 *)(lVar45 + 8) = 0;
    uVar25 = 0xffffffff;
  }
  else {
LAB_030bdfe8:
    piVar39 = (int *)(local_11a0 + 8);
    local_1190[2] = 0;
    local_1190[3] = 0;
    *local_1190 = *local_1190 & 0xffff0000 | local_1184 & 0xffff;
    *local_1190 = *local_1190 & 0xffff | local_1188 << 0x10;
    uVar25 = local_1184;
  }
  puVar41 = local_11c0;
  *piVar39 = *piVar39 + uVar25;
  local_1190 = (uint *)0x0;
  local_11a0 = 0;
  if (local_11ac == 0) {
    piVar39 = (int *)(local_11c8 + 0x18);
    iVar14 = *piVar39;
    if (iVar14 < 2) goto LAB_030be040;
    lVar45 = *(long *)(*(long *)(local_11c8 + 0x10) + (long)(iVar14 + -2) * 8);
    iVar26 = *(int *)(local_11c0 + 0xb);
    lVar38 = local_11c0[1];
    *(undefined8 *)(lVar38 + (long)iVar26 * 8) =
         *(undefined8 *)(*(long *)(local_11c8 + 0x10) + (long)(iVar14 + -1) * 8);
    *(int *)(local_11c0 + 0xb) = iVar26 + 1;
    if (*(int *)((long)local_11c0 + 0x5c) <= iVar26 + 1) {
      (**(code **)(*(long *)*local_11c0 + 0x28))
                ((long *)*local_11c0,lVar38 + (long)(iVar26 + -5) * 8,6);
      *(int *)(puVar41 + 0xb) = iVar26 + -5;
    }
    *(undefined8 *)(lVar45 + 8) = 0;
    uVar25 = 0xffffffff;
  }
  else {
LAB_030be040:
    piVar39 = (int *)(local_11c8 + 8);
    local_11b8[2] = 0;
    local_11b8[3] = 0;
    *local_11b8 = *local_11b8 & 0xffff0000 | local_11ac & 0xffff;
    *local_11b8 = *local_11b8 & 0xffff | local_11b0 << 0x10;
    uVar25 = local_11ac;
  }
  puVar41 = local_11e8;
  *piVar39 = *piVar39 + uVar25;
  local_11b8 = (uint *)0x0;
  local_11c8 = 0;
  if (local_11d4 == 0) {
    piVar39 = (int *)(local_11f0 + 0x18);
    iVar14 = *piVar39;
    if (iVar14 < 2) goto LAB_030be098;
    lVar45 = *(long *)(*(long *)(local_11f0 + 0x10) + (long)(iVar14 + -2) * 8);
    iVar26 = *(int *)(local_11e8 + 0xb);
    lVar38 = local_11e8[1];
    *(undefined8 *)(lVar38 + (long)iVar26 * 8) =
         *(undefined8 *)(*(long *)(local_11f0 + 0x10) + (long)(iVar14 + -1) * 8);
    *(int *)(local_11e8 + 0xb) = iVar26 + 1;
    if (*(int *)((long)local_11e8 + 0x5c) <= iVar26 + 1) {
      (**(code **)(*(long *)*local_11e8 + 0x28))
                ((long *)*local_11e8,lVar38 + (long)(iVar26 + -5) * 8,6);
      *(int *)(puVar41 + 0xb) = iVar26 + -5;
    }
    *(undefined8 *)(lVar45 + 8) = 0;
    uVar25 = 0xffffffff;
  }
  else {
LAB_030be098:
    piVar39 = (int *)(local_11f0 + 8);
    local_11e0[2] = 0;
    local_11e0[3] = 0;
    *local_11e0 = *local_11e0 & 0xffff0000 | local_11d4 & 0xffff;
    *local_11e0 = *local_11e0 & 0xffff | local_11d8 << 0x10;
    uVar25 = local_11d4;
  }
  *piVar39 = *piVar39 + uVar25;
  local_11e0 = (uint *)0x0;
  local_11f0 = 0;
  puVar41 = local_11c0;
  uVar25 = local_11ac;
  if (!bVar15) {
    puVar23 = *(undefined8 **)(lVar27 + 8);
    uVar28 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((uVar28 <= *(ulong *)(lVar27 + 0x10)) &&
       (*(ulong *)(lVar27 + 8) = uVar28, puVar23 != (undefined8 *)0x0)) {
      *puVar23 = &DAT_03922da5;
      uVar22 = nn::os::GetSystemTick();
      puVar19 = local_11e8;
      puVar23[1] = uVar22;
      puVar41 = local_11c0;
      uVar25 = local_11ac;
      if (local_11f0 != 0) {
        if (local_11d4 == 0) {
          piVar39 = (int *)(local_11f0 + 0x18);
          iVar14 = *piVar39;
          if (iVar14 < 2) goto LAB_030bee94;
          lVar38 = local_11e8[1];
          lVar45 = *(long *)(*(long *)(local_11f0 + 0x10) + (long)(iVar14 + -2) * 8);
          iVar26 = *(int *)(local_11e8 + 0xb);
          *(undefined8 *)(lVar38 + (long)iVar26 * 8) =
               *(undefined8 *)(*(long *)(local_11f0 + 0x10) + (long)(iVar14 + -1) * 8);
          *(int *)(local_11e8 + 0xb) = iVar26 + 1;
          if (*(int *)((long)local_11e8 + 0x5c) <= iVar26 + 1) {
            (**(code **)(*(long *)*local_11e8 + 0x28))
                      ((long *)*local_11e8,lVar38 + (long)(iVar26 + -5) * 8,6);
            *(int *)(puVar19 + 0xb) = iVar26 + -5;
          }
          *(undefined8 *)(lVar45 + 8) = 0;
          uVar25 = 0xffffffff;
        }
        else {
LAB_030bee94:
          piVar39 = (int *)(local_11f0 + 8);
          local_11e0[2] = 0;
          local_11e0[3] = 0;
          *local_11e0 = *local_11e0 & 0xffff0000 | local_11d4 & 0xffff;
          *local_11e0 = *local_11e0 & 0xffff | local_11d8 << 0x10;
          uVar25 = local_11d4;
        }
        *piVar39 = *piVar39 + uVar25;
        local_11e0 = (uint *)0x0;
        puVar41 = local_11c0;
        uVar25 = local_11ac;
      }
    }
  }
  local_11f0 = 0;
  local_11c0 = puVar41;
  local_11ac = uVar25;
  puVar23 = local_1198;
  uVar31 = local_1184;
  if (local_11c8 != 0) {
    if (uVar25 == 0) {
      piVar39 = (int *)(local_11c8 + 0x18);
      iVar14 = *piVar39;
      if (iVar14 < 2) goto LAB_030beefc;
      iVar26 = *(int *)(puVar41 + 0xb);
      lVar45 = *(long *)(*(long *)(local_11c8 + 0x10) + (long)(iVar14 + -2) * 8);
      lVar38 = puVar41[1];
      *(undefined8 *)(lVar38 + (long)iVar26 * 8) =
           *(undefined8 *)(*(long *)(local_11c8 + 0x10) + (long)(iVar14 + -1) * 8);
      *(int *)(puVar41 + 0xb) = iVar26 + 1;
      if (*(int *)((long)puVar41 + 0x5c) <= iVar26 + 1) {
        (**(code **)(*(long *)*puVar41 + 0x28))((long *)*puVar41,lVar38 + (long)(iVar26 + -5) * 8,6)
        ;
        *(int *)(puVar41 + 0xb) = iVar26 + -5;
      }
      *(undefined8 *)(lVar45 + 8) = 0;
      uVar25 = 0xffffffff;
    }
    else {
LAB_030beefc:
      piVar39 = (int *)(local_11c8 + 8);
      local_11b8[2] = 0;
      local_11b8[3] = 0;
      *local_11b8 = *local_11b8 & 0xffff0000 | uVar25 & 0xffff;
      *local_11b8 = *local_11b8 & 0xffff | local_11b0 << 0x10;
    }
    *piVar39 = *piVar39 + uVar25;
    local_11b8 = (uint *)0x0;
    puVar23 = local_1198;
    uVar31 = local_1184;
  }
  local_11c8 = 0;
  local_1198 = puVar23;
  local_1184 = uVar31;
  if (local_11a0 == 0) goto joined_r0x030be108;
  if (uVar31 == 0) {
    piVar39 = (int *)(local_11a0 + 0x18);
    iVar14 = *piVar39;
    if (iVar14 < 2) goto LAB_030bef64;
    iVar26 = *(int *)(puVar23 + 0xb);
    lVar45 = *(long *)(*(long *)(local_11a0 + 0x10) + (long)(iVar14 + -2) * 8);
    lVar38 = puVar23[1];
    *(undefined8 *)(lVar38 + (long)iVar26 * 8) =
         *(undefined8 *)(*(long *)(local_11a0 + 0x10) + (long)(iVar14 + -1) * 8);
    *(int *)(puVar23 + 0xb) = iVar26 + 1;
    if (*(int *)((long)puVar23 + 0x5c) <= iVar26 + 1) {
      (**(code **)(*(long *)*puVar23 + 0x28))((long *)*puVar23,lVar38 + (long)(iVar26 + -5) * 8,6);
      *(int *)(puVar23 + 0xb) = iVar26 + -5;
    }
    *(undefined8 *)(lVar45 + 8) = 0;
    uVar31 = 0xffffffff;
  }
  else {
LAB_030bef64:
    piVar39 = (int *)(local_11a0 + 8);
    local_1190[2] = 0;
    local_1190[3] = 0;
    *local_1190 = *local_1190 & 0xffff0000 | uVar31 & 0xffff;
    *local_1190 = *local_1190 & 0xffff | local_1188 << 0x10;
  }
  *piVar39 = *piVar39 + uVar31;
  local_1190 = (uint *)0x0;
joined_r0x030be108:
  local_11a0 = 0;
  if (local_178 != 0) {
    FUN_030600f0(local_170,&local_1178);
    local_178 = 0;
  }
  FUN_0306098c(&local_168);
  uVar31 = *puVar40;
  uVar25 = *(uint *)(plVar35 + 0x22);
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar35 + (long)(int)uVar31 * 4 + 0x114) = uVar25 & 0x1ff;
  uVar48 = *puVar1;
  if (uVar48 == uVar25) {
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar13) {
      *puVar1 = uVar25 & 0xfffffe00 | uVar31;
      cVar12 = ExclusiveMonitorsStatus();
    }
    if (cVar12 == '\0') {
LAB_030be1bc:
      if (!bVar15) {
        puVar41 = *(undefined8 **)(lVar27 + 8);
        uVar28 = (long)puVar41 + 0x17U & 0xfffffffffffffff8;
        if ((uVar28 <= *(ulong *)(lVar27 + 0x10)) &&
           (*(ulong *)(lVar27 + 8) = uVar28, puVar41 != (undefined8 *)0x0)) {
          *puVar41 = &DAT_0390f40e;
          uVar22 = nn::os::GetSystemTick();
          puVar41[1] = uVar22;
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
    *(uint *)((long)plVar35 + (long)(int)uVar31 * 4 + 0x114) = uVar48 & 0x1ff;
    uVar25 = *puVar1;
    if (uVar25 == uVar48) {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = uVar48 & 0xfffffe00 | uVar31;
        cVar12 = ExclusiveMonitorsStatus();
      }
      if (cVar12 == '\0') goto LAB_030be1bc;
    }
    else {
      ClearExclusiveLocal();
    }
    uVar48 = uVar25;
  } while( true );
code_r0x030bd8d8:
  puVar40 = (uint *)((long)plVar35 + uVar28 * 4 + 0x114);
  goto LAB_030bd914;
}


