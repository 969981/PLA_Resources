/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb5688; name: FUN_01bb5688
 */


void FUN_01bb5688(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  FUN_01bb5868(&local_50);
  FUN_00b08e00(&local_30,&local_50);
  puVar4 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
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
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
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
    plVar8 = (long *)local_30[0x4a];
    if (plVar8 == (long *)local_30[0x4b]) {
      lVar7 = *plVar8;
    }
    else {
      do {
        lVar7 = *plVar8;
        plVar8 = plVar8 + 1;
      } while (*(undefined1 **)(lVar7 + 0x158) != &DAT_afc4d6c05abef19e);
    }
    plVar8 = *(long **)(lVar7 + 0x68);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      local_50 = (undefined8 *)0xe0a0f12f67f1a4d8;
      pcStack_48 = "break";
      local_40 = 5;
      local_38 = (long *)0x0;
      uVar6 = (**(code **)(*plVar8 + 200))(plVar8,&local_50);
      *(undefined8 *)(param_1 + 0x518) = uVar6;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
        cVar2 = *(char *)(param_1 + 0x2e0);
        goto joined_r0x01bb5818;
      }
    }
  }
  cVar2 = *(char *)(param_1 + 0x2e0);
joined_r0x01bb5818:
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x538) = 1;
    *(undefined1 *)(param_1 + 0x531) = 1;
  }
  return;
}


