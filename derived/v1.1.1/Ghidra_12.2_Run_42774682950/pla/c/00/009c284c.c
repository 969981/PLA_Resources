/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009c284c; name: FUN_009c284c
 */


long FUN_009c284c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  
  puVar7 = PTR_DAT_0437a3c0;
  puVar6 = PTR_DAT_0437a3b8;
  puVar5 = PTR_DAT_043795e0;
  puVar4 = PTR_DAT_043795d8;
  puVar3 = PTR_DAT_043794d8;
  puVar2 = PTR_DAT_043794d0;
  plVar12 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar12 != plVar1) {
    do {
      if (*plVar12 != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar3 = uVar11;
              __cxa_guard_release(puVar2);
            }
            *(undefined **)puVar5 = puVar3;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar7) goto LAB_009c28e8;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    plVar12 = plVar1;
  }
LAB_009c28e8:
  if (plVar12 == (long *)param_1[1]) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*plVar12 != 0) {
      lVar10 = *plVar12 + -0x48;
    }
  }
  return lVar10;
}


