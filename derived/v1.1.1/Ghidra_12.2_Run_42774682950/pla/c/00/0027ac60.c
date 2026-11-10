/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027ac60; name: FUN_0027ac60
 */


long FUN_0027ac60(char *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  if (*param_1 == '\0') {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar6 = (long)param_2;
  if (*(char *)(lVar2 + (long)param_2 * 0x180) != '\0') goto LAB_0027ad84;
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x20) + lVar6 * 0x40;
  lVar5 = *(long *)(lVar2 + *(long *)(PTR_DAT_04372850 + 8));
  lVar3 = *(long *)(lVar2 + *(long *)(PTR_DAT_04372850 + 0x10));
  if (*(long *)(lVar2 + *(long *)PTR_DAT_04372850) == 0) {
    iVar1 = 3;
    if (lVar5 != 0) goto LAB_0027ad08;
LAB_0027acdc:
    uVar4 = 0;
    if (lVar3 != 0 && iVar1 != 0) {
LAB_0027ad28:
      FUN_0087ccc4(*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(param_1 + 0x18),lVar3);
      uVar4 = 2;
    }
  }
  else {
    iVar1 = FUN_0087ccc4(*(undefined8 *)(*(long *)(lVar2 + *(long *)PTR_DAT_04372850) + 0x68),
                         *(undefined8 *)(param_1 + 0x18));
    if (lVar5 == 0 || iVar1 == 0) goto LAB_0027acdc;
LAB_0027ad08:
    iVar1 = FUN_0087ccc4(*(undefined8 *)(lVar5 + 0x68),*(undefined8 *)(param_1 + 0x18),lVar5);
    uVar4 = 1;
    if (lVar3 != 0 && iVar1 != 0) goto LAB_0027ad28;
  }
  lVar3 = lVar6 * 0x180;
  FUN_0027a2bc(*(long *)(param_1 + 0x20) + lVar3);
  FUN_0027a2c4(*(long *)(param_1 + 0x20) + lVar3,lVar2,uVar4);
  FUN_0027a2ec(*(long *)(param_1 + 0x20) + lVar3);
  FUN_0027a5ac(*(long *)(param_1 + 0x20) + lVar3);
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_0027ad84:
  return lVar2 + lVar6 * 0x180;
}


