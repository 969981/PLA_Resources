/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01458ebc; name: FUN_01458ebc
 */


void FUN_01458ebc(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar17 = *(long **)(lVar10 + 0x228);
  if (plVar17 != (long *)0x0) {
    lVar10 = plVar17[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = FUN_01459510();
  if ((uVar9 & 1) != 0) {
    uVar9 = ((long *)plVar17[0x37])[1];
    if (uVar9 != 0) {
      uVar14 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar9 - 1 & 0xd6931c4bd6bd5654;
      }
      else if (uVar9 < 0xd6931c4bd6bd5655) {
        uVar15 = 0;
        if (uVar9 != 0) {
          uVar15 = 0xd6931c4bd6bd5654 / uVar9;
        }
        uVar15 = 0xd6931c4bd6bd5654 - uVar15 * uVar9;
      }
      else {
        uVar15 = 0xd6931c4bd6bd5654;
      }
      plVar13 = *(long **)(*(long *)plVar17[0x37] + uVar15 * 8);
      bVar12 = 0;
      if (plVar13 != (long *)0x0) {
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_0145904c;
        if (uVar14 < 2) {
          do {
            if (plVar13[1] == 0xd6931c4bd6bd5654) {
              if (plVar13[2] == -0x296ce3b42942a9ac) goto LAB_0145905c;
            }
            else if ((plVar13[1] & uVar9 - 1) != uVar15) goto LAB_0145904c;
            plVar13 = (long *)*plVar13;
            bVar12 = 0;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar13[1];
            if (uVar14 == 0xd6931c4bd6bd5654) {
              if (plVar13[2] == -0x296ce3b42942a9ac) goto LAB_0145905c;
            }
            else {
              if (uVar9 <= uVar14) {
                uVar6 = 0;
                if (uVar9 != 0) {
                  uVar6 = uVar14 / uVar9;
                }
                uVar14 = uVar14 - uVar6 * uVar9;
              }
              if (uVar14 != uVar15) goto LAB_0145904c;
            }
            plVar13 = (long *)*plVar13;
            bVar12 = 0;
          } while (plVar13 != (long *)0x0);
        }
      }
LAB_01459060:
      plVar13 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x01459054;
    }
  }
LAB_0145904c:
  bVar12 = 0;
  plVar13 = *(long **)(param_1 + 0x2c8);
joined_r0x01459054:
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)plVar13[0x29];
  lVar10 = plVar13[0x2a];
  if ((lVar10 != 0) && (*plVar11 != 0x9af7a5a4837f757)) {
    plVar16 = plVar11 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar11 = plVar16;
        break;
      }
      plVar3 = plVar11 + 6;
      plVar1 = plVar11 + 6;
      plVar11 = plVar3;
    } while (*plVar1 != 0x9af7a5a4837f757);
  }
  *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) & 0xfe | bVar12;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar10 = plVar17[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01459170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar17 + 0x20))(plVar17);
      return;
    }
  }
  return;
LAB_0145905c:
  bVar12 = *(byte *)(plVar13 + 3);
  goto LAB_01459060;
}


