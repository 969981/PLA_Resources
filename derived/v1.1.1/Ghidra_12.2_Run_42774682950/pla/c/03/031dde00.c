/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dde00; name: FUN_031dde00
 */


void FUN_031dde00(undefined8 param_1,long param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int local_40 [2];
  int local_38 [2];
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar4 = *(long *)(param_2 + 0x20);
    lVar3 = lVar4;
  }
  else {
    lVar3 = FUN_02898b44();
    lVar4 = *(long *)(param_2 + 0x20);
  }
  piVar1 = (int *)(*(long *)(lVar3 + 0xd0) + (long)*param_3 * 0x10);
  iVar2 = *(int *)(lVar4 + 0x30);
  local_38[0] = *piVar1 - iVar2;
  FUN_031ddec0(param_1,lVar3,local_38,(long)(short)piVar1[2]);
  if (*(short *)((long)piVar1 + 10) != 0) {
    local_40[0] = piVar1[1] - iVar2;
    FUN_031ddec0(param_1,lVar3,local_40);
  }
  return;
}


