/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9d164; name: FUN_02c9d164
 */


int FUN_02c9d164(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x650);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x644));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02c9d1c8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02c9d1c8:
  if (*(long *)(param_1 + 0x630) == 0) {
    iVar9 = *(int *)(param_1 + 0x528);
    *(int *)(param_1 + 0x528) = iVar9 + 1;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x630) + -1;
    iVar9 = *(int *)(param_1 + lVar7 * 4 + 0x530);
    *(long *)(param_1 + 0x630) = lVar7;
  }
  *(ulong *)(param_1 + 0x638) =
       1L << ((long)iVar9 - (long)*(int *)(param_1 + 0x520) & 0x3fU) | *(ulong *)(param_1 + 0x638);
  *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + 1;
  *(undefined8 *)(param_1 + 0x650) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x644));
  plVar10 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x68,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  piVar1 = (int *)(param_1 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_02a74588(plVar8);
  plVar8[0xb] = param_1;
  *plVar8 = (long)&PTR_LAB_04295510;
  plVar8[1] = (long)plVar10;
  plVar8[9] = (long)&PTR_LAB_04295550;
  *(int *)(plVar8 + 0xc) = iVar9;
  plVar8[2] = (long)plVar8;
  plVar8[3] = 0x68;
  plVar8[4] = 8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = *(long **)(param_2 + 0xb8);
  *(long **)(param_2 + 0xb8) = plVar8;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return iVar9;
}


