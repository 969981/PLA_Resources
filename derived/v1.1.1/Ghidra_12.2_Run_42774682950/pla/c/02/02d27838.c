/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d27838; name: FUN_02d27838
 */


void FUN_02d27838(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *local_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  local_b8 = 0xe185f6f6b840a887;
  pcStack_b0 = "InitializeLdn";
  local_a8 = 0xd;
  local_a0 = (long *)0x0;
  local_c8[0] = 2;
  local_c0 = 0x8000;
  FUN_02d2576c(&local_98,&local_b8,local_c8);
  plVar5 = local_98;
  local_68 = (undefined8 *)0x0;
  pcStack_60 = (char *)0x0;
  FUN_008802f0(&local_68,*(long *)(param_2 + 0x70) + 0x58);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  FUN_02cd5d0c(&local_d8,&local_68);
  puVar4 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
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
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78 = *puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_78);
    }
  }
  local_68 = (undefined8 *)0x5f3a9f86b611a6e;
  pcStack_60 = "StartupSession";
  local_58 = 0xe;
  local_50 = (long *)0x0;
  local_78 = CONCAT44(local_78._4_4_,1);
  local_70 = 0x2000;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_02cd6d54(&local_88,&local_d8);
  FUN_02d6e8c0(&local_90,plVar5,&local_68,&local_78,&local_88,param_2 + 0x218);
  puVar4 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
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
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_48 = *puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_48);
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar5 = local_90;
  local_f8 = 0x4009dc70b1776ef1;
  pcStack_f0 = "BrowseSession";
  local_e8 = 0xd;
  local_e0 = (long *)0x0;
  local_68 = (undefined8 *)0x0;
  pcStack_60 = (char *)0x0;
  FUN_008802f0(&local_68,*(long *)(param_2 + 0x70) + 0x58);
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  FUN_02cd5d0c(&local_108,&local_68);
  puVar4 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
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
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_78 = *puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_78);
    }
  }
  FUN_02d273a8(&local_128,param_2,param_3);
  FUN_02d26af4(param_1,plVar5,&local_f8,&local_108,&local_128);
  puVar4 = local_128;
  local_128 = (undefined8 *)0x0;
  if (puVar4 == (undefined8 *)0x0) goto LAB_02d27bf8;
  FUN_02bcbe58(&local_68,0);
  (**(code **)*puVar4)(puVar4);
  uVar7 = (**(code **)(*local_120 + 0xc0))(local_120);
  lVar8 = tpidr_el0;
  if ((uVar7 & 1) == 0) {
LAB_02d27b5c:
    (**(code **)(*local_120 + 0x18))(local_120,puVar4,uStack_118,local_110);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02d27b5c;
    FUN_02bcc824(local_120,puVar4,uStack_118,local_110);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
LAB_02d27bf8:
  puVar4 = local_108;
  if (local_108 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_108 + 1);
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
      local_108[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  puVar4 = local_d8;
  if (local_90 != (long *)0x0) {
    lVar8 = local_90[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      puVar4 = local_d8;
    }
  }
  local_d8 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
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
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_68 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_68);
    }
  }
  if (local_98 != (long *)0x0) {
    lVar8 = local_98[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  return;
}


