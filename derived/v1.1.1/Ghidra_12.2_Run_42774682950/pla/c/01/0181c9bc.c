/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181c9bc; name: FUN_0181c9bc
 */


void FUN_0181c9bc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  if (((*(char *)(param_1 + 0x470) != '\0') &&
      (*(undefined1 *)(param_1 + 0x470) = 0, *(char *)(param_1 + 0x471) != '\0')) &&
     (*(char *)(param_1 + 0x479) != '\0')) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00ac3fa4(&local_40,param_1 + 0x1f0);
    FUN_0099c748(&local_30,&local_40);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x1f8))(local_30,*(undefined4 *)(param_1 + 0x474));
      plVar5 = local_30;
      auVar8 = FUN_01a831dc(local_30);
      (**(code **)(*plVar5 + 0x108))
                (auVar8,*(undefined4 *)
                         (local_30[0xb8] + (ulong)*(uint *)(param_1 + 0x474) * 4 + 0x6c),plVar5);
      if (local_30 != (long *)0x0) {
        lVar7 = local_30[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
  }
  return;
}


