/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030043e4; name: FUN_030043e4
 */


undefined8 FUN_030043e4(ulong *param_1,ulong param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = (uint)param_1[1];
  bVar4 = *(uint *)((long)param_1 + 0x24) < param_3;
  uVar10 = *param_1;
  uVar8 = param_3;
  if ((!bVar4 && param_3 <= uVar1) && (bVar4 || uVar1 != param_3)) {
    do {
      if (*(int *)(uVar10 + (long)(int)uVar8 * 0x38 + 0x14) != 0x7fffffff) {
        return 0x80040200;
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  uVar11 = param_1[2];
  uVar8 = uVar1;
  if (param_3 <= uVar1) {
    uVar8 = param_3;
  }
  uVar3 = param_1[3];
  if ((param_2 == 0) && (param_3 != 0)) {
    iVar6 = param_4;
    if (param_4 < 0x11) {
      iVar6 = 0x10;
    }
    iVar6 = iVar6 + param_3 * 0x38 + -0x10;
    *(int *)(param_1 + 3) = iVar6;
    uVar5 = (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,(long)iVar6,0);
    param_1[2] = uVar5;
    param_2 = uVar5 + (long)(param_4 + -1) & (long)-param_4;
  }
  else {
    param_1[2] = 0;
  }
  if (uVar10 != 0) {
    if (uVar11 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        if (param_2 != uVar10) {
          FUN_032c4af0(param_2,uVar10,uVar8 * 0x38);
        }
      }
      else {
        FUN_032c4a00(param_2,uVar10,uVar8 * 0x38);
        *(undefined4 *)(param_1 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                    (PTR_PTR_0434a080,*param_1,
                     ((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x38);
        }
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      }
    }
    else {
      FUN_032c4a00(param_2,uVar10,uVar8 * 0x38);
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,uVar11,(long)(int)uVar3);
    }
  }
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_3 | 0x80000000;
  if (uVar1 < param_3) {
    *(undefined4 *)(param_2 + (long)(int)uVar1 * 0x38 + 0x14) = 0x7fffffff;
    uVar8 = uVar1 + 1;
    if (uVar8 != param_3) {
      if ((~uVar1 + param_3 & 1) != 0) {
        *(undefined4 *)(*param_1 + (long)(int)uVar8 * 0x38 + 0x14) = 0x7fffffff;
        uVar8 = uVar1 + 2;
      }
      if (param_3 - 2 != uVar1) {
        do {
          *(undefined4 *)(*param_1 + (long)(int)uVar8 * 0x38 + 0x14) = 0x7fffffff;
          iVar6 = uVar8 + 1;
          uVar8 = uVar8 + 2;
          *(undefined4 *)(*param_1 + (long)iVar6 * 0x38 + 0x14) = 0x7fffffff;
        } while (param_3 != uVar8);
      }
    }
    uVar8 = uVar1;
    if ((param_3 - uVar1 & 1) != 0) {
      uVar8 = uVar1 + 1;
      *(uint *)(*param_1 + (long)(int)uVar1 * 0x38 + 0x18) = uVar8;
    }
    if (~uVar1 + param_3 != 0) {
      do {
        lVar2 = (long)(int)uVar8;
        iVar6 = uVar8 + 1;
        uVar8 = uVar8 + 2;
        *(int *)(*param_1 + lVar2 * 0x38 + 0x18) = iVar6;
        *(uint *)(*param_1 + (long)iVar6 * 0x38 + 0x18) = uVar8;
      } while (param_3 != uVar8);
    }
    *(undefined4 *)(*param_1 + (long)(int)(param_3 - 1) * 0x38 + 0x18) = 0xffffffff;
    uVar8 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 != 0) {
      uVar7 = uVar8 & 0xffffff;
      if (uVar7 == 0xffffff) {
        *(uint *)((long)param_1 + 0x1c) = uVar8 & 0xff000000 | uVar1 & 0xffffff;
        return 0;
      }
      do {
        puVar9 = (uint *)(*param_1 + (long)(int)uVar7 * 0x38 + 0x18);
        uVar7 = *puVar9;
      } while (uVar7 != 0xffffffff);
      *puVar9 = uVar1;
      return 0;
    }
    *(uint *)((long)param_1 + 0x1c) = uVar8 & 0xff000000;
  }
  else {
    FUN_03004870(param_1);
  }
  return 0;
}


