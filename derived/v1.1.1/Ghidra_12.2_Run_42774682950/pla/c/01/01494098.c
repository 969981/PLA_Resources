/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01494098; name: FUN_01494098
 */


void FUN_01494098(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  void *__src;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  ulong *puStack_68;
  
  pvVar10 = (void *)param_1[2];
  if (pvVar10 == (void *)param_1[3]) {
    pvVar5 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar5 || (long)__src - (long)pvVar5 == 0) {
      puVar2 = param_1 + 4;
      local_70 = 0;
      lVar1 = (long)param_1[3] - (long)pvVar5;
      uVar8 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar8 = 1;
      }
      puStack_68 = puVar2;
      uVar7 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar8 << 3,4);
      if (uVar7 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
      uVar3 = uVar7 + (uVar8 >> 2) * 8;
      uVar4 = uVar7 + uVar8 * 8;
      uVar8 = param_1[1];
      uVar6 = param_1[2];
      uVar11 = uVar3;
      local_88 = uVar7;
      uStack_80 = uVar3;
      local_78 = uVar3;
      local_70 = uVar4;
      if (uVar8 == uVar6) {
        local_78 = uVar8;
      }
      else {
        do {
          FUN_01494838(puVar2,uVar11,uVar8);
          uVar8 = uVar8 + 8;
          uVar11 = uVar11 + 8;
        } while (uVar6 != uVar8);
        uVar8 = param_1[1];
        local_78 = param_1[2];
      }
      local_88 = *param_1;
      *param_1 = uVar7;
      param_1[1] = uVar3;
      local_70 = param_1[3];
      param_1[2] = uVar11;
      param_1[3] = uVar4;
      uStack_80 = uVar8;
      FUN_014946e0(&local_88);
      pvVar10 = (void *)param_1[2];
    }
    else {
      lVar9 = (long)__src - (long)pvVar5 >> 3;
      lVar1 = lVar9 + 2;
      if (-1 < lVar9 + 1) {
        lVar1 = lVar9 + 1;
      }
      __n = (long)pvVar10 - (long)__src;
      pvVar10 = (void *)((long)__src + (lVar1 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar10,__src,__n);
        __src = (void *)param_1[1];
      }
      pvVar10 = (void *)((long)pvVar10 + ((long)__n >> 3) * 8);
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -8);
      param_1[2] = (ulong)pvVar10;
    }
  }
  FUN_01494838(param_1 + 4,pvVar10,param_2);
  param_1[2] = param_1[2] + 8;
  return;
}


