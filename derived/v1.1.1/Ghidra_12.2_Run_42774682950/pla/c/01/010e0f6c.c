/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e0f6c; name: FUN_010e0f6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_010e0f6c(long param_1,long *param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  ulong *puVar2;
  ushort *puVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  
  plVar13 = (long *)*param_3;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if ((param_4 < 0x20) && (param_5 < 0x1e)) {
    (**(code **)(*plVar13 + 0x28))
              (plVar13,param_1 + (ulong)param_4 * 0x2a30 + (ulong)param_5 * 0x168 + 0x68);
  }
  if (plVar13 == (long *)0x0) {
    iVar8 = FUN_02c6849c(_DAT_00000098);
  }
  else {
    plVar1 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    iVar8 = FUN_02c6849c(plVar13[0x13]);
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (iVar8 == 0) {
    lVar14 = *(long *)(*param_2 + 0x98);
    lVar11 = nn::os::GetCurrentThread();
    plVar13 = (long *)(lVar14 + 0x30);
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x24));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_010e10cc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_010e10cc:
    FUN_02c65ef8(lVar14,param_1 + (ulong)param_4 * 0x2a30 + (ulong)param_5 * 0x168 + 0x68,0);
    *(undefined8 *)(lVar14 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x24));
    plVar13 = (long *)*param_2;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    iVar8 = FUN_02c6849c(plVar13[0x13]);
    param_5 = param_5 + param_4 * 0x1e;
    if (0x3bf < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_010e4430();
    }
    puVar2 = (ulong *)(param_1 + ((ulong)(param_5 >> 3) & 0x1ffffff8) + 0x54670);
    uVar12 = 1L << ((ulong)param_5 & 0x3f);
    if (iVar8 == 0) {
      uVar12 = *puVar2 & (uVar12 ^ 0xffffffffffffffff);
    }
    else {
      uVar12 = *puVar2 | uVar12;
    }
    *puVar2 = uVar12;
    plVar1 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      param_2 = (long *)*param_2;
    }
    else {
      param_2 = (long *)*param_2;
    }
    if (param_2 != (long *)0x0) {
      plVar13 = param_2 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar9 = FUN_02c6849c(param_2[0x13]);
    if (uVar9 != 0) {
      uVar12 = FUN_02c6cf3c(param_2[0x13]);
      if (((uVar12 & 1) == 0) && ((*(ushort *)(*(long *)(param_2[0x13] + 0x10) + 4) >> 2 & 1) == 0))
      {
        puVar3 = (ushort *)(param_1 + (ulong)uVar9 * 2 + 0x54760);
        uVar4 = *puVar3;
        if (uVar4 < 0x3c0) {
          *puVar3 = uVar4 + 1;
        }
      }
    }
    plVar13 = param_2 + 10;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    if (*(code **)(param_1 + 0x54e80) != (code *)0x0) {
      (**(code **)(param_1 + 0x54e80))(param_1 + 0x54ea0);
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}


