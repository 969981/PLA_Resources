/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185247c; name: FUN_0185247c
 */


void FUN_0185247c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  long *local_68;
  
  FUN_01852364();
  FUN_018513ac(param_1);
  lVar12 = *(long *)(param_1 + 0x170);
  lVar14 = *(long *)(lVar12 + 8);
  if (lVar14 == lVar12) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    do {
      FUN_009c69bc(&local_68,*(undefined8 *)(lVar14 + 0x10));
      if (local_68 != (long *)0x0) {
        lVar8 = local_68[0xb];
        if ((int)local_68[0x62] == 0) {
          iVar17 = iVar17 + 1;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      lVar14 = *(long *)(lVar14 + 8);
    } while (lVar14 != lVar12);
  }
  lVar14 = *(long *)(param_1 + 400);
  for (lVar12 = *(long *)(lVar14 + 8); lVar12 != lVar14; lVar12 = *(long *)(lVar12 + 8)) {
    FUN_009c69bc(&local_68,*(undefined8 *)(lVar12 + 0x10));
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if ((int)local_68[0x62] == 0) {
        iVar17 = iVar17 + 1;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x1b0);
  for (lVar12 = *(long *)(lVar14 + 8); lVar12 != lVar14; lVar12 = *(long *)(lVar12 + 8)) {
    FUN_009c69bc(&local_68,*(undefined8 *)(lVar12 + 0x10));
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if ((int)local_68[0x62] == 0) {
        iVar17 = iVar17 + 1;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x1d0);
  for (lVar12 = *(long *)(lVar14 + 8); lVar12 != lVar14; lVar12 = *(long *)(lVar12 + 8)) {
    FUN_009c69bc(&local_68,*(undefined8 *)(lVar12 + 0x10));
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if ((int)local_68[0x62] == 0) {
        iVar17 = iVar17 + 1;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x1f0);
  for (lVar12 = *(long *)(lVar14 + 8); lVar12 != lVar14; lVar12 = *(long *)(lVar12 + 8)) {
    FUN_009c69bc(&local_68,*(undefined8 *)(lVar12 + 0x10));
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if ((int)local_68[0x62] == 0) {
        iVar17 = iVar17 + 1;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x210);
  for (lVar12 = *(long *)(lVar14 + 8); lVar12 != lVar14; lVar12 = *(long *)(lVar12 + 8)) {
    FUN_009c69bc(&local_68,*(undefined8 *)(lVar12 + 0x10));
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if ((int)local_68[0x62] == 0) {
        iVar17 = iVar17 + 1;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x230);
  for (lVar12 = *(long *)(lVar14 + 8); lVar12 != lVar14; lVar12 = *(long *)(lVar12 + 8)) {
    FUN_009c69bc(&local_68,*(undefined8 *)(lVar12 + 0x10));
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if ((int)local_68[0x62] == 0) {
        iVar17 = iVar17 + 1;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x250);
  for (lVar12 = *(long *)(lVar14 + 8); lVar12 != lVar14; lVar12 = *(long *)(lVar12 + 8)) {
    FUN_009c69bc(&local_68,*(undefined8 *)(lVar12 + 0x10));
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if ((int)local_68[0x62] == 0) {
        iVar17 = iVar17 + 1;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  lVar12 = 0;
  lVar14 = tpidr_el0;
  iVar17 = 5 - iVar17;
  do {
    lVar8 = param_1 + lVar12 * 0x20;
    plVar13 = (long *)(lVar8 + 0x70);
    plVar11 = (long *)*plVar13;
    if ((0 < iVar17) && (plVar11 != (long *)plVar11[1])) {
      plVar15 = (long *)plVar11[1];
      do {
        plVar16 = *(long **)(lVar8 + 0x170);
        plVar6 = plVar16 + 3;
        plVar5 = (long *)(**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x18,8);
        if (plVar5 == (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0xb8))();
        }
        *plVar5 = 0;
        FUN_01852d70(plVar6,plVar5 + 2,plVar15 + 2);
        plVar5[1] = (long)plVar16;
        lVar9 = *plVar16;
        *plVar5 = lVar9;
        *(long **)(lVar9 + 8) = plVar5;
        *plVar16 = (long)plVar5;
        plVar16[2] = plVar16[2] + 1;
        *(undefined1 *)(plVar15[2] + 0x295) = 0;
        plVar5 = (long *)plVar15[1];
        lVar9 = *plVar13;
        *(long **)(*plVar15 + 8) = plVar5;
        *(long *)plVar15[1] = *plVar15;
        *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
        plVar6 = (long *)plVar15[2];
        if (plVar6 != (long *)0x0) {
          lVar10 = plVar6[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        plVar6 = *(long **)(lVar9 + 0x18);
        uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar7 & 1) == 0) {
LAB_01852988:
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar15,0x18,8);
        }
        else {
          if (*(char *)(lVar14 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar14 + 0x38d488) = 1;
            *(undefined8 *)(lVar14 + 0x38d478) = 0;
            *(undefined8 *)(lVar14 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_01852988;
          FUN_02bcc824(plVar6,plVar15,0x18,8);
        }
        iVar17 = iVar17 + -1;
      } while ((0 < iVar17) && (plVar15 = plVar5, plVar11 != plVar5));
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 8) {
      return;
    }
  } while( true );
}


