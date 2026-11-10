/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025bd404; name: FUN_025bd404
 */


void FUN_025bd404(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *local_18;
  
  *(undefined1 *)(param_2 + 0x121) = 0;
  FUN_016c24d0(&local_18,param_1 + 0x240);
  if (local_18 == (long *)0x0) {
    return;
  }
  uVar6 = 0;
  if (*(ulong **)(param_2 + 0x18) != (ulong *)0x0) {
    uVar6 = **(ulong **)(param_2 + 0x18);
  }
  uVar9 = local_18[0x53];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar6 / uVar9;
        }
        uVar11 = uVar6 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(local_18[0x52] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd534;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd534;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  puVar7 = *(ulong **)(param_2 + 0x60);
  uVar6 = 0;
  if (puVar7 != (ulong *)0x0) goto LAB_025bd448;
LAB_025bd44c:
  uVar9 = local_18[0x53];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar6 / uVar9;
        }
        uVar11 = uVar6 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(local_18[0x52] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd5e4;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd5e4;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  puVar7 = *(ulong **)(param_2 + 0xa8);
  uVar6 = 0;
  if (puVar7 != (ulong *)0x0) {
LAB_025bd45c:
    uVar6 = *puVar7;
  }
LAB_025bd460:
  uVar9 = local_18[0x53];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar6 / uVar9;
        }
        uVar11 = uVar6 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(local_18[0x52] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd694;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd694;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  puVar7 = *(ulong **)(param_2 + 0xf0);
  uVar6 = 0;
  if (puVar7 != (ulong *)0x0) {
LAB_025bd470:
    uVar6 = *puVar7;
  }
LAB_025bd474:
  uVar9 = local_18[0x53];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar6 / uVar9;
        }
        uVar11 = uVar6 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(local_18[0x52] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd744;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_025bd744;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
LAB_025bd758:
      if (local_18 == (long *)0x0) {
        return;
      }
    }
  }
  lVar8 = local_18[0xb];
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
    (**(code **)(*local_18 + 0x20))();
  }
  return;
LAB_025bd534:
  *(uint *)(plVar12 + 3) = *(uint *)(plVar12 + 3) | 0x20;
  FUN_01839500();
  puVar7 = *(ulong **)(param_2 + 0x60);
  if (puVar7 == (ulong *)0x0) {
    uVar6 = 0;
  }
  else {
LAB_025bd448:
    uVar6 = *puVar7;
  }
  goto LAB_025bd44c;
LAB_025bd5e4:
  *(uint *)(plVar12 + 3) = *(uint *)(plVar12 + 3) | 0x20;
  FUN_01839500();
  puVar7 = *(ulong **)(param_2 + 0xa8);
  if (puVar7 != (ulong *)0x0) goto LAB_025bd45c;
  uVar6 = 0;
  goto LAB_025bd460;
LAB_025bd694:
  *(uint *)(plVar12 + 3) = *(uint *)(plVar12 + 3) | 0x20;
  FUN_01839500();
  puVar7 = *(ulong **)(param_2 + 0xf0);
  if (puVar7 != (ulong *)0x0) goto LAB_025bd470;
  uVar6 = 0;
  goto LAB_025bd474;
LAB_025bd744:
  *(uint *)(plVar12 + 3) = *(uint *)(plVar12 + 3) | 0x20;
  FUN_01839500();
  goto LAB_025bd758;
}


