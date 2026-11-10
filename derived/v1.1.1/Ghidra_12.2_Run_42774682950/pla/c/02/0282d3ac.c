/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282d3ac; name: FUN_0282d3ac
 */


int FUN_0282d3ac(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = iVar3;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar2;
  }
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = param_2 / iVar1;
  }
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = param_2 / iVar2;
  }
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = param_2 / iVar3;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar5 = iVar6;
    iVar3 = iVar2;
  }
  fVar7 = (float)(int)(((uint)(param_2 != iVar4 * iVar1) - iVar3) + iVar5);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  return (int)fVar7;
}


