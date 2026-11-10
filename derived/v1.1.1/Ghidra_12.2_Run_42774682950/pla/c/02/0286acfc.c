/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286acfc; name: FUN_0286acfc
 */


void FUN_0286acfc(long param_1,undefined4 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 local_280;
  code *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [96];
  undefined1 auStack_200 [8];
  undefined8 *local_1f8;
  undefined8 *local_1e8;
  undefined8 *local_1d8;
  long *local_1c8;
  undefined2 local_1ab;
  undefined8 local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [96];
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [120];
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  long *local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_38;
  
  memset(auStack_200,0,0x1c0);
  local_70 = (long *)0x0;
  local_50 = (long *)0x0;
  local_46 = 0;
  local_88 = 0x50160bafddf4da48;
  pcStack_80 = "PLAY_UI_COMMON_PAUSE_MENU_OPEN";
  local_78 = 0x1e;
  local_60 = "PLAY_UI_COMMON_PAUSE_MENU_CLOSE";
  local_58 = 0x1f;
  local_68 = 0x9b78493c20fb7de4;
  local_48 = 0x100;
  local_1ab = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  local_278 = (code *)0x0;
  FUN_02866d8c(*(undefined8 *)(param_1 + 0x50),param_2,auStack_200,&local_280,0xffffffff);
  pcVar6 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    (*pcVar6)(auStack_260);
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  pcVar6 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar6)(auStack_100);
  }
  pcVar6 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    local_198 = (code *)0x0;
    (*pcVar6)(auStack_180);
  }
  puVar5 = local_1d8;
  if (local_1c8 != (long *)0x0) {
    plVar1 = local_1c8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_1c8 + 0x10))();
      puVar5 = local_1d8;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar5 + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  if (local_1e8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_1e8 + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_1e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *local_1e8;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  if (local_1f8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_1f8 + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_1f8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *local_1f8;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  return;
}


