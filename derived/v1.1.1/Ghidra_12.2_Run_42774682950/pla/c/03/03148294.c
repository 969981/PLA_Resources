/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148294; name: FUN_03148294
 */


undefined8 FUN_03148294(long param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  lVar3 = (long)*(int *)(param_1 + 0x58) + -1;
  uVar4 = *puVar2;
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 != 0) {
    *puVar2 = puVar2[lVar3];
  }
  iVar1 = (**(code **)(*param_2 + 0x100))(param_2,uVar4);
  if (iVar1 != 0) {
    fVar5 = (float)(**(code **)(*param_2 + 0x128))(param_2,uVar4);
    (**(code **)(*param_2 + 0x208))(fVar5 * 64.0,param_2,uVar4,0);
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return uVar4;
}


