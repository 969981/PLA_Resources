/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d083ec; name: FUN_00d083ec
 */


long FUN_00d083ec(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  
  puVar8 = PTR_DAT_04379f50;
  puVar7 = PTR_DAT_04379f48;
  puVar6 = PTR_DAT_04379e90;
  puVar5 = PTR_DAT_043795e0;
  puVar4 = PTR_DAT_043795d8;
  puVar3 = PTR_DAT_043794d8;
  puVar2 = PTR_DAT_043794d0;
  plVar13 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar13 != plVar1) {
    do {
      if (*plVar13 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar13 + 8))();
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*PTR_DAT_04379e88 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar9 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
              if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar2), iVar9 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)puVar3 = uVar12;
                __cxa_guard_release(puVar2);
              }
              *(undefined **)puVar5 = puVar3;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar6 = puVar5;
            __cxa_guard_release(PTR_DAT_04379e88);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar8) goto LAB_00d0847c;
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
    plVar13 = plVar1;
  }
LAB_00d0847c:
  if (plVar13 == (long *)param_1[1]) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*plVar13 != 0) {
      lVar11 = *plVar13 + -0x48;
    }
  }
  return lVar11;
}


