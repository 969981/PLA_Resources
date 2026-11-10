/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bf528; name: FUN_008bf528
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008bf528(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long *local_148;
  long local_140;
  int local_50;
  undefined8 local_48;
  
  uVar3 = *(uint *)(param_1 + 0x80);
  if (uVar3 == 0) {
    local_48 = 0x2010001;
    FUN_009346d8(&local_148,*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xd0),&local_48);
    if (local_50 != 1) {
      uVar3 = *(uint *)(param_1 + 0x80);
      goto joined_r0x008bf6c4;
    }
    *(undefined1 *)(param_1 + 0x7d) = 0;
    *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(*(long *)(local_140 + 0x70) + 0x7d);
LAB_008bf81c:
    uVar8 = 2;
  }
  else {
joined_r0x008bf6c4:
    if (3 < uVar3) {
      return 0;
    }
    switch(uVar3) {
    case 0:
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 == (long *)0x0) {
        FUN_00962898(0);
      }
      else {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00962898(plVar13);
        do {
          iVar7 = (int)*plVar14 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar14 = (long *)plVar13[0x26];
      if (plVar14 == (long *)0x0) {
        FUN_00931034(&local_148,_DAT_00000058);
        lVar11 = local_148[0xd3];
        plVar14 = local_148;
        if (*(char *)(lVar11 + 0x5ab) != '\0') {
          FUN_00d7331c(lVar11,1);
          *(undefined1 *)(lVar11 + 0x5ab) = 0;
          plVar14 = local_148;
        }
        if (plVar14 != (long *)0x0) {
          lVar11 = plVar14[0xb];
          piVar2 = (int *)(lVar11 + 0xc);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            pcVar12 = *(code **)(*plVar14 + 0x20);
            goto LAB_008bfae0;
          }
        }
      }
      else {
        plVar1 = plVar14 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00931034(&local_148,plVar14[0xb]);
        lVar11 = local_148[0xd3];
        if (*(char *)(lVar11 + 0x5ab) != '\0') {
          FUN_00d7331c(lVar11,1);
          *(undefined1 *)(lVar11 + 0x5ab) = 0;
        }
        if (local_148 != (long *)0x0) {
          lVar11 = local_148[0xb];
          piVar2 = (int *)(lVar11 + 0xc);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_148 + 0x20))();
          }
        }
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          pcVar12 = *(code **)(*plVar14 + 0x10);
LAB_008bfae0:
          (*pcVar12)(plVar14);
        }
      }
      plVar14 = plVar13 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      uVar10 = 1;
      break;
    case 1:
      uVar9 = FUN_009a72e8(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28));
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      uVar9 = FUN_009a70cc(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28));
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      uVar9 = FUN_009a6eb0(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28));
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      uVar9 = FUN_009a6a14(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28));
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar14 = (long *)plVar13[0x27];
      if (plVar14 == (long *)0x0) {
        FUN_009748d4(0,*(undefined1 *)(param_1 + 0x7b));
      }
      else {
        plVar1 = plVar14 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_009748d4(plVar14,*(undefined1 *)(param_1 + 0x7b));
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      plVar14 = plVar13 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      uVar10 = 2;
      break;
    case 2:
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar14 = (long *)plVar13[0x27];
      if (plVar14 == (long *)0x0) {
        if (((*PTR_DAT_04379690 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379690);
        }
        lVar11 = *(long *)PTR_DAT_04379698;
        *(long *)PTR_DAT_043796a0 = lVar11;
        lVar11 = *(long *)(*(long *)(lVar11 + 0x50) + 0xd0);
        if (((lVar11 == 0) || (*(long *)(lVar11 + 0x68) == 0)) || (*(char *)(lVar11 + 0x78) == '\0')
           ) {
          bVar6 = true;
        }
        else {
          bVar6 = *(char *)(*(long *)(lVar11 + 0x68) + 0x7e0) == '\0';
        }
      }
      else {
        plVar1 = plVar14 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((*PTR_DAT_04379690 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379690);
        }
        lVar11 = *(long *)PTR_DAT_04379698;
        *(long *)PTR_DAT_043796a0 = lVar11;
        lVar11 = *(long *)(*(long *)(lVar11 + 0x50) + 0xd0);
        if (lVar11 == 0) {
          bVar6 = true;
        }
        else if (*(long *)(lVar11 + 0x68) == 0) {
          bVar6 = true;
        }
        else if (*(char *)(lVar11 + 0x78) == '\0') {
          bVar6 = true;
        }
        else {
          bVar6 = *(char *)(*(long *)(lVar11 + 0x68) + 0x7e0) == '\0';
        }
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      plVar14 = plVar13 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      if (!bVar6) {
        return 0;
      }
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar14 = (long *)plVar13[0x27];
      if (plVar14 == (long *)0x0) {
        *(undefined1 *)(param_1 + 0x7d) = DAT_00000069;
      }
      else {
        plVar1 = plVar14 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((long)plVar14 + 0x69);
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      plVar14 = plVar13 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar14 = (long *)plVar13[0x27];
      if (plVar14 == (long *)0x0) {
        *(undefined1 *)(param_1 + 0x7c) = DAT_00000068;
      }
      else {
        plVar1 = plVar14 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(char *)(param_1 + 0x7c) = (char)plVar14[0xd];
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      plVar14 = plVar13 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      uVar10 = 3;
      break;
    case 3:
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 == (long *)0x0) {
        FUN_009627dc(0);
      }
      else {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_009627dc(plVar13);
        do {
          iVar7 = (int)*plVar14 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      plVar13 = *(long **)(**(long **)(param_1 + 0x70) + 0x30);
      if (plVar13 != (long *)0x0) {
        plVar14 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar14 = (long *)plVar13[0x26];
      if (plVar14 == (long *)0x0) {
        FUN_00971980(0,0);
      }
      else {
        plVar1 = plVar14 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00971980(plVar14,0);
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      plVar14 = plVar13 + 10;
      do {
        lVar11 = *plVar14;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = (int)lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      goto LAB_008bf81c;
    }
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0x80) = uVar10;
  }
  return uVar8;
}


