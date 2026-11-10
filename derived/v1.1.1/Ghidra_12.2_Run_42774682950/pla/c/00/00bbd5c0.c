/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbd5c0; name: FUN_00bbd5c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbd5c0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  plVar7 = _DAT_000000a0;
  for (puVar2 = *(undefined8 **)(param_1 + 0x68); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    plVar10 = (long *)*puVar2;
    if (plVar10 == (long *)0x0) {
      _DAT_000000a0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          lVar9 = *plVar7;
          goto LAB_00bbd730;
        }
      }
    }
    else {
      plVar8 = plVar10 + 10;
      _DAT_000000a0 = plVar7;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar7 = (long *)plVar10[0x14];
      plVar10[0x14] = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      do {
        iVar6 = (int)*plVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        lVar9 = *plVar10;
        plVar7 = plVar10;
LAB_00bbd730:
        (**(code **)(lVar9 + 0x10))(plVar7);
      }
    }
    plVar7 = _DAT_000000a0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  do {
    _DAT_000000a0 = plVar7;
    if (puVar2 == puVar3) {
      plVar7 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00bbd710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x10))();
          return;
        }
      }
      return;
    }
    plVar10 = (long *)*puVar2;
    if (plVar10 == (long *)0x0) {
      _DAT_000000a0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          lVar9 = *plVar7;
          goto LAB_00bbd71c;
        }
      }
    }
    else {
      plVar7 = plVar10 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar8 = (long *)plVar10[0x14];
      plVar10[0x14] = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        lVar9 = *plVar10;
        plVar7 = plVar10;
LAB_00bbd71c:
        (**(code **)(lVar9 + 0x10))(plVar7);
      }
    }
    puVar2 = puVar2 + 1;
    plVar7 = _DAT_000000a0;
  } while( true );
}


