/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a55cbc; name: FUN_00a55cbc
 */


void FUN_00a55cbc(float param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  
  if (*(uint *)(param_2 + 0x78) == *(uint *)(param_2 + 0x7c)) {
    return;
  }
  if ((float)*(uint *)(param_2 + 0x7c) != param_1) {
    return;
  }
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379578), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar8 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar8;
  lVar14 = *(long *)(lVar8 + 200);
  lVar8 = (**(code **)(**(long **)(param_2 + 0x68) + 0x70))();
  uVar10 = *(ulong *)(lVar8 + 0x70);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar2 = *(uint *)(*(long *)(param_2 + 0x70) + 0x70);
    uVar9 = (ulong)uVar2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = (ulong)((int)uVar10 - 1U & uVar2);
    }
    else {
      uVar12 = uVar9;
      if (uVar10 <= uVar9) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar9 / uVar10;
        }
        uVar12 = uVar9 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar8 + 0x68) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (*(uint *)(plVar13 + 2) == uVar2) goto LAB_00a55de8;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (*(uint *)(plVar13 + 2) == uVar2) goto LAB_00a55de8;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  FUN_00a569c0();
LAB_00a55f24:
  if (DAT_00000430 != '\0') {
    DAT_00000430 = '\0';
  }
  return;
LAB_00a55de8:
  uVar11 = *(ulong *)(lVar14 + 0x438);
  uVar2 = *(uint *)((long)plVar13 + 0x14);
  uVar10 = (ulong)uVar2;
  if ((uVar11 & uVar11 - 1) == 0) {
    plVar13 = *(long **)(*(long *)(lVar14 + 0x430) + (ulong)((int)uVar11 - 1U & uVar2) * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar10);
    } while (*(uint *)(plVar13 + 2) != uVar2);
  }
  else {
    uVar9 = uVar10;
    if (uVar11 <= uVar10) {
      uVar9 = 0;
      if (uVar11 != 0) {
        uVar9 = uVar10 / uVar11;
      }
      uVar9 = uVar10 - uVar9 * uVar11;
    }
    plVar13 = *(long **)(*(long *)(lVar14 + 0x430) + uVar9 * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar10);
    } while (*(uint *)(plVar13 + 2) != uVar2);
  }
  plVar13 = *(long **)((long)plVar13 + 0x18);
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((char)plVar13[0x86] != '\0') {
      *(undefined1 *)(plVar13 + 0x86) = 0;
    }
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a55ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x20))(plVar13);
      return;
    }
    return;
  }
  goto LAB_00a55f24;
}


