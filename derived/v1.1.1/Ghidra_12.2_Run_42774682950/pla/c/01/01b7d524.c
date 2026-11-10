/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7d524; name: FUN_01b7d524
 */


bool FUN_01b7d524(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  
  puVar6 = PTR_DAT_0437af78;
  puVar5 = PTR_DAT_0437af70;
  puVar4 = PTR_DAT_043795e0;
  puVar3 = PTR_DAT_043795d8;
  puVar2 = PTR_DAT_043794d8;
  puVar1 = PTR_DAT_043794d0;
  plVar10 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  if (plVar10 == plVar11) {
LAB_01b7d5a8:
    plVar11 = plVar10;
  }
  else {
    do {
      if (*plVar10 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar10 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
            if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar1), iVar7 != 0)) {
              uVar9 = FUN_0087f8f0();
              *(undefined8 *)puVar2 = uVar9;
              __cxa_guard_release(puVar1);
            }
            *(undefined **)puVar4 = puVar2;
            __cxa_guard_release(puVar3);
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(puVar5);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar6) goto LAB_01b7d5a8;
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar11);
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 != plVar11) {
    FUN_01b7d680(param_1,plVar11);
  }
  return plVar10 != plVar11;
}


