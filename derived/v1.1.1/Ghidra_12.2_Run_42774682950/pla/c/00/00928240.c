/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00928240; name: FUN_00928240
 */


void FUN_00928240(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar7 = FUN_00933eec(*(undefined8 *)(*(long *)(param_2 + 0x68) + 0xd0));
  if (lVar7 == 0) {
    *param_1 = 0;
  }
  else {
    iVar5 = FUN_009270c4(*(undefined8 *)(*(long *)(param_2 + 0x68) + 0x150),param_3);
    if ((param_3 - 6U & 0xff) < 0x18) {
      lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + (long)iVar5 * 0x60 + 0x90);
      *param_1 = lVar7;
      if (lVar7 != 0) {
        piVar2 = (int *)(lVar7 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar7 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar7;
      plVar8 = *(long **)(lVar7 + 0xd0);
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = (int)*plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar9 = (long *)plVar8[0xb];
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar1 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      lVar7 = (**(code **)(*plVar9 + 0x50))(plVar9,iVar5);
      *param_1 = lVar7;
      if (lVar7 != 0) {
        piVar2 = (int *)(lVar7 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar8 = plVar9 + 10;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00928354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}


