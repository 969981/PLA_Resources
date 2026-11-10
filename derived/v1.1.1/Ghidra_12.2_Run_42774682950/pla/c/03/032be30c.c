/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032be30c; name: FUN_032be30c
 */


void FUN_032be30c(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  *param_1 = param_2;
  param_1[1] = param_1 + 3;
  param_1[2] = 0x8000000800000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  if (7 < (int)uVar2) {
    uVar2 = 8;
  }
  *(uint *)((long)param_1 + 0x5c) = uVar2;
  if ((int)(*(uint *)((long)param_1 + 0x14) & 0x3fffffff) < (int)uVar2) {
    uVar4 = (*(uint *)((long)param_1 + 0x14) & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar4) {
      uVar4 = 0x3fffffff;
    }
    uVar1 = uVar2;
    if ((int)uVar2 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    uVar3 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,param_1[1],*(undefined4 *)(param_1 + 2),
                         (long)param_1 + 0x14);
    param_1[1] = uVar3;
  }
  if (*(uint *)(param_1 + 2) != uVar2) {
    *(uint *)(param_1 + 2) = uVar2;
  }
  return;
}


