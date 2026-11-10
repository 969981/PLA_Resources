/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010dac08; name: FUN_010dac08
 */


uint FUN_010dac08(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      return 100;
    }
    if (param_2 == 2) {
      return 0x46;
    }
    return 0;
  }
  iVar6 = FUN_010dae80();
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar15 = *(long **)(lVar9 + 0x228);
  if (plVar15 != (long *)0x0) {
    lVar9 = plVar15[0xb];
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar11 = ((long *)plVar15[0x3b])[1];
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x3c4c4ab975ce2cf6;
    }
    else if (uVar11 < 0x3c4c4ab975ce2cf7) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0x3c4c4ab975ce2cf6 / uVar11;
      }
      uVar13 = 0x3c4c4ab975ce2cf6 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0x3c4c4ab975ce2cf6;
    }
    plVar14 = *(long **)(*(long *)plVar15[0x3b] + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == 0x3c4c4ab975ce2cf6) {
            if (plVar14[2] == 0x3c4c4ab975ce2cf6) goto LAB_010dad24;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) goto LAB_010dad98;
          plVar14 = (long *)*plVar14;
          iVar7 = 0;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == 0x3c4c4ab975ce2cf6) {
            if (plVar14[2] == 0x3c4c4ab975ce2cf6) goto LAB_010dad24;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
LAB_010dad98:
        iVar7 = 0;
      }
      goto joined_r0x010dad28;
    }
  }
  iVar7 = 0;
LAB_010dad2c:
  lVar9 = plVar15[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
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
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
LAB_010dad48:
  uVar10 = iVar7 + iVar6;
  if (0x2a2 < uVar10) {
    uVar10 = 0x2a3;
  }
  return uVar10;
LAB_010dad24:
  iVar7 = (int)plVar14[3];
joined_r0x010dad28:
  if (plVar15 == (long *)0x0) goto LAB_010dad48;
  goto LAB_010dad2c;
}


