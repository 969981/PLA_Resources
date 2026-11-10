/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028f238; name: FUN_0028f238
 */


void FUN_0028f238(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 param_5,int *param_6,undefined8 *param_7)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  void *pvVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined1 auStack_190 [8];
  long *local_188;
  long local_180;
  long *local_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  long *local_148;
  undefined1 local_140;
  undefined1 auStack_138 [8];
  long *local_130;
  undefined1 auStack_128 [8];
  long *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  long local_100;
  long *local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined **local_d0;
  long alStack_c0 [4];
  long *local_a0;
  int local_90;
  undefined8 local_88;
  ulong uStack_80;
  void *local_78;
  long *plStack_70;
  int local_68;
  
  *param_1 = *param_7;
  lVar10 = param_7[1];
  param_1[1] = lVar10;
  if (lVar10 != 0) {
    plVar6 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar6 = (long *)FUN_00612290();
  puVar13 = param_1 + 9;
  *puVar13 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = plVar6;
  if ((*param_4 & 1) == 0) {
    uVar22 = *(undefined8 *)(param_4 + 8);
    uVar15 = *(undefined8 *)param_4;
    param_1[0xb] = *(undefined8 *)(param_4 + 0x10);
    param_1[10] = uVar22;
    *puVar13 = uVar15;
  }
  else {
    uVar14 = *(ulong *)(param_4 + 8);
    if (0xffffffffffffffef < uVar14) {
                    /* try { // try from 0028fc9c to 0028fca3 has its CatchHandler @ 0028fe94 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar19 = *(void **)(param_4 + 0x10);
    if (uVar14 < 0x17) {
      pvVar7 = (void *)((long)param_1 + 0x49);
      *(char *)puVar13 = (char)((int)uVar14 << 1);
      if (uVar14 != 0) goto LAB_0028f33c;
    }
    else {
      uVar11 = uVar14 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar11,1);
      param_1[9] = uVar11 | 1;
      param_1[10] = uVar14;
      param_1[0xb] = pvVar7;
LAB_0028f33c:
      memcpy(pvVar7,pvVar19,uVar14);
    }
    *(undefined1 *)((long)pvVar7 + uVar14) = 0;
  }
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd),false,0);
  FUN_002a4c6c(param_1 + 0x11);
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_NPLN-0_28_0-Release");
  FUN_006dde80(*(long *)*param_7 + 0x10,*(undefined4 *)(*(long *)*param_7 + 0x20));
  iVar18 = *param_6;
  local_90 = iVar18;
  plStack_70 = (long *)FUN_00612290();
  local_78 = (void *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  if ((*(ulong *)(param_6 + 2) & 1) == 0) {
    uStack_80 = *(ulong *)(param_6 + 4);
    local_88 = *(ulong *)(param_6 + 2);
    local_78 = *(void **)(param_6 + 6);
  }
  else {
    uVar14 = *(ulong *)(param_6 + 4);
    if (0xffffffffffffffef < uVar14) {
                    /* try { // try from 0028fca4 to 0028fcab has its CatchHandler @ 0028fe84 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar19 = *(void **)(param_6 + 6);
    if (uVar14 < 0x17) {
      pvVar7 = (void *)((long)&local_88 + 1);
      local_88 = (ulong)(byte)((int)uVar14 << 1);
      if (uVar14 != 0) goto LAB_0028f430;
    }
    else {
      uVar11 = uVar14 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = (void *)(**(code **)(*plStack_70 + 0x10))(plStack_70,uVar11,1);
      local_88 = uVar11 | 1;
      uStack_80 = uVar14;
      local_78 = pvVar7;
LAB_0028f430:
      memcpy(pvVar7,pvVar19,uVar14);
    }
    *(undefined1 *)((long)pvVar7 + uVar14) = 0;
    iVar18 = local_90;
  }
  local_68 = param_6[10];
  plVar16 = *(long **)(*(long *)*param_1 + 400);
  local_a0 = (long *)0x0;
  plVar6 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
  *(int *)(plVar6 + 2) = iVar18;
  *plVar6 = (long)&PTR_LAB_0414e140;
  plVar6[1] = (long)plVar16;
  plVar16 = (long *)FUN_00612290();
  pvVar19 = local_78;
  uVar14 = uStack_80;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = (long)plVar16;
  if ((local_88 & 1) == 0) {
    plVar6[5] = (long)local_78;
    plVar6[4] = uStack_80;
    plVar6[3] = local_88;
  }
  else {
    if (0xffffffffffffffef < uStack_80) {
                    /* try { // try from 0028fcac to 0028fcb3 has its CatchHandler @ 0028fe80 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_80 < 0x17) {
      pvVar7 = (void *)((long)plVar6 + 0x19);
      *(char *)(plVar6 + 3) = (char)((int)uStack_80 << 1);
      if (uStack_80 != 0) goto LAB_0028f524;
    }
    else {
      uVar11 = uStack_80 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar11,1);
      plVar6[3] = uVar11 | 1;
      plVar6[4] = uVar14;
      plVar6[5] = (long)pvVar7;
LAB_0028f524:
      memcpy(pvVar7,pvVar19,uVar14);
    }
    *(undefined1 *)((long)pvVar7 + uVar14) = 0;
  }
  *(int *)(plVar6 + 7) = local_68;
  uStack_e8 = *(undefined8 *)(*(long *)*param_1 + 400);
  local_f0 = PTR_DAT_04373070 + 0x10;
  local_d0 = &local_f0;
  local_170 = 180000;
  local_e0 = &LAB_0028feb0;
  if (*param_6 != 3) {
    local_e0 = &LAB_002904a0;
  }
  local_a0 = plVar6;
  FUN_00290a94(&local_100,(long *)*param_1,param_2,param_4,alStack_c0,&local_f0,&local_170,param_5);
  local_110 = (undefined8 *)0x0;
  local_108 = (undefined8 *)0x0;
  local_118 = (undefined8 *)0x0;
  plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  puVar4 = PTR_DAT_04373080;
  if (plVar6 == (long *)0x0) {
LAB_0028f624:
    if (local_108 <= local_110) {
LAB_0028f658:
      lVar10 = (long)local_110 - (long)local_118 >> 3;
      uVar14 = lVar10 + 1;
      if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 0028fcb4 to 0028fcbb has its CatchHandler @ 0028fcbc */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_108 - (long)local_118 >> 3) < 0xfffffffffffffff) {
        uVar11 = (long)local_108 - (long)local_118 >> 2;
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
        if (uVar14 != 0) goto LAB_0028f6a4;
        lVar8 = 0;
      }
      else {
        uVar14 = 0x1fffffffffffffff;
LAB_0028f6a4:
        lVar8 = FUN_002e2e80(PTR_FUN_04373078,uVar14 << 3);
      }
      puVar17 = local_118;
      puVar13 = (undefined8 *)(lVar8 + lVar10 * 8);
      local_108 = (undefined8 *)(lVar8 + uVar14 * 8);
      puVar21 = puVar13 + 1;
      *puVar13 = plVar6;
      if ((long)local_110 - (long)local_118 != 0) {
        uVar14 = ((long)local_110 - (long)local_118) - 8;
        uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
        puVar20 = local_110;
        if ((uVar1 & 3) != 0) {
          lVar10 = -((ulong)uVar1 & 3);
          do {
            puVar20 = puVar20 + -1;
            uVar15 = *puVar20;
            *puVar20 = 0;
            puVar13 = puVar13 + -1;
            *puVar13 = uVar15;
            bVar5 = lVar10 != -1;
            lVar10 = lVar10 + 1;
          } while (bVar5);
        }
        if (0x17 < uVar14) {
          do {
            uVar15 = puVar20[-1];
            puVar20[-1] = 0;
            puVar13[-1] = uVar15;
            uVar15 = puVar20[-2];
            puVar20[-2] = 0;
            puVar13[-2] = uVar15;
            uVar15 = puVar20[-3];
            puVar20[-3] = 0;
            puVar13[-3] = uVar15;
            puVar20 = puVar20 + -4;
            uVar15 = *puVar20;
            *puVar20 = 0;
            puVar13 = puVar13 + -4;
            *puVar13 = uVar15;
          } while (local_118 != puVar20);
        }
      }
      puVar4 = PTR_LAB_04373088;
      bVar5 = local_110 != local_118;
      local_118 = puVar13;
      if (bVar5) {
        puVar13 = local_110 + -1;
        puVar20 = (undefined8 *)*puVar13;
        *puVar13 = 0;
        local_110 = puVar21;
        if (puVar20 != (undefined8 *)0x0) goto LAB_0028f778;
        while (puVar21 = local_110, puVar17 != puVar13) {
          while( true ) {
            puVar13 = puVar13 + -1;
            puVar20 = (undefined8 *)*puVar13;
            *puVar13 = 0;
            if (puVar20 == (undefined8 *)0x0) break;
LAB_0028f778:
            (**(code **)*puVar20)(puVar20);
            FUN_002e2ea0(puVar4,puVar20);
            puVar21 = local_110;
            if (puVar17 == puVar13) goto LAB_0028f79c;
          }
        }
      }
LAB_0028f79c:
      local_110 = puVar21;
      if (puVar17 != (undefined8 *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088,puVar17);
      }
      goto LAB_0028f7b0;
    }
  }
  else {
    if (local_f8 != (long *)0x0) {
      plVar16 = local_f8 + 2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *plVar6 = (long)(puVar4 + 0x10);
      plVar6[1] = local_100;
      plVar6[2] = (long)local_f8;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      std::__shared_weak_count::__release_weak();
      goto LAB_0028f624;
    }
    *plVar6 = (long)(PTR_DAT_04373080 + 0x10);
    plVar6[1] = local_100;
    plVar6[2] = 0;
    if (local_108 <= local_110) goto LAB_0028f658;
  }
  *local_110 = plVar6;
  local_110 = local_110 + 1;
