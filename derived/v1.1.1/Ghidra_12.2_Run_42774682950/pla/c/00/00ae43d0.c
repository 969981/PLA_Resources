/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae43d0; name: FUN_00ae43d0
 */


void FUN_00ae43d0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *local_78;
  undefined8 uStack_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  FUN_00ae477c();
  *param_1 = &PTR_FUN_041d3618;
  param_1[9] = &PTR_LAB_041d3648;
  FUN_00ae48b0(param_1 + 10);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_00ae49b4(DAT_043a9ff8,"MemoryID::NPC",0,param_1[1]);
  lVar7 = DAT_043a9ff8;
  param_1[0x20] = *(undefined8 *)(DAT_043a9ff8 + 8);
  FUN_00ae49b4(lVar7,"MemoryID::TMP_POKEMON",1,param_1[1]);
  lVar7 = DAT_043a9ff8;
  param_1[0x1f] = *(undefined8 *)(DAT_043a9ff8 + 0x28);
  FUN_00ae49b4(lVar7,"MemoryID::PLAYER",2,param_1[1]);
  lVar7 = DAT_043a9ff8;
  param_1[0x21] = *(undefined8 *)(DAT_043a9ff8 + 0x48);
  FUN_00ae49b4(lVar7,"MemoryID::RIDE",3,param_1[1]);
  lVar7 = DAT_043a9ff8;
  param_1[0x22] = *(undefined8 *)(DAT_043a9ff8 + 0x68);
  FUN_00ae49b4(lVar7,"MemoryID::ITEM",4,param_1[1]);
  param_1[0x23] = *(undefined8 *)(DAT_043a9ff8 + 0x88);
  FUN_00ae4a64(&local_68,param_1[0x1f]);
  plVar8 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if ((plVar8 != (long *)0x0) && (uVar6 = FUN_02a43a5c(plVar8[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  lVar7 = local_68 + 0x58;
  param_1[0x24] = local_68;
  local_58 = 0xffffffff;
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  local_68 = param_1[0x1f];
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  lStack_60 = local_68;
  FUN_008802f0(&local_40,lVar7);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00ae5138(&local_78,&local_40);
  puVar4 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40 + 1);
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
      local_40[2] = 0;
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
  FUN_00ae5a14(&local_50,&local_78);
  puVar4 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
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
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_40 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_40);
    }
  }
  local_58 = 6;
  FUN_00ae4a9c(&local_40,param_1[0x1f],&local_68);
  plVar8 = (long *)param_1[0x25];
  param_1[0x25] = 0;
  if ((plVar8 != (long *)0x0) && (uVar6 = FUN_02a43a5c(plVar8[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  puVar4 = local_50;
  param_1[0x25] = local_40;
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
      local_40 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_40);
    }
  }
  return;
}


