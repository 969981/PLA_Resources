/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016d6c; name: FUN_03016d6c
 */


undefined8 FUN_03016d6c(long *param_1,void *param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  void *__src;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  bVar3 = *(uint *)((long)param_1 + 0x24) < param_3;
  __src = (void *)*param_1;
  uVar6 = param_3;
  if ((!bVar3 && param_3 <= uVar1) && (bVar3 || uVar1 != param_3)) {
    do {
      if (*(char *)((long)__src + (long)(int)uVar6 * 0x70 + 0x38) != -1) {
        return 0x80040200;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  lVar10 = param_1[2];
  uVar6 = uVar1;
  if (param_3 <= uVar1) {
    uVar6 = param_3;
  }
  lVar2 = param_1[3];
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
    iVar5 = param_4;
    if (param_4 < 0x11) {
      iVar5 = 0x10;
    }
    iVar5 = iVar5 + param_3 * 0x70 + -0x10;
    *(int *)(param_1 + 3) = iVar5;
    lVar4 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,(long)iVar5,0);
    param_1[2] = lVar4;
    param_2 = (void *)(lVar4 + (param_4 + -1) & (long)-param_4);
  }
  else {
    param_1[2] = 0;
  }
  if (__src != (void *)0x0) {
    if (lVar10 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        if (param_2 != __src) {
          FUN_032c4af0(param_2,__src,uVar6 * 0x70);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)(uVar6 * 0x70));
        *(undefined4 *)(param_1 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
          FUN_032cf244(PTR_PTR_0434a080,*param_1,0x70,*(uint *)((long)param_1 + 0xc) & 0x3fffffff);
        }
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)(uVar6 * 0x70));
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar10,(long)(int)lVar2);
    }
  }
  *param_1 = (long)param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_3 | 0x80000000;
  if (uVar1 < param_3) {
    puVar9 = (undefined4 *)((long)param_2 + (long)(int)uVar1 * 0x70);
    *puVar9 = 0;
    FUN_03017c48(0x411cf5c3,puVar9,1);
    *(undefined1 *)(puVar9 + 0xe) = 0xff;
    uVar6 = uVar1;
    while (uVar6 = uVar6 + 1, uVar6 != param_3) {
      puVar9 = (undefined4 *)(*param_1 + (long)(int)uVar6 * 0x70);
      *puVar9 = 0;
      FUN_03017c48(0x411cf5c3,puVar9,1);
      *(undefined1 *)(puVar9 + 0xe) = 0xff;
    }
    uVar6 = uVar1;
    if ((param_3 - uVar1 & 1) != 0) {
      uVar6 = uVar1 + 1;
      *(uint *)(*param_1 + (long)(int)uVar1 * 0x70) = uVar6;
    }
    if (~uVar1 + param_3 != 0) {
      do {
        lVar10 = (long)(int)uVar6;
        iVar5 = uVar6 + 1;
        uVar6 = uVar6 + 2;
        *(int *)(*param_1 + lVar10 * 0x70) = iVar5;
        *(uint *)(*param_1 + (long)iVar5 * 0x70) = uVar6;
      } while (param_3 != uVar6);
    }
    *(undefined4 *)(*param_1 + (long)(int)(param_3 - 1) * 0x70) = 0xffffffff;
    uVar6 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 != 0) {
      uVar7 = uVar6 & 0xffffff;
      if (uVar7 == 0xffffff) {
        *(uint *)((long)param_1 + 0x1c) = uVar6 & 0xff000000 | uVar1 & 0xffffff;
        return 0;
      }
      do {
        puVar8 = (uint *)(*param_1 + (long)(int)uVar7 * 0x70);
        uVar7 = *puVar8;
      } while (uVar7 != 0xffffffff);
      *puVar8 = uVar1;
      return 0;
    }
    *(uint *)((long)param_1 + 0x1c) = uVar6 & 0xff000000;
  }
  else {
    FUN_0301791c(param_1);
  }
  return 0;
}


