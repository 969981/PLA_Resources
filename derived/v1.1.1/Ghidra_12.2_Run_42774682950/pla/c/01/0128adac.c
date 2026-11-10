/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128adac; name: FUN_0128adac
 */


void FUN_0128adac(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined8 local_38;
  
  if (**(int **)(param_1 + 0x1648) == 0) {
    if (*(int *)(param_1 + 0x6d8) == 0) {
      iVar8 = 0;
      iVar5 = 0x1e;
      uVar6 = 1;
    }
    else {
      local_38 = 0;
      FUN_00d51c38(param_1,(long)&local_38 + 4,&local_38,0);
      iVar8 = (int)local_38;
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar7 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar7;
      plVar9 = *(long **)(lVar7 + 0x280);
      if (plVar9 == (long *)0x0) {
        iVar5 = FUN_010dac08(0,0);
      }
      else {
        lVar7 = plVar9[0xb];
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
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar5 = FUN_010dac08(plVar9,0);
        lVar7 = plVar9[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      iVar8 = iVar8 * 5;
      if (iVar5 <= iVar8) {
        return;
      }
      uVar6 = 0;
    }
    do {
      FUN_00d57744(param_1,uVar6,iVar8,param_2 & 1);
      iVar8 = iVar8 + 1;
    } while (iVar5 != iVar8);
  }
  return;
}


