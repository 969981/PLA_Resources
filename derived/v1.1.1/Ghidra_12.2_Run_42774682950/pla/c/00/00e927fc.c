/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e927fc; name: FUN_00e927fc
 */


void FUN_00e927fc(long *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *local_38;
  long *local_28;
  
  if (param_2 == -1) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar7 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar7;
    plVar6 = *(long **)(lVar7 + 0xd0);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8 = (long *)plVar6[0xb];
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar2 = plVar6 + 10;
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
      (**(code **)(*plVar6 + 0x10))();
    }
    (**(code **)(*plVar8 + 0x30))(plVar8,param_3,*param_1);
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b80(&local_28);
    local_38 = (long *)*param_1;
    if (local_38 != (long *)0x0) {
      plVar6 = local_38 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = (int)*plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_010e2158(local_28,&local_38,param_2,param_3);
    if (local_38 != (long *)0x0) {
      plVar6 = local_38 + 10;
      do {
        iVar5 = (int)*plVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


