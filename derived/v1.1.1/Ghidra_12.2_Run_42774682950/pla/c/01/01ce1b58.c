/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ce1b58; name: FUN_01ce1b58
 */


long * FUN_01ce1b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  FUN_01ce1d3c(&local_38,param_2,param_3);
  plVar6 = local_38;
  plVar2 = (long *)0x0;
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 9;
  }
  (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_009ad580(&local_48,param_1 + 0x318);
  (**(code **)(*plVar2 + 0xc0))(plVar2,&local_48);
  puVar5 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
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
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  (**(code **)(*plVar2 + 200))(plVar2,*(undefined1 *)(param_1 + 0x33b));
  (**(code **)(*plVar2 + 0x90))(plVar2);
  local_50 = local_38;
  local_38 = (long *)0x0;
  FUN_02a4dad4(param_1 + 0xf0,&local_50);
  if (local_50 != (long *)0x0) {
    lVar8 = local_50[0xb];
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
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return plVar6;
}


