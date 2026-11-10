/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00662664; name: FUN_00662664
 */


undefined8 FUN_00662664(long param_1)

{
  long **pplVar1;
  long ****pppplVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long ***ppplVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  uint local_1b0 [2];
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long *plStack_190;
  char local_188;
  long *local_180;
  long local_178;
  undefined8 uStack_170;
  long local_168;
  long **local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long *local_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long *plStack_120;
  char local_118;
  long *local_110;
  long local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined1 auStack_f0 [8];
  long *local_e8;
  char local_dc [4];
  long **local_d8;
  long *plStack_d0;
  long *****ppppplStack_c8;
  long *****local_c0;
  long *local_b8;
  char local_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  long **local_70;
  undefined8 uStack_68;
  
  lVar19 = *(long *)(param_1 + 200);
  lVar3 = *(long *)(param_1 + 0xd0);
  lVar21 = *(long *)(param_1 + 0xf8);
  lVar17 = *(long *)(lVar19 + 0x10);
  if (lVar3 != 0) {
    plVar11 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar23 = *(long **)(lVar17 + 0x198);
  puVar18 = *(undefined8 **)(lVar17 + 0x348);
  plVar11 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x78,8);
  plVar11[2] = 0;
  plVar22 = plVar11 + 1;
  *plVar22 = 0;
  puVar6 = PTR_DAT_043753e0;
  plVar11[3] = (long)plVar23;
  plVar15 = plVar11 + 4;
  *plVar11 = (long)(puVar6 + 0x10);
  FUN_00782ef8();
  plVar11[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar11 + 6,0,0);
  plVar11[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar11 + 0xb),false,0);
  if (plVar11 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = *plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x150,8);
  plVar24 = plVar12 + 1;
  *plVar24 = 0;
  plVar12[2] = 0;
  plVar12[3] = (long)plVar23;
  *plVar12 = (long)&PTR_LAB_041954c0;
  FUN_007840dc(plVar12 + 4);
  plVar12[4] = (long)&PTR_LAB_04195510;
  lVar17 = (**(code **)(*plVar23 + 0x10))(plVar23,0x10000,0x10);
  if (lVar17 == 0) {
LAB_00663358:
    local_d8 = (long **)CONCAT44(local_d8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_d8,"");
  }
  FUN_00782cfc(plVar12 + 10,plVar15,0,lVar17,0x10000,1);
  *(undefined1 *)((long)plVar12 + 0x149) = 1;
  plVar12[0x25] = (long)plVar23;
  plVar12[0x26] = 0x10000;
  plVar12[10] = (long)&PTR_LAB_04195558;
  plVar12[0x27] = (long)plVar15;
  plVar12[0x28] = (long)plVar11;
  plVar12[0x23] = lVar19;
  plVar12[0x24] = lVar3;
  local_140 = (long *)0x0;
  local_138 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *plVar24 = *plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_d8 = (long **)(plVar12 + 4);
  plStack_d0 = plVar12;
  (**(code **)*puVar18)(puVar18,&local_d8,&local_140);
  if (plStack_d0 != (long *)0x0) {
    plVar23 = plStack_d0 + 1;
    do {
      lVar19 = *plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_138 != (long *)0x0) {
    plVar23 = local_138 + 1;
    do {
      lVar19 = *plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_138 + 0x10))(local_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar12 != (long *)0x0) {
    do {
      lVar19 = *plVar24;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *plVar24 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar19 = *(long *)(param_1 + 200);
  lVar3 = *(long *)(param_1 + 0xd0);
  lVar17 = *(long *)(lVar19 + 0x10);
  if (lVar3 != 0) {
    plVar23 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = *plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar25 = *(long **)(lVar17 + 0x198);
  puVar18 = *(undefined8 **)(lVar17 + 0x348);
  plVar23 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x78,8);
  plVar23[2] = 0;
  plVar24 = plVar23 + 1;
  *plVar24 = 0;
  plVar12 = plVar23 + 4;
  *plVar23 = (long)(PTR_DAT_043753e0 + 0x10);
  plVar23[3] = (long)plVar25;
  FUN_00782ef8();
  plVar23[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar23 + 6,0,0);
  plVar23[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar23 + 0xb),false,0);
  if (plVar23 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *plVar24 = *plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x150,8);
  plVar27 = plVar13 + 1;
  *plVar27 = 0;
  plVar13[2] = 0;
  plVar13[3] = (long)plVar25;
  *plVar13 = (long)&PTR_LAB_041955b8;
  FUN_007840dc(plVar13 + 4);
  plVar13[4] = (long)&PTR_LAB_04195608;
  lVar17 = (**(code **)(*plVar25 + 0x10))(plVar25,0x10000,0x10);
  if (lVar17 == 0) goto LAB_00663358;
  FUN_00782cfc(plVar13 + 10,plVar12,0,lVar17,0x10000,1);
  plVar13[10] = (long)&PTR_LAB_04195650;
  plVar13[0x25] = (long)plVar25;
  plVar13[0x26] = 0x10000;
  *(undefined1 *)((long)plVar13 + 0x149) = 1;
  plVar13[0x23] = lVar19;
  plVar13[0x24] = lVar3;
  plVar13[0x27] = (long)plVar12;
  plVar13[0x28] = (long)plVar23;
  local_140 = (long *)0x0;
  local_138 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *plVar27 = *plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_d8 = (long **)(plVar13 + 4);
  plStack_d0 = plVar13;
  (**(code **)*puVar18)(puVar18,&local_d8,&local_140);
  if (plStack_d0 != (long *)0x0) {
    plVar25 = plStack_d0 + 1;
    do {
      lVar19 = *plVar25;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_138 != (long *)0x0) {
    plVar25 = local_138 + 1;
    do {
      lVar19 = *plVar25;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_138 + 0x10))(local_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar13 != (long *)0x0) {
    do {
      lVar19 = *plVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *plVar27 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
  }
  pplVar1 = (long **)(PTR_DAT_04373168 + 0x10);
  local_70 = (long **)0x0;
  uStack_68 = 0;
  plStack_d0 = (long *)(PTR_DAT_04373170 + 0x10);
  ppppplStack_c8 = (long *****)&ppppplStack_c8;
  local_d8 = pplVar1;
  local_c0 = ppppplStack_c8;
  (**(code **)(*plVar15 + 0x10))(plVar15,local_b0);
  local_70 = &plStack_d0;
  thunk_FUN_00783af0(&local_d8);
  local_d8 = pplVar1;
  FUN_00782f18(&plStack_d0);
  local_dc[0] = '\0';
  uVar14 = FUN_00612290();
  FUN_00783f38(auStack_f0,uVar14);
  local_d8 = (long **)local_dc;
  lVar19 = *(long *)(*(long *)(param_1 + 200) + 0x10);
  ppppplStack_c8 = *(long ******)(param_1 + 0xe0);
  plStack_d0 = *(long **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_00783fac(auStack_f0);
  plVar27 = *(long **)(lVar19 + 0x198);
  puVar18 = *(undefined8 **)(lVar19 + 0x348);
  plVar15 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x78,8);
  plVar15[2] = 0;
  plVar13 = plVar15 + 1;
  *plVar13 = 0;
  plVar25 = plVar15 + 4;
  *plVar15 = (long)(PTR_DAT_043753e0 + 0x10);
  plVar15[3] = (long)plVar27;
  FUN_00782ef8();
  plVar15[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar15 + 6,0,0);
  plVar15[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar15 + 0xb),false,0);
  if (plVar15 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar16 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x168,8);
  plVar26 = plVar16 + 1;
  *plVar26 = 0;
  plVar16[2] = 0;
  plVar16[3] = (long)plVar27;
  *plVar16 = (long)&PTR_LAB_041956b0;
  FUN_007840dc(plVar16 + 4);
  plVar16[4] = (long)&PTR_LAB_04195700;
  lVar19 = (**(code **)(*plVar27 + 0x10))(plVar27,0x10000,0x10);
  if (lVar19 == 0) {
    local_140 = (long *)CONCAT44(local_140._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_140,"");
  }
  FUN_00782cfc(plVar16 + 10,plVar25,0,lVar19,0x10000,1);
  plVar10 = local_b8;
  ppppplVar9 = local_c0;
  ppppplVar8 = ppppplStack_c8;
  plVar7 = plStack_d0;
  plVar16[0x28] = (long)plVar27;
  plVar16[0x29] = 0x10000;
  *(undefined1 *)((long)plVar16 + 0x161) = 1;
  plVar16[10] = (long)&PTR_LAB_04195748;
  plVar16[0x2a] = (long)plVar25;
  plVar16[0x2b] = (long)plVar15;
  plStack_d0 = (long *)0x0;
  ppppplStack_c8 = (long *****)0x0;
  local_c0 = (long *****)0x0;
  local_b8 = (long *)0x0;
  plVar16[0x24] = (long)plVar7;
  plVar16[0x23] = (long)local_d8;
  plVar16[0x27] = (long)plVar10;
  plVar16[0x25] = (long)ppppplVar8;
  plVar16[0x26] = (long)ppppplVar9;
  local_160 = (long **)0x0;
  local_158 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar5) {
        *plVar26 = *plVar26 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_140 = plVar16 + 4;
  local_138 = plVar16;
  (**(code **)*puVar18)(puVar18,&local_140,&local_160);
  puVar6 = PTR_DAT_04373168;
  if (local_138 != (long *)0x0) {
    plVar27 = local_138 + 1;
    do {
      lVar19 = *plVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *plVar27 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_138 + 0x10))(local_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_158 != (long *)0x0) {
    plVar27 = local_158 + 1;
    do {
      lVar19 = *plVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *plVar27 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar16 != (long *)0x0) {
    do {
      lVar19 = *plVar26;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar5) {
        *plVar26 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8 != (long *)0x0) {
    plVar27 = local_b8 + 1;
    do {
      lVar19 = *plVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *plVar27 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (ppppplStack_c8 != (long *****)0x0) {
    pppplVar2 = (long ****)(ppppplStack_c8 + 1);
    do {
      ppplVar20 = *pppplVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
      if (bVar5) {
        *pppplVar2 = (long ***)((long)ppplVar20 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppplVar20 == (long ***)0x0) {
      (*(code *)(*ppppplStack_c8)[2])(ppppplStack_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_70 = (long **)0x0;
  uStack_68 = 0;
  plVar27 = (long *)(PTR_DAT_04373170 + 0x10);
  pplVar1 = (long **)(puVar6 + 0x10);
  local_d8 = pplVar1;
  plStack_d0 = plVar27;
  ppppplStack_c8 = (long *****)&ppppplStack_c8;
  local_c0 = (long *****)&ppppplStack_c8;
  (**(code **)(*plVar12 + 0x10))(plVar12,local_b0);
  local_70 = &plStack_d0;
  thunk_FUN_00783af0(&local_d8);
  local_d8 = pplVar1;
  FUN_00782f18(&plStack_d0);
  FUN_00784040(auStack_f0);
  local_70 = (long **)0x0;
  uStack_68 = 0;
  local_d8 = pplVar1;
  plStack_d0 = plVar27;
  ppppplStack_c8 = (long *****)&ppppplStack_c8;
  local_c0 = (long *****)&ppppplStack_c8;
  (**(code **)(plVar15[4] + 0x10))(plVar25,local_b0);
  local_70 = &plStack_d0;
  thunk_FUN_00783af0(&local_d8);
  local_d8 = pplVar1;
  FUN_00782f18(&plStack_d0);
  if (plVar15 != (long *)0x0) {
    do {
      lVar19 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e8 != (long *)0x0) {
    plVar15 = local_e8 + 1;
    do {
      lVar19 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  pplVar1 = (long **)(puVar6 + 0x10);
  lVar19 = *(long *)(param_1 + 200);
  plStack_d0 = (long *)(PTR_DAT_04373170 + 0x10);
  local_70 = (long **)0x0;
  uStack_68 = 0;
  ppppplStack_c8 = (long *****)&ppppplStack_c8;
  local_d8 = pplVar1;
  local_c0 = ppppplStack_c8;
  (**(code **)(**(long **)(lVar19 + 0x20) + 0x10))(*(long **)(lVar19 + 0x20),local_b0);
  local_70 = &plStack_d0;
  thunk_FUN_00783af0(&local_d8);
  local_d8 = pplVar1;
  FUN_00782f18(&plStack_d0);
  plVar15 = *(long **)(lVar19 + 0x20);
  plVar12 = *(long **)(lVar19 + 0x28);
  *(undefined8 *)(lVar19 + 0x20) = 0;
  *(undefined8 *)(lVar19 + 0x28) = 0;
  (**(code **)(*plVar15 + 0x30))(&local_140);
  if (plVar12 == (long *)0x0) {
LAB_00663028:
    if ((uint)local_140 < 2) goto LAB_00663034;
LAB_00663114:
    uStack_1a0 = uStack_130;
    local_1a8 = local_138;
    local_198 = local_128;
    plVar15 = local_140;
    lVar19 = local_108;
    lVar3 = local_f8;
  }
  else {
    plVar15 = plVar12 + 1;
    do {
      lVar19 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar19 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar19 != 0) goto LAB_00663028;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__shared_weak_count::__release_weak();
    if (1 < (uint)local_140) goto LAB_00663114;
LAB_00663034:
    if (local_dc[0] == '\0') {
      plStack_d0 = (long *)0x0;
      ppppplStack_c8 = (long *****)FUN_00612290();
      local_c0 = (long *****)0x0;
      local_d8 = &plStack_d0;
      FUN_002a3b60(local_1b0,0,&DAT_03996322,&local_d8);
      FUN_02767254(&local_d8,plStack_d0);
      goto joined_r0x0066318c;
    }
    local_158 = (long *)0x0;
    local_150 = FUN_00612290();
    uStack_148 = 0;
    local_160 = &local_158;
    FUN_002a3b60(&local_d8,0xe,"Failed to stop receiving.",&local_160);
                    /* try { // try from 0066306c to 00663077 has its CatchHandler @ 006633a0 */
    FUN_0062703c(&local_140,&local_d8);
    if (local_b0[0] != '\0') {
      FUN_02767254(auStack_a8,local_a0);
    }
    if (((ulong)plStack_d0 & 1) != 0) {
      (**(code **)(*local_b8 + 0x18))(local_b8,local_c0,(ulong)plStack_d0 & 0xfffffffffffffffe,1);
    }
    FUN_02767254(&local_160,local_158);
    uStack_1a0 = uStack_130;
    local_1a8 = local_138;
    local_198 = local_128;
    plVar15 = local_140;
    lVar19 = local_108;
    lVar3 = local_f8;
  }
  local_188 = '\0';
  local_108 = lVar19;
  local_f8 = lVar3;
  if (local_118 != '\0') {
    local_180 = &local_178;
    if (lVar3 != 0) {
      *(long **)(lVar19 + 0x10) = local_180;
      local_108 = 0;
      local_f8 = 0;
      local_180 = local_110;
      local_110 = &local_108;
    }
    local_188 = '\x01';
    local_178 = lVar19;
    uStack_170 = uStack_100;
    local_168 = lVar3;
  }
  local_128 = 0;
  uStack_130 = 0;
  local_138 = (long *)0x0;
  local_1b0[0] = (uint)local_140;
  local_140 = plVar15;
  plStack_190 = plStack_120;
joined_r0x0066318c:
  if (local_118 != '\0') {
    FUN_02767254(&local_110,local_108);
  }
  if (((ulong)local_138 & 1) != 0) {
    (**(code **)(*plStack_120 + 0x18))
              (plStack_120,local_128,(ulong)local_138 & 0xfffffffffffffffe,1);
  }
  do {
    lVar19 = *plVar24;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *plVar24 = lVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar19 = *plVar22;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar5) {
      *plVar22 = lVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__shared_weak_count::__release_weak();
  }
  nn::os::LockMutex((MutexType *)(lVar21 + 0x38));
  *(uint *)(lVar21 + 0x58) = local_1b0[0];
  *(undefined8 *)(lVar21 + 0x68) = uStack_1a0;
  *(long **)(lVar21 + 0x60) = local_1a8;
  *(long **)(lVar21 + 0x78) = plStack_190;
  *(undefined8 *)(lVar21 + 0x70) = local_198;
  local_1a8 = (long *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  *(undefined1 *)(lVar21 + 0x80) = 0;
  if (local_188 != '\0') {
    *(long **)(lVar21 + 0x88) = local_180;
    *(undefined8 *)(lVar21 + 0x98) = uStack_170;
    *(long *)(lVar21 + 0x90) = local_178;
    plVar11 = (long *)(lVar21 + 0x90);
    *(long *)(lVar21 + 0xa0) = local_168;
    if (local_168 == 0) {
      *(long **)(lVar21 + 0x88) = plVar11;
    }
    else {
      *(long **)(*plVar11 + 0x10) = plVar11;
      local_180 = &local_178;
      local_178 = 0;
      local_168 = 0;
    }
    *(undefined1 *)(lVar21 + 0x80) = 1;
  }
  *(undefined1 *)(lVar21 + 0xa8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar21 + 0x38));
  if (local_188 != '\0') {
    FUN_02767254(&local_180,local_178);
  }
  if (((ulong)local_1a8 & 1) != 0) {
    (**(code **)(*plStack_190 + 0x18))
              (plStack_190,local_198,(ulong)local_1a8 & 0xfffffffffffffffe,1);
  }
  return 1;
}


