/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a9940; name: FUN_027a9940
 */


void FUN_027a9940(undefined8 param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_118 [2];
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_100 [24];
  long *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0 [13];
  long *local_58;
  char local_50 [32];
  
  FUN_013ba5d8(&local_108,param_2 + 1,"+inner");
  FUN_02a47560(auStack_100,&local_108);
  local_118[0] = 0;
  local_110 = 0x2000;
  lVar8 = *param_2;
  if (*(char *)(lVar8 + 0x6c) != '\0') {
    if (((*PTR_DAT_043821d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_043821d8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04387d08,PTR_DAT_043821e0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043821d8);
    }
    lVar6 = *(long *)PTR_DAT_043821e0;
    *(long *)PTR_DAT_043821e8 = lVar6;
    if (lVar6 != 0) {
      local_d0 = DAT_03a7e34c;
      local_e0 = DAT_03a7e33c;
      local_d8 = DAT_03a7e344;
      FUN_0276b54c(lVar6,0,&local_e0,6);
    }
  }
  if (*(char *)(lVar8 + 0x6d) == '\0') {
    local_e0 = &LAB_027a9c9c;
    local_d8 = (code *)&LAB_027a9cac;
    local_d0 = &LAB_027a9cb0;
    local_c8 = &LAB_027a9cbc;
  }
  else {
    plVar7 = (long *)FUN_027812ec();
    lVar6 = *plVar7;
    *(long *)PTR_DAT_0437b478 = lVar6;
    if ((lVar6 != 0) && (FUN_02cc788c(local_50), local_50[0] != '\0')) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar6 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar6;
      if ((lVar6 == 0) || (FUN_01148cdc(&local_58), local_58 == (long *)0x0)) {
        bVar3 = false;
      }
      else {
        FUN_01123fa4(local_58,(ulong)local_50 | 1,0x1d);
        local_e0 = &LAB_027a9c70;
        local_d8 = FUN_027a9c80;
        local_d0 = &LAB_027a9c84;
        local_c8 = &LAB_027a9c90;
        local_c0[0] = lVar8;
        FUN_027bceb8(lVar8 + 0x70,&local_e0);
        pcVar4 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined1 *)0x0;
          local_c8 = (undefined1 *)0x0;
          local_e0 = (undefined1 *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar4)(local_c0);
        }
        if (local_58 != (long *)0x0) {
          lVar6 = local_58[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 1) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
        bVar3 = true;
      }
      if (local_50[0] != '\0') {
        local_50[0] = '\0';
      }
      if (bVar3) goto LAB_027a9b90;
    }
    *(undefined4 *)(lVar8 + 0x68) = 1;
    local_e0 = &LAB_027a9cc8;
    local_d8 = FUN_027a9cd8;
    local_d0 = &LAB_027a9cdc;
    local_c8 = &LAB_027a9ce8;
  }
  local_c0[0] = lVar8;
  FUN_027bceb8(lVar8 + 0x70,&local_e0);
  pcVar4 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar4)(local_c0);
  }
LAB_027a9b90:
  local_e0 = (undefined1 *)0x0;
  FUN_013ba578(param_1,auStack_100,local_118,&local_e0);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  return;
}


