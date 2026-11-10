/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b631a8; name: FUN_02b631a8
 */


void FUN_02b631a8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_c0 [24];
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *plStack_88;
  byte local_67;
  byte local_66;
  byte local_65;
  uint local_64;
  
  lVar6 = *(long *)(param_1 + 0x58);
  lVar2 = tpidr_el0;
  if (*(long *)(lVar6 + 0x88) != *(long *)(lVar6 + 0x80)) {
    uVar8 = 0;
    do {
      FUN_02b5e3b4(auStack_c0,*(long *)(lVar6 + 0x80) + (long)(int)uVar8 * 0x60);
      plVar7 = *(long **)(local_a0 +
                          (long)(int)((local_64 &
                                      *(uint *)(*(long *)(param_1 + 0x60) + (ulong)local_66 * 4)) >>
                                     (ulong)(local_65 & 0x1f)) * 0x28 + 0x18);
      lVar4 = local_a0;
      lVar6 = local_98;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x20))(plVar7);
        lVar4 = local_a0;
        lVar6 = local_98;
      }
      lVar3 = lVar4;
      plVar7 = plStack_88;
      local_a0 = lVar4;
      local_98 = lVar6;
      if (lVar4 != 0) {
        while (local_a0 = lVar3, plStack_88 = plVar7, lVar6 != lVar4) {
          plVar1 = (long *)(lVar6 + -0x10);
          lVar6 = lVar6 + -0x28;
          if ((long *)*plVar1 != (long *)0x0) {
            (**(code **)(*(long *)*plVar1 + 0x20))();
            lVar3 = local_a0;
            plVar7 = plStack_88;
          }
        }
        lVar6 = local_90 - lVar3;
        local_98 = lVar4;
        uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
        if ((uVar5 & 1) != 0) {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar2 + 0x38d480)) {
            FUN_02bcc824(plVar7,lVar3,lVar6,8);
            goto joined_r0x02b63318;
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar3,lVar6,8);
      }
joined_r0x02b63318:
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      lVar6 = *(long *)(param_1 + 0x58);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)((*(long *)(lVar6 + 0x88) - *(long *)(lVar6 + 0x80) >> 5) *
                            -0x5555555555555555));
  }
  if (*(long *)(lVar6 + 0xc0) != *(long *)(lVar6 + 0xb8)) {
    uVar8 = 0;
    do {
      FUN_02b5e3b4(auStack_c0,*(long *)(lVar6 + 0xb8) + (long)(int)uVar8 * 0x60);
      plVar7 = *(long **)(local_a0 +
                          (long)(int)((local_64 &
                                      *(uint *)(*(long *)(param_1 + 0xa8) +
                                               ((ulong)local_66 - (ulong)local_67) * 4)) >>
                                     (ulong)(local_65 & 0x1f)) * 0x28 + 0x18);
      lVar4 = local_a0;
      lVar6 = local_98;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x20))(plVar7);
        lVar4 = local_a0;
        lVar6 = local_98;
      }
      lVar3 = lVar4;
      plVar7 = plStack_88;
      local_a0 = lVar4;
      local_98 = lVar6;
      if (lVar4 != 0) {
        while (local_a0 = lVar3, plStack_88 = plVar7, lVar6 != lVar4) {
          plVar1 = (long *)(lVar6 + -0x10);
          lVar6 = lVar6 + -0x28;
          if ((long *)*plVar1 != (long *)0x0) {
            (**(code **)(*(long *)*plVar1 + 0x20))();
            lVar3 = local_a0;
            plVar7 = plStack_88;
          }
        }
        lVar6 = local_90 - lVar3;
        local_98 = lVar4;
        uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
        if ((uVar5 & 1) != 0) {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar2 + 0x38d480)) {
            FUN_02bcc824(plVar7,lVar3,lVar6,8);
            goto joined_r0x02b63518;
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar3,lVar6,8);
      }
joined_r0x02b63518:
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      lVar6 = *(long *)(param_1 + 0x58);
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)((*(long *)(lVar6 + 0xc0) - *(long *)(lVar6 + 0xb8) >> 5) *
                            -0x5555555555555555));
  }
  return;
}


