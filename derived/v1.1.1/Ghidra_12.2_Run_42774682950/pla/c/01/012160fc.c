/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012160fc; name: FUN_012160fc
 */


void FUN_012160fc(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_38;
  
  param_2 = param_2 & 0xffffffff;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar12 = *(long **)(lVar10 + 0x248);
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + param_2 * 0x10);
  iVar6 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x1658) + 0x16) == '\0') {
LAB_012161a4:
      *(undefined4 *)(lVar10 + 0x48) = 0;
      goto joined_r0x012161ac;
    }
    plVar11 = *(long **)(param_1 + 0x1660);
    local_38 = plVar11;
    if (plVar11 == (long *)0x0) {
      FUN_0121da04(&local_38,param_2,iVar6);
      lVar9 = *(long *)(param_1 + 0x1660);
    }
    else {
      plVar2 = plVar11 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_0121da04(&local_38,param_2,iVar6);
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 10;
        do {
          iVar5 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar9 = *(long *)(param_1 + 0x1660);
          goto joined_r0x012162b4;
        }
      }
      lVar9 = *(long *)(param_1 + 0x1660);
    }
joined_r0x012162b4:
    if ((lVar9 != 0) &&
       (uVar8 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1), (uVar8 & 1) != 0))
    goto LAB_012161a4;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x1e);
  *(undefined4 *)(lVar10 + 0x48) = 1;
joined_r0x012161ac:
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01216200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return;
    }
  }
  return;
}


