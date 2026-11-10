/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e3c58; name: FUN_018e3c58
 */


undefined4 FUN_018e3c58(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  if (*(uint *)(param_1 + 0x90) < 5) {
    plVar14 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x90) * 8 + 0x68);
    uVar10 = plVar14[0x11];
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = (ulong)((uint)uVar10 - 1) & 10;
      }
      else {
        uVar12 = 10;
        if (uVar10 < 0xb) {
          uVar2 = (uint)uVar10 & 0xff;
          uVar6 = 0;
          if ((uVar10 & 0xff) != 0) {
            uVar6 = 10 / uVar2;
          }
          uVar12 = (ulong)(10 - uVar6 * uVar2);
        }
      }
      plVar13 = *(long **)(plVar14[0x10] + uVar12 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (1 < uVar11) {
          do {
            uVar11 = plVar13[1];
            if (uVar11 == 10) {
              if ((int)plVar13[2] == 10) goto LAB_018e3d7c;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar7 = 0;
                if (uVar10 != 0) {
                  uVar7 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar7 * uVar10;
              }
              if (uVar11 != uVar12) {
                return 0;
              }
            }
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          if (plVar13[1] == 10) {
            if ((int)plVar13[2] == 10) goto LAB_018e3d7c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) {
            return 0;
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
    return 0;
  }
LAB_018e3f60:
  FUN_018e3f80();
LAB_018e3f64:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_018e3d7c:
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_018e3f64;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar10 = (**(code **)(*plVar14 + 0x68))(plVar14,10);
  if ((uVar10 & 1) != 0) {
    uVar9 = 1;
joined_r0x018e3f00:
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    return uVar9;
  }
  uVar10 = plVar14[0x11];
  if ((uVar10 & uVar10 - 1) == 0) {
    plVar13 = *(long **)(plVar14[0x10] + ((ulong)((uint)uVar10 - 1) & 10) * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != 10);
    } while (*(int *)(plVar13 + 2) != 10);
  }
  else {
    uVar11 = 10;
    if (uVar10 < 0xb) {
      uVar2 = (uint)uVar10 & 0xff;
      uVar6 = 0;
      if ((uVar10 & 0xff) != 0) {
        uVar6 = 10 / uVar2;
      }
      uVar11 = (ulong)(10 - uVar6 * uVar2);
    }
    plVar13 = *(long **)(plVar14[0x10] + uVar11 * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != 10);
    } while (*(int *)(plVar13 + 2) != 10);
  }
  if (*(uint *)((long)plVar13 + 0x14) < 5) {
    plVar13 = *(long **)(param_1 + (ulong)*(uint *)((long)plVar13 + 0x14) * 8 + 0x68);
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_018e3f64;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar10 = (**(code **)(*plVar13 + 0x60))(plVar13,10);
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        uVar10 = uVar10 & 0xffffffff;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    uVar9 = 2;
    if ((uVar10 & 1) == 0) {
      uVar9 = 3;
    }
    goto joined_r0x018e3f00;
  }
  goto LAB_018e3f60;
}


