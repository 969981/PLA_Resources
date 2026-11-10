/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ce243c; name: FUN_02ce243c
 */


void FUN_02ce243c(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 local_210 [2];
  undefined8 local_208;
  long *local_200;
  long *local_1f8;
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
  undefined1 *puStack_d8;
  long *local_d0 [2];
  long *local_c0;
  long *local_b8;
  
  plVar12 = (long *)*param_2;
  *param_2 = 0;
  plVar14 = *(long **)(*param_1 + 8);
  local_210[0] = 0;
  local_208 = 0x2000;
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_02ce2d34:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar14;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x200,0x10);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  local_f0 = (long *)&LAB_02ce2d98;
  local_e8 = FUN_02ce2dc8;
  local_e0 = &LAB_02ce2e00;
  puStack_d8 = &LAB_02ce2e74;
  local_170 = &LAB_02ce2e84;
  local_168 = FUN_02ce2ecc;
  local_160 = &LAB_02ce2f04;
  local_158 = &LAB_02ce2f78;
  local_1f0 = &LAB_02ce2f88;
  local_1e8 = FUN_02ce2f9c;
  local_1e0 = &LAB_02ce2fd4;
  local_1d8 = &LAB_02ce3048;
  aplStack_1d0[0] = plVar12;
  aplStack_150[0] = plVar12;
  local_d0[0] = plVar12;
  FUN_013b7bdc(plVar10,local_210,&local_f0,&local_170,&local_1f0);
  pcVar7 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar7)(aplStack_1d0);
  }
  pcVar7 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar7)(aplStack_150);
  }
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar7)(local_d0);
  }
  plVar10[1] = (long)plVar14;
  plVar10[2] = (long)plVar10;
  plVar10[3] = 0x200;
  plVar10[4] = 0x10;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_013b7dbc(local_210,param_1 + 3);
  lVar13 = plVar10[0xb];
  local_200 = plVar10;
  if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
  if (*(long *)(lVar13 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
    *(undefined8 *)(lVar13 + 0x10) = uVar9;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_1f8 = plVar12;
  if (plVar12 == (long *)0x0) {
    bVar3 = true;
  }
  else {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = false;
  }
  plVar14 = *(long **)(*param_1 + 8);
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02ce2d34;
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar14;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x200,0x10);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  local_e0 = (undefined1 *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  FUN_013b7dbc(local_d0,local_210);
  local_c0 = local_200;
  if (local_200 != (long *)0x0) {
    lVar15 = local_200[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b8 = local_1f8;
  if (local_1f8 != (long *)0x0) {
    lVar15 = local_1f8[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_170 = (undefined1 *)0x0;
  local_f0 = (long *)&LAB_02ce3058;
  local_e8 = FUN_02ce3338;
  local_e0 = &LAB_02ce33d0;
  puStack_d8 = &LAB_02ce34a4;
  local_158 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  aplStack_150[0] = plVar12;
  if (!bVar3) {
    lVar15 = plVar12[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1f0 = (undefined1 *)0x0;
  local_170 = &LAB_02ce3540;
  local_168 = FUN_02ce3588;
  local_160 = &LAB_02ce35c0;
  local_158 = &LAB_02ce3634;
  local_1d8 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  aplStack_1d0[0] = plVar12;
  if (!bVar3) {
    lVar15 = plVar12[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02ce2d1c;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1f0 = &LAB_02ce3644;
  local_1e8 = FUN_02ce3658;
  local_1e0 = &LAB_02ce3690;
  local_1d8 = &LAB_02ce3704;
  FUN_013b7bdc(plVar11,param_1 + 1,&local_f0,&local_170,&local_1f0);
  pcVar7 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar7)(aplStack_1d0);
  }
  pcVar7 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar7)(aplStack_150);
  }
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar7)(local_d0);
  }
  plVar11[1] = (long)plVar14;
  plVar11[2] = (long)plVar11;
  plVar11[3] = 0x200;
  plVar11[4] = 0x10;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  local_f0 = plVar11;
  if (plVar11 != (long *)0x0) {
    lVar13 = plVar11[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_02ce2d1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_013b651c(*param_1,&local_f0);
  if (local_f0 != (long *)0x0) {
    lVar13 = local_f0[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (!bVar3) {
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (local_1f8 != (long *)0x0) {
    lVar13 = local_1f8[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_1f8 + 0x20))();
    }
  }
  if (local_200 != (long *)0x0) {
    lVar13 = local_200[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_200 + 0x20))();
    }
  }
  FUN_013b348c(local_210);
  lVar13 = plVar10[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


