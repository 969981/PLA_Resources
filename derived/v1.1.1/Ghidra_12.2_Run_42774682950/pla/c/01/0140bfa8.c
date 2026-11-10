/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140bfa8; name: FUN_0140bfa8
 */


bool FUN_0140bfa8(undefined8 param_1,ulong *param_2)

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
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar17 = *(long **)(lVar9 + 0x228);
  if (plVar17 != (long *)0x0) {
    lVar9 = plVar17[0xb];
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
  }
  uVar12 = ((long *)plVar17[0x37])[1];
  if (uVar12 != 0) {
    uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar11 = *param_2;
    uVar4 = 0;
    if (uVar12 != 0) {
      uVar4 = uVar11 / uVar12;
    }
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar15 = uVar12 - 1 & uVar11;
    }
    else {
      uVar15 = uVar11;
      if (uVar12 <= uVar11) {
        uVar15 = uVar11 - uVar4 * uVar12;
      }
    }
    lVar9 = *(long *)plVar17[0x37];
    plVar13 = *(long **)(lVar9 + uVar15 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      uVar14 = uVar12 - 1;
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == uVar11) {
            if (plVar13[2] == uVar11) goto LAB_0140c11c;
          }
          else if ((plVar13[1] & uVar14) != uVar15) goto LAB_0140c188;
          plVar13 = (long *)*plVar13;
          bVar6 = false;
        } while (plVar13 != (long *)0x0);
        goto LAB_0140c1e0;
      }
      do {
        uVar16 = plVar13[1];
        if (uVar16 == uVar11) {
          if (plVar13[2] == uVar11) goto LAB_0140c11c;
        }
        else {
          if (uVar12 <= uVar16) {
            uVar5 = 0;
            if (uVar12 != 0) {
              uVar5 = uVar16 / uVar12;
            }
            uVar16 = uVar16 - uVar5 * uVar12;
          }
          if (uVar16 != uVar15) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_0140c188:
  bVar6 = false;
  if (plVar17 != (long *)0x0) {
LAB_0140c1e4:
    lVar9 = plVar17[0xb];
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
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return bVar6;
LAB_0140c11c:
  if (uVar10 < 2) {
    uVar15 = uVar14 & uVar11;
    plVar13 = *(long **)(lVar9 + uVar15 * 8);
  }
  else {
    uVar15 = uVar11;
    if (uVar12 <= uVar11) {
      uVar15 = uVar11 - uVar4 * uVar12;
    }
    plVar13 = *(long **)(lVar9 + uVar15 * 8);
  }
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    if (uVar10 < 2) {
      do {
        if (plVar13[1] == uVar11) {
          if (plVar13[2] == uVar11) goto LAB_0140c1d4;
        }
        else if ((plVar13[1] & uVar14) != uVar15) goto LAB_0140c188;
        plVar13 = (long *)*plVar13;
        bVar6 = false;
      } while (plVar13 != (long *)0x0);
      goto LAB_0140c1e0;
    }
    do {
      uVar10 = plVar13[1];
      if (uVar10 == uVar11) {
        if (plVar13[2] == uVar11) goto LAB_0140c1d4;
      }
      else {
        if (uVar12 <= uVar10) {
          uVar4 = 0;
          if (uVar12 != 0) {
            uVar4 = uVar10 / uVar12;
          }
          uVar10 = uVar10 - uVar4 * uVar12;
        }
        if (uVar10 != uVar15) break;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  goto LAB_0140c188;
LAB_0140c1d4:
  bVar6 = (char)plVar13[3] != '\0';
LAB_0140c1e0:
  if (plVar17 == (long *)0x0) {
    return bVar6;
  }
  goto LAB_0140c1e4;
}


