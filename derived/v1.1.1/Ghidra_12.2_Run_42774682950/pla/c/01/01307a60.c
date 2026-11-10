/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01307a60; name: FUN_01307a60
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01307a60(char *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  
  if (*param_1 == '\0') {
    return false;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return true;
  }
  if (*(undefined1 **)(param_1 + 0x20) == &DAT_cbf29ce484222645) {
    return false;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  if (lVar9 == 0) {
    return false;
  }
  plVar18 = *(long **)(lVar9 + 0x228);
  if (plVar18 == (long *)0x0) {
    return false;
  }
  lVar9 = plVar18[0xb];
  if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar9 + 0x10) == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
    *(undefined8 *)(lVar9 + 0x10) = uVar8;
  }
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(int *)(param_1 + 0x18) == 2) {
    uVar13 = ((long *)plVar18[0x3b])[1];
    if (uVar13 != 0) {
      uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar11 = *(ulong *)(param_1 + 0x20);
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = uVar11 / uVar13;
      }
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar16 = uVar13 - 1 & uVar11;
      }
      else {
        uVar16 = uVar11;
        if (uVar13 <= uVar11) {
          uVar16 = uVar11 - uVar4 * uVar13;
        }
      }
      lVar9 = *(long *)plVar18[0x3b];
      plVar14 = *(long **)(lVar9 + uVar16 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        uVar15 = uVar13 - 1;
        if (uVar10 < 2) {
          do {
            if (plVar14[1] == uVar11) {
              if (plVar14[2] == uVar11) goto LAB_01307bc4;
            }
            else if ((plVar14[1] & uVar15) != uVar16) goto LAB_01307e54;
            plVar14 = (long *)*plVar14;
            bVar6 = false;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar14[1];
            if (uVar17 == uVar11) {
              if (plVar14[2] == uVar11) goto LAB_01307bc4;
            }
            else {
              if (uVar13 <= uVar17) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar17 / uVar13;
                }
                uVar17 = uVar17 - uVar5 * uVar13;
              }
              if (uVar17 != uVar16) goto LAB_01307e54;
            }
            plVar14 = (long *)*plVar14;
            bVar6 = false;
          } while (plVar14 != (long *)0x0);
        }
        goto LAB_01307c28;
      }
    }
  }
  else if (*(int *)(param_1 + 0x18) == 1) {
    uVar13 = ((long *)plVar18[0x37])[1];
    if (uVar13 != 0) {
      uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar11 = *(ulong *)(param_1 + 0x20);
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = uVar11 / uVar13;
      }
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar16 = uVar13 - 1 & uVar11;
      }
      else {
        uVar16 = uVar11;
        if (uVar13 <= uVar11) {
          uVar16 = uVar11 - uVar4 * uVar13;
        }
      }
      lVar9 = *(long *)plVar18[0x37];
      plVar14 = *(long **)(lVar9 + uVar16 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        uVar15 = uVar13 - 1;
        if (uVar10 < 2) {
          do {
            if (plVar14[1] == uVar11) {
              if (plVar14[2] == uVar11) goto LAB_01307dd4;
            }
            else if ((plVar14[1] & uVar15) != uVar16) goto LAB_01307e54;
            plVar14 = (long *)*plVar14;
            bVar6 = false;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar14[1];
            if (uVar17 == uVar11) {
              if (plVar14[2] == uVar11) goto LAB_01307dd4;
            }
            else {
              if (uVar13 <= uVar17) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar17 / uVar13;
                }
                uVar17 = uVar17 - uVar5 * uVar13;
              }
              if (uVar17 != uVar16) goto LAB_01307e54;
            }
            plVar14 = (long *)*plVar14;
            bVar6 = false;
          } while (plVar14 != (long *)0x0);
        }
        goto LAB_01307c28;
      }
    }
  }
LAB_01307e54:
  bVar6 = false;
LAB_01307c28:
  lVar9 = plVar18[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  return bVar6;
LAB_01307dd4:
  if (uVar10 < 2) {
    uVar16 = uVar15 & uVar11;
    plVar14 = *(long **)(lVar9 + uVar16 * 8);
  }
  else {
    uVar16 = uVar11;
    if (uVar13 <= uVar11) {
      uVar16 = uVar11 - uVar4 * uVar13;
    }
    plVar14 = *(long **)(lVar9 + uVar16 * 8);
  }
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar10 < 2) {
      do {
        if (plVar14[1] == uVar11) {
          if (plVar14[2] == uVar11) goto LAB_01307e8c;
        }
        else if ((plVar14[1] & uVar15) != uVar16) goto LAB_01307e54;
        plVar14 = (long *)*plVar14;
        bVar6 = false;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar10 = plVar14[1];
        if (uVar10 == uVar11) {
          if (plVar14[2] == uVar11) goto LAB_01307e8c;
        }
        else {
          if (uVar13 <= uVar10) {
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar10 / uVar13;
            }
            uVar10 = uVar10 - uVar4 * uVar13;
          }
          if (uVar10 != uVar16) goto LAB_01307e54;
        }
        plVar14 = (long *)*plVar14;
        bVar6 = false;
      } while (plVar14 != (long *)0x0);
    }
    goto LAB_01307c28;
  }
  goto LAB_01307e54;
LAB_01307e8c:
  bVar6 = (char)plVar14[3] != '\0';
  goto LAB_01307c28;
LAB_01307bc4:
  if (uVar10 < 2) {
    uVar16 = uVar15 & uVar11;
    plVar14 = *(long **)(lVar9 + uVar16 * 8);
  }
  else {
    uVar16 = uVar11;
    if (uVar13 <= uVar11) {
      uVar16 = uVar11 - uVar4 * uVar13;
    }
    plVar14 = *(long **)(lVar9 + uVar16 * 8);
  }
  if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
    if (uVar10 < 2) {
      do {
        if (plVar14[1] == uVar11) {
          if (plVar14[2] == uVar11) goto LAB_01307c0c;
        }
        else if ((plVar14[1] & uVar15) != uVar16) goto LAB_01307d74;
        plVar14 = (long *)*plVar14;
        uVar12 = 0;
      } while (plVar14 != (long *)0x0);
      goto LAB_01307c10;
    }
    do {
      uVar10 = plVar14[1];
      if (uVar10 == uVar11) {
        if (plVar14[2] == uVar11) goto LAB_01307c0c;
      }
      else {
        if (uVar13 <= uVar10) {
          uVar4 = 0;
          if (uVar13 != 0) {
            uVar4 = uVar10 / uVar13;
          }
          uVar10 = uVar10 - uVar4 * uVar13;
        }
        if (uVar10 != uVar16) break;
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
LAB_01307d74:
  uVar12 = 0;
LAB_01307c10:
  bVar6 = *(uint *)(param_1 + 0x28) <= uVar12 && -1 < (int)*(uint *)(param_1 + 0x28);
  goto LAB_01307c28;
LAB_01307c0c:
  uVar12 = *(uint *)(plVar14 + 3);
  goto LAB_01307c10;
}


