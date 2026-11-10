/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bed2ec; name: FUN_01bed2ec
 */


void FUN_01bed2ec(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 uVar12;
  long *plVar13;
  
  if (*(char *)(param_1 + 0x10a0) == '\0') {
    *(undefined1 *)(param_1 + 0x10a2) = 1;
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar13 = *(long **)(lVar7 + 0x228);
  if (plVar13 == (long *)0x0) {
    *(undefined1 *)(param_1 + 0x10a2) = 0;
    return;
  }
  lVar7 = plVar13[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = ((long *)plVar13[0x37])[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & DAT_043d2f50;
    }
    else if (DAT_043d2f50 < uVar8) {
      uVar10 = DAT_043d2f50;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = DAT_043d2f50 / uVar8;
      }
      uVar10 = DAT_043d2f50 - uVar10 * uVar8;
    }
    plVar11 = *(long **)(*(long *)plVar13[0x37] + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == DAT_043d2f50) {
            if (plVar11[2] == DAT_043d2f50) goto LAB_01bed484;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) goto LAB_01bed428;
          plVar11 = (long *)*plVar11;
          uVar12 = 0;
        } while (plVar11 != (long *)0x0);
        goto LAB_01bed488;
      }
      do {
        uVar9 = plVar11[1];
        if (uVar9 == DAT_043d2f50) {
          if (plVar11[2] == DAT_043d2f50) goto LAB_01bed484;
        }
        else {
          if (uVar8 <= uVar9) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar9 / uVar8;
            }
            uVar9 = uVar9 - uVar4 * uVar8;
          }
          if (uVar9 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_01bed428:
  uVar12 = 0;
LAB_01bed488:
  *(undefined1 *)(param_1 + 0x10a2) = uVar12;
  lVar7 = plVar13[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01bed4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x20))(plVar13);
    return;
  }
  return;
LAB_01bed484:
  uVar12 = (undefined1)plVar11[3];
  goto LAB_01bed488;
}


