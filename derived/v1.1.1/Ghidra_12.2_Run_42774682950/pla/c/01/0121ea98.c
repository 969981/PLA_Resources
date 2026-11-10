/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121ea98; name: FUN_0121ea98
 */


void FUN_0121ea98(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  long *local_38;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar10 = *(long **)(lVar8 + 0x248);
  if (plVar10 == (long *)0x0) {
    uVar9 = DAT_000004a9;
  }
  else {
    lVar8 = plVar10[0xb];
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
    lVar8 = plVar10[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    uVar9 = *(undefined1 *)((long)plVar10 + 0x4a9);
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  iVar6 = 0;
  do {
    plVar10 = *(long **)(param_1 + 0x1660);
    local_38 = plVar10;
    if (plVar10 == (long *)0x0) {
      FUN_0121da04(&local_38,uVar9,iVar6);
      lVar8 = *(long *)(param_1 + 0x1660);
    }
    else {
      plVar2 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_0121da04(&local_38,uVar9,iVar6);
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 10;
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
          (**(code **)(*plVar10 + 0x10))(plVar10);
          lVar8 = *(long *)(param_1 + 0x1660);
          goto joined_r0x0121ec50;
        }
      }
      lVar8 = *(long *)(param_1 + 0x1660);
    }
joined_r0x0121ec50:
    if ((lVar8 != 0) && (iVar5 = FUN_02c6849c(*(undefined8 *)(lVar8 + 0x98)), iVar5 != 0)) {
      FUN_01215c54(param_1,0,iVar6);
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x1e) {
      lVar8 = FUN_0121fbdc(param_1,1,0,0);
      if ((lVar8 != 0) && (iVar6 = FUN_02c6849c(*(undefined8 *)(lVar8 + 0x98)), iVar6 != 0)) {
        FUN_01215c54(param_1,1,0);
      }
      lVar8 = FUN_0121fbdc(param_1,1,0,1);
      if ((lVar8 != 0) && (iVar6 = FUN_02c6849c(*(undefined8 *)(lVar8 + 0x98)), iVar6 != 0)) {
        FUN_01215c54(param_1,1,1);
      }
      lVar8 = FUN_0121fbdc(param_1,1,0,2);
      if ((lVar8 != 0) && (iVar6 = FUN_02c6849c(*(undefined8 *)(lVar8 + 0x98)), iVar6 != 0)) {
        FUN_01215c54(param_1,1,2);
      }
      lVar8 = FUN_0121fbdc(param_1,1,0,3);
      if ((lVar8 != 0) && (iVar6 = FUN_02c6849c(*(undefined8 *)(lVar8 + 0x98)), iVar6 != 0)) {
        FUN_01215c54(param_1,1,3);
      }
      lVar8 = FUN_0121fbdc(param_1,1,0,4);
      if ((lVar8 != 0) && (iVar6 = FUN_02c6849c(*(undefined8 *)(lVar8 + 0x98)), iVar6 != 0)) {
        FUN_01215c54(param_1,1,4);
      }
      lVar8 = FUN_0121fbdc(param_1,1,0,5);
      if ((lVar8 == 0) || (iVar6 = FUN_02c6849c(*(undefined8 *)(lVar8 + 0x98)), iVar6 == 0)) {
        return;
      }
      FUN_01215c54(param_1,1,5);
      return;
    }
  } while( true );
}


