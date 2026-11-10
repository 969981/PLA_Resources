/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283f6cc; name: FUN_0283f6cc
 */


void FUN_0283f6cc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined *local_80;
  undefined1 auStack_78 [16];
  long local_68;
  long local_60;
  long local_58;
  long *local_48;
  
  puVar7 = PTR_DAT_04379678;
  if (*param_2 != 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    puVar9 = PTR_DAT_04379688;
    puVar8 = PTR_DAT_04379680;
    lVar12 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar12;
    plVar14 = *(long **)(lVar12 + 0xd0);
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_80 = PTR_DAT_043879a8 + 0x10;
    FUN_00d31758(auStack_78,plVar14 + 0x14);
    local_68 = plVar14[0x16];
    if (local_68 != 0) {
      piVar2 = (int *)(local_68 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_60 = plVar14[0x17];
    if (local_60 != 0) {
      piVar2 = (int *)(local_60 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_58 = plVar14[0x18];
    if (local_58 != 0) {
      lVar12 = *(long *)(local_58 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_80 = PTR_DAT_0437b4c0 + 0x10;
    plVar15 = plVar14 + 10;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      bVar4 = *puVar7;
    }
    else {
      bVar4 = *puVar7;
    }
    if (((bVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar12 = *(long *)puVar8;
    *(long *)puVar9 = lVar12;
    plVar14 = *(long **)(lVar12 + 0xd0);
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar15 = (long *)plVar14[0x1f];
    if (plVar15 != (long *)0x0) {
      plVar13 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar13 = plVar14 + 10;
    do {
      iVar10 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    local_48 = (long *)*param_2;
    if (local_48 != (long *)0x0) {
      plVar14 = local_48 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_88 = plVar15;
    if (plVar15 == (long *)0x0) {
      FUN_0284016c(&local_48,&local_80,&local_88);
    }
    else {
      plVar14 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_0284016c(&local_48,&local_80,&local_88);
      if (plVar15 != (long *)0x0) {
        plVar14 = plVar15 + 10;
        do {
          iVar10 = (int)*plVar14 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (local_48 != (long *)0x0) {
      plVar14 = local_48 + 10;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    plVar13 = (long *)*param_2;
    plVar14 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_90 = plVar13;
    FUN_028403b8(param_1,&local_90,&local_80,*(undefined1 *)(*param_2 + 0x1f5),
                 *(byte *)(*param_2 + 0x1f6) + 2);
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    plVar14 = (long *)*param_2;
    local_98 = plVar14;
    if (plVar14 == (long *)0x0) {
      FUN_02840934(param_1,&local_98,&local_80);
    }
    else {
      plVar13 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_02840934(param_1,&local_98,&local_80);
      if (plVar14 != (long *)0x0) {
        plVar13 = plVar14 + 10;
        do {
          iVar10 = (int)*plVar13 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *(int *)plVar13 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar14 = (long *)*param_2;
    local_a0 = plVar14;
    if (plVar14 == (long *)0x0) {
      FUN_02840ea4(&local_a0,&local_80);
    }
    else {
      plVar13 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_02840ea4(&local_a0,&local_80);
      if (plVar14 != (long *)0x0) {
        plVar13 = plVar14 + 10;
        do {
          iVar10 = (int)*plVar13 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *(int *)plVar13 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar14 = *(long **)(*param_2 + 0x148);
    lVar12 = *(long *)(*param_2 + 0x150);
    if ((lVar12 != 0) && (*plVar14 != 0x598d0e60e0a45d28)) {
      plVar13 = plVar14 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar14 = plVar13;
          break;
        }
        plVar3 = plVar14 + 6;
        plVar1 = plVar14 + 6;
        plVar14 = plVar3;
      } while (*plVar1 != 0x598d0e60e0a45d28);
    }
    *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe;
    if (plVar15 != (long *)0x0) {
      plVar14 = plVar15 + 10;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    FUN_00d44898(&local_80);
  }
  return;
}


