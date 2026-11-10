/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a41008; name: FUN_02a41008
 */


void FUN_02a41008(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar10 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_0427d160;
  param_1[1] = lVar10;
  param_1[9] = (long)&PTR_LAB_0427d190;
  if (((*PTR_DAT_0437b680 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b680), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437e478,PTR_DAT_0437b688,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b680);
  }
  PTR_DAT_0437b688[8] = 1;
  *param_1 = (long)&PTR_LAB_0427d110;
  param_1[9] = (long)&PTR_LAB_0427d140;
  plVar9 = param_1 + 10;
  *plVar9 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  nn::oe::Initialize();
  nn::oe::SetPerformanceModeChangedNotificationEnabled(true);
  lVar6 = FUN_02a41d38(param_1[1]);
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02a413f4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  param_1[10] = lVar6;
  lVar6 = FUN_02a41d38(param_1[1]);
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02a413f4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0xb] = lVar6;
  lVar6 = FUN_02a41d38(param_1[1]);
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02a413f4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0xc] = lVar6;
  lVar6 = FUN_02a41d38(param_1[1]);
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02a413f4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0xd] = lVar6;
  lVar6 = FUN_02a41d38(param_1[1]);
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_02a413f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0xe] = lVar6;
  return;
}


