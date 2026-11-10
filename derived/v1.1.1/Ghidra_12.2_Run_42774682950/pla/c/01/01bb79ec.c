/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb79ec; name: FUN_01bb79ec
 */


void FUN_01bb79ec(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  if ((*(uint *)(param_1 + 0x3e) & 0xfffffffe) == 2) {
LAB_01bb7a20:
    FUN_01bb7bd0(param_1,1);
    return;
  }
  if ((int)param_1[0xa7] == 1) {
    if (*(uint *)(param_1 + 0x3e) != 0) goto LAB_01bb7a20;
    (**(code **)(*param_1 + 0xf0))(param_1);
    FUN_01bb7bd0(param_1,0);
    FUN_01bb5868(&local_48,param_1);
    FUN_00b08e00(&local_28,&local_48);
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_18 = *local_48;
        FUN_02a44274(lVar5 + 0xd8,&local_18);
      }
    }
    if (local_28 != (long *)0x0) {
      local_48 = (undefined8 *)&DAT_afc4d6c05abef19e;
      pcStack_40 = "default";
      local_38 = 7;
      local_30 = (long *)0x0;
      FUN_028a0124(local_28,0,&local_48);
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x20))();
      }
      if (local_28 != (long *)0x0) {
        lVar5 = local_28[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
  }
  else if ((int)param_1[0xa7] == 0) {
    *(undefined8 *)((long)param_1 + 0x534) = 0x100000000;
    *(undefined1 *)((long)param_1 + 0x531) = 1;
                    /* WARNING: Could not recover jumptable at 0x01bb7b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf0))(param_1);
    return;
  }
  return;
}


