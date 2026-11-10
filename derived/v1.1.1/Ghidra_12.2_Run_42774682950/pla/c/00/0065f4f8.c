/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065f4f8; name: FUN_0065f4f8
 */


void FUN_0065f4f8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined8 uVar28;
  long *local_1c0;
  long local_1b0;
  long *plStack_1a8;
  long *local_1a0;
  long *plStack_198;
  long local_190;
  long *plStack_188;
  long local_180;
  long *plStack_178;
  undefined8 local_170;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  long local_150;
  undefined1 local_148;
  long local_140;
  long *plStack_138;
  long local_130;
  long *local_128;
  long local_120;
  long *local_118;
  undefined8 local_110;
  ulong local_108;
  undefined8 local_100;
  long local_f8;
  ulong local_f0;
  long *local_e8;
  long *plStack_e0;
  long local_d8;
  long *plStack_d0;
  long local_c8;
  long *plStack_c0;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  long *plStack_a0;
  long local_98;
  long *plStack_90;
  undefined8 local_80;
  long *plStack_78;
  long local_70;
  long *local_68;
  
  plVar26 = (long *)(param_2 + 0x48);
  local_140 = *(long *)(*plVar26 + 400);
                    /* try { // try from 0065f530 to 0065f53f has its CatchHandler @ 00660294 */
  FUN_00660584(&local_70,&local_140,plVar26);
  plVar11 = (long *)FUN_006dd5d0(param_3);
  lVar19 = local_70;
  if (*plVar11 != 0) {
    uVar12 = FUN_006dd5d0(param_3);
                    /* try { // try from 0065f55c to 0065f563 has its CatchHandler @ 006601c4 */
    FUN_006033d0(uVar12,&local_140);
    *(long **)(lVar19 + 0x50) = plStack_138;
    *(long *)(lVar19 + 0x48) = local_140;
  }
  lVar19 = *(long *)(param_2 + 0x48);
                    /* try { // try from 0065f57c to 0065f57f has its CatchHandler @ 00660250 */
  lVar13 = FUN_006a4348(*(undefined8 *)(param_2 + 0x40),local_70,
                        *(undefined8 *)(*(long *)(param_2 + 8) + 0xd8));
  plVar22 = *(long **)(lVar19 + 400);
  plVar11 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x28,8);
  plVar21 = plVar11 + 1;
  *plVar21 = 0;
  plVar11[2] = 0;
  puVar1 = PTR_DAT_04375920 + 0x10;
  plVar11[3] = lVar13;
  plVar11[4] = (long)plVar22;
  *plVar11 = (long)puVar1;
  uVar12 = *(undefined8 *)(local_70 + 0x1d8);
  if (*(char *)(lVar13 + 0x50) != '\0') {
                    /* try { // try from 00660134 to 0066014b has its CatchHandler @ 006601b4 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"!started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",
               0x211);
  }
  lVar19 = *(long *)(lVar13 + 0x18);
  *(undefined1 *)(lVar13 + 0x50) = 1;
  bVar4 = *(byte *)(lVar19 + 1);
  bVar5 = *(byte *)(lVar19 + 3);
  bVar6 = *(byte *)(lVar19 + 4);
  bVar7 = *(byte *)(lVar19 + 2);
  bVar8 = *(byte *)(lVar19 + 0x130);
  *(undefined1 *)(lVar13 + 0x389) = 1;
  *(undefined1 *)(lVar13 + 0x3a8) = 0;
  *(uint *)(lVar13 + 0x38c) =
       (uint)bVar4 << 5 | (uint)bVar5 << 4 | (uint)bVar6 << 6 | (uint)bVar7 << 7 | (uint)bVar8 << 8;
  *(long *)(lVar13 + 0x398) = lVar19 + 0x98;
  if (bVar8 == 0) {
    *(undefined8 *)(lVar13 + 0x410) = uVar12;
                    /* try { // try from 0065f638 to 0065f63b has its CatchHandler @ 006601b4 */
    (**(code **)(**(long **)(lVar13 + 0x20) + 0x10))(*(long **)(lVar13 + 0x20),lVar13 + 0x380);
  }
  plStack_138 = *(long **)(local_70 + 0x1d0);
  local_140 = *(long *)(local_70 + 0x1c8);
  *(undefined8 *)(local_70 + 0x1c8) = 0;
  *(undefined8 *)(local_70 + 0x1d0) = 0;
  FUN_00294220(&local_1b0,&local_140,*(undefined8 *)(*(long *)(local_70 + 0x198) + 0x198),0x10000,
               *(undefined8 *)(*(long *)(local_70 + 0x198) + 0x348));
  if (plStack_138 != (long *)0x0) {
    plVar22 = plStack_138 + 1;
    do {
      lVar19 = *plVar22;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar10) {
        *plVar22 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar22 = plStack_1a8;
  lVar19 = local_1b0;
  local_1b0 = 0;
  plStack_1a8 = (long *)0x0;
  if (lVar19 != 0) {
    *(undefined1 *)(lVar19 + 8) = 1;
  }
  uVar12 = *(undefined8 *)(local_70 + 0x228);
  if (*(char *)(lVar13 + 0x50) != '\x01') {
                    /* try { // try from 00660164 to 006601ab has its CatchHandler @ 006601c8 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",
               0x21e);
  }
  pcVar18 = *(char **)(lVar13 + 0x18);
  if (*pcVar18 != '\0') {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"!context_->initial_metadata_received_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",
               0x21f);
    pcVar18 = *(char **)(lVar13 + 0x18);
  }
  *(undefined8 *)(lVar13 + 0x80) = uVar12;
  *pcVar18 = '\x01';
  *(char **)(lVar13 + 0x70) = pcVar18 + 0xb0;
                    /* try { // try from 0065f700 to 0065f703 has its CatchHandler @ 006601c8 */
  (**(code **)(**(long **)(lVar13 + 0x20) + 0x10))(*(long **)(lVar13 + 0x20),lVar13 + 0x60);
  plStack_138 = *(long **)(local_70 + 0x220);
  local_140 = *(long *)(local_70 + 0x218);
  *(undefined8 *)(local_70 + 0x220) = 0;
  *(undefined8 *)(local_70 + 0x218) = 0;
  FUN_00294220(&local_1b0,&local_140,*(undefined8 *)(*(long *)(local_70 + 0x1e8) + 0x198),0x10000,
               *(undefined8 *)(*(long *)(local_70 + 0x1e8) + 0x348));
  if (plStack_138 != (long *)0x0) {
    plVar2 = plStack_138 + 1;
    do {
      lVar20 = *plVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = lVar20 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar2 = plStack_1a8;
  lVar20 = local_1b0;
  local_1b0 = 0;
  plStack_1a8 = (long *)0x0;
  if (lVar20 != 0) {
    *(undefined1 *)(lVar20 + 8) = 1;
  }
  uVar28 = *(undefined8 *)(local_70 + 0x278);
  uVar12 = *(undefined8 *)(local_70 + 0x2c8);
  plVar14 = (long *)FUN_006dd5e4(param_3);
  if (*plVar14 == 0) {
    local_1c0 = (long *)0x0;
    lVar24 = 0;
    plVar14 = (long *)FUN_006dd5cc(param_3);
    lVar15 = *plVar14;
    plVar14 = (long *)plVar14[1];
  }
  else {
    lVar15 = std::chrono::system_clock::now();
    plVar14 = (long *)FUN_006dd5e4(param_3);
    local_1b0 = lVar15 + *plVar14 * 1000000;
    FUN_00619620(&local_140,plVar26,&local_1b0);
    local_1c0 = plStack_138;
    lVar24 = local_140;
    plVar14 = (long *)FUN_006dd5cc(param_3);
    lVar15 = *plVar14;
    plVar14 = (long *)plVar14[1];
  }
  if (plVar14 != (long *)0x0) {
    plVar27 = plVar14 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar10) {
        *plVar27 = *plVar27 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (lVar24 == 0) {
    plVar27 = (long *)0x0;
    plVar16 = (long *)0x0;
  }
  else {
    lVar23 = *plVar26;
    if (plVar14 != (long *)0x0) {
      plVar27 = plVar14 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar10) {
          *plVar27 = *plVar27 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    local_140 = lVar15;
    plStack_138 = plVar14;
    FUN_00619a04(&local_130,lVar24);
    plVar25 = *(long **)(lVar23 + 400);
    plVar16 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x58,8);
    puVar1 = PTR_DAT_04375538 + 0x10;
    plVar27 = plVar16 + 4;
    plVar16[2] = 0;
    plVar16[3] = (long)plVar25;
    *plVar16 = (long)puVar1;
    plVar16[1] = 0;
    FUN_00617c4c(plVar27,&local_140,2);
    if (local_128 != (long *)0x0) {
      plVar25 = local_128 + 1;
      do {
        lVar15 = *plVar25;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar10) {
          *plVar25 = lVar15 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*local_128 + 0x10))(local_128);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_138 != (long *)0x0) {
      plVar25 = plStack_138 + 1;
      do {
        lVar15 = *plVar25;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar10) {
          *plVar25 = lVar15 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00617eb8(&local_140,plVar27);
    plVar25 = plStack_138;
    lVar15 = local_140;
    local_140 = 0;
    plStack_138 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar3 = plVar14 + 1;
      do {
        lVar23 = *plVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar10) {
          *plVar3 = lVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_138 != (long *)0x0) {
      plVar14 = plStack_138 + 1;
      do {
        lVar23 = *plVar14;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = lVar23 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar23 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar14 = plVar25;
  }
  lVar23 = *plVar26;
  if (plVar14 != (long *)0x0) {
    plVar25 = plVar14 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_130 = *(long *)(param_2 + 8);
  local_128 = *(long **)(param_2 + 0x10);
  if (local_128 != (long *)0x0) {
    plVar25 = (long *)((long)local_128 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_120 = *(undefined8 *)(param_2 + 0x18);
  local_118 = *(long **)(param_2 + 0x20);
  if (local_118 != (long *)0x0) {
    plVar25 = (long *)((long)local_118 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_110 = *(undefined8 *)(param_2 + 0x28);
  local_108 = *(ulong *)(param_2 + 0x30);
  if (local_108 != 0) {
    plVar25 = (long *)(local_108 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_100 = CONCAT71(local_100._1_7_,*(undefined1 *)(param_2 + 0x38));
  local_f8 = *(undefined8 *)(param_2 + 0x48);
  local_f0 = *(ulong *)(param_2 + 0x50);
  if (local_f0 != 0) {
    plVar25 = (long *)(local_f0 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_e8 = (long *)local_70;
  plStack_e0 = local_68;
  if (local_68 != (long *)0x0) {
    plVar25 = local_68 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_d8 = lVar19;
  plStack_d0 = plVar22;
  if (plVar22 != (long *)0x0) {
    plVar25 = plVar22 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  plStack_c0 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar25 = plVar2 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (plVar11 != (long *)0x0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (local_1c0 != (long *)0x0) {
    plVar25 = local_1c0 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_140 = lVar15;
  plStack_138 = plVar14;
  local_c8 = lVar20;
  local_b8 = lVar13;
  plStack_b0 = plVar11;
  local_a8 = plVar27;
  plStack_a0 = plVar16;
  local_98 = lVar24;
  plStack_90 = local_1c0;
  FUN_006607f0(&local_80,&local_140,*(undefined8 *)(lVar23 + 0x198),0x10000,
               *(undefined8 *)(lVar23 + 0x348));
  FUN_00660298(&local_140);
  plVar27 = local_68;
  lVar15 = local_70;
  if (local_68 != (long *)0x0) {
    plVar16 = local_68 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = *plVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (plVar11 != (long *)0x0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar16 = plVar2 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = *plVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  puVar17 = (undefined8 *)FUN_006dd5e4(param_3);
  local_140 = lVar15;
  plStack_138 = plVar27;
  if (plVar27 != (long *)0x0) {
    plVar16 = plVar27 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = *plVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (plVar11 != (long *)0x0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_120 = lVar20;
  local_118 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar16 = plVar2 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = *plVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_108 = local_108 & 0xffffffffffffff00;
  local_100 = *(undefined8 *)(param_2 + 0x48);
  local_f8 = *(long *)(param_2 + 0x50);
  if (local_f8 != 0) {
    plVar16 = (long *)(local_f8 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar10) {
        *plVar16 = *plVar16 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_f0 = local_f0 & 0xffffffffffffff00;
  local_130 = lVar13 + 0x10;
  local_128 = plVar11;
  local_110 = uVar28;
  plVar25 = (long *)FUN_00612290();
  plStack_e0 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x28,8);
  plVar16 = local_68;
  puVar1 = PTR_DAT_04375540;
  plStack_e0[2] = 0;
  plStack_e0[3] = (long)plVar25;
  *plStack_e0 = (long)(puVar1 + 0x10);
  plStack_e0[1] = 0;
  local_e8 = plStack_e0 + 4;
  *(undefined1 *)local_e8 = 0;
  if (local_1c0 != (long *)0x0) {
    plVar25 = local_1c0 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_c8 = *puVar17;
  if (local_68 != (long *)0x0) {
    plVar25 = local_68 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  plVar26 = *(long **)(*plVar26 + 400);
  local_d8 = lVar24;
  plStack_d0 = local_1c0;
  plStack_198 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x18,8);
  *plStack_198 = (long)(PTR_DAT_04375928 + 0x10);
  plStack_198[1] = lVar13;
  plStack_198[2] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = *plVar21 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (plVar22 != (long *)0x0) {
    plVar25 = plVar22 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar25 = plVar2 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  puVar17 = (undefined8 *)FUN_006dd5cc(param_3);
  local_1b0 = local_70;
  plStack_1a8 = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar25 = plVar16 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_190 = lVar19;
  plStack_188 = plVar22;
  if (plVar22 != (long *)0x0) {
    plVar25 = plVar22 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_180 = lVar20;
  plStack_178 = plVar2;
  if (plVar2 != (long *)0x0) {
    plVar25 = plVar2 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_168 = *puVar17;
  local_160 = puVar17[1];
  if (local_160 != 0) {
    plVar25 = (long *)(local_160 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_158 = *(undefined8 *)(param_2 + 0x48);
  local_150 = *(long *)(param_2 + 0x50);
  if (local_150 != 0) {
    plVar25 = (long *)(local_150 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar10) {
        *plVar25 = *plVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  local_148 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = plStack_78;
  *param_1 = local_80;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  local_1a0 = plVar26;
  local_170 = uVar12;
  FUN_00661f60(param_1 + 2,&local_140);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  FUN_00662148(param_1 + 0x12,&local_1b0);
  FUN_0065f108(&local_1b0);
  if (plVar2 != (long *)0x0) {
    plVar26 = plVar2 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar22 != (long *)0x0) {
    plVar26 = plVar22 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar16 != (long *)0x0) {
    plVar26 = plVar16 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0065f280(&local_140);
  if (plVar2 != (long *)0x0) {
    plVar26 = plVar2 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar11 != (long *)0x0) {
    do {
      lVar19 = *plVar21;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar27 != (long *)0x0) {
    plVar26 = plVar27 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar26 = plStack_78 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar26 = plVar14 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1c0 != (long *)0x0) {
    plVar26 = local_1c0 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_1c0 + 0x10))(local_1c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar26 = plVar2 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar22 != (long *)0x0) {
    plVar26 = plVar22 + 1;
    do {
      lVar19 = *plVar26;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar10) {
        *plVar26 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar11 != (long *)0x0) {
    do {
      lVar19 = *plVar21;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar11 = local_68 + 1;
    do {
      lVar19 = *plVar11;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *plVar11 = lVar19 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


