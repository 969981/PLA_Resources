/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d82744; name: FUN_00d82744
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00d82744(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  puVar8 = PTR_DAT_0437a880;
  puVar7 = PTR_DAT_0437a878;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043795d8;
  puVar4 = PTR_DAT_043794d8;
  puVar3 = PTR_DAT_043794d0;
  plVar12 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar12 != plVar2) {
    puVar13 = *(undefined8 **)*param_1;
    do {
      if (*plVar12 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            if (((*puVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar3), iVar9 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar4 = uVar11;
              __cxa_guard_release(puVar3);
            }
            *(undefined **)puVar6 = puVar4;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar8) {
            *(int *)*puVar13 = *(int *)*puVar13 + 1;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
    if (plVar2 != (long *)param_2[1]) {
      lVar1 = 0;
      if (*plVar2 != 0) {
        lVar1 = *plVar2 + -0x48;
      }
      return lVar1;
    }
  }
  return 0;
}


