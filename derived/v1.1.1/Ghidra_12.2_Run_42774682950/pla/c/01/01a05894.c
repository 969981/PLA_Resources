/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a05894; name: FUN_01a05894
 */


undefined8 FUN_01a05894(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  puVar5 = PTR_DAT_0437a130;
  puVar4 = PTR_DAT_0437a128;
  puVar3 = PTR_DAT_043795e0;
  puVar2 = PTR_DAT_043794d8;
  puVar1 = PTR_DAT_043794d0;
  plVar8 = (long *)*param_2;
  plVar12 = (long *)param_2[1];
  if (plVar8 == plVar12) {
    return 0;
  }
  puVar13 = *(undefined8 **)*param_1;
  do {
    lVar11 = *plVar8;
    if (lVar11 != 0) {
      plVar7 = (long *)(*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar6 != 0)) {
          if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar1), iVar6 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)puVar2 = uVar9;
            __cxa_guard_release(puVar1);
          }
          *(undefined **)puVar3 = puVar2;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar5 = puVar3;
        __cxa_guard_release(puVar4);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar5) {
          if (*(long *)*puVar13 == lVar11 + -0x48) goto LAB_01a05944;
          break;
        }
      }
    }
    plVar8 = plVar8 + 1;
  } while (plVar8 != plVar12);
  plVar8 = plVar12;
LAB_01a05944:
  plVar12 = (long *)param_2[1];
  if (plVar12 == plVar8) {
    return 0;
  }
  plVar7 = plVar8;
  if (plVar8 + 1 != plVar12) {
    do {
      plVar8 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      plVar8 = plVar7 + 1;
      lVar11 = *plVar8;
      *plVar8 = 0;
      plVar10 = plVar7 + 2;
      *plVar7 = lVar11;
      plVar7 = plVar8;
    } while (plVar10 != plVar12);
    plVar12 = (long *)param_2[1];
    if (plVar12 == plVar8) goto LAB_01a059dc;
  }
  plVar12 = plVar12 + -1;
  if ((long *)*plVar12 != (long *)0x0) {
    (**(code **)(*(long *)*plVar12 + 0x18))();
  }
  while (plVar12 != plVar8) {
    plVar12 = plVar12 + -1;
    if ((long *)*plVar12 != (long *)0x0) {
      (**(code **)(*(long *)*plVar12 + 0x18))();
    }
  }
LAB_01a059dc:
  param_2[1] = plVar8;
  return 1;
}


