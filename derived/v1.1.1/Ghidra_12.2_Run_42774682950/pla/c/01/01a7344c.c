/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a7344c; name: FUN_01a7344c
 */


void FUN_01a7344c(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  long alStack_a0 [12];
  undefined8 *local_40 [2];
  long *local_30;
  undefined8 local_28;
  
  if ((*param_2 != 0) && (FUN_00ac64cc(&local_30), local_30 != (long *)0x0)) {
    FUN_00ac508c(param_1 + 600,param_2);
    FUN_0181d68c(local_40,local_30);
    if (local_40[0] != (undefined8 *)0x0) {
      iVar2 = *(int *)((long)local_40[0] + 0xc);
      if (local_40[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40[0] + 1);
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
          local_40[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_28 = *local_40[0];
          FUN_02a44274(lVar6 + 0xd8,&local_28);
        }
      }
      if (iVar2 != 0) {
        pcVar7 = *(code **)(param_1 + 0x388);
        alStack_a0[0] = param_1;
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(param_1 + 0x390) = 0;
          *(undefined8 *)(param_1 + 0x398) = 0;
          *(undefined8 *)(param_1 + 0x380) = 0;
          *(undefined8 *)(param_1 + 0x388) = 0;
          (*pcVar7)(param_1 + 0x3a0);
        }
        FUN_01a7a0b0(alStack_a0,param_1 + 0x3a0);
        *(code **)(param_1 + 0x388) = FUN_01a7a0ac;
        *(undefined1 **)(param_1 + 0x398) = &LAB_01a7a0bc;
        *(code **)(param_1 + 0x390) = FUN_01a7a0b0;
        *(undefined8 *)(param_1 + 0x380) = &LAB_01a79fe8;
        FUN_01a7a0ac(alStack_a0);
      }
    }
    if (local_30 != (long *)0x0) {
      lVar6 = local_30[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  return;
}


