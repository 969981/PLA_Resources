/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325f7a4; name: FUN_0325f7a4
 */


undefined8 FUN_0325f7a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar2;
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38d490) + 0x10);
  }
  if (lVar3 != 0) {
    FUN_032d5af0(lVar3,"TtaddSilhouette",0xf);
  }
  iVar1 = *(int *)(param_1 + 0x150);
  *(undefined8 *)(*(long *)(param_1 + 0x148) + (long)iVar1 * 8) = param_4;
  *(int *)(param_1 + 0x150) = iVar1 + 1;
  FUN_03262c80(param_1,param_2,param_3);
  if (lVar3 != 0) {
    FUN_032d5b34(lVar3,&DAT_0390f40e);
  }
  return 1;
}


