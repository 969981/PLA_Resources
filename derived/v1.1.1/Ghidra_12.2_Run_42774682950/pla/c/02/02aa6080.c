/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa6080; name: FUN_02aa6080
 */


void FUN_02aa6080(long param_1,long *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  auVar13 = FUN_02aa5bb0();
  if (((auVar13._0_8_ & 0xff) == 0) || ((auVar13._8_8_ & 0xff) == 0)) {
    return;
  }
  lVar5 = (auVar13._0_8_ >> 0x20) * 0x38;
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x58) + lVar5 + 8);
  plVar10 = (long *)*puVar7;
  plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + lVar5) +
                   (auVar13._8_8_ >> 0x1d & 0x7fffffff8));
  plVar8 = plVar9 + 1;
  plVar4 = plVar9;
  if (plVar8 != plVar10) {
    do {
      plVar9 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 10;
        do {
          iVar3 = (int)*plVar11 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *(int *)plVar11 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      lVar5 = *plVar8;
      plVar11 = plVar8 + 1;
      *plVar8 = 0;
      plVar9 = plVar4 + 1;
      *plVar4 = lVar5;
      plVar4 = plVar9;
      plVar8 = plVar11;
    } while (plVar11 != plVar10);
    plVar8 = (long *)*puVar7;
    goto LAB_02aa6154;
  }
  do {
    plVar8 = plVar8 + -1;
    plVar4 = (long *)*plVar8;
    if (plVar4 != (long *)0x0) {
      plVar10 = plVar4 + 10;
      do {
        iVar3 = (int)*plVar10 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *(int *)plVar10 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
LAB_02aa6154:
  } while (plVar8 != plVar9);
  *puVar7 = plVar9;
  if (param_3 != -1) {
    if ((ulong)(long)param_3 <
        (ulong)((*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3) * 0x6db6db6db6db6db7))
    {
      lVar5 = DAT_043ef5a0 + 0x60;
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0xd8) + (long)param_3 * 0x38);
      plVar8 = (long *)*puVar7;
      puVar7 = puVar7 + 1;
      plVar9 = (long *)*puVar7;
      if (plVar8 == plVar9) {
LAB_02aa62a8:
        plVar4 = plVar8;
        if (plVar8 != plVar9) {
joined_r0x02aa62b8:
          plVar10 = plVar8;
          plVar11 = plVar4 + 1;
          if (plVar4 + 1 != plVar9) {
            do {
              plVar8 = *(long **)(*plVar11 + 0x58);
              if (plVar8 == (long *)0x0) {
                if (*param_2 == 0) goto LAB_02aa62c0;
              }
              else {
                plVar4 = plVar8 + 10;
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar2) {
                    *(int *)plVar4 = (int)*plVar4 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                plVar12 = (long *)*param_2;
                do {
                  iVar3 = (int)*plVar4 + -1;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar2) {
                    *(int *)plVar4 = iVar3;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar3 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
                if (plVar8 == plVar12) goto LAB_02aa62c0;
              }
              plVar8 = (long *)*plVar10;
              *plVar10 = 0;
              if (plVar8 != (long *)0x0) {
                plVar4 = plVar8 + 10;
                do {
                  iVar3 = (int)*plVar4 + -1;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar2) {
                    *(int *)plVar4 = iVar3;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar3 == 0) {
                  (**(code **)(*plVar8 + 0x10))();
                }
              }
              lVar6 = *plVar11;
              plVar4 = plVar11 + 1;
              *plVar11 = 0;
              plVar8 = plVar10 + 1;
              *plVar10 = lVar6;
              plVar10 = plVar8;
              plVar11 = plVar4;
              if (plVar4 == plVar9) break;
            } while( true );
          }
        }
      }
      else {
        do {
          plVar4 = *(long **)(*plVar8 + 0x58);
          if (plVar4 == (long *)0x0) {
            if (*param_2 == 0) goto LAB_02aa629c;
          }
          else {
            plVar10 = plVar4 + 10;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *(int *)plVar10 = (int)*plVar10 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            plVar11 = (long *)*param_2;
            do {
              iVar3 = (int)*plVar10 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *(int *)plVar10 = iVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
            if (plVar4 == plVar11) {
LAB_02aa629c:
              FUN_02b18190(*plVar8,lVar5);
              goto LAB_02aa62a8;
            }
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar9);
        plVar8 = plVar9;
      }
      plVar9 = (long *)*puVar7;
      if ((long)plVar9 - (long)plVar8 != 0) {
        plVar4 = (long *)((long)plVar8 + ((long)plVar9 - (long)plVar8));
        plVar10 = plVar8;
        if (plVar4 != plVar9) {
          do {
            plVar8 = (long *)*plVar10;
            *plVar10 = 0;
            if (plVar8 != (long *)0x0) {
              plVar11 = plVar8 + 10;
              do {
                iVar3 = (int)*plVar11 + -1;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar2) {
                  *(int *)plVar11 = iVar3;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (iVar3 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
            lVar5 = *plVar4;
            plVar11 = plVar4 + 1;
            *plVar4 = 0;
            plVar8 = plVar10 + 1;
            *plVar10 = lVar5;
            plVar4 = plVar11;
            plVar10 = plVar8;
          } while (plVar11 != plVar9);
          plVar9 = (long *)*puVar7;
        }
        while (plVar9 != plVar8) {
          plVar9 = plVar9 + -1;
          plVar4 = (long *)*plVar9;
          if (plVar4 != (long *)0x0) {
            plVar10 = plVar4 + 10;
            do {
              iVar3 = (int)*plVar10 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *(int *)plVar10 = iVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
        *puVar7 = plVar8;
      }
    }
  }
  return;
LAB_02aa62c0:
  FUN_02b18190(*plVar11,lVar5);
  plVar8 = plVar10;
  plVar4 = plVar11;
  goto joined_r0x02aa62b8;
}


