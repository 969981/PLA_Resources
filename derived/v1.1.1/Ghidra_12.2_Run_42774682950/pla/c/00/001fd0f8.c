/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd0f8; name: FUN_001fd0f8
 */


void FUN_001fd0f8(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int **)(param_2 + 0x660) == (int *)0x0) {
    return;
  }
  if (**(int **)(param_2 + 0x660) != 1) {
    FUN_001fd0ac(param_1,param_2 + 0x4c8);
    FUN_001fd0ac(param_1,param_2 + 0x4a8);
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x66c);
  if ((bVar1 >> 1 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_001f26d0(param_1,param_2);
    bVar1 = *(byte *)(param_2 + 0x66c);
    uVar3 = uVar3 ^ 1;
  }
  if ((bVar1 >> 2 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_001f26f0(param_1,param_2);
    uVar2 = uVar2 ^ 1;
  }
  iVar4 = FUN_001fd0ac(param_1,param_2 + 0x4c8);
  if ((uVar3 & 1) == 0 && iVar4 != 0) {
    FUN_001f2788(param_2);
  }
  iVar4 = FUN_001fd0ac(param_1,param_2 + 0x4a8);
  if ((uVar2 & 1) == 0 && iVar4 != 0) {
    FUN_001f2374(param_2);
    return;
  }
  return;
}


