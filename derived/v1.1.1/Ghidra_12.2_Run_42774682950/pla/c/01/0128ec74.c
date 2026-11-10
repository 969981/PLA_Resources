/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128ec74; name: FUN_0128ec74
 */


void FUN_0128ec74(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  iVar2 = *(int *)(param_1 + 0x6d8);
  if (iVar2 == 1) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar8 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar8;
    plVar9 = *(long **)(lVar8 + 0x238);
    if (plVar9 == (long *)0x0) {
      uVar7 = FUN_0111e994(0,6);
      if ((uVar7 & 1) == 0) {
        return;
      }
      goto LAB_0128edd8;
    }
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0128eeb4;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
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
    uVar7 = FUN_0111e994(plVar9,6);
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
joined_r0x0128edd0:
    if (iVar5 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar8 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar8;
    plVar9 = *(long **)(lVar8 + 0x280);
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0128eeb4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
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
      uVar7 = FUN_010db9d4(plVar9,0);
      lVar8 = plVar9[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto joined_r0x0128edd0;
    }
    uVar7 = FUN_010db9d4(0,0);
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
LAB_0128edd8:
  FUN_00d51790(param_1,iVar2,0xffffffff,0xffffffff);
  return;
}


