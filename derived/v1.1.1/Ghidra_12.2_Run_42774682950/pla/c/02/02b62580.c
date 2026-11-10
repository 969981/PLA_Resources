/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b62580; name: FUN_02b62580
 */


undefined8 FUN_02b62580(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [24];
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  byte local_47;
  byte local_46;
  byte local_45;
  uint local_44;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x58) + 0xb8);
  plVar3 = *(long **)(*(long *)(param_1 + 0x58) + 0xc0);
  plVar9 = plVar2;
  if (plVar2 != plVar3) {
    lVar8 = *plVar2;
    while (lVar8 != *param_2) {
      plVar9 = plVar9 + 0xc;
      if (plVar3 == plVar9) {
        return 0;
      }
      lVar8 = *plVar9;
    }
  }
  if (plVar3 == plVar9) {
    return 0;
  }
  FUN_02b5e3b4(auStack_a0,
               plVar2 + (long)((int)((ulong)((long)plVar9 - (long)plVar2) >> 5) * -0x55555555) * 0xc
              );
  lVar8 = local_80;
  lVar6 = local_80;
  if (local_80 == local_78) {
    if (local_78 != local_80) goto LAB_02b62650;
LAB_02b626d4:
    uVar10 = 0;
  }
  else {
    lVar5 = local_80;
    if (*(int *)(local_80 + 0x20) != param_3) {
      do {
        lVar6 = lVar5 + 0x28;
        if (local_78 == lVar6) goto LAB_02b626d4;
        piVar1 = (int *)(lVar5 + 0x48);
        lVar5 = lVar6;
      } while (*piVar1 != param_3);
    }
    if (local_78 == lVar6) goto LAB_02b626d4;
LAB_02b62650:
    lVar5 = *(long *)(param_1 + 0xa8);
    if ((ulong)(*(long *)(param_1 + 0xb0) - lVar5 >> 2) <= (ulong)local_46 - (ulong)local_47) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar7 = ((ulong)local_46 - (ulong)local_47) * 4;
    *(uint *)(lVar5 + lVar7) =
         (int)((ulong)(lVar6 - local_80) >> 3) * -0x33333333 << (ulong)(local_45 & 0x1f) |
         *(uint *)(lVar5 + lVar7) & (local_44 ^ 0xffffffff);
    uVar10 = 1;
  }
  if (local_80 != 0) {
    lVar6 = local_78;
    if (local_78 == local_80) {
      lVar6 = local_80;
    }
    else {
      do {
        plVar2 = (long *)(lVar6 + -0x10);
        lVar6 = lVar6 + -0x28;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 0x20))();
        }
      } while (lVar8 != lVar6);
      lVar6 = local_80;
    }
    local_78 = lVar8;
    uVar4 = (**(code **)(*plStack_68 + 0xc0))(plStack_68);
    if ((uVar4 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plStack_68,lVar6,local_70 - lVar6,8);
        goto joined_r0x02b62804;
      }
    }
    (**(code **)(*plStack_68 + 0x18))(plStack_68,lVar6,local_70 - lVar6,8);
  }
joined_r0x02b62804:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return uVar10;
}


