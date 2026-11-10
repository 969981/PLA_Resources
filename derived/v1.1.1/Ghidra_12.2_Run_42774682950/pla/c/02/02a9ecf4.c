/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9ecf4; name: FUN_02a9ecf4
 */


undefined8 FUN_02a9ecf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  puVar2 = PTR_DAT_0437a6b8;
  puVar1 = PTR_DAT_0437a6b0;
  plVar6 = (long *)*param_2;
  plVar9 = (long *)param_2[1];
  if (plVar6 == plVar9) {
    return 0;
  }
  puVar10 = *(undefined8 **)*param_1;
  lVar8 = *plVar6;
  do {
    if (lVar8 != 0) {
      plVar4 = (long *)(*(code *)**(undefined8 **)(lVar8 + 8))((undefined8 *)(lVar8 + 8));
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar5 = FUN_009b19b4();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar1);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)puVar2) {
          if (*(long *)(lVar8 + 0x1b8) == *(long *)*puVar10) goto LAB_02a9edd0;
          break;
        }
      }
    }
    plVar6 = plVar6 + 1;
    if (plVar6 == plVar9) break;
    lVar8 = *plVar6;
  } while( true );
  plVar6 = plVar9;
LAB_02a9edd0:
  plVar9 = (long *)param_2[1];
  if (plVar9 == plVar6) {
    return 0;
  }
  plVar4 = plVar6;
  if (plVar6 + 1 != plVar9) {
    do {
      plVar6 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      plVar6 = plVar4 + 1;
      lVar8 = *plVar6;
      *plVar6 = 0;
      plVar7 = plVar4 + 2;
      *plVar4 = lVar8;
      plVar4 = plVar6;
    } while (plVar7 != plVar9);
    plVar9 = (long *)param_2[1];
    if (plVar9 == plVar6) goto LAB_02a9ee5c;
  }
  do {
    plVar9 = plVar9 + -1;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x18))();
    }
  } while (plVar6 != plVar9);
LAB_02a9ee5c:
  param_2[1] = plVar6;
  return 1;
}


