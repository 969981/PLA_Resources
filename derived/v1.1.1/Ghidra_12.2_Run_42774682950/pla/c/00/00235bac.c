/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00235bac; name: FUN_00235bac
 */


long FUN_00235bac(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar2 = (**(code **)PTR_DAT_04372ba8)(0x1d0,0x10,*(undefined8 *)PTR_DAT_04372bb8);
  if (lVar2 != 0) {
    FUN_00263560(lVar2,param_2);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar3 + 0x18);
  *(int *)(lVar3 + 0x18) = iVar1 + 1;
  plVar4 = (long *)(*(long *)(lVar3 + 0x10) + (long)iVar1 * 0x18);
  plVar5 = plVar4 + 1;
  *plVar4 = lVar2;
  lVar3 = *plVar5;
  plVar4 = (long *)(param_1 + 0x50);
  *plVar5 = *plVar4;
  *(long **)(lVar3 + 8) = plVar4;
  *(long **)(*plVar4 + 8) = plVar5;
  *plVar4 = lVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return lVar2;
}


