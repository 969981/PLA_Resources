/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028980a8; name: FUN_028980a8
 */


void FUN_028980a8(long param_1,undefined8 *param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 local_68 [2];
  
  plVar4 = *(long **)(param_1 + 0xa0);
  iVar7 = (int)((long)*(long **)(param_1 + 0xa8) - (long)plVar4 >> 3) * -0x33333333;
  plVar6 = *(long **)(param_1 + 0xa8);
  if (0 < iVar7) {
    lVar10 = (long)iVar7;
    plVar6 = (long *)(param_3 + 0x2c);
    do {
      lVar10 = lVar10 + -1;
      local_68[0] = (undefined4)plVar4[lVar10 * 5 + 4];
      FUN_031c8bd8(*param_2,local_68,1);
      lVar8 = *(long *)(param_1 + 0xa0) + lVar10 * 0x28;
      plVar4 = *(long **)(lVar8 + 0x18);
      *(undefined8 *)(lVar8 + 0x18) = 0;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar5 = plVar4 + 2;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      lVar8 = *(long *)(param_1 + 0xa0) + lVar10 * 0x28;
      plVar4 = *(long **)(lVar8 + 8);
      *(undefined8 *)(lVar8 + 8) = 0;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar5 = plVar4 + 2;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      lVar8 = *(long *)(param_1 + 0xa0) + lVar10 * 0x28;
      plVar4 = *(long **)(lVar8 + 0x10);
      *(undefined8 *)(lVar8 + 0x10) = 0;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar5 = plVar4 + 2;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      plVar4 = *(long **)(*(long *)(param_1 + 0xa0) + lVar10 * 0x28);
      *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar10 * 0x28) = 0;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar5 = plVar4 + 2;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      plVar4 = *(long **)(param_1 + 0xa0);
      plVar5 = plVar4 + lVar10 * 5 + 4;
      if ((*param_3 <= (int)*plVar5) && ((int)*plVar5 <= param_3[1])) {
        lVar8 = nn::os::GetCurrentThread();
        do {
          if (*plVar6 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x29));
              while (*plVar6 == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_028982b0;
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_028982b0:
        if ((1L << ((long)(int)*plVar5 - (long)*param_3 & 0x3fU) & *(ulong *)(param_3 + 0x26)) != 0)
        {
          if (0x1f < *(ulong *)(param_3 + 0x24)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          param_3[*(ulong *)(param_3 + 0x24) + 4] = (int)*plVar5;
          *(long *)(param_3 + 0x24) = *(long *)(param_3 + 0x24) + 1;
          *(ulong *)(param_3 + 0x26) =
               *(ulong *)(param_3 + 0x26) &
               (1L << ((long)(int)*plVar5 - (long)*param_3 & 0x3fU) ^ 0xffffffffffffffffU);
          param_3[3] = param_3[3] + -1;
        }
        *plVar6 = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_3 + 0x29));
        plVar4 = *(long **)(param_1 + 0xa0);
      }
    } while (0 < lVar10);
    plVar6 = *(long **)(param_1 + 0xa8);
  }
  do {
    if (plVar6 == plVar4) {
      *(long **)(param_1 + 0xa8) = plVar4;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0x68) = 4;
      return;
    }
    plVar5 = (long *)plVar6[-2];
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar9 = plVar5 + 2;
      do {
        lVar10 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    plVar5 = (long *)plVar6[-3];
    plVar9 = plVar6 + -5;
    if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_02898380:
      plVar6 = (long *)plVar6[-4];
      if (plVar6 == (long *)0x0) goto LAB_028983d4;
LAB_02898388:
      if (plVar6[1] == 0) goto LAB_028983d4;
      plVar5 = plVar6 + 2;
      do {
        lVar10 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 != 0) goto LAB_028983d4;
      (**(code **)(*plVar6 + 0x18))();
      plVar5 = (long *)*plVar9;
    }
    else {
      plVar1 = plVar5 + 2;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 != 0) goto LAB_02898380;
      (**(code **)(*plVar5 + 0x18))();
      plVar6 = (long *)plVar6[-4];
      if (plVar6 != (long *)0x0) goto LAB_02898388;
LAB_028983d4:
      plVar5 = (long *)*plVar9;
    }
    plVar6 = plVar9;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar9 = plVar5 + 2;
      do {
        lVar10 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  } while( true );
}


