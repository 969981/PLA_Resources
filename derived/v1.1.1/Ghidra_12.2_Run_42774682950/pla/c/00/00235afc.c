/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00235afc; name: FUN_00235afc
 */


long FUN_00235afc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (**(code **)PTR_DAT_04372ba8)(0x70,0x10,*(undefined8 *)PTR_DAT_04372bb8);
  if (lVar1 != 0) {
    FUN_00231864(lVar1,param_2);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  lVar3 = plVar2[1];
  *(int *)(plVar2 + 1) = (int)lVar3 + 1;
  plVar2 = (long *)(*plVar2 + (long)(int)lVar3 * 0x30);
  *plVar2 = lVar1;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2 = plVar2 + 4;
  lVar3 = *plVar2;
  plVar4 = (long *)(param_1 + 0x38);
  *plVar2 = *plVar4;
  *(long **)(lVar3 + 8) = plVar4;
  *(long **)(*plVar4 + 8) = plVar2;
  *plVar4 = lVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return lVar1;
}


