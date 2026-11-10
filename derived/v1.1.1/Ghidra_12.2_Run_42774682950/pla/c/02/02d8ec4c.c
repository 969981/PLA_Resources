/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d8ec4c; name: FUN_02d8ec4c
 */


void FUN_02d8ec4c(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined4 local_200 [2];
  undefined8 local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long *aplStack_1d0 [12];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long *aplStack_150 [12];
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  long *local_a0;
  
  plVar15 = (long *)*param_2;
  *param_2 = 0;
  plVar17 = *(long **)(*param_1 + 8);
  local_200[0] = 0;
  local_1f8 = 0x2000;
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar8 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar9 = PTR_DAT_04379528;
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_02d8f658:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar17;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  plVar13 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x200,0x10);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  local_f0 = (long *)&LAB_02d8f708;
  local_e8 = FUN_02d8f738;
  local_e0 = &LAB_02d8f770;
  local_d8 = &LAB_02d8f7e4;
  local_170 = &LAB_02d8f7f4;
  local_168 = FUN_02d8f83c;
  local_160 = &LAB_02d8f874;
  local_158 = &LAB_02d8f8e8;
  local_1f0 = &LAB_02d8f8f8;
  local_1e8 = FUN_02d8f90c;
  local_1e0 = &LAB_02d8f944;
  local_1d8 = &LAB_02d8f9b8;
  aplStack_1d0[0] = plVar15;
  aplStack_150[0] = plVar15;
  local_d0 = plVar15;
  FUN_013b7bdc(plVar13,local_200,&local_f0,&local_170,&local_1f0);
  pcVar10 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar10)(aplStack_1d0);
  }
  pcVar10 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar10)(aplStack_150);
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  plVar13[1] = (long)plVar17;
  plVar13[2] = (long)plVar13;
  plVar13[3] = 0x200;
  plVar13[4] = 0x10;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  if (plVar13 != (long *)0x0) {
    lVar16 = plVar13[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar17 = (long *)param_1[3];
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar16 = param_1[4];
  lVar3 = param_1[5];
  lVar2 = param_1[6];
  plVar4 = (long *)param_1[7];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar18 = plVar13[0xb];
  if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
  if (*(long *)(lVar18 + 0x10) == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
    *(undefined8 *)(lVar18 + 0x10) = uVar12;
  }
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (plVar15 == (long *)0x0) {
    bVar6 = true;
  }
  else {
    lVar18 = plVar15[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar18 = plVar15[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar18 = plVar15[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = false;
  }
  plVar19 = *(long **)(*param_1 + 8);
  if (((*puVar8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
  if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02d8f658;
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar19;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x200,0x10);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xb8))(plVar19);
  }
  local_d8 = (undefined1 *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  local_e0 = (undefined1 *)0x0;
  local_d0 = plVar17;
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_c8 = lVar16;
  lStack_c0 = lVar3;
  local_b8 = lVar2;
  plStack_b0 = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar16 = plVar13[0xb];
  local_a8 = plVar13;
  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_02d8f640:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar16 + 0x10) == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
    *(undefined8 *)(lVar16 + 0x10) = uVar12;
  }
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_a0 = plVar15;
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_170 = (undefined1 *)0x0;
  local_f0 = (long *)&LAB_02d8f9c8;
  local_e8 = FUN_02d8fd48;
  local_e0 = &LAB_02d8fe34;
  local_d8 = &LAB_02d8ff74;
  local_158 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  aplStack_150[0] = plVar15;
  if (!bVar6) {
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1f0 = (undefined1 *)0x0;
  local_170 = &LAB_02d90034;
  local_168 = FUN_02d9007c;
  local_160 = &LAB_02d900b4;
  local_158 = &LAB_02d90128;
  local_1d8 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  aplStack_1d0[0] = plVar15;
  if (!bVar6) {
    lVar16 = plVar15[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1f0 = &LAB_02d90138;
  local_1e8 = FUN_02d9014c;
  local_1e0 = &LAB_02d90184;
  local_1d8 = &LAB_02d901f8;
  FUN_013b7bdc(plVar14,param_1 + 1,&local_f0,&local_170,&local_1f0);
  pcVar10 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar10)(aplStack_1d0);
  }
  pcVar10 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar10)(aplStack_150);
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  plVar14[1] = (long)plVar19;
  plVar14[2] = (long)plVar14;
  plVar14[3] = 0x200;
  plVar14[4] = 0x10;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  local_f0 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02d8f640;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_013b651c(*param_1,&local_f0);
  if (local_f0 != (long *)0x0) {
    lVar16 = local_f0[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (!bVar6) {
    lVar16 = plVar15[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    lVar16 = plVar15[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  lVar16 = plVar13[0xb];
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  lVar16 = plVar13[0xb];
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


