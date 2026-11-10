/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01517de0; name: FUN_01517de0
 */


void FUN_01517de0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *local_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  FUN_015129f4(&local_40,param_2,0xffffffff);
  if (local_40 != (long *)0x0) {
    plVar6 = (long *)FUN_00bd1b18(local_40 + 0x1e,local_38);
    if (plVar6 == (long *)0x0) {
      bVar3 = false;
    }
    else {
      (**(code **)(*plVar6 + 0x10))(local_38);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00bd1f90(param_1,local_38);
      if (local_38[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_38[0] + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_38[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_28 = *local_38[0];
          FUN_02a44274(lVar7 + 0xd8,&local_28);
        }
      }
      bVar3 = true;
    }
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (bVar3) {
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


