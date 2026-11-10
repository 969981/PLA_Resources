/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00796550; name: FUN_00796550
 */


void FUN_00796550(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *local_180;
  long *local_148;
  long *local_140;
  long *plStack_138;
  long local_130;
  long *local_128;
  long local_120;
  long *local_118;
  long local_110;
  ulong local_108;
  undefined8 local_100;
  long local_f8;
  ulong local_f0;
  long *local_e8;
  long *plStack_e0;
  long *local_d8;
  long *plStack_d0;
  long local_c8;
  long *plStack_c0;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  long *plStack_a0;
  long *local_98;
  long *plStack_90;
  long local_80;
  long *plStack_78;
  long *local_70;
  long *local_68;
  
  plVar29 = (long *)(param_2 + 0x48);
  plVar28 = *(long **)(*plVar29 + 400);
  plVar14 = (long *)(**(code **)(*plVar28 + 0x10))(plVar28,0x2a8,8);
  puVar2 = PTR_DAT_04376ea8;
  plVar17 = plVar14 + 4;
  plVar14[2] = 0;
  plVar14[3] = (long)plVar28;
  *plVar14 = (long)(puVar2 + 0x10);
  plVar14[1] = 0;
                    /* try { // try from 007965bc to 007965c3 has its CatchHandler @ 007970c8 */
  FUN_003c6e6c(plVar17);
  FUN_002934f8(plVar14 + 0x37,plVar29);
  FUN_002934f8(plVar14 + 0x41,plVar29);
  FUN_002934f8(plVar14 + 0x4b,plVar29);
  local_70 = plVar17;
  local_68 = plVar14;
  plVar28 = (long *)FUN_006dd5d0(param_4);
  if (*plVar28 != 0) {
    uVar15 = FUN_006dd5d0(param_4);
                    /* try { // try from 00796604 to 0079660b has its CatchHandler @ 00797028 */
    FUN_006033d0(uVar15,&local_140);
    plVar14[0xe] = (long)plStack_138;
    plVar14[0xd] = (long)local_140;
    plVar17 = local_70;
  }
  lVar26 = *(long *)(param_2 + 0x48);
                    /* try { // try from 00796624 to 0079662f has its CatchHandler @ 007970b4 */
  lVar16 = FUN_007b7e9c(*(undefined8 *)(param_2 + 0x40),plVar17,param_3,
                        *(undefined8 *)(*(long *)(param_2 + 8) + 0xd8));
  plVar28 = *(long **)(lVar26 + 400);
  plVar17 = (long *)(**(code **)(*plVar28 + 0x10))(plVar28,0x28,8);
  plVar17[2] = 0;
  plVar14 = plVar17 + 1;
  *plVar14 = 0;
  puVar2 = PTR_DAT_04376eb0;
  plVar17[3] = lVar16;
  plVar17[4] = (long)plVar28;
  *plVar17 = (long)(puVar2 + 0x10);
  lVar26 = local_70[0x3b];
  if (*(char *)(lVar16 + 0x48) != '\0') {
                    /* try { // try from 00796fa8 to 00796fbf has its CatchHandler @ 00797070 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"!started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",0xd4
              );
  }
  puVar25 = (undefined8 *)(lVar16 + 0x18);
  lVar24 = *(long *)(lVar16 + 0x10);
  *(undefined1 *)(lVar16 + 0x48) = 1;
  bVar5 = *(byte *)(lVar24 + 1);
  bVar6 = *(byte *)(lVar24 + 3);
  bVar7 = *(byte *)(lVar24 + 4);
  bVar8 = *(byte *)(lVar24 + 2);
  bVar9 = *(byte *)(lVar24 + 0x130);
  *(undefined1 *)(lVar16 + 0x78) = 0;
  *(undefined1 *)(lVar16 + 0x59) = 1;
  *(long *)(lVar16 + 0x68) = lVar24 + 0x98;
  *(long *)(lVar16 + 0xe0) = lVar26;
  *(uint *)(lVar16 + 0x5c) =
       (uint)bVar5 << 5 | (uint)bVar6 << 4 | (uint)bVar7 << 6 | (uint)bVar8 << 7 | (uint)bVar9 << 8;
                    /* try { // try from 007966e4 to 007966eb has its CatchHandler @ 00797070 */
  (**(code **)(*(long *)*puVar25 + 0x10))((long *)*puVar25,lVar16 + 0x50,puVar25);
  plStack_138 = (long *)local_70[0x3a];
  local_140 = (long *)local_70[0x39];
  local_70[0x39] = 0;
  local_70[0x3a] = 0;
  FUN_00294220(&local_80,&local_140,*(undefined8 *)(local_70[0x33] + 0x198),0x10000,
               *(undefined8 *)(local_70[0x33] + 0x348));
  if (plStack_138 != (long *)0x0) {
    plVar28 = plStack_138 + 1;
    do {
      lVar26 = *plVar28;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar11) {
        *plVar28 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar28 = plStack_78;
  lVar26 = local_80;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  if (lVar26 != 0) {
    *(undefined1 *)(lVar26 + 8) = 1;
  }
  lVar24 = local_70[0x45];
  if (*(char *)(lVar16 + 0x48) != '\x01') {
                    /* try { // try from 00796fd8 to 0079701f has its CatchHandler @ 0079702c */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",0xe2
              );
  }
  pcVar22 = *(char **)(lVar16 + 0x10);
  if (*pcVar22 != '\0') {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"!context_->initial_metadata_received_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_stream_impl.h",0xe3
              );
    pcVar22 = *(char **)(lVar16 + 0x10);
  }
  *(long *)(lVar16 + 0x260) = lVar24;
  *pcVar22 = '\x01';
  *(char **)(lVar16 + 0x250) = pcVar22 + 0xb0;
                    /* try { // try from 007967a8 to 007967af has its CatchHandler @ 0079702c */
  (**(code **)(**(long **)(lVar16 + 0x18) + 0x10))(*(long **)(lVar16 + 0x18),lVar16 + 0x240,puVar25)
  ;
  plStack_138 = (long *)local_70[0x44];
  local_140 = (long *)local_70[0x43];
  local_70[0x44] = 0;
  local_70[0x43] = 0;
  FUN_00294220(&local_80,&local_140,*(undefined8 *)(local_70[0x3d] + 0x198),0x10000,
               *(undefined8 *)(local_70[0x3d] + 0x348));
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
    do {
      lVar24 = *plVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar24 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = plStack_78;
  lVar24 = local_80;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  if (lVar24 != 0) {
    *(undefined1 *)(lVar24 + 8) = 1;
  }
  lVar23 = local_70[0x4f];
  plVar18 = (long *)FUN_006dd5e4(param_4);
  if (*plVar18 == 0) {
    local_148 = (long *)0x0;
    plVar18 = (long *)0x0;
  }
  else {
    lVar19 = std::chrono::system_clock::now();
    plVar18 = (long *)FUN_006dd5e4(param_4);
    local_80 = lVar19 + *plVar18 * 1000000;
    FUN_00619620(&local_140,plVar29,&local_80);
    local_148 = plStack_138;
    plVar18 = local_140;
  }
  puVar25 = (undefined8 *)FUN_006dd5cc(param_4);
  local_140 = (long *)*puVar25;
  plVar4 = (long *)puVar25[1];
  if (plVar4 != (long *)0x0) {
    plVar27 = plVar4 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar11) {
        *plVar27 = *plVar27 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar18 == (long *)0x0) {
    local_180 = (long *)0x0;
    lVar19 = *plVar29;
    plVar27 = plVar4;
    plStack_a0 = (long *)0x0;
    local_a8 = local_180;
    local_e8 = local_70;
    plStack_e0 = local_68;
  }
  else {
    lVar19 = *plVar29;
    if (plVar4 != (long *)0x0) {
      plVar27 = plVar4 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = *plVar27 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    plStack_138 = plVar4;
    FUN_00619a04(&local_130,plVar18);
    plVar27 = *(long **)(lVar19 + 400);
    plVar20 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x58,8);
    puVar2 = PTR_DAT_04375538 + 0x10;
    plVar20[2] = 0;
    plVar20[3] = (long)plVar27;
    plVar21 = plVar20 + 4;
    *plVar20 = (long)puVar2;
    plVar20[1] = 0;
    FUN_00617c4c(plVar21,&local_140,2);
    if (local_128 != (long *)0x0) {
      plVar27 = local_128 + 1;
      do {
        lVar19 = *plVar27;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = lVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*local_128 + 0x10))(local_128);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_138 != (long *)0x0) {
      plVar27 = plStack_138 + 1;
      do {
        lVar19 = *plVar27;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = lVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00617eb8(&local_140,plVar21);
    plVar27 = plStack_138;
    plVar13 = local_140;
    local_140 = (long *)0x0;
    plStack_138 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar3 = plVar4 + 1;
      do {
        lVar19 = *plVar3;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_138 != (long *)0x0) {
      plVar4 = plStack_138 + 1;
      do {
        lVar19 = *plVar4;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *plVar4 = lVar19 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar19 = *plVar29;
    local_140 = plVar13;
    plStack_a0 = plVar20;
    local_a8 = plVar21;
    local_e8 = local_70;
    plStack_e0 = local_68;
  }
  if (plVar27 != (long *)0x0) {
    plVar29 = plVar27 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_130 = *(long *)(param_2 + 8);
  local_128 = *(long **)(param_2 + 0x10);
  if (local_128 != (long *)0x0) {
    plVar29 = (long *)((long)local_128 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_120 = *(undefined8 *)(param_2 + 0x18);
  local_118 = *(long **)(param_2 + 0x20);
  if (local_118 != (long *)0x0) {
    plVar29 = (long *)((long)local_118 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_110 = *(undefined8 *)(param_2 + 0x28);
  local_108 = *(ulong *)(param_2 + 0x30);
  if (local_108 != 0) {
    plVar29 = (long *)(local_108 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar12 = (ulong)local_100 >> 8;
  local_100 = CONCAT71((int7)uVar12,*(undefined1 *)(param_2 + 0x38));
  local_f8 = *(undefined8 *)(param_2 + 0x48);
  local_f0 = *(ulong *)(param_2 + 0x50);
  if (local_f0 != 0) {
    plVar29 = (long *)(local_f0 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plStack_e0 != (long *)0x0) {
    plVar29 = plStack_e0 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_d8 = (long *)lVar26;
  plStack_d0 = plVar28;
  if (plVar28 != (long *)0x0) {
    plVar29 = plVar28 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_c8 = lVar24;
  plStack_c0 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar29 = plVar1 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar17 != (long *)0x0) {
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = *plVar14 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plStack_90 = local_148;
  if (local_148 != (long *)0x0) {
    plVar29 = local_148 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plStack_138 = plVar27;
  local_b8 = lVar16;
  plStack_b0 = plVar17;
  local_98 = plVar18;
  local_70 = local_e8;
  local_68 = plStack_e0;
  FUN_00797750(&local_80,&local_140,*(undefined8 *)(lVar19 + 0x198),0x10000,
               *(undefined8 *)(lVar19 + 0x348));
  FUN_007970fc(&local_140);
  plVar4 = local_68;
  plVar29 = local_70;
  if (local_68 != (long *)0x0) {
    plVar21 = local_68 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *plVar21 = *plVar21 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar17 != (long *)0x0) {
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = *plVar14 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar1 != (long *)0x0) {
    plVar21 = plVar1 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *plVar21 = *plVar21 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  puVar25 = (undefined8 *)FUN_006dd5e4(param_4);
  local_140 = plVar29;
  plStack_138 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar29 = plVar4 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar17 != (long *)0x0) {
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = *plVar14 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_120 = lVar24;
  local_118 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar29 = plVar1 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_108 = local_108 & 0xffffffffffffff00;
  local_100 = *(undefined8 *)(param_2 + 0x48);
  local_f8 = *(long *)(param_2 + 0x50);
  if (local_f8 != 0) {
    plVar29 = (long *)(local_f8 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = *plVar29 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_f0 = local_f0 & 0xffffffffffffff00;
  local_130 = lVar16 + 8;
  local_128 = plVar17;
  local_110 = lVar23;
  plVar21 = (long *)FUN_00612290();
  plStack_e0 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x28,8);
  plVar29 = plStack_78;
  lVar26 = local_80;
  puVar2 = PTR_DAT_04375540 + 0x10;
  plStack_e0[2] = 0;
  plStack_e0[3] = (long)plVar21;
  *plStack_e0 = (long)puVar2;
  plStack_e0[1] = 0;
  local_e8 = plStack_e0 + 4;
  *(undefined1 *)local_e8 = 0;
  plStack_d0 = local_148;
  if (local_148 != (long *)0x0) {
    plVar21 = local_148 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *plVar21 = *plVar21 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_c8 = *puVar25;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  param_1[1] = (long)plVar29;
  *param_1 = lVar26;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  local_d8 = plVar18;
  FUN_00798504(param_1 + 2,&local_140);
  FUN_007973e8(&local_140);
  if (plVar1 != (long *)0x0) {
    plVar29 = plVar1 + 1;
    do {
      lVar26 = *plVar29;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar17 != (long *)0x0) {
    do {
      lVar26 = *plVar14;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar29 = plVar4 + 1;
    do {
      lVar26 = *plVar29;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar29 = plStack_78 + 1;
    do {
      lVar26 = *plVar29;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar27 != (long *)0x0) {
    plVar29 = plVar27 + 1;
    do {
      lVar26 = *plVar29;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_148 != (long *)0x0) {
    plVar29 = local_148 + 1;
    do {
      lVar26 = *plVar29;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar1 != (long *)0x0) {
    plVar29 = plVar1 + 1;
    do {
      lVar26 = *plVar29;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar28 != (long *)0x0) {
    plVar29 = plVar28 + 1;
    do {
      lVar26 = *plVar29;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar11) {
        *plVar29 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar17 != (long *)0x0) {
    do {
      lVar26 = *plVar14;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar17 = local_68 + 1;
    do {
      lVar26 = *plVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar11) {
        *plVar17 = lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


