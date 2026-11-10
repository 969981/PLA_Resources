/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03013d54; name: FUN_03013d54
 */


undefined8 FUN_03013d54(long *param_1,void *param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  void *__src;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  bVar3 = *(uint *)((long)param_1 + 0x24) < param_3;
  __src = (void *)*param_1;
  uVar8 = param_3;
  if ((!bVar3 && param_3 <= uVar1) && (bVar3 || uVar1 != param_3)) {
    do {
      if (0.0 <= *(float *)((long)__src + (long)(int)uVar8 * 0x50 + 0x28)) {
        return 0x80040200;
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  lVar10 = param_1[2];
  uVar8 = uVar1;
  if (param_3 <= uVar1) {
    uVar8 = param_3;
  }
  lVar2 = param_1[3];
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
    iVar5 = param_4;
    if (param_4 < 0x11) {
      iVar5 = 0x10;
    }
    iVar5 = iVar5 + param_3 * 0x50 + -0x10;
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
          FUN_032c4af0(param_2,__src,uVar8 * 0x50);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)(uVar8 * 0x50));
        *(undefined4 *)(param_1 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
          FUN_032cf244(PTR_PTR_0434a080,*param_1,0x50,*(uint *)((long)param_1 + 0xc) & 0x3fffffff);
        }
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)(uVar8 * 0x50));
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar10,(long)(int)lVar2);
    }
  }
  *param_1 = (long)param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_3 | 0x80000000;
  if (uVar1 < param_3) {
    uVar8 = uVar1;
    while( true ) {
      puVar9 = (undefined8 *)((long)param_2 + (long)(int)uVar8 * 0x50);
      puVar9[8] = 0;
      puVar9[9] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0x3f003f000000;
      puVar9[6] = 0;
      puVar9[7] = 0x40a00000;
      *(undefined1 *)(puVar9 + 6) = 0;
      *(undefined2 *)((long)puVar9 + 0x32) = 0x3f80;
      puVar9[4] = 0;
      puVar9[5] = 0x3f800000bf800000;
      *(undefined2 *)(puVar9 + 4) = 0x201;
      *(undefined4 *)((long)puVar9 + 0x24) = 0x3d4ccccd;
      if (param_3 - 1 == uVar8) break;
      param_2 = (void *)*param_1;
      uVar8 = uVar8 + 1;
    }
    uVar8 = uVar1;
    if ((param_3 - uVar1 & 1) != 0) {
      uVar8 = uVar1 + 1;
      *(uint *)(*param_1 + (long)(int)uVar1 * 0x50 + 0x10) = uVar8;
    }
    if (~uVar1 + param_3 != 0) {
      do {
        lVar10 = (long)(int)uVar8;
        iVar5 = uVar8 + 1;
        uVar8 = uVar8 + 2;
        *(int *)(*param_1 + lVar10 * 0x50 + 0x10) = iVar5;
        *(uint *)(*param_1 + (long)iVar5 * 0x50 + 0x10) = uVar8;
      } while (param_3 != uVar8);
    }
    *(undefined4 *)(*param_1 + (long)(int)(param_3 - 1) * 0x50 + 0x10) = 0xffffffff;
    uVar8 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 != 0) {
      uVar6 = uVar8 & 0xffffff;
      if (uVar6 == 0xffffff) {
        *(uint *)((long)param_1 + 0x1c) = uVar8 & 0xff000000 | uVar1 & 0xffffff;
        return 0;
      }
      do {
        puVar7 = (uint *)(*param_1 + (long)(int)uVar6 * 0x50 + 0x10);
        uVar6 = *puVar7;
      } while (uVar6 != 0xffffffff);
      *puVar7 = uVar1;
      return 0;
    }
    *(uint *)((long)param_1 + 0x1c) = uVar8 & 0xff000000;
  }
  else {
    FUN_03014678(param_1);
  }
  return 0;
}


