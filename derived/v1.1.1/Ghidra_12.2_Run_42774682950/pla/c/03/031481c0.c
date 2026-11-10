/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031481c0; name: FUN_031481c0
 */


void FUN_031481c0(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = *(int *)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x50);
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_02f6b138(PTR_PTR_0434a080,iVar1);
    *(long *)(param_1 + 0x50) = lVar2;
    iVar3 = *(int *)(param_1 + 0x58);
  }
  *(undefined8 *)(lVar2 + (long)iVar3 * 8) = param_2;
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = (**(code **)(*param_3 + 0x100))(param_3,param_2);
  if (iVar1 != 0) {
    fVar4 = (float)(**(code **)(*param_3 + 0x128))(param_3,param_2);
    (**(code **)(*param_3 + 0x208))(fVar4 * 0.015625,param_3,param_2,0);
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}


