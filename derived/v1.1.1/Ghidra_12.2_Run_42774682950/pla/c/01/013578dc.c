/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013578dc; name: FUN_013578dc
 */


void FUN_013578dc(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *param_1;
  if (lVar10 == 0) {
    return;
  }
  lVar9 = param_1[1];
  if (lVar9 == lVar10) {
    lVar9 = lVar10;
  }
  else {
    pcVar7 = *(code **)(lVar9 + -0x78);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined8 *)(lVar9 + -0x68) = 0;
      *(undefined8 *)(lVar9 + -0x80) = 0;
      *(undefined8 *)(lVar9 + -0x78) = 0;
      (*pcVar7)(lVar9 + -0x60);
    }
    plVar5 = *(long **)(lVar9 + -0x88);
    if (plVar5 != (long *)0x0) {
      lVar8 = plVar5[0xb];
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
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    if (lVar9 + -0x90 != lVar10) {
      pcVar7 = *(code **)(lVar9 + -0x108);
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar9 + -0x100) = 0;
        *(undefined8 *)(lVar9 + -0xf8) = 0;
        *(undefined8 *)(lVar9 + -0x108) = 0;
        *(undefined8 *)(lVar9 + -0x110) = 0;
        (*pcVar7)(lVar9 + -0xf0);
      }
      plVar5 = *(long **)(lVar9 + -0x118);
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[0xb];
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
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      if (lVar9 + -0x120 != lVar10) {
        pcVar7 = *(code **)(lVar9 + -0x198);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar9 + -0x188) = 0;
          *(undefined8 *)(lVar9 + -400) = 0;
          *(undefined8 *)(lVar9 + -0x198) = 0;
          *(undefined8 *)(lVar9 + -0x1a0) = 0;
          (*pcVar7)(lVar9 + -0x180);
        }
        plVar5 = *(long **)(lVar9 + -0x1a8);
        if (plVar5 != (long *)0x0) {
          lVar8 = plVar5[0xb];
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
            (**(code **)(*plVar5 + 0x20))();
          }
        }
        if (lVar9 + -0x1b0 != lVar10) {
          pcVar7 = *(code **)(lVar9 + -0x228);
          if (pcVar7 != (code *)0x0) {
            *(undefined8 *)(lVar9 + -0x218) = 0;
            *(undefined8 *)(lVar9 + -0x220) = 0;
            *(undefined8 *)(lVar9 + -0x228) = 0;
            *(undefined8 *)(lVar9 + -0x230) = 0;
            (*pcVar7)(lVar9 + -0x210);
          }
          plVar5 = *(long **)(lVar9 + -0x238);
          if (plVar5 != (long *)0x0) {
            lVar8 = plVar5[0xb];
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
              (**(code **)(*plVar5 + 0x20))();
            }
          }
          if (lVar9 + -0x240 != lVar10) {
            pcVar7 = *(code **)(lVar9 + -0x2b8);
            if (pcVar7 != (code *)0x0) {
              *(undefined8 *)(lVar9 + -0x2a8) = 0;
              *(undefined8 *)(lVar9 + -0x2b0) = 0;
              *(undefined8 *)(lVar9 + -0x2b8) = 0;
              *(undefined8 *)(lVar9 + -0x2c0) = 0;
              (*pcVar7)(lVar9 + -0x2a0);
            }
            plVar5 = *(long **)(lVar9 + -0x2c8);
            lVar9 = lVar9 + -0x2d0;
            if (plVar5 != (long *)0x0) {
              lVar8 = plVar5[0xb];
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
                (**(code **)(*plVar5 + 0x20))();
              }
            }
            while (lVar9 != lVar10) {
              pcVar7 = *(code **)(lVar9 + -0x78);
              if (pcVar7 != (code *)0x0) {
                *(undefined8 *)(lVar9 + -0x70) = 0;
                *(undefined8 *)(lVar9 + -0x68) = 0;
                *(undefined8 *)(lVar9 + -0x80) = 0;
                *(undefined8 *)(lVar9 + -0x78) = 0;
                (*pcVar7)(lVar9 + -0x60);
              }
              plVar5 = *(long **)(lVar9 + -0x88);
              lVar9 = lVar9 + -0x90;
              if (plVar5 != (long *)0x0) {
                lVar8 = plVar5[0xb];
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
                  (**(code **)(*plVar5 + 0x20))();
                }
              }
            }
          }
        }
      }
    }
    lVar9 = *param_1;
  }
  param_1[1] = lVar10;
  lVar10 = param_1[2];
  plVar5 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar5,lVar9,lVar10 - lVar9,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01357a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar10 - lVar9,0x10);
  return;
}


