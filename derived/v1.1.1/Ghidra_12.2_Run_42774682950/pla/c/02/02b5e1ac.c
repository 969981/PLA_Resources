/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5e1ac; name: FUN_02b5e1ac
 */


void FUN_02b5e1ac(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_c0 [24];
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *plStack_88;
  byte local_68;
  byte local_66;
  byte local_65;
  uint local_64;
  
  lVar8 = *(long *)(param_1 + 0x80);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar8 != lVar3) {
    lVar4 = tpidr_el0;
    do {
      FUN_02b5e3b4(auStack_c0,lVar8);
      lVar9 = local_a0;
      lVar2 = *param_2;
      if ((ulong)(param_2[1] - lVar2 >> 2) <= (ulong)local_66) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar7 = (ulong)local_66 * 4;
      *(uint *)(lVar2 + lVar7) =
           (uint)local_68 << (ulong)(local_65 & 0x1f) |
           *(uint *)(lVar2 + lVar7) & (local_64 ^ 0xffffffff);
      lVar2 = local_a0;
      lVar7 = local_98;
      plVar5 = plStack_88;
      if (local_a0 != 0) {
        while (local_a0 = lVar2, plStack_88 = plVar5, lVar7 != lVar9) {
          plVar1 = (long *)(lVar7 + -0x10);
          lVar7 = lVar7 + -0x28;
          if ((long *)*plVar1 != (long *)0x0) {
            (**(code **)(*(long *)*plVar1 + 0x20))();
            lVar2 = local_a0;
            plVar5 = plStack_88;
          }
        }
        local_98 = lVar9;
        lVar9 = local_90 - lVar2;
        uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
        if ((uVar6 & 1) != 0) {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar5,lVar2,lVar9,8);
            goto joined_r0x02b5e30c;
          }
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,lVar9,8);
      }
joined_r0x02b5e30c:
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      lVar8 = lVar8 + 0x60;
    } while (lVar8 != lVar3);
  }
  return;
}


