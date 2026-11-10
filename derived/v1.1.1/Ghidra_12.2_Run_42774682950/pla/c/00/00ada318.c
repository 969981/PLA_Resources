/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ada318; name: FUN_00ada318
 */


undefined8 FUN_00ada318(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  
  puVar4 = PTR_DAT_0437a6f0;
  puVar3 = PTR_DAT_0437a6e8;
  plVar9 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar9 != plVar2) {
    lVar1 = *param_1;
    piVar10 = *(int **)param_1[1];
    do {
      lVar8 = *plVar9;
      if (lVar8 != 0) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 8))((undefined8 *)(lVar8 + 8));
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar7 = FUN_009aba24();
          *(undefined8 *)puVar4 = uVar7;
          __cxa_guard_release(puVar3);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar4) {
            if (*(int *)(lVar8 + 0x2d0) == *piVar10) goto LAB_00ada3b8;
            break;
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
    plVar9 = plVar2;
LAB_00ada3b8:
    if (plVar9 != (long *)param_2[1]) {
      (**(code **)(*(long *)*plVar9 + 0x70))();
      *(undefined1 *)(lVar1 + 0x123) = 1;
      return 1;
    }
  }
  return 0;
}


