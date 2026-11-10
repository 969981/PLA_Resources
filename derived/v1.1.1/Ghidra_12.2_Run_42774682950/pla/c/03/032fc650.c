/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fc650; name: FUN_032fc650
 */


void FUN_032fc650(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar6;
  }
  plVar2 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,8,0);
  *puVar3 = &PTR_LAB_0434d8c8;
  puVar7 = (uint *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 8);
  iVar1 = iVar5 + 1;
  if ((int)(*puVar7 & 0x3fffffff) <= iVar5) {
    lVar6 = FUN_032fbbfc(PTR_PTR_0434a080,iVar1,lVar6,iVar5,puVar7);
    iVar5 = *(int *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar6;
  }
  *(undefined8 **)(lVar6 + (long)iVar5 * 8) = puVar3;
  *(int *)(param_1 + 0x10) = iVar1;
  lVar6 = *(long *)(lVar4 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar6;
  }
  plVar2 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x10,0);
  *puVar3 = &PTR_LAB_0434d8f8;
  *(undefined1 *)(puVar3 + 1) = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 8);
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) <= iVar5) {
    lVar6 = FUN_032fbbfc(PTR_PTR_0434a080,iVar1,lVar6,iVar5,puVar7);
    iVar5 = *(int *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar6;
  }
  *(undefined8 **)(lVar6 + (long)iVar5 * 8) = puVar3;
  *(int *)(param_1 + 0x10) = iVar1;
  lVar6 = *(long *)(lVar4 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar6;
  }
  plVar2 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,8,0);
  *puVar3 = &PTR_LAB_0434d898;
  iVar5 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 8);
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) <= iVar5) {
    lVar4 = FUN_032fbbfc(PTR_PTR_0434a080,iVar1,lVar4,iVar5,puVar7);
    iVar5 = *(int *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar4;
  }
  *(undefined8 **)(lVar4 + (long)iVar5 * 8) = puVar3;
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}


