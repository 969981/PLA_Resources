/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259830c; name: FUN_0259830c
 */


undefined8 FUN_0259830c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar15 = *(long **)(lVar8 + 0x228);
  if (plVar15 != (long *)0x0) {
    lVar8 = plVar15[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar10 = ((long *)plVar15[0x37])[1];
  if (uVar10 != 0) {
    uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar4 = 0;
    if (uVar10 != 0) {
      uVar4 = 0x226c40e88a0e7419 / uVar10;
    }
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar13 = uVar10 - 1 & 0x226c40e88a0e7419;
    }
    else {
      uVar13 = 0x226c40e88a0e7419;
      if (uVar10 < 0x226c40e88a0e741a) {
        uVar13 = 0x226c40e88a0e7419 - uVar4 * uVar10;
      }
    }
    lVar8 = *(long *)plVar15[0x37];
    plVar11 = *(long **)(lVar8 + uVar13 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      uVar12 = uVar10 - 1;
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == 0x226c40e88a0e7419) {
            if (plVar11[2] == 0x226c40e88a0e7419) goto LAB_02598480;
          }
          else if ((plVar11[1] & uVar12) != uVar13) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar11[1];
          if (uVar14 == 0x226c40e88a0e7419) {
            if (plVar11[2] == 0x226c40e88a0e7419) goto LAB_02598480;
          }
          else {
            if (uVar10 <= uVar14) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar14 / uVar10;
              }
              uVar14 = uVar14 - uVar5 * uVar10;
            }
            if (uVar14 != uVar13) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  goto LAB_02598534;
LAB_0259852c:
  if ((char)plVar11[3] == '\0') goto LAB_02598534;
  uVar7 = 1;
  if (plVar15 == (long *)0x0) {
    return 1;
  }
  goto LAB_0259853c;
LAB_02598480:
  if (uVar9 < 2) {
    uVar13 = uVar12 & 0x226c40e88a0e7419;
    plVar11 = *(long **)(lVar8 + uVar13 * 8);
  }
  else {
    uVar13 = 0x226c40e88a0e7419;
    if (uVar10 < 0x226c40e88a0e741a) {
      uVar13 = 0x226c40e88a0e7419 - uVar4 * uVar10;
    }
    plVar11 = *(long **)(lVar8 + uVar13 * 8);
  }
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if (uVar9 < 2) {
      do {
        if (plVar11[1] == 0x226c40e88a0e7419) {
          if (plVar11[2] == 0x226c40e88a0e7419) goto LAB_0259852c;
        }
        else if ((plVar11[1] & uVar12) != uVar13) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        uVar9 = plVar11[1];
        if (uVar9 == 0x226c40e88a0e7419) {
          if (plVar11[2] == 0x226c40e88a0e7419) goto LAB_0259852c;
        }
        else {
          if (uVar10 <= uVar9) {
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar4 * uVar10;
          }
          if (uVar9 != uVar13) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_02598534:
  uVar7 = 0;
  if (plVar15 != (long *)0x0) {
LAB_0259853c:
    lVar8 = plVar15[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return uVar7;
}


