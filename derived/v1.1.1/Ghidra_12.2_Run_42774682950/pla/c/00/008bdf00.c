/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bdf00; name: FUN_008bdf00
 */


void FUN_008bdf00(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  void *__src;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  undefined8 *puStack_68;
  
  pvVar9 = (void *)param_1[2];
  if (pvVar9 == (void *)param_1[3]) {
    pvVar4 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar4 || (long)__src - (long)pvVar4 == 0) {
      puVar10 = (undefined8 *)param_1[4];
      local_70 = 0;
      lVar1 = (long)param_1[3] - (long)pvVar4;
      uVar7 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar7 = 1;
      }
      puStack_68 = puVar10;
      uVar6 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,uVar7 << 3,8);
      if (uVar6 == 0) {
        (**(code **)(*(long *)*puVar10 + 0xb8))();
      }
      uVar2 = uVar6 + (uVar7 >> 2) * 8;
      uVar3 = uVar6 + uVar7 * 8;
      uVar7 = param_1[1];
      uVar5 = param_1[2];
      uVar11 = uVar2;
      local_88 = uVar6;
      uStack_80 = uVar2;
      local_78 = uVar2;
      local_70 = uVar3;
      if (uVar7 == uVar5) {
        local_78 = uVar7;
      }
      else {
        do {
          FUN_008be37c(puVar10,uVar11,uVar7);
          uVar7 = uVar7 + 8;
          uVar11 = uVar11 + 8;
        } while (uVar5 != uVar7);
        uVar7 = param_1[1];
        local_78 = param_1[2];
      }
      local_88 = *param_1;
      *param_1 = uVar6;
      param_1[1] = uVar2;
      local_70 = param_1[3];
      param_1[2] = uVar11;
      param_1[3] = uVar3;
      uStack_80 = uVar7;
      FUN_008be224(&local_88);
      pvVar9 = (void *)param_1[2];
    }
    else {
      lVar8 = (long)__src - (long)pvVar4 >> 3;
      lVar1 = lVar8 + 2;
      if (-1 < lVar8 + 1) {
        lVar1 = lVar8 + 1;
      }
      __n = (long)pvVar9 - (long)__src;
      pvVar9 = (void *)((long)__src + (lVar1 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar9,__src,__n);
        __src = (void *)param_1[1];
      }
      pvVar9 = (void *)((long)pvVar9 + ((long)__n >> 3) * 8);
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -8);
      param_1[2] = (ulong)pvVar9;
    }
  }
  FUN_008be37c(param_1[4],pvVar9,param_2);
  param_1[2] = param_1[2] + 8;
  return;
}


