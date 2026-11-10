/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026d3088; name: FUN_026d3088
 */


void FUN_026d3088(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  size_t __n;
  void *__src;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  __src = (void *)param_1[1];
  if (__src == (void *)*param_1) {
    uVar5 = param_1[2];
    uVar3 = param_1[3];
    if (uVar5 < uVar3) {
      lVar7 = (long)(uVar3 - uVar5) >> 3;
      lVar6 = lVar7 + 2;
      if (-1 < lVar7 + 1) {
        lVar6 = lVar7 + 1;
      }
      __n = uVar5 - (long)__src;
      pvVar8 = (void *)(uVar5 + (lVar6 >> 1) * 8);
      if (__n == 0) {
        __src = pvVar8;
      }
      else {
        pvVar8 = (void *)((long)pvVar8 - __n);
        memmove(pvVar8,__src,__n);
        uVar5 = param_1[2];
        __src = pvVar8;
      }
      param_1[1] = (long)__src;
      param_1[2] = uVar5 + (lVar6 >> 1) * 8;
    }
    else {
      puVar9 = (undefined8 *)param_1[4];
      local_70 = 0;
      lVar7 = uVar3 - *param_1;
      lVar6 = lVar7 >> 2;
      if (lVar7 == 0) {
        lVar6 = 1;
      }
      puStack_68 = puVar9;
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar6 << 3,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*puVar9 + 0xb8))();
      }
      lVar1 = lVar7 + (lVar6 + 3U >> 2) * 8;
      lVar2 = lVar7 + lVar6 * 8;
      lVar6 = param_1[1];
      lVar4 = param_1[2];
      lVar10 = lVar1;
      local_88 = lVar7;
      lStack_80 = lVar1;
      local_78 = lVar1;
      local_70 = lVar2;
      if (lVar6 == lVar4) {
        local_78 = lVar6;
      }
      else {
        do {
          FUN_026d3370(puVar9,lVar10,lVar6);
          lVar6 = lVar6 + 8;
          lVar10 = lVar10 + 8;
        } while (lVar4 != lVar6);
        lVar6 = param_1[1];
        local_78 = param_1[2];
      }
      local_88 = *param_1;
      *param_1 = lVar7;
      param_1[1] = lVar1;
      local_70 = param_1[3];
      param_1[2] = lVar10;
      param_1[3] = lVar2;
      lStack_80 = lVar6;
      FUN_026d3220(&local_88);
      __src = (void *)param_1[1];
    }
  }
  FUN_026d3448(param_1[4],(long)__src + -8,param_2);
  param_1[1] = param_1[1] + -8;
  return;
}