LAB_0028f7b0:
  FUN_002a8620(&local_170);
  FUN_006e41d0(auStack_128,param_3,&local_118,&local_170);
  FUN_002e3804(&local_170);
  FUN_006d8290(auStack_138,*param_1);
  FUN_006d7de8(&local_170,auStack_138,auStack_128);
  plVar6 = local_168;
  uVar15 = local_170;
  local_170 = 0;
  local_168 = (long *)0x0;
  plVar16 = (long *)param_1[3];
  param_1[2] = uVar15;
  param_1[3] = plVar6;
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = local_158;
  uVar15 = local_160;
  local_160 = 0;
  local_158 = (long *)0x0;
  plVar16 = (long *)param_1[5];
  param_1[4] = uVar15;
  param_1[5] = plVar6;
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = local_148;
  uVar15 = local_150;
  local_150 = 0;
  local_148 = (long *)0x0;
  plVar16 = (long *)param_1[7];
  param_1[6] = uVar15;
  param_1[7] = plVar6;
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 8) = local_140;
  if (local_148 != (long *)0x0) {
    plVar6 = local_148 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_158 != (long *)0x0) {
    plVar6 = local_158 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar6 = local_168 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_002989e8(local_100 + 0x20,param_1 + 2);
  plVar6 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar16 = local_f8 + 1;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar16 = (long *)param_1[7];
  param_1[6] = local_100;
  param_1[7] = local_f8;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar16 = plVar6 + 1;
    do {
      lVar10 = *plVar16;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_180 = local_100;
  local_178 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar6 = local_f8 + 2;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_002a4c78(&local_170,&local_180);
  plVar6 = local_168;
  uVar15 = local_170;
  local_170 = 0;
  local_168 = (long *)0x0;
  lVar10 = param_1[0x12];
  param_1[0x11] = uVar15;
  param_1[0x12] = plVar6;
  if (lVar10 == 0) {
    *(undefined1 *)(param_1 + 0x13) = (undefined1)local_160;
  }
  else {
    std::__shared_weak_count::__release_weak();
    *(undefined1 *)(param_1 + 0x13) = (undefined1)local_160;
    if (local_168 != (long *)0x0) {
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_178 != (long *)0x0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_002a4cf4(auStack_190,param_1 + 0x11);
  if (local_188 != (long *)0x0) {
    plVar6 = local_188 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_188 + 0x10))(local_188);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_006d90d4(*param_1);
  if (local_130 != (long *)0x0) {
    plVar6 = local_130 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_130 + 0x10))(local_130);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_120 != (long *)0x0) {
    plVar6 = local_120 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar13 = local_118;
  puVar4 = PTR_LAB_04373088;
  if (local_118 != (undefined8 *)0x0) {
    if (local_110 != local_118) {
      puVar21 = local_110 + -1;
      puVar17 = (undefined8 *)*puVar21;
      *puVar21 = 0;
      if (puVar17 != (undefined8 *)0x0) goto LAB_0028fb74;
      while (puVar13 != puVar21) {
        while( true ) {
          puVar21 = puVar21 + -1;
          puVar17 = (undefined8 *)*puVar21;
          *puVar21 = 0;
          if (puVar17 == (undefined8 *)0x0) break;
LAB_0028fb74:
          (**(code **)*puVar17)(puVar17);
          FUN_002e2ea0(puVar4,puVar17);
          if (puVar13 == puVar21) goto LAB_0028fbb8;
        }
      }
    }
LAB_0028fbb8:
    local_110 = puVar13;
    FUN_002e2ea0(PTR_LAB_04373088,local_118);
  }
  if (local_f8 != (long *)0x0) {
    plVar6 = local_f8 + 1;
    do {
      lVar10 = *plVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_f8 + 0x10))(local_f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0 != (undefined **)0x0) {
    if (local_d0 == &local_f0) {
      pcVar12 = *(code **)(*local_d0 + 0x10);
      ppuVar9 = &local_f0;
    }
    else {
      pcVar12 = *(code **)(*local_d0 + 0x18);
      ppuVar9 = local_d0;
    }
    (*pcVar12)(ppuVar9);
  }
  if (local_a0 != (long *)0x0) {
    if (local_a0 == alStack_c0) {
      pcVar12 = *(code **)(*local_a0 + 0x10);
      plVar6 = alStack_c0;
    }
    else {
      pcVar12 = *(code **)(*local_a0 + 0x18);
      plVar6 = local_a0;
    }
    (*pcVar12)(plVar6);
  }
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))(plStack_70,local_78,local_88 & 0xfffffffffffffffe,1);
  }
  return;
}


