/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5ff38; name: FUN_01c5ff38
 */


void FUN_01c5ff38(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x29c) = 2;
  }
  else {
    FUN_016c24d0(&local_c0,param_1 + 0x490);
    if ((local_c0 != (long *)0x0) && (FUN_015916d0(local_c0,0,8,0), local_c0 != (long *)0x0)) {
      lVar7 = local_c0[0xb];
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
        (**(code **)(*local_c0 + 0x20))();
      }
    }
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x1f;
    local_28 = (long *)0x0;
    local_40 = 0x2c9b8dae62a9967b;
    pcStack_38 = "SET_STATE_WORMHOLE_NOTICE_START";
    uVar6 = *(undefined8 *)PTR_DAT_04379c30;
    local_50 = 0;
    uStack_48 = 0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar6;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = (long *)0x0;
    local_b8 = (code *)0x0;
    FUN_02913338(uVar6,&local_40,&local_c0,0,0,0);
    pcVar4 = local_b8;
    if (local_b8 == (code *)0x0) {
      local_b8 = (code *)0x0;
    }
    else {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = (long *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar4)(&local_a0);
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  return;
}


