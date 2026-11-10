/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c4a60; name: FUN_010c4a60
 */


void FUN_010c4a60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  
  lVar2 = FUN_0024eda0(param_2);
  if (lVar2 == 0) {
    fVar5 = 1.0;
  }
  else {
    plVar3 = (long *)FUN_0024eda0(param_2);
    iVar1 = (**(code **)(*plVar3 + 0x20))();
    fVar5 = (float)iVar1;
  }
  lVar2 = FUN_002443dc(param_2,&DAT_0391dd0c);
  if ((lVar2 != 0) || (lVar2 = FUN_002443dc(param_2,"g2d_fw"), lVar2 != 0)) {
    fVar5 = *(float *)(lVar2 + (ulong)*(uint *)(lVar2 + 4));
  }
  if ((param_2 != 0) && (lVar2 = FUN_002443dc(param_2,&DAT_039134da), lVar2 == 0)) {
    FUN_002443dc(param_2,"no_short");
  }
  uVar4 = FUN_0024eda0(param_2);
  FUN_010c4570(fVar5,param_1,uVar4,param_4);
  return;
}


