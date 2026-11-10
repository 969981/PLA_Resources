/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147cbf0; name: FUN_0147cbf0
 */


undefined1  [16] FUN_0147cbf0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long *local_70;
  long lStack_68;
  
  plVar7 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x40) / 0x2e) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar6 = 0;
    if (param_3 != 0) goto LAB_0147cf14;
LAB_0147cc60:
    uVar4 = 0;
  }
  else {
    lVar6 = *plVar7 + (*(ulong *)(param_1 + 0x40) % 0x2e) * 0x58;
    if (param_3 == lVar6) goto LAB_0147cc60;
LAB_0147cf14:
    uVar4 = ((long)param_2 - (long)plVar7 >> 3) * 0x2e +
            (param_3 - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3 +
            (lVar6 - *plVar7 >> 3) * -0x2e8ba2e8ba2e8ba3;
  }
  local_70 = plVar7;
  lStack_68 = lVar6;
  FUN_0147f114(&local_70,uVar4);
  lVar1 = lStack_68;
  plVar2 = local_70;
  lVar8 = *(long *)(param_1 + 0x48);
  auVar9 = FUN_0147ef40(local_70,lStack_68);
  if (lVar8 - 1U >> 1 < uVar4) {
    uVar3 = *(long *)(param_1 + 0x40) + lVar8;
    plVar7 = (long *)(*(long *)(param_1 + 8) + (uVar3 / 0x2e) * 8);
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar7 + (uVar3 % 0x2e) * 0x58;
    }
    lVar6 = FUN_0147f010(auVar9._0_8_,auVar9._8_8_,plVar7,lVar6,plVar2,lVar1);
    if (*(long **)(lVar6 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 0x38) + 0x20))();
    }
    uVar3 = *(ulong *)(param_1 + 0x40);
    lVar1 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar1 + -1;
    lVar8 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = (lVar8 >> 3) * 0x2e + -1;
    }
    if ((lVar6 - (lVar1 + uVar3)) + 1 < 0x5c) goto LAB_0147ccdc;
    plVar7 = *(long **)(param_1 + 0x50);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) == 0) {
LAB_0147ce3c:
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar5,0xfd0,8);
    }
    else {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0147ce3c;
      FUN_02bcc824(plVar7,uVar5,0xfd0,8);
    }
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    uVar3 = *(ulong *)(param_1 + 0x40);
    goto LAB_0147ccdc;
  }
  FUN_0147ee00(plVar7,lVar6,plVar2,lVar1);
  if (*(long **)(lVar6 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0x38) + 0x20))();
  }
  uVar3 = *(long *)(param_1 + 0x40) + 1;
  *(ulong *)(param_1 + 0x40) = uVar3;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  if (uVar3 < 0x5c) goto LAB_0147ccdc;
  plVar7 = *(long **)(param_1 + 0x50);
  uVar5 = **(undefined8 **)(param_1 + 8);
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_0147ced0:
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar5,0xfd0,8);
  }
  else {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0147ced0;
    FUN_02bcc824(plVar7,uVar5,0xfd0,8);
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  uVar3 = *(long *)(param_1 + 0x40) - 0x2e;
  *(ulong *)(param_1 + 0x40) = uVar3;
LAB_0147ccdc:
  local_70 = (long *)(*(long *)(param_1 + 8) + (uVar3 / 0x2e) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lStack_68 = 0;
  }
  else {
    lStack_68 = *local_70 + (uVar3 % 0x2e) * 0x58;
  }
  FUN_0147f114(&local_70,uVar4);
  auVar9._8_8_ = lStack_68;
  auVar9._0_8_ = local_70;
  return auVar9;
}


