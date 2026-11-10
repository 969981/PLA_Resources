/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8663c; name: FUN_02a8663c
 */


void FUN_02a8663c(locale *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  plVar2 = DAT_043f1798;
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    lVar6 = tpidr_el0;
    plVar4 = *(long **)(lVar6 + 0x20);
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = DAT_043f1798;
        plVar4 = plVar2;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      uVar7 = *puVar5;
      *puVar3 = &PTR_LAB_0427f418;
      puVar3[1] = uVar7;
      *(undefined4 *)(puVar3 + 2) = param_2;
      goto LAB_02a867a0;
    }
    if (plVar4 == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar4 = plVar2;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,8);
    lVar6 = *(long *)(param_1 + 0x38);
    ppuVar8 = &PTR_LAB_0427f3e8;
  }
  else {
    lVar6 = tpidr_el0;
    plVar4 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar4 = plVar2;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,8);
    lVar6 = *(long *)(param_1 + 0x38);
    ppuVar8 = &PTR_LAB_0427f3b8;
  }
  uVar7 = *(undefined8 *)(lVar6 + 8);
  *puVar3 = ppuVar8;
  puVar3[1] = uVar7;
  std::locale::locale((locale *)(puVar3 + 2),param_1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(puVar3 + 5) = param_2;
  puVar3[3] = uVar7;
  puVar3[4] = uVar1;
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_02a867a0:
  *puVar5 = puVar3;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  return;
}


