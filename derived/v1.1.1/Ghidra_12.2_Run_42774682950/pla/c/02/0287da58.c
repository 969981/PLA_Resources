/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287da58; name: FUN_0287da58
 */


/* WARNING: Removing unreachable block (ram,0x0287dc50) */
/* WARNING: Removing unreachable block (ram,0x0287dc54) */
/* WARNING: Removing unreachable block (ram,0x0287dc5c) */
/* WARNING: Removing unreachable block (ram,0x0287dc64) */
/* WARNING: Removing unreachable block (ram,0x0287dc68) */

void FUN_0287da58(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *local_a0;
  long *local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_28;
  
  puVar5 = (undefined8 *)FUN_02ad80dc();
  puVar5 = (undefined8 *)FUN_02b308bc(*puVar5);
  plVar7 = (long *)*puVar5;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a0 = &DAT_e9cc127eac0e0df1;
  local_98 = (long *)0x3a815e8;
  local_90 = 0x1f;
  local_88 = (long *)0x0;
  FUN_02b2fb40(&local_28,plVar7,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_028810c0(*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x2e8));
  FUN_00232690(0x20,8,0x90,4);
  local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,1);
  local_60 = DAT_03a848c0;
  uStack_58 = DAT_03a848c8;
  local_50 = DAT_03a848d0;
  uStack_48 = DAT_03a848d8;
  local_70 = DAT_03a848b0;
  uStack_68 = DAT_03a848b8;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_98 = local_28;
  local_90 = DAT_03a8488c;
  local_78 = DAT_03a848a4;
  local_88 = (long *)DAT_03a84894;
  uStack_80 = DAT_03a8489c;
  local_40 = 0x438078000000000;
  if (((*PTR_DAT_0437e3b8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437e3b8), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04387f18,PTR_DAT_0437e3c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437e3b8);
  }
  uVar6 = *(undefined8 *)PTR_DAT_0437e3c0;
  *(undefined8 *)PTR_DAT_0437e3c8 = uVar6;
  FUN_02c3cf68(uVar6,&local_a0);
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


