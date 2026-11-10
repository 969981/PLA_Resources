/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a86478; name: FUN_02a86478
 */


void FUN_02a86478(locale *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  plVar3 = DAT_043f1798;
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        *(long **)(lVar2 + 0x20) = DAT_043f1798;
        plVar6 = plVar3;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      uVar8 = *puVar7;
      *puVar5 = &PTR_LAB_0427f388;
      puVar5[1] = uVar8;
      *(char *)(puVar5 + 2) = (char)param_2;
      goto LAB_02a8660c;
    }
    if (plVar6 == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar5 = &PTR_LAB_0427f358;
    puVar5[1] = uVar8;
    std::locale::locale((locale *)(puVar5 + 2),param_1);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(char *)(puVar5 + 5) = (char)param_2;
    puVar5[3] = uVar8;
    puVar5[4] = uVar1;
  }
  else {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar5 = &PTR_LAB_0427f328;
    puVar5[1] = uVar8;
    std::locale::locale((locale *)(puVar5 + 2),param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puVar5[3] = *(undefined8 *)(param_1 + 8);
    puVar5[4] = uVar8;
    uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_2);
    *(undefined1 *)(puVar5 + 5) = uVar4;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_02a8660c:
  *puVar7 = puVar5;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  return;
}


