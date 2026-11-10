/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00575a30; name: FUN_00575a30
 */


undefined8 FUN_00575a30(void *param_1,ulong *param_2,undefined8 *param_3)

{
  void *__dest;
  uint *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  size_t sVar4;
  void *__src;
  ulong __n;
  size_t sVar5;
  
  if (*(int *)(param_3 + 4) != 0) {
    return 7;
  }
  sVar4 = *param_2;
  puVar1 = (uint *)*param_3;
  if (puVar1 == (uint *)0x0) {
    param_3[2] = 0x40;
    puVar1 = (uint *)FUN_002ebd50(0x40);
    *param_3 = puVar1;
    uVar3 = param_3[3];
  }
  else {
    uVar3 = param_3[3];
  }
  if (uVar3 < 4) {
    __n = 4 - uVar3;
    sVar5 = sVar4 - __n;
    if (sVar4 < __n) {
      memcpy((void *)((long)puVar1 + uVar3),param_1,sVar4);
      param_3[3] = param_3[3] + sVar4;
      *param_2 = sVar4;
      return 4;
    }
    memcpy((void *)((long)puVar1 + uVar3),param_1,__n);
    puVar1 = (uint *)*param_3;
    param_3[3] = param_3[3] + __n;
    uVar3 = (ulong)*puVar1;
    __src = (void *)((long)param_1 + __n);
    param_3[1] = uVar3;
    sVar4 = sVar5;
    if (puVar1 == (uint *)0x0) {
      param_3[2] = uVar3;
      puVar1 = (uint *)FUN_002ebd50(uVar3);
      *param_3 = puVar1;
    }
    else if ((ulong)param_3[2] < uVar3) {
      puVar1 = (uint *)FUN_002ebdc0();
      *param_3 = puVar1;
      param_3[2] = param_3[1];
    }
  }
  else {
    __src = param_1;
  }
  sVar5 = param_3[1] - param_3[3];
  __dest = (void *)((long)puVar1 + param_3[3]);
  if (sVar4 < sVar5) {
    memcpy(__dest,__src,sVar4);
    param_3[3] = param_3[3] + sVar4;
    *param_2 = (long)__src + (sVar4 - (long)param_1);
    uVar2 = 4;
  }
  else {
    memcpy(__dest,__src,sVar5);
    uVar2 = 0;
    *param_2 = (long)__src + (sVar5 - (long)param_1);
    param_3[3] = 0;
    *(undefined4 *)(param_3 + 4) = 1;
  }
  return uVar2;
}


