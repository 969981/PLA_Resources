/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff1ae8; name: FUN_02ff1ae8
 */


void FUN_02ff1ae8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  FUN_02fd6728();
  *param_1 = &PTR_LAB_042b9878;
  puVar6 = param_1 + 9;
  *puVar6 = 0;
  iVar5 = *(int *)(param_2 + 0x50);
  *(int *)(param_1 + 10) = iVar5;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
    iVar5 = *(int *)(param_1 + 10);
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,(long)iVar5,0);
  lVar4 = *(long *)(param_2 + 0x48);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + param_2 + 0x48;
  }
  FUN_032c4a00(lVar3,lVar1,*(undefined4 *)(param_1 + 10));
  FUN_032dc190(lVar3,&DAT_042b99c0,1);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 - (long)puVar6;
  }
  *(long *)(lVar3 + 8) = (long)*(int *)(param_1 + 10);
  param_1[9] = lVar1;
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = lVar1 + (long)puVar6;
  }
  FUN_032d65d0(lVar3,1);
  return;
}


