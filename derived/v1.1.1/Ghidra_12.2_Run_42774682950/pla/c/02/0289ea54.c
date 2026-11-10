/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289ea54; name: FUN_0289ea54
 */


void FUN_0289ea54(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *local_60;
  long *local_58;
  
  if (*(long *)(param_1 + 600) == *(long *)(param_1 + 0x250)) {
    lVar6 = nn::os::GetCurrentThread();
    plVar8 = (long *)(param_1 + 0x210);
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0289eadc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0289eadc:
    lVar6 = nn::os::GetCurrentThread();
    plVar8 = (long *)(param_1 + 0x228);
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x21c));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0289eb24;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0289eb24:
    FUN_028aab80(*(undefined8 *)(param_1 + 0x248));
    plVar8 = *(long **)(param_1 + 0x250);
    plVar9 = *(long **)(param_1 + 600);
LAB_0289eb34:
    if (plVar9 != plVar8) {
      while( true ) {
        plVar9 = plVar9 + -1;
        plVar7 = (long *)*plVar9;
        if (plVar7 == (long *)0x0) break;
        plVar1 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 != 0) break;
        (**(code **)(*plVar7 + 0x10))();
        if (plVar9 == plVar8) goto LAB_0289eb70;
      }
      goto LAB_0289eb34;
    }
LAB_0289eb70:
    *(long **)(param_1 + 600) = plVar8;
    plVar8 = *(long **)(param_1 + 0x288);
    plVar9 = *(long **)(param_1 + 0x290);
LAB_0289eb7c:
    if (plVar9 != plVar8) {
      while( true ) {
        plVar9 = plVar9 + -1;
        plVar7 = (long *)*plVar9;
        if (plVar7 == (long *)0x0) break;
        plVar1 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 != 0) break;
        (**(code **)(*plVar7 + 0x10))();
        if (plVar9 == plVar8) goto LAB_0289ebb8;
      }
      goto LAB_0289eb7c;
    }
LAB_0289ebb8:
    *(long **)(param_1 + 0x290) = plVar8;
    plVar8 = *(long **)(param_1 + 0x2c0);
    plVar9 = *(long **)(param_1 + 0x2c8);
LAB_0289ebc4:
    if (plVar9 != plVar8) {
      while( true ) {
        plVar9 = plVar9 + -1;
        plVar7 = (long *)*plVar9;
        if (plVar7 == (long *)0x0) break;
        plVar1 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 != 0) break;
        (**(code **)(*plVar7 + 0x10))();
        if (plVar9 == plVar8) goto LAB_0289ec00;
      }
      goto LAB_0289ebc4;
    }
LAB_0289ec00:
    *(long **)(param_1 + 0x2c8) = plVar8;
    *(undefined2 *)(param_1 + 0x305) = 0;
    *(undefined1 *)(param_1 + 0x307) = 0;
    *(undefined1 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x2fc) = 0;
    *(undefined1 *)(param_1 + 0x309) = 1;
    *(undefined8 *)(param_1 + 0x228) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x21c));
    *(undefined8 *)(param_1 + 0x210) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x210);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0289ec90;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0289ec90:
  plVar8 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x1a0,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_028a49b0(plVar9,param_1,param_3,param_4);
  plVar9[1] = (long)plVar8;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x1a0;
  plVar9[4] = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (plVar9 == (long *)0x0) {
    param_2 = (long *)*param_2;
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_2 = (long *)*param_2;
    plVar8 = plVar9;
  }
  local_58 = plVar9;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  plVar9 = (long *)plVar8[0xc];
  plVar8[0xc] = (long)param_2;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x228);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      FUN_0289eef8(param_1 + 0x288,&local_58);
      *(undefined1 *)(param_1 + 0x305) = 1;
      goto joined_r0x0289ede0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_60 = local_58;
  if (local_58 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = local_58 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = local_58;
  }
  FUN_0289eef8(param_1 + 0x250,&local_60);
  FUN_028a22a0(*(undefined8 *)(param_1 + 0x250),*(undefined8 *)(param_1 + 600));
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x21c));
joined_r0x0289ede0:
  if (local_58 != (long *)0x0) {
    plVar8 = local_58 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return;
}


