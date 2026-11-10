/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023270c; name: FUN_0023270c
 */


void FUN_0023270c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04372bb8;
  puVar1 = PTR_DAT_04372bb0;
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) goto LAB_00232770;
  if (*(long *)(lVar3 + 8) == 0) {
LAB_00232760:
    (**(code **)puVar1)(lVar3,*(undefined8 *)puVar2);
  }
  else {
    (**(code **)PTR_DAT_04372bb0)(*(long *)(lVar3 + 8),*(undefined8 *)PTR_DAT_04372bb8);
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) goto LAB_00232760;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_00232770:
  plVar4 = *(long **)(param_1 + 0x50);
  while (plVar4 != (long *)(param_1 + 0x48)) {
    plVar6 = (long *)plVar4[1];
    lVar3 = *plVar6;
    *(long **)(*plVar4 + 8) = plVar6;
    *plVar6 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *plVar4 = lVar3;
    plVar4 = *(long **)(param_1 + 0x50);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_0023049c(lVar3);
    (**(code **)puVar1)(lVar3,*(undefined8 *)puVar2);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((plVar4 != (long *)0x0) && ((*(byte *)(plVar4 + 0xb) >> 3 & 1) == 0)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)puVar1)(puVar5,*(undefined8 *)puVar2);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  while ((long *)(param_1 + 8) != plVar4) {
    plVar6 = (long *)plVar4[1];
    if ((long *)(param_1 + 8) != plVar4) {
      lVar3 = *plVar6;
      *(long **)(*plVar4 + 8) = plVar6;
      *plVar6 = *plVar4;
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
    }
    plVar4 = plVar4 + -1;
    (**(code **)(*plVar4 + 8))(plVar4);
    (**(code **)puVar1)(plVar4,*(undefined8 *)puVar2);
    plVar4 = plVar6;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


