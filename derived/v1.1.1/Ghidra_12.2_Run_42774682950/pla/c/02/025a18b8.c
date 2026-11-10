/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a18b8; name: FUN_025a18b8
 */


void FUN_025a18b8(long param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
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
  undefined8 local_18;
  
  if ((param_3 & 1) != 0) {
    local_18 = param_2;
    lVar7 = FUN_025a8238(param_1 + 0x90,&local_18);
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x18) == 0) {
        local_c0 = (long *)0x0;
      }
      else {
        FUN_025a8344(&local_c0);
        plVar4 = local_c0;
        if (local_c0 != (long *)0x0) {
          FUN_01c5e8e0(local_c0);
          lVar7 = plVar4[0xb];
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
            (**(code **)(*plVar4 + 0x20))(plVar4);
          }
        }
      }
    }
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0x29;
    local_28 = (long *)0x0;
    local_40 = 0xbc05d8f5f3f3550e;
    pcStack_38 = "SET_STATE_WORMHOLE_MATERIALIZATION_PREEND";
    uVar8 = *(undefined8 *)PTR_DAT_04379c30;
    local_50 = 0;
    uStack_48 = 0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar8;
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
    FUN_02913338(uVar8,&local_40,&local_c0,0,0,0);
    pcVar5 = local_b8;
    if (local_b8 == (code *)0x0) {
      local_b8 = (code *)0x0;
    }
    else {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = (long *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar5)(&local_a0);
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


