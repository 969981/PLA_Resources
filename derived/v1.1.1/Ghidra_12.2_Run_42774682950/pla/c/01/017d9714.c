/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d9714; name: FUN_017d9714
 */


void FUN_017d9714(long param_1,undefined4 param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  if ((param_3 & 1) == 0) {
    local_40 = (long *)0x0;
    uStack_38 = 0;
    FUN_017db6d4(&local_40,param_1 + 0xc0);
    if (local_40 == (long *)0x0) {
      local_30 = (long *)0x0;
    }
    else {
      FUN_017dca7c(&local_30);
      plVar5 = local_40;
      if (local_40 != (long *)0x0) {
        plVar2 = local_40 + 1;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_40[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_28 = *plVar5;
          FUN_02a44274(lVar7 + 0xd8,&local_28);
        }
      }
    }
    if ((local_30 != (long *)0x0) && (FUN_018e0f74(local_30,param_2), local_30 != (long *)0x0)) {
      lVar7 = local_30[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  else {
    for (lVar7 = *(long *)(param_1 + 0xf0); lVar7 != param_1 + 0xe8; lVar7 = *(long *)(lVar7 + 8)) {
      while (*(long *)(lVar7 + 0x18) == 0) {
        local_40 = (long *)0x0;
        lVar7 = *(long *)(lVar7 + 8);
        if (lVar7 == param_1 + 0xe8) {
          return;
        }
      }
      FUN_017dca7c(&local_40);
      if ((local_40 != (long *)0x0) && (FUN_018e0f74(local_40,param_2), local_40 != (long *)0x0)) {
        lVar8 = local_40[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          (**(code **)(*local_40 + 0x20))();
        }
      }
    }
  }
  return;
}


