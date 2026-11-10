/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7d3b4; name: FUN_01b7d3b4
 */


bool FUN_01b7d3b4(long *param_1,long *param_2)

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
  long lVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_0437af78;
  puVar5 = PTR_DAT_0437af70;
  puVar4 = PTR_DAT_043795e0;
  puVar3 = PTR_DAT_043795d8;
  puVar2 = PTR_DAT_043794d8;
  puVar1 = PTR_DAT_043794d0;
  plVar12 = (long *)*param_2;
  plVar10 = (long *)param_2[1];
  lVar11 = *param_1;
  if (plVar12 != plVar10) {
    do {
      if (*plVar12 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
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
          if (plVar8 == (long *)puVar6) goto LAB_01b7d440;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar10);
    plVar12 = plVar10;
  }
LAB_01b7d440:
  plVar10 = (long *)param_2[1];
  if (plVar12 != plVar10) {
    (**(code **)(*(long *)*plVar12 + 0x70))();
    *(undefined1 *)(lVar11 + 0x123) = 1;
  }
  return plVar12 != plVar10;
}


