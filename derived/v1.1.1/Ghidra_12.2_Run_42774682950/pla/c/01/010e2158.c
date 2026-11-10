/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e2158; name: FUN_010e2158
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_010e2158(long param_1,long *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ushort *puVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *local_68;
  
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    plVar12 = *(long **)(param_1 + 0x54e78);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar1 = plVar12 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar2 = param_1 + (ulong)param_3 * 0x2a30 + (ulong)param_4 * 0x168 + 0x68;
    (**(code **)(*plVar12 + 0x28))(plVar12,lVar2);
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    plVar12 = *(long **)(param_1 + 0x54e78);
    local_68 = plVar12;
    if (plVar12 == (long *)0x0) {
      FUN_010e248c(param_1,&local_68);
    }
    else {
      plVar1 = plVar12 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      FUN_010e248c(param_1,&local_68);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    lVar13 = *(long *)(*param_2 + 0x98);
    lVar10 = nn::os::GetCurrentThread();
    plVar12 = (long *)(lVar13 + 0x30);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x24));
          while (*plVar12 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_010e2298;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_010e2298:
    FUN_02c65ef8(lVar13,lVar2,0);
    *(undefined8 *)(lVar13 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x24));
    plVar12 = (long *)*param_2;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    iVar8 = FUN_02c6849c(plVar12[0x13]);
    param_4 = param_4 + param_3 * 0x1e;
    if (0x3bf < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_010e4430();
    }
    puVar3 = (ulong *)(param_1 + ((ulong)(param_4 >> 3) & 0x1ffffff8) + 0x54670);
    uVar11 = 1L << ((ulong)param_4 & 0x3f);
    if (iVar8 == 0) {
      uVar11 = *puVar3 & (uVar11 ^ 0xffffffffffffffff);
    }
    else {
      uVar11 = *puVar3 | uVar11;
    }
    *puVar3 = uVar11;
    plVar1 = plVar12 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      param_2 = (long *)*param_2;
    }
    else {
      param_2 = (long *)*param_2;
    }
    if (param_2 != (long *)0x0) {
      plVar12 = param_2 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    uVar9 = FUN_02c6849c(param_2[0x13]);
    if (uVar9 != 0) {
      uVar11 = FUN_02c6cf3c(param_2[0x13]);
      if (((uVar11 & 1) == 0) && ((*(ushort *)(*(long *)(param_2[0x13] + 0x10) + 4) >> 2 & 1) == 0))
      {
        puVar4 = (ushort *)(param_1 + (ulong)uVar9 * 2 + 0x54760);
        uVar5 = *puVar4;
        if (uVar5 < 0x3c0) {
          *puVar4 = uVar5 + 1;
        }
      }
    }
    plVar12 = param_2 + 10;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x54e80);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x54e80);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x010e23e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x54ea0);
      return;
    }
  }
  return;
}


