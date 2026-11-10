/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01495158; name: FUN_01495158
 */


void FUN_01495158(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  void *__src;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  __src = (void *)param_1[1];
  if (__src == (void *)*param_1) {
    uVar6 = param_1[2];
    uVar4 = param_1[3];
    if (uVar6 < uVar4) {
      lVar8 = (long)(uVar4 - uVar6) >> 3;
      lVar7 = lVar8 + 2;
      if (-1 < lVar8 + 1) {
        lVar7 = lVar8 + 1;
      }
      __n = uVar6 - (long)__src;
      pvVar9 = (void *)(uVar6 + (lVar7 >> 1) * 8);
      if (__n == 0) {
        __src = pvVar9;
      }
      else {
        pvVar9 = (void *)((long)pvVar9 - __n);
        memmove(pvVar9,__src,__n);
        uVar6 = param_1[2];
        __src = pvVar9;
      }
      param_1[1] = (long)__src;
      param_1[2] = uVar6 + (lVar7 >> 1) * 8;
    }
    else {
      plVar1 = param_1 + 4;
      local_70 = 0;
      lVar8 = uVar4 - *param_1;
      lVar7 = lVar8 >> 2;
      if (lVar8 == 0) {
        lVar7 = 1;
      }
      plStack_68 = plVar1;
      lVar8 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar7 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
      lVar2 = lVar8 + (lVar7 + 3U >> 2) * 8;
      lVar3 = lVar8 + lVar7 * 8;
      lVar7 = param_1[1];
      lVar5 = param_1[2];
      lVar10 = lVar2;
      local_88 = lVar8;
      lStack_80 = lVar2;
      local_78 = lVar2;
      local_70 = lVar3;
      if (lVar7 == lVar5) {
        local_78 = lVar7;
      }
      else {
        do {
          FUN_0149576c(plVar1,lVar10,lVar7);
          lVar7 = lVar7 + 8;
          lVar10 = lVar10 + 8;
        } while (lVar5 != lVar7);
        lVar7 = param_1[1];
        local_78 = param_1[2];
      }
      local_88 = *param_1;
      *param_1 = lVar8;
      param_1[1] = lVar2;
      local_70 = param_1[3];
      param_1[2] = lVar10;
      param_1[3] = lVar3;
      lStack_80 = lVar7;
      FUN_01495614(&local_88);
      __src = (void *)param_1[1];
    }
  }
  FUN_0149576c(param_1 + 4,(long)__src + -8,param_2);
  param_1[1] = param_1[1] + -8;
  return;
}


