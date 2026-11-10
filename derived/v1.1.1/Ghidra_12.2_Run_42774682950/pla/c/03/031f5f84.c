/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5f84; name: FUN_031f5f84
 */


void FUN_031f5f84(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  bVar2 = (*(byte *)(param_5 + 6) & 1) != 0;
  iVar1 = (int)((uint)*(byte *)(param_5 + 6) << 0x18) >> 0x19;
  iVar3 = 1;
  if (bVar2) {
    iVar3 = 2;
  }
  iVar4 = 1;
  if (!bVar2) {
    iVar4 = 2;
  }
  iVar3 = (iVar3 + iVar1) % 3;
  iVar1 = (iVar4 + iVar1) % 3;
  if (iVar3 == 0) {
    *param_5 = param_1;
  }
  else if (iVar3 == 1) {
    param_5[1] = param_1;
  }
  else if (iVar3 == 2) {
    param_5[2] = param_1;
  }
  else {
    param_5[3] = param_1;
  }
  if (iVar1 == 0) {
    pfVar5 = param_5;
  }
  else if (iVar1 == 1) {
    pfVar5 = param_5 + 1;
  }
  else if (iVar1 == 2) {
    pfVar5 = param_5 + 2;
  }
  else {
    pfVar5 = param_5 + 3;
  }
  *pfVar5 = param_2;
  param_5[4] = param_3 - param_1;
  param_5[5] = param_4 - param_2;
  return;
}


