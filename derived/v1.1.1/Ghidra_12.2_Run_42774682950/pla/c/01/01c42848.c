/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c42848; name: FUN_01c42848
 */


void FUN_01c42848(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *local_38 [2];
  long *local_28;
  
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if (((*param_2 != *(long *)PTR_DAT_0437a0d8) && (*(long *)(param_1 + 0x220) != 0)) &&
     (FUN_00b911c4(local_38), plVar6 = local_38[0], local_38[0] != (long *)0x0)) {
    FUN_01a74a50(local_38,local_38[0]);
    if (local_38[0] != (long *)0x0) {
      plVar5 = local_38[0];
      if (*(int *)((long)local_38[0] + 0xc) != 0) {
        if (local_38[0] == (long *)0x0) {
          local_28 = (long *)0x0;
        }
        else {
          FUN_00bd9360(&local_28);
        }
        FUN_0290b66c(local_28,param_2,0);
        plVar5 = local_38[0];
        if (local_28 != (long *)0x0) {
          lVar8 = local_28[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
            plVar5 = local_38[0];
          }
        }
      }
      if (plVar5 != (long *)0x0) {
        plVar2 = plVar5 + 1;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          plVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = (long *)*plVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
    }
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  return;
}


