/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ada430; name: FUN_00ada430
 */


undefined8 FUN_00ada430(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  
  puVar2 = PTR_DAT_0437a6f0;
  puVar1 = PTR_DAT_0437a6e8;
  plVar9 = (long *)*param_2;
  plVar7 = (long *)param_2[1];
  if (plVar9 == plVar7) {
    return 0;
  }
  piVar10 = *(int **)*param_1;
  do {
    lVar6 = *plVar9;
    if (lVar6 != 0) {
      plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 8))((undefined8 *)(lVar6 + 8));
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar5 = FUN_009aba24();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar1);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)puVar2) {
          plVar4 = plVar9;
          if (*(int *)(lVar6 + 0x2d0) == *piVar10) goto LAB_00ada4d8;
          break;
        }
      }
    }
    plVar9 = plVar9 + 1;
    plVar4 = plVar7;
  } while (plVar9 != plVar7);
LAB_00ada4d8:
  plVar9 = (long *)param_2[1];
  if (plVar9 == plVar4) {
    return 0;
  }
  plVar7 = plVar4;
  if (plVar4 + 1 != plVar9) {
    do {
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      plVar4 = plVar7 + 1;
      lVar6 = *plVar4;
      *plVar4 = 0;
      plVar8 = plVar7 + 2;
      *plVar7 = lVar6;
      plVar7 = plVar4;
    } while (plVar8 != plVar9);
    plVar9 = (long *)param_2[1];
    if (plVar9 == plVar4) goto LAB_00ada52c;
  }
  plVar9 = plVar9 + -1;
  if ((long *)*plVar9 != (long *)0x0) {
    (**(code **)(*(long *)*plVar9 + 0x18))();
  }
  while (plVar9 != plVar4) {
    plVar9 = plVar9 + -1;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x18))();
    }
  }
LAB_00ada52c:
  param_2[1] = plVar4;
  return 1;
}


