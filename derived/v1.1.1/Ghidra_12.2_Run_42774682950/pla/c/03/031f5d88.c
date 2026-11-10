/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5d88; name: FUN_031f5d88
 */


void FUN_031f5d88(undefined8 *param_1,float *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  
  bVar2 = (*(byte *)(param_1 + 3) & 1) != 0;
  iVar1 = (int)((uint)*(byte *)(param_1 + 3) << 0x18) >> 0x19;
  iVar3 = 1;
  if (bVar2) {
    iVar3 = 2;
  }
  uVar6 = *param_1;
  iVar4 = 1;
  if (!bVar2) {
    iVar4 = 2;
  }
  *(undefined8 *)(param_2 + 2) = param_1[1];
  *(undefined8 *)param_2 = uVar6;
  iVar3 = (iVar3 + iVar1) % 3;
  iVar1 = (iVar4 + iVar1) % 3;
  if (iVar3 == 0) {
    pfVar5 = param_2;
  }
  else if (iVar3 == 1) {
    pfVar5 = param_2 + 1;
  }
  else if (iVar3 == 2) {
    pfVar5 = param_2 + 2;
  }
  else {
    pfVar5 = param_2 + 3;
  }
  *pfVar5 = *(float *)(param_1 + 2) + *pfVar5;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      param_2 = param_2 + 1;
    }
    else if (iVar1 == 2) {
      param_2 = param_2 + 2;
    }
    else {
      param_2 = param_2 + 3;
    }
  }
  *param_2 = *(float *)((long)param_1 + 0x14) + *param_2;
  return;
}


