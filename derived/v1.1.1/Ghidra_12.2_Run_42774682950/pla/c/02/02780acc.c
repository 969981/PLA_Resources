/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780acc; name: FUN_02780acc
 */


void FUN_02780acc(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  size_t __n;
  void *pvVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  
  pvVar3 = (void *)param_1[2];
  if (pvVar3 == (void *)param_1[3]) {
    pvVar2 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar2 || (long)__src - (long)pvVar2 == 0) {
      lVar1 = (long)param_1[3] - (long)pvVar2;
      uVar4 = (lVar1 >> 3) * 0x5555555555555556;
      if (lVar1 == 0) {
        uVar4 = 1;
      }
      FUN_02764d14(&local_68,uVar4,uVar4 >> 2,param_1[4]);
      uVar4 = param_1[1];
      uVar8 = param_1[2];
      if (uVar4 == uVar8) {
        uVar8 = uVar4;
      }
      else {
        do {
          FUN_02764fa4(local_48,local_58,uVar4);
          uVar4 = uVar4 + 0x18;
          local_58 = local_58 + 0x18;
        } while (uVar8 != uVar4);
        uVar4 = param_1[1];
        uVar8 = param_1[2];
      }
      uVar7 = *param_1;
      *param_1 = local_68;
      param_1[1] = local_60;
      uVar5 = param_1[3];
      param_1[2] = local_58;
      param_1[3] = local_50;
      local_68 = uVar7;
      local_60 = uVar4;
      local_58 = uVar8;
      local_50 = uVar5;
      FUN_02764e4c(&local_68);
      pvVar3 = (void *)param_1[2];
    }
    else {
      lVar6 = ((long)__src - (long)pvVar2 >> 3) * -0x5555555555555555;
      lVar1 = lVar6 + 2;
      if (-1 < lVar6 + 1) {
        lVar1 = lVar6 + 1;
      }
      __n = (long)pvVar3 - (long)__src;
      pvVar3 = (void *)((long)__src + (lVar1 >> 1) * -0x18);
      if (__n != 0) {
        memmove(pvVar3,__src,__n);
        __src = (void *)param_1[1];
      }
      pvVar3 = (void *)((long)pvVar3 + ((long)__n >> 3) * 8);
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -0x18);
      param_1[2] = (ulong)pvVar3;
    }
  }
  FUN_02764bc8(param_1[4],pvVar3,param_2);
  param_1[2] = param_1[2] + 0x18;
  return;
}


