/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b62e7c; name: FUN_02b62e7c
 */


undefined8 FUN_02b62e7c(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  undefined1 auStack_a0 [24];
  long *local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long *plStack_68;
  byte local_46;
  byte local_45;
  uint local_44;
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x58) + 0x80);
  plVar3 = *(long **)(*(long *)(param_1 + 0x58) + 0x88);
  plVar6 = plVar8;
  if (plVar8 != plVar3) {
    lVar5 = *plVar8;
    while (lVar5 != *param_2) {
      plVar6 = plVar6 + 0xc;
      if (plVar3 == plVar6) {
        return 0;
      }
      lVar5 = *plVar6;
    }
  }
  if (plVar3 == plVar6) {
    return 0;
  }
  FUN_02b5e3b4(auStack_a0,
               plVar8 + (long)((int)((ulong)((long)plVar6 - (long)plVar8) >> 5) * -0x55555555) * 0xc
              );
  lVar5 = *param_3;
  plVar8 = (long *)param_3[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar3 = local_80;
  if (local_80 == local_78) {
    if (local_78 != local_80) goto LAB_02b62f54;
LAB_02b62fec:
    bVar1 = false;
    iVar9 = 0;
  }
  else {
    if (*local_80 != lVar5) {
      do {
        plVar3 = plVar3 + 5;
        if (local_78 == plVar3) goto LAB_02b62fec;
      } while (*plVar3 != lVar5);
    }
    if (local_78 == plVar3) goto LAB_02b62fec;
LAB_02b62f54:
    iVar9 = (int)((ulong)((long)plVar3 - (long)local_80) >> 3) * -0x33333333;
    bVar1 = true;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  plVar8 = local_80;
  if (bVar1) {
    lVar5 = *(long *)(param_1 + 0x60);
    if ((ulong)(*(long *)(param_1 + 0x68) - lVar5 >> 2) <= (ulong)local_46) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar4 = (ulong)local_46 * 4;
    uVar7 = 1;
    *(uint *)(lVar5 + lVar4) =
         iVar9 << (ulong)(local_45 & 0x1f) | *(uint *)(lVar5 + lVar4) & (local_44 ^ 0xffffffff);
  }
  else {
    uVar7 = 0;
  }
  if (local_80 != (long *)0x0) {
    plVar3 = local_78;
    if (local_78 == local_80) {
      plVar3 = local_80;
    }
    else {
      do {
        plVar6 = plVar3 + -2;
        plVar3 = plVar3 + -5;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x20))();
        }
      } while (plVar8 != plVar3);
      plVar3 = local_80;
    }
    local_78 = plVar8;
    uVar2 = (**(code **)(*plStack_68 + 0xc0))(plStack_68);
    if ((uVar2 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plStack_68,plVar3,local_70 - (long)plVar3,8);
        goto joined_r0x02b630cc;
      }
    }
    (**(code **)(*plStack_68 + 0x18))(plStack_68,plVar3,local_70 - (long)plVar3,8);
  }
joined_r0x02b630cc:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return uVar7;
}


