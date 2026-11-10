/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6d310; name: FUN_02a6d310
 */


long FUN_02a6d310(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  
  uVar2 = *(ulong *)(param_1 + 0x450);
  lVar3 = *(long *)(param_1 + 0x418);
  plVar11 = (long *)(lVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x420) == lVar3) {
    lVar4 = *(long *)(param_1 + 0x458);
    plVar5 = (long *)0x0;
    plVar7 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x458);
    plVar5 = (long *)(*plVar11 + (uVar2 & 0x1ff) * 8);
    plVar7 = (long *)(*(long *)(lVar3 + (lVar4 + uVar2 >> 6 & 0x3fffffffffffff8)) +
                     (lVar4 + uVar2 & 0x1ff) * 8);
  }
  uVar1 = 1 << (ulong)(*(uint *)(param_2 + 0xc) & 0x1f);
  if (plVar7 != plVar5) {
    uVar6 = 0;
    lVar12 = param_1 + 0x410;
    plVar8 = plVar11;
    do {
      if (*(uint *)(*plVar5 + 0x380) == 0 || (*(uint *)(*plVar5 + 0x380) & uVar1) != 0)
      goto LAB_02a6d550;
      plVar5 = plVar5 + 1;
      if ((long)plVar5 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        plVar5 = (long *)*plVar8;
      }
      uVar6 = uVar6 + 1;
    } while (plVar7 != plVar5);
  }
  uVar2 = *(ulong *)(param_1 + 0x4c0);
  lVar3 = *(long *)(param_1 + 0x488);
  plVar11 = (long *)(lVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x490) != lVar3) {
    lVar4 = *(long *)(param_1 + 0x4c8);
    plVar5 = (long *)(*plVar11 + (uVar2 & 0x1ff) * 8);
    plVar7 = (long *)(*(long *)(lVar3 + (lVar4 + uVar2 >> 6 & 0x3fffffffffffff8)) +
                     (lVar4 + uVar2 & 0x1ff) * 8);
    if (plVar7 != plVar5) {
      uVar6 = 0;
      lVar12 = param_1 + 0x480;
      plVar8 = plVar11;
      do {
        if (*(uint *)(*plVar5 + 0x380) == 0 || (*(uint *)(*plVar5 + 0x380) & uVar1) != 0)
        goto LAB_02a6d550;
        plVar5 = plVar5 + 1;
        if ((long)plVar5 - *plVar8 == 0x1000) {
          plVar8 = plVar8 + 1;
          plVar5 = (long *)*plVar8;
        }
        uVar6 = uVar6 + 1;
      } while (plVar7 != plVar5);
    }
  }
  uVar2 = *(ulong *)(param_1 + 0x530);
  lVar3 = *(long *)(param_1 + 0x4f8);
  plVar11 = (long *)(lVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x500) != lVar3) {
    lVar4 = *(long *)(param_1 + 0x538);
    plVar5 = (long *)(*plVar11 + (uVar2 & 0x1ff) * 8);
    plVar7 = (long *)(*(long *)(lVar3 + (lVar4 + uVar2 >> 6 & 0x3fffffffffffff8)) +
                     (lVar4 + uVar2 & 0x1ff) * 8);
    if (plVar7 != plVar5) {
      uVar6 = 0;
      lVar12 = param_1 + 0x4f0;
      plVar8 = plVar11;
      do {
        if (*(uint *)(*plVar5 + 0x380) == 0 || (*(uint *)(*plVar5 + 0x380) & uVar1) != 0)
        goto LAB_02a6d550;
        plVar5 = plVar5 + 1;
        if ((long)plVar5 - *plVar8 == 0x1000) {
          plVar8 = plVar8 + 1;
          plVar5 = (long *)*plVar8;
        }
        uVar6 = uVar6 + 1;
      } while (plVar7 != plVar5);
    }
  }
  return 0;
LAB_02a6d550:
  lVar9 = *plVar5;
  if (uVar6 != 0) {
    *(undefined8 *)
     (*(long *)(lVar3 + (uVar2 + uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar2 + uVar6 & 0x1ff) * 8) =
         *(undefined8 *)(*plVar11 + (uVar2 & 0x1ff) * 8);
    uVar2 = *(ulong *)(lVar12 + 0x40);
    lVar4 = *(long *)(lVar12 + 0x48);
  }
  *(ulong *)(lVar12 + 0x40) = uVar2 + 1;
  *(long *)(lVar12 + 0x48) = lVar4 + -1;
  if (uVar2 + 1 < 0x400) {
    return lVar9;
  }
  plVar11 = *(long **)(lVar12 + 0x50);
  uVar10 = **(undefined8 **)(lVar12 + 8);
  uVar2 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar2 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar11,uVar10,0x1000,8);
      goto LAB_02a6d614;
    }
  }
  (**(code **)(*plVar11 + 0x18))(plVar11,uVar10,0x1000,8);
LAB_02a6d614:
  *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 8;
  *(long *)(lVar12 + 0x40) = *(long *)(lVar12 + 0x40) + -0x200;
  return lVar9;
}


