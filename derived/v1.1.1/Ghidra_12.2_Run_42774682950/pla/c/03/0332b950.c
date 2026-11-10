/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332b950; name: FUN_0332b950
 */


void FUN_0332b950(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  void *__s;
  uint uVar3;
  ulong uVar4;
  
  FUN_0332b928(param_1,0,1000,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar2 = PTR_PTR_0434a080;
  if ((int)param_2 < 1) {
    __s = (void *)0x0;
    uVar4 = 0;
    if (param_2 == 0) goto LAB_0332b9a8;
  }
  else {
    if ((int)param_2 < 0x40000000) {
      uVar3 = 0;
    }
    else {
      FUN_032bd0a8(param_2);
      uVar3 = (*(uint *)(param_1 + 0x3c) & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar3) {
        uVar3 = 0x3fffffff;
      }
    }
    uVar1 = param_2;
    if ((int)param_2 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    __s = (void *)FUN_032bd1d4(puVar2,uVar1,4,0,0);
    uVar4 = (ulong)*(uint *)(param_1 + 0x38);
    *(void **)(param_1 + 0x30) = __s;
    if (*(uint *)(param_1 + 0x38) == param_2) goto LAB_0332b9a8;
  }
  uVar4 = (ulong)param_2;
  *(uint *)(param_1 + 0x38) = param_2;
LAB_0332b9a8:
  if ((int)uVar4 != 0) {
    memset(__s,0xff,-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


