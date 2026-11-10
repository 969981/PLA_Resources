/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f3f0; name: FUN_0315f3f0
 */


undefined8 FUN_0315f3f0(undefined4 param_1,long param_2,int param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(*(long *)(param_2 + 0x18) + (long)param_3 * 0x18);
  iVar2 = FUN_0315f4c4(plVar4);
  lVar5 = *plVar4;
  plVar4 = (long *)(lVar5 + (long)iVar2 * 0x18);
  iVar1 = *(int *)(param_2 + 0x328);
  *(int *)(param_2 + 0x328) = iVar1 + 1;
  if (param_4 != 0) {
    FUN_032d645c(param_4);
  }
  lVar3 = *plVar4;
  *plVar4 = param_4;
  if (lVar3 != 0) {
    FUN_032d647c();
  }
  lVar5 = lVar5 + (long)iVar2 * 0x18;
  *(undefined4 *)(lVar5 + 0xc) = param_5;
  *(int *)(lVar5 + 0x10) = iVar1;
  *(undefined4 *)(lVar5 + 8) = param_1;
  return CONCAT44(iVar2,param_3);
}


