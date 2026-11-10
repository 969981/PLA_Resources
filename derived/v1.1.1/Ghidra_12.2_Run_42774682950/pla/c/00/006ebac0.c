/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ebac0; name: FUN_006ebac0
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffe9d8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006ebac0(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *******ppppppplVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long **pplVar17;
  uint uVar18;
  long *plVar19;
  char *pcVar20;
  undefined8 *puVar21;
  long *plVar22;
  size_t sVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte *pbVar26;
  code *pcVar27;
  long lVar28;
  int *piVar29;
  ulong *puVar30;
  byte *pbVar31;
  long lVar32;
  int iVar33;
  ulong uVar34;
  void *__dest;
  undefined8 uVar35;
  long local_1858;
  ulong local_1808;
  int local_17a0 [2];
  byte local_1798;
  undefined7 uStack_1797;
  void *pvStack_1790;
  long *local_1788;
  long *plStack_1780;
  char local_1778;
  long *local_1770;
  long local_1768;
  undefined8 uStack_1760;
  long local_1758;
  undefined8 local_1750;
  long *local_1748;
  undefined1 auStack_1740 [8];
  ulong local_1738;
  undefined1 auStack_1718 [48];
  undefined *local_16e8;
  undefined *local_16e0;
  undefined4 local_16d8;
  undefined1 auStack_16d0 [120];
  long **local_1658;
  long *local_1650;
  long local_1648;
  ulong local_1640;
  char local_1638;
  ulong local_1630;
  size_t local_1628;
  void *pvStack_1620;
  long *local_1618;
  long *local_1610;
  char local_1608;
  long *local_1600;
  long local_15f8;
  undefined8 uStack_15f0;
  long local_15e8;
  ulong local_15e0;
  undefined8 uStack_15d8;
  long local_15d0;
  long *plStack_15c8;
  undefined8 local_15c0;
  undefined8 local_15b8;
  undefined8 local_15b0;
  long *plStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 local_1590;
  long lStack_1588;
  long local_1580;
  long local_1578;
  long *local_1570;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  long **local_bf0;
  long *local_be8;
  undefined8 local_be0;
  long *local_bd8;
  byte local_bd0;
  undefined1 auStack_bcf [15];
  long *local_bc0;
  long *local_bb8;
  long local_bb0;
  char local_b90;
  byte *local_b88;
  long *local_b80;
  ulong local_220 [2];
  ulong local_210;
  long *local_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  long *plStack_1e8;
  ulong local_1e0;
  long *plStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  long *plStack_188;
  long **local_180;
  long *plStack_178;
  ulong local_170;
  long *plStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 *local_f0;
  long *plStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  pbVar26 = *(byte **)(param_3 + 0x40);
  if ((*pbVar26 & 1) == 0) {
    pbVar26 = pbVar26 + 1;
  }
  else {
    pbVar26 = *(byte **)(pbVar26 + 0x10);
  }
  FUN_0060fb2c(auStack_16d0,param_6);
  uVar34 = *param_2;
  plVar22 = (long *)param_2[1];
  if (plVar22 != (long *)0x0) {
    plVar19 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = *plVar19 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plVar19 = (long *)FUN_00612290();
  local_15c0 = (ulong *)0x0;
  local_15c0 = (ulong *)(**(code **)(*plVar19 + 0x10))(plVar19,0x28,8);
  *local_15c0 = (ulong)&PTR_LAB_0419d548;
  local_15c0[1] = (ulong)plVar19;
  local_15c0[2] = uVar34;
  local_15c0[3] = (ulong)plVar22;
  if (plVar22 != (long *)0x0) {
    plVar19 = plVar22 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = *plVar19 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_15c0[4] = (ulong)pbVar26;
                    /* try { // try from 006ebb8c to 006ebb97 has its CatchHandler @ 006edcb8 */
  FUN_0060fd20(auStack_16d0,&local_15e0);
  if (local_15c0 != (ulong *)0x0) {
    if (local_15c0 == &local_15e0) {
      pcVar27 = *(code **)(*local_15c0 + 0x10);
    }
    else {
      pcVar27 = *(code **)(*local_15c0 + 0x18);
    }
    (*pcVar27)();
  }
  if (plVar22 != (long *)0x0) {
    plVar19 = plVar22 + 1;
    do {
      lVar32 = *plVar19;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = lVar32 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
                    /* try { // try from 006ebbf4 to 006ebbff has its CatchHandler @ 006edc2c */
  FUN_00718c20(auStack_1740,0);
  lVar28 = *(long *)(*param_2 + 8);
  lVar32 = std::chrono::system_clock::now();
  plVar22 = (long *)PTR_DAT_04376250;
  local_15e0 = lVar32 + *(long *)PTR_DAT_04376250 * 1000000;
  FUN_00619620(&local_1750,lVar28 + 0x48,&local_15e0);
  lVar32 = *(long *)(*param_2 + 8);
  uVar34 = *(ulong *)PTR_DAT_04376258;
  uVar35 = *(undefined8 *)PTR_DAT_04376260;
  FUN_00617a0c(&local_15e0);
  FUN_00617a90(&local_15e0);
  local_1658 = *(long ***)(lVar32 + 0x48);
  local_1650 = *(long **)(lVar32 + 0x50);
  if (local_1650 != (long *)0x0) {
    plVar19 = local_1650 + 1;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = *plVar19 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  local_1648 = *(long *)PTR_DAT_04376268 * 60000;
  local_1640 = 0xffffffffffffffff;
  local_1638 = '\0';
  local_1858 = std::chrono::steady_clock::now();
  plStack_15c8 = (long *)0x4000000000000000;
  local_15e0 = uVar34;
  uStack_15d8 = uVar35;
  local_15d0 = uVar34 * 1000000;
  FUN_00617a0c(&local_bf0);
  uVar18 = FUN_00617a90(&local_bf0);
  lVar32 = -0x26e;
  local_15c0 = (ulong *)CONCAT44(local_15c0._4_4_,uVar18);
  iVar33 = 1;
  piVar29 = (int *)&local_15b8;
  while( true ) {
    iVar13 = (int)lVar32;
    uVar18 = iVar13 + (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 0x26f;
    piVar29[-1] = uVar18;
    if (lVar32 == 0) break;
    iVar1 = iVar33 + 1;
    iVar33 = iVar33 + 2;
    iVar9 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965;
    lVar32 = lVar32 + 2;
    uVar18 = iVar9 + iVar1;
    *piVar29 = iVar13 + iVar9 + 0x270;
    piVar29 = piVar29 + 2;
  }
  uStack_bf8 = 0;
  local_c00 = 0;
  puVar21 = (undefined8 *)(PTR_DAT_04373168 + 0x10);
  plVar19 = (long *)(PTR_DAT_04373170 + 0x10);
  local_1808 = 1;
  do {
    uVar34 = *param_2;
    FUN_00619a04(&local_180,local_1750);
    uVar35 = *(undefined8 *)(uVar34 + 8);
    FUN_006dd558(&local_f0);
    FUN_006dd564(&local_f0,&local_180);
    FUN_006f18e8(&local_bf0,uVar35,param_3,&local_f0);
    if (plStack_e8 != (long *)0x0) {
      plVar2 = plStack_e8 + 1;
      do {
        lVar32 = *plVar2;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *plVar2 = lVar32 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar2 = local_bc0;
    plVar14 = local_bb8;
    pbVar31 = local_b88;
    plVar15 = local_b80;
    if (plStack_178 != (long *)0x0) {
      plVar3 = (long *)((long)plStack_178 + 8);
      do {
        lVar32 = *plVar3;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = lVar32 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        std::__shared_weak_count::__release_weak();
        plVar2 = local_bc0;
        plVar14 = local_bb8;
        pbVar31 = local_b88;
        plVar15 = local_b80;
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar3 = plVar15 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = *plVar3 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (plVar14 != (long *)0x0) {
      plVar3 = plVar14 + 1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = *plVar3 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    local_78 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = (long **)0x0;
    ppppppplStack_e0 = (long *******)0x0;
    plStack_e8 = (long *)0x0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_d0 = 0;
    ppppppplStack_d8 = (long *******)0x0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    local_bc0 = plVar2;
    local_bb8 = plVar14;
    local_b88 = pbVar31;
    local_b80 = plVar15;
    local_f0 = &local_be0;
                    /* try { // try from 006ebf20 to 006ebf2b has its CatchHandler @ 006edcd0 */
    FUN_00718c20(&ppppppplStack_e0,0);
    local_70 = 1;
    FUN_006f3cbc(&local_f0);
    uStack_108 = 0;
    local_110 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    plStack_168 = (long *)0x0;
    local_170 = 0;
    plStack_178 = (long *)0x0;
    local_180 = (long **)0x0;
                    /* try { // try from 006ebf64 to 006ebf6f has its CatchHandler @ 006edcd4 */
    FUN_00718c20(&local_170,0);
    local_100 = 0;
    local_180 = (long **)0x0;
    uVar35 = local_1750;
    while (local_1750 = uVar35, local_f0 != (undefined8 *)0x0) {
      lVar32 = std::chrono::system_clock::now();
      local_1f0 = lVar32 + *plVar22 * 1000000;
      FUN_00619a0c(uVar35,&local_1f0);
      if ((int)local_78 == 7) {
        local_200 = *param_2;
        local_1f8 = param_2[1];
        if (local_1f8 != 0) {
          plVar22 = (long *)(local_1f8 + 0x10);
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar12) {
              *plVar22 = *plVar22 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        FUN_002a85f0(local_220);
        uVar34 = (ulong)local_220 | 1;
        if ((local_220[0] & 1) != 0) {
          uVar34 = local_210;
        }
        FUN_006f3a7c(&local_1f0,&local_200,pbVar26,uVar34,param_4);
        if ((local_220[0] & 1) != 0) {
          (**(code **)(*local_208 + 0x18))(local_208,local_210,local_220[0] & 0xfffffffffffffffe,1);
        }
        if (local_1f8 != 0) {
          std::__shared_weak_count::__release_weak();
        }
        lVar32 = *param_5;
        if (lVar32 == 0) {
          FUN_006f8710(&local_1f0,1);
          lVar16 = local_1a0;
          lVar28 = lStack_198;
        }
        else {
          lVar16 = local_1a0;
          lVar28 = lStack_198;
          if (*(char *)(lVar32 + 0x40) == '\0') {
            lVar28 = *(long *)(lVar32 + 0x10);
            *(undefined1 *)(lVar32 + 0x40) = 1;
            nn::os::LockMutex((MutexType *)(lVar28 + 0x38));
            *(long **)(lVar28 + 0x60) = plStack_1e8;
            *(ulong *)(lVar28 + 0x58) = local_1f0;
            plStack_1e8 = (long *)0x0;
            local_1f0 = 0;
            *(long **)(lVar28 + 0x80) = local_1c8;
            *(undefined8 *)(lVar28 + 0x78) = local_1d0;
            *(long **)(lVar28 + 0x70) = plStack_1d8;
            *(ulong *)(lVar28 + 0x68) = local_1e0;
            local_1e0 = 0;
            plStack_1d8 = (long *)0x0;
            local_1d0 = 0;
            *(long **)(lVar28 + 0xa0) = local_1a8;
            *(undefined8 *)(lVar28 + 0x98) = local_1b0;
            *(undefined8 *)(lVar28 + 0x90) = uStack_1b8;
            *(ulong *)(lVar28 + 0x88) = local_1c0;
            local_1c0 = 0;
            uStack_1b8 = 0;
            local_1b0 = 0;
            *(long *)(lVar28 + 0xb0) = lStack_198;
            *(long *)(lVar28 + 0xa8) = local_1a0;
            *(long **)(lVar28 + 0xc0) = plStack_188;
            *(long *)(lVar28 + 0xb8) = local_190;
            local_1a0 = 0;
            lStack_198 = 0;
            local_190 = 0;
            *(undefined1 *)(lVar28 + 200) = 1;
            nn::os::SignalEvent((EventType *)(lVar28 + 0x10));
            nn::os::UnlockMutex((MutexType *)(lVar28 + 0x38));
            lVar16 = local_1a0;
            lVar28 = lStack_198;
          }
        }
        local_1a0 = lVar16;
        lStack_198 = lVar28;
        if (lVar16 != 0) {
          while (lVar28 != lVar16) {
            lVar28 = lVar28 + -0xe0;
            FUN_006f4520(lVar28);
          }
          lStack_198 = lVar16;
          (**(code **)(*plStack_188 + 0x18))(plStack_188,local_1a0,local_190 - local_1a0,8);
        }
        plVar22 = (long *)PTR_DAT_04376250;
        if ((local_1c0 & 1) != 0) {
          (**(code **)(*local_1a8 + 0x18))(local_1a8,local_1b0,local_1c0 & 0xfffffffffffffffe,1);
          plVar22 = (long *)PTR_DAT_04376250;
        }
        PTR_DAT_04376250 = (undefined *)plVar22;
        if ((local_1e0 & 1) != 0) {
          (**(code **)(*local_1c8 + 0x18))(local_1c8,local_1d0,local_1e0 & 0xfffffffffffffffe,1);
        }
        if (plStack_1e8 != (long *)0x0) {
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar30 = (ulong *)(local_1738 & 0xfffffffffffffffe);
      if ((local_1738 & 1) == 0) {
        if (((ulong)ppppppplStack_d8 & 1) != 0) goto LAB_006ec238;
LAB_006ec188:
        if (puVar30 == (ulong *)((ulong)ppppppplStack_d8 & 0xfffffffffffffffe)) goto LAB_006ebf84;
LAB_006ec190:
                    /* try { // try from 006ec190 to 006ec19b has its CatchHandler @ 006edcd8 */
        FUN_0071a720(auStack_1740,&ppppppplStack_e0);
      }
      else {
        puVar30 = (ulong *)*puVar30;
        if (((ulong)ppppppplStack_d8 & 1) == 0) goto LAB_006ec188;
LAB_006ec238:
        if (puVar30 != *(ulong **)((ulong)ppppppplStack_d8 & 0xfffffffffffffffe)) goto LAB_006ec190;
LAB_006ebf84:
                    /* try { // try from 006ebf84 to 006ebf8f has its CatchHandler @ 006edcd8 */
        FUN_0071a75c(auStack_1740,&ppppppplStack_e0);
      }
      FUN_006f3cbc(&local_f0);
      uVar35 = local_1750;
    }
    FUN_00718d5c(&local_170);
    FUN_00718d5c(&ppppppplStack_e0);
    if (local_b90 == '\0') {
      local_b90 = '\x01';
                    /* try { // try from 006ec278 to 006ec27f has its CatchHandler @ 006edccc */
      (**(code **)(**(long **)(local_bb0 + 0x20) + 0x38))(*(long **)(local_bb0 + 0x20),0);
    }
    local_88 = (long **)0x0;
    uStack_80 = 0;
    local_f0 = puVar21;
    plStack_e8 = plVar19;
    ppppppplStack_e0 = (long *******)&ppppppplStack_e0;
    ppppppplStack_d8 = (long *******)&ppppppplStack_e0;
    (*(code *)(*local_bf0)[2])(local_bf0,&uStack_c8);
    local_88 = &plStack_e8;
    thunk_FUN_00783af0(&local_f0);
    local_f0 = puVar21;
    FUN_00782f18(&plStack_e8);
    plVar3 = local_be8;
    pplVar17 = local_bf0;
    local_bf0 = (long **)0x0;
    local_be8 = (long *)0x0;
    (*(code *)(*pplVar17)[6])(&local_1630);
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3 + 1;
      do {
        lVar32 = *plVar4;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar12) {
          *plVar4 = lVar32 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar5 = (undefined8 *)(PTR_DAT_04373168 + 0x10);
    plStack_e8 = (long *)(PTR_DAT_04373170 + 0x10);
    local_88 = (long **)0x0;
    uStack_80 = 0;
    local_f0 = puVar5;
    ppppppplStack_e0 = (long *******)&ppppppplStack_e0;
    ppppppplStack_d8 = (long *******)&ppppppplStack_e0;
    (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_c8);
    local_88 = &plStack_e8;
    thunk_FUN_00783af0(&local_f0);
    local_f0 = puVar5;
    FUN_00782f18(&plStack_e8);
    pcVar20 = (char *)(**(code **)(*plVar2 + 0x38))(plVar2);
    iVar33 = (int)local_1630;
    switch((int)local_1630) {
    case 2:
    case 0xd:
    case 0x10:
      if ((1 < local_1808) && ((*pbVar31 & 1) == 0)) break;
LAB_006ec438:
      if ((*pbVar31 & 1) == 0) {
        if ((local_1808 < local_1640) &&
           (lVar32 = std::chrono::steady_clock::now(), lVar32 - local_1858 < local_1648 * 1000000))
        {
          local_1808 = local_1808 + 1;
          goto LAB_006ec48c;
        }
        local_1798 = (byte)local_1628;
        uStack_1797 = (undefined7)(local_1628 >> 8);
        local_17a0[0] = (int)local_1630;
        local_1788 = local_1618;
        plStack_1780 = local_1610;
        lVar32 = local_15f8;
        lVar28 = local_15e8;
        pvStack_1790 = pvStack_1620;
        goto joined_r0x006ec610;
      }
      local_1858 = std::chrono::steady_clock::now();
      FUN_00619140(&local_15e0);
      local_1808 = 1;
LAB_006ec48c:
      lVar32 = FUN_006190c8(&local_15e0);
      FUN_00618738(&local_f0,&local_1658);
      FUN_00618534(&local_1f0,local_f0);
      if (plStack_e8 != (long *)0x0) {
        plVar2 = plStack_e8 + 1;
        do {
          lVar28 = *plVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar28 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_180 = (long **)*param_6;
      plStack_178 = (long *)param_6[1];
      if (plStack_178 != (long *)0x0) {
        plVar2 = plStack_178 + 1;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = *plVar2 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      plStack_168 = plStack_1e8;
      local_170 = local_1f0;
      if (plStack_1e8 != (long *)0x0) {
        plVar2 = plStack_1e8 + 1;
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = *plVar2 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      FUN_00617c4c(&local_f0,&local_180,2);
      if (plStack_168 != (long *)0x0) {
        plVar2 = plStack_168 + 1;
        do {
          lVar28 = *plVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar28 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plStack_168 + 0x10))(plStack_168);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_178 != (long *)0x0) {
        plVar2 = plStack_178 + 1;
        do {
          lVar28 = *plVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar28 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_220[0] = lVar32 * 1000000;
      FUN_00617eb8(&local_180,&local_f0);
      FUN_006119e0(local_220,&local_180);
      if (plStack_178 == (long *)0x0) {
LAB_006ec7ec:
        uVar34 = FUN_00783cf4(param_6);
        if ((uVar34 & 1) != 0) goto LAB_006ec7f8;
LAB_006ec880:
        bVar12 = false;
      }
      else {
        plVar2 = plStack_178 + 1;
        do {
          lVar32 = *plVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar32 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar32 != 0) goto LAB_006ec7ec;
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        std::__shared_weak_count::__release_weak();
        uVar34 = FUN_00783cf4(param_6);
        if ((uVar34 & 1) == 0) goto LAB_006ec880;
LAB_006ec7f8:
        local_1788 = local_1618;
        pvStack_1790 = pvStack_1620;
        sVar23 = local_1628;
        local_17a0[0] = (int)local_1630;
        pvStack_1620 = (void *)0x0;
        local_1618 = (long *)0x0;
        local_1628 = 0;
        local_1798 = (byte)sVar23;
        uStack_1797 = (undefined7)(sVar23 >> 8);
        plStack_1780 = local_1610;
        local_1778 = '\0';
        if (local_1608 == '\0') {
          bVar12 = true;
        }
        else {
          local_1770 = local_1600;
          uStack_1760 = uStack_15f0;
          local_1768 = local_15f8;
          local_1758 = local_15e8;
          if (local_15e8 == 0) {
            local_1770 = &local_1768;
          }
          else {
            *(long **)(local_15f8 + 0x10) = &local_1768;
            local_15e8 = 0;
            local_15f8 = 0;
            local_1600 = &local_15f8;
          }
          bVar12 = true;
          local_1778 = '\x01';
        }
      }
      FUN_00617d58(&local_f0);
      if (plStack_1e8 != (long *)0x0) {
        plVar2 = plStack_1e8 + 1;
        do {
          lVar32 = *plVar2;
          cVar11 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar10) {
            *plVar2 = lVar32 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto joined_r0x006ec670;
    case 0xe:
      if (local_1638 != '\0' || *pcVar20 != '\0') goto LAB_006ec438;
      iVar33 = 0xe;
    }
    local_1798 = (byte)local_1628;
    uStack_1797 = (undefined7)(local_1628 >> 8);
    local_17a0[0] = iVar33;
    local_1788 = local_1618;
    plStack_1780 = local_1610;
    lVar32 = local_15f8;
    lVar28 = local_15e8;
    pvStack_1790 = pvStack_1620;
joined_r0x006ec610:
    local_1610 = plStack_1780;
    local_15f8 = lVar32;
    local_15e8 = lVar28;
    if (local_1608 == '\0') {
      local_1618 = (long *)0x0;
      pvStack_1620 = (void *)0x0;
      local_1628 = 0;
      local_1778 = '\0';
      bVar12 = true;
    }
    else {
      local_1618 = (long *)0x0;
      pvStack_1620 = (void *)0x0;
      local_1628 = 0;
      if (lVar28 == 0) {
        local_1770 = &local_1768;
      }
      else {
        *(long **)(lVar32 + 0x10) = &local_1768;
        local_15e8 = 0;
        local_15f8 = 0;
        local_1770 = local_1600;
        local_1600 = &local_15f8;
      }
      bVar12 = true;
      local_1778 = '\x01';
      local_1768 = lVar32;
      local_1758 = lVar28;
      uStack_1760 = uStack_15f0;
joined_r0x006ec670:
      if (local_1608 != '\0') {
        FUN_02767254(&local_1600,local_15f8);
      }
      if ((local_1628 & 1) != 0) {
        (**(code **)(*local_1610 + 0x18))(local_1610,local_1618,local_1628 & 0xfffffffffffffffe,1);
      }
    }
    if (plVar14 == (long *)0x0) {
LAB_006ec6c4:
      if (plVar15 == (long *)0x0) goto LAB_006ec6e8;
LAB_006ec6cc:
      plVar2 = plVar15 + 1;
      do {
        lVar32 = *plVar2;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *plVar2 = lVar32 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar32 != 0) goto LAB_006ec6e8;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
      FUN_006f2780(&local_be0);
    }
    else {
      plVar2 = plVar14 + 1;
      do {
        lVar32 = *plVar2;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *plVar2 = lVar32 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar32 != 0) goto LAB_006ec6c4;
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
      if (plVar15 != (long *)0x0) goto LAB_006ec6cc;
LAB_006ec6e8:
      FUN_006f2780(&local_be0);
    }
    if (local_be8 != (long *)0x0) {
      plVar2 = local_be8 + 1;
      do {
        lVar32 = *plVar2;
        cVar11 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *plVar2 = lVar32 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar32 == 0) {
        (**(code **)(*local_be8 + 0x10))(local_be8);
        std::__shared_weak_count::__release_weak();
      }
    }
  } while (!bVar12);
  if (local_1650 == (long *)0x0) {
LAB_006ec90c:
    FUN_0060fc2c(auStack_16d0);
    if (local_17a0[0] != 0) goto LAB_006ec91c;
LAB_006ecab0:
    switch(local_16d8) {
    case 3:
      puVar6 = PTR_DAT_04376270;
      if (local_16e8 != (undefined *)0x0) {
        puVar6 = local_16e8;
      }
      FUN_00703874(&local_15e0,puVar6,auStack_1718);
      local_be8 = (long *)0x0;
      local_be0 = FUN_00612290();
      local_bd8 = (long *)0x0;
      local_bf0 = &local_be8;
      FUN_006f0020(param_1,&local_15e0,0,&DAT_03996322,&local_bf0);
      FUN_02767254(&local_bf0,local_be8);
      lVar32 = lStack_1588;
      if (lStack_1588 == 0) goto LAB_006ed314;
      for (; local_1580 != lVar32; local_1580 = local_1580 + -0xa8) {
        FUN_006ee714(local_1580 + -0xa8);
      }
      break;
    case 4:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_00612290();
      local_15c0 = (ulong *)0x0;
      local_15e0 = 0;
      local_15d0 = 0;
      uStack_15d8 = 0;
      local_15b0 = 0;
      local_15b8 = 0;
      plStack_15a8 = (long *)FUN_00612290();
      lStack_1588 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b0 = 0;
      local_15b8 = 0;
      local_1578 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_00612290();
      FUN_0070ea20(&local_bf0,pbVar26);
                    /* try { // try from 006ecda4 to 006ecdb7 has its CatchHandler @ 006ed9fc */
      puVar21 = (undefined8 *)
                FUN_006e4dec(&local_bd0,0,"The request has been timed out. ticketId: ",0x2a);
      plStack_e8 = (long *)puVar21[1];
      local_f0 = (undefined8 *)*puVar21;
      ppppppplStack_d8 = (long *******)puVar21[3];
      ppppppplStack_e0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_178 = (long *)0x0;
      ppppppplVar7 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar7 = ppppppplStack_e0;
      }
      local_170 = FUN_00612290();
      plStack_168 = (long *)0x0;
      local_180 = &plStack_178;
      FUN_006f0020(param_1,&local_15e0,4,ppppppplVar7,&local_180);
      FUN_02767254(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar32 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar32 = lStack_1588;
      }
      lStack_1588 = lVar32;
      lVar28 = local_1580;
      if (lVar32 == 0) goto LAB_006ed314;
      for (; lVar28 != lVar32; lVar28 = lVar28 + -0xa8) {
        FUN_006ee714(lVar28 + -0xa8);
      }
      break;
    case 5:
      local_1570 = (long *)0x0;
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_00612290();
      local_15c0 = (ulong *)0x0;
      local_15e0 = 0;
      local_15d0 = 0;
      uStack_15d8 = 0;
      local_15b0 = 0;
      local_15b8 = 0;
      plStack_15a8 = (long *)FUN_00612290();
      lStack_1588 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b0 = 0;
      local_15b8 = 0;
      local_1578 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_00612290();
      puVar6 = PTR_DAT_04375d40;
      if (local_16e0 != (undefined *)0x0) {
        puVar6 = local_16e0;
      }
      uVar8 = *(undefined4 *)(puVar6 + 0x30);
      pbVar31 = *(byte **)(puVar6 + 0x28);
      if ((*pbVar31 & 1) == 0) {
        pbVar31 = pbVar31 + 1;
      }
      else {
        pbVar31 = *(byte **)(pbVar31 + 0x10);
      }
      pvStack_1620 = (void *)0x0;
      local_1628 = 0;
      local_1630 = 0;
      plVar22 = (long *)FUN_00612290();
      local_1618 = plVar22;
      sVar23 = strlen((char *)pbVar31);
      if (0xffffffffffffffef < sVar23) {
                    /* try { // try from 006ed778 to 006ed77f has its CatchHandler @ 006ed780 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar23 < 0x17) {
        local_1630 = CONCAT71(local_1630._1_7_,(char)((int)sVar23 << 1));
        __dest = (void *)((ulong)&local_1630 | 1);
        if (sVar23 != 0) goto LAB_006ed17c;
      }
      else {
        uVar34 = sVar23 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar22 + 0x10))(plVar22,uVar34,1);
        local_1630 = uVar34 | 1;
        local_1628 = sVar23;
        pvStack_1620 = __dest;
LAB_006ed17c:
        memcpy(__dest,pbVar31,sVar23);
      }
      *(undefined1 *)((long)__dest + sVar23) = 0;
                    /* try { // try from 006ed190 to 006ed1a7 has its CatchHandler @ 006ed87c */
      puVar30 = (ulong *)FUN_006e4dec(&local_1630,0,"The request has failed. cause message: ",0x27);
      plStack_1e8 = (long *)puVar30[1];
      local_1f0 = *puVar30;
      plStack_1d8 = (long *)puVar30[3];
      local_1e0 = puVar30[2];
      puVar30[1] = 0;
      puVar30[2] = 0;
      *puVar30 = 0;
                    /* try { // try from 006ed1bc to 006ed1d3 has its CatchHandler @ 006ed844 */
      puVar21 = (undefined8 *)FUN_002a45d4(&local_1f0,", ticketId: ",0xc);
      plStack_178 = (long *)puVar21[1];
      local_180 = (long **)*puVar21;
      plStack_168 = (long *)puVar21[3];
      local_170 = puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      FUN_0070ea20(&local_bf0,pbVar26);
      plVar22 = (long *)auStack_bcf;
      uVar34 = (ulong)(local_bd0 >> 1);
      if ((local_bd0 & 1) != 0) {
        plVar22 = local_bc0;
        uVar34 = auStack_bcf._7_8_;
      }
                    /* try { // try from 006ed218 to 006ed223 has its CatchHandler @ 006ed790 */
      puVar21 = (undefined8 *)FUN_002a45d4(&local_180,plVar22,uVar34);
      plStack_e8 = (long *)puVar21[1];
      local_f0 = (undefined8 *)*puVar21;
      ppppppplStack_d8 = (long *******)puVar21[3];
      ppppppplStack_e0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      local_1650 = (long *)0x0;
      ppppppplVar7 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar7 = ppppppplStack_e0;
      }
      local_1648 = FUN_00612290();
      local_1640 = 0;
      local_1658 = &local_1650;
      FUN_006f0020(param_1,&local_15e0,uVar8,ppppppplVar7,&local_1658);
      FUN_02767254(&local_1658,local_1650);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_180 & 1) != 0) {
        (**(code **)(*plStack_168 + 0x18))
                  (plStack_168,local_170,(ulong)local_180 & 0xfffffffffffffffe,1);
      }
      if ((local_1f0 & 1) != 0) {
        (**(code **)(*plStack_1d8 + 0x18))(plStack_1d8,local_1e0,local_1f0 & 0xfffffffffffffffe,1);
      }
      lVar32 = lStack_1588;
      if ((local_1630 & 1) != 0) {
        (**(code **)(*local_1618 + 0x18))(local_1618,pvStack_1620,local_1630 & 0xfffffffffffffffe,1)
        ;
        lVar32 = lStack_1588;
      }
      lStack_1588 = lVar32;
      lVar28 = local_1580;
      if (lVar32 == 0) goto LAB_006ed314;
      for (; lVar28 != lVar32; lVar28 = lVar28 + -0xa8) {
        FUN_006ee714(lVar28 + -0xa8);
      }
      break;
    case 6:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_00612290();
      local_15c0 = (ulong *)0x0;
      local_15e0 = 0;
      local_15d0 = 0;
      uStack_15d8 = 0;
      local_15b0 = 0;
      local_15b8 = 0;
      plStack_15a8 = (long *)FUN_00612290();
      lStack_1588 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b0 = 0;
      local_15b8 = 0;
      local_1578 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_00612290();
      FUN_0070ea20(&local_bf0,pbVar26);
                    /* try { // try from 006ecee4 to 006ecef7 has its CatchHandler @ 006ed968 */
      puVar21 = (undefined8 *)
                FUN_006e4dec(&local_bd0,0,"The request has been cancelled. ticketId: ",0x2a);
      plStack_e8 = (long *)puVar21[1];
      local_f0 = (undefined8 *)*puVar21;
      ppppppplStack_d8 = (long *******)puVar21[3];
      ppppppplStack_e0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_178 = (long *)0x0;
      ppppppplVar7 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar7 = ppppppplStack_e0;
      }
      local_170 = FUN_00612290();
      plStack_168 = (long *)0x0;
      local_180 = &plStack_178;
      FUN_006f0020(param_1,&local_15e0,1,ppppppplVar7,&local_180);
      FUN_02767254(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar32 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar32 = lStack_1588;
      }
      lStack_1588 = lVar32;
      lVar28 = local_1580;
      if (lVar32 == 0) goto LAB_006ed314;
      for (; lVar28 != lVar32; lVar28 = lVar28 + -0xa8) {
        FUN_006ee714(lVar28 + -0xa8);
      }
      break;
    default:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_00612290();
      local_15c0 = (ulong *)0x0;
      local_15e0 = 0;
      local_15d0 = 0;
      uStack_15d8 = 0;
      local_15b0 = 0;
      local_15b8 = 0;
      plStack_15a8 = (long *)FUN_00612290();
      lStack_1588 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b0 = 0;
      local_15b8 = 0;
      local_1578 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_00612290();
      FUN_0070ea20(&local_bf0,pbVar26);
                    /* try { // try from 006ecbdc to 006ecbef has its CatchHandler @ 006eda90 */
      puVar21 = (undefined8 *)FUN_006e4dec(&local_bd0,0,"Unknown error. ticketId: ",0x19);
      plStack_e8 = (long *)puVar21[1];
      local_f0 = (undefined8 *)*puVar21;
      ppppppplStack_d8 = (long *******)puVar21[3];
      ppppppplStack_e0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_178 = (long *)0x0;
      ppppppplVar7 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar7 = ppppppplStack_e0;
      }
      local_170 = FUN_00612290();
      plStack_168 = (long *)0x0;
      local_180 = &plStack_178;
      FUN_006f0020(param_1,&local_15e0,2,ppppppplVar7,&local_180);
      FUN_02767254(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar32 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar32 = lStack_1588;
      }
      lStack_1588 = lVar32;
      if (lVar32 == 0) goto LAB_006ed314;
      lVar28 = local_1580;
      while (lVar28 != lVar32) {
        lVar28 = lVar28 + -0xa8;
        FUN_006ee714(lVar28);
      }
      break;
    case 8:
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_00612290();
      local_15c0 = (ulong *)0x0;
      local_15e0 = 0;
      local_15d0 = 0;
      uStack_15d8 = 0;
      local_15b0 = 0;
      local_15b8 = 0;
      plStack_15a8 = (long *)FUN_00612290();
      lStack_1588 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b0 = 0;
      local_15b8 = 0;
      local_1578 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_00612290();
      FUN_0070ea20(&local_bf0,pbVar26);
                    /* try { // try from 006ed024 to 006ed037 has its CatchHandler @ 006ed8d4 */
      puVar21 = (undefined8 *)
                FUN_006e4dec(&local_bd0,0,"The match has been declined. ticketId: ",0x27);
      plStack_e8 = (long *)puVar21[1];
      local_f0 = (undefined8 *)*puVar21;
      ppppppplStack_d8 = (long *******)puVar21[3];
      ppppppplStack_e0 = (long *******)puVar21[2];
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
      plStack_178 = (long *)0x0;
      ppppppplVar7 = (long *******)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        ppppppplVar7 = ppppppplStack_e0;
      }
      local_170 = FUN_00612290();
      plStack_168 = (long *)0x0;
      local_180 = &plStack_178;
      FUN_006f0020(param_1,&local_15e0,10,ppppppplVar7,&local_180);
      FUN_02767254(&local_180,plStack_178);
      if (((ulong)local_f0 & 1) != 0) {
        (*(code *)(*ppppppplStack_d8)[3])
                  (ppppppplStack_d8,ppppppplStack_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
      if ((local_bd0 & 1) != 0) {
        (**(code **)(*local_bb8 + 0x18))
                  (local_bb8,local_bc0,CONCAT71(auStack_bcf._0_7_,local_bd0) & 0xfffffffffffffffe,1)
        ;
      }
      lVar32 = lStack_1588;
      if (((ulong)local_bf0 & 1) != 0) {
        (**(code **)(*local_bd8 + 0x18))
                  (local_bd8,local_be0,(ulong)local_bf0 & 0xfffffffffffffffe,1);
        lVar32 = lStack_1588;
      }
      lStack_1588 = lVar32;
      lVar28 = local_1580;
      if (lVar32 == 0) goto LAB_006ed314;
      for (; lVar28 != lVar32; lVar28 = lVar28 + -0xa8) {
        FUN_006ee714(lVar28 + -0xa8);
      }
    }
  }
  else {
    plVar22 = local_1650 + 1;
    do {
      lVar32 = *plVar22;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar32 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar32 != 0) goto LAB_006ec90c;
    (**(code **)(*local_1650 + 0x10))(local_1650);
    std::__shared_weak_count::__release_weak();
    FUN_0060fc2c(auStack_16d0);
    if (local_17a0[0] == 0) goto LAB_006ecab0;
LAB_006ec91c:
    if (local_17a0[0] == 1) {
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_00612290();
      local_15c0 = (ulong *)0x0;
      local_15e0 = 0;
      local_15d0 = 0;
      uStack_15d8 = 0;
      local_15b0 = 0;
      local_15b8 = 0;
      plStack_15a8 = (long *)FUN_00612290();
      lStack_1588 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b0 = 0;
      local_15b8 = 0;
      local_1578 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_00612290();
      local_be8 = (long *)0x0;
      local_be0 = FUN_00612290();
      local_bd8 = (long *)0x0;
      local_bf0 = &local_be8;
      FUN_006f0020(param_1,&local_15e0,0xe,
                   "Deadline exceeded while matchmaking. See MatchmakingClient::GetMatchmakingExpireDuration()"
                   ,&local_bf0);
      FUN_02767254(&local_bf0,local_be8);
      lVar32 = lStack_1588;
      lVar28 = local_1580;
      if (lStack_1588 == 0) goto LAB_006ed314;
      for (; lVar28 != lVar32; lVar28 = lVar28 + -0xa8) {
        FUN_006ee714(lVar28 + -0xa8);
      }
    }
    else {
      lStack_1588 = 0;
      local_1590 = 0;
      local_1578 = 0;
      local_1580 = 0;
      uStack_15d8 = 0;
      local_15e0 = 0;
      plStack_15a8 = (long *)0x0;
      local_15b0 = 0;
      uStack_1598 = 0;
      uStack_15a0 = 0;
      plStack_15c8 = (long *)0x0;
      local_15d0 = 0;
      local_15b8 = 0;
      local_15c0 = (ulong *)0x0;
      plStack_15c8 = (long *)FUN_00612290();
      local_15c0 = (ulong *)0x0;
      local_15e0 = 0;
      local_15d0 = 0;
      uStack_15d8 = 0;
      local_15b0 = 0;
      local_15b8 = 0;
      plStack_15a8 = (long *)FUN_00612290();
      lStack_1588 = 0;
      local_15c0 = (ulong *)0x0;
      local_15b0 = 0;
      local_15b8 = 0;
      local_1578 = 0;
      local_1580 = 0;
      local_1570 = (long *)FUN_00612290();
      FUN_006f0194(param_1,local_17a0,&local_15e0);
      lVar32 = lStack_1588;
      lVar28 = local_1580;
      if (lStack_1588 == 0) goto LAB_006ed314;
      for (; lVar28 != lVar32; lVar28 = lVar28 + -0xa8) {
        FUN_006ee714(lVar28 + -0xa8);
      }
    }
  }
  local_1580 = lVar32;
  (**(code **)(*local_1570 + 0x18))(local_1570,lStack_1588,local_1578 - lStack_1588,8);
LAB_006ed314:
  if (((ulong)local_15c0 & 1) != 0) {
    (**(code **)(*plStack_15a8 + 0x18))
              (plStack_15a8,local_15b0,(ulong)local_15c0 & 0xfffffffffffffffe,1);
  }
  if ((local_15e0 & 1) != 0) {
    (**(code **)(*plStack_15c8 + 0x18))(plStack_15c8,local_15d0,local_15e0 & 0xfffffffffffffffe,1);
  }
  if (local_1778 != '\0') {
    FUN_02767254(&local_1770,local_1768);
  }
  if ((local_1798 & 1) != 0) {
    (**(code **)(*plStack_1780 + 0x18))
              (plStack_1780,local_1788,CONCAT71(uStack_1797,local_1798) & 0xfffffffffffffffe,1);
  }
  if (local_1748 != (long *)0x0) {
    plVar22 = local_1748 + 1;
    do {
      lVar32 = *plVar22;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar12) {
        *plVar22 = lVar32 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*local_1748 + 0x10))(local_1748);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00718d5c(auStack_1740);
  FUN_0060fb78(auStack_16d0);
  lVar32 = *param_5;
  if (lVar32 != 0) {
    uVar35 = FUN_00612290();
    uVar24 = FUN_00612290();
    uVar25 = FUN_00612290();
    if (*(char *)(lVar32 + 0x40) == '\0') {
      lVar28 = *(long *)(lVar32 + 0x10);
      *(undefined1 *)(lVar32 + 0x40) = 1;
      nn::os::LockMutex((MutexType *)(lVar28 + 0x38));
      *(undefined1 *)(lVar28 + 200) = 1;
      *(undefined8 *)(lVar28 + 0x78) = 0;
      *(undefined8 *)(lVar28 + 0x80) = uVar35;
      *(undefined8 *)(lVar28 + 0x88) = 0;
      *(undefined8 *)(lVar28 + 0x90) = 0;
      *(undefined8 *)(lVar28 + 0x70) = 0;
      *(undefined8 *)(lVar28 + 0x68) = 0;
      *(undefined8 *)(lVar28 + 0x98) = 0;
      *(undefined8 *)(lVar28 + 0xa0) = uVar24;
      *(undefined8 *)(lVar28 + 0xb8) = 0;
      *(undefined8 *)(lVar28 + 0xc0) = uVar25;
      *(undefined8 *)(lVar28 + 0xa8) = 0;
      *(undefined8 *)(lVar28 + 0xb0) = 0;
      *(undefined8 *)(lVar28 + 0x60) = 0;
      *(undefined8 *)(lVar28 + 0x58) = 0;
      nn::os::SignalEvent((EventType *)(lVar28 + 0x10));
      nn::os::UnlockMutex((MutexType *)(lVar28 + 0x38));
    }
  }
  return;
}


