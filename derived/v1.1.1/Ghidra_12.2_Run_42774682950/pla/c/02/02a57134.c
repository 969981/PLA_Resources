/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a57134; name: FUN_02a57134
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a57134(long *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 local_68 [3];
  
  puVar8 = (undefined8 *)FUN_02882758();
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_1;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x70,8);
  if (puVar10 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
    FUN_02a5d258();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  FUN_02a5d258();
  puVar10[0xd] = 0;
  *puVar10 = &PTR_LAB_0427df98;
  puVar10[1] = param_1;
  puVar10[2] = puVar10;
  puVar10[3] = 0x70;
  puVar10[4] = 8;
  puVar10[9] = &PTR_LAB_0427dfc8;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  puVar18 = (undefined8 *)*puVar8;
  *puVar8 = puVar10;
  if (puVar18 != (undefined8 *)0x0) {
    plVar12 = (long *)puVar18[1];
    uVar2 = puVar18[2];
    uVar13 = puVar18[3];
    uVar3 = puVar18[4];
    FUN_02bcbe58(local_68,0);
    (**(code **)*puVar18)(puVar18);
    uVar11 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    lVar9 = tpidr_el0;
    if ((uVar11 & 1) == 0) {
LAB_02a5729c:
      (**(code **)(*plVar12 + 0x18))(plVar12,uVar2,uVar13,uVar3);
    }
    else {
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02a5729c;
      FUN_02bcc824(plVar12,uVar2,uVar13,uVar3);
    }
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar9 + 0x38d480) + -1;
    *(int *)(lVar9 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar9 + 0x38d484) = 0;
    }
    puVar10 = (undefined8 *)*puVar8;
  }
  lVar9 = (long)(int)DAT_043eeed0;
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  DAT_043eeed0 = DAT_043eeed0 + 1;
  puVar8 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar8 = puVar10 + 9;
  }
  *(undefined8 **)(&DAT_043eced0 + lVar9 * 8) = puVar8;
  plVar12 = (long *)FUN_02882758();
  puVar6 = PTR_DAT_04387f08;
  lVar14 = *plVar12;
  *(long *)PTR_DAT_04387f08 = lVar14;
  lVar9 = FUN_00958ac0(local_68,*(undefined8 *)(lVar14 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar15 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02a57908;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = *(long **)(lVar14 + 0x50);
  *(undefined8 *)(lVar14 + 0x50) = 0;
  if (plVar12 != (long *)0x0) {
    lVar15 = plVar12[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  *(long *)(lVar14 + 0x50) = lVar9;
  plVar12 = (long *)FUN_02882758();
  lVar15 = *plVar12;
  *(long *)puVar6 = lVar15;
  lVar14 = FUN_00958ac0(local_68,*(undefined8 *)(lVar15 + 8));
  *(ulong *)(lVar14 + 0x1e0) = *(ulong *)(lVar14 + 0x1e0) | 8;
  if (lVar14 != 0) {
    lVar16 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02a57908;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = *(long **)(lVar15 + 0x58);
  *(undefined8 *)(lVar15 + 0x58) = 0;
  if (plVar12 != (long *)0x0) {
    lVar16 = plVar12[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  *(long *)(lVar15 + 0x58) = lVar14;
  lVar15 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar14 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1fc));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a574dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a574dc:
  FUN_02a70468(lVar14,lVar9,0);
  plVar12 = (long *)FUN_02882758();
  lVar15 = *plVar12;
  *(long *)puVar6 = lVar15;
  lVar9 = FUN_00958ac0(local_68,*(undefined8 *)(lVar15 + 8));
  *(ulong *)(lVar9 + 0x1e0) = *(ulong *)(lVar9 + 0x1e0) | 8;
  if (lVar9 != 0) {
    lVar16 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_02a57908;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = *(long **)(lVar15 + 0x60);
  *(undefined8 *)(lVar15 + 0x60) = 0;
  if (plVar12 != (long *)0x0) {
    lVar16 = plVar12[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  *(long *)(lVar15 + 0x60) = lVar9;
  FUN_02a70468(lVar14,0,lVar9);
  lVar15 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar9 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1fc));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a575d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a575d4:
  plVar12 = (long *)FUN_02882758();
  lVar16 = *plVar12;
  *(long *)puVar6 = lVar16;
  lVar15 = FUN_00958ac0(local_68,*(undefined8 *)(lVar16 + 8));
  *(ulong *)(lVar15 + 0x1e0) = *(ulong *)(lVar15 + 0x1e0) | 8;
  if (lVar15 != 0) {
    lVar17 = *(long *)(lVar15 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_02a57908:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = *(long **)(lVar16 + 0x68);
  *(undefined8 *)(lVar16 + 0x68) = 0;
  if (plVar12 != (long *)0x0) {
    lVar17 = plVar12[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  *(long *)(lVar16 + 0x68) = lVar15;
  FUN_02a70468(lVar9,0,lVar15);
  lVar16 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a576bc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a576bc:
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  *(undefined8 *)(lVar9 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1fc));
  *(undefined8 *)(lVar14 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1fc));
  FUN_0094e43c(local_68,param_1);
  plVar12 = DAT_043eeee8;
  DAT_043eeee8 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  DAT_043eeee8 = (long *)local_68[0];
  return;
}


