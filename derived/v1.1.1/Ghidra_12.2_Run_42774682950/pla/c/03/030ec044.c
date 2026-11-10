/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ec044; name: FUN_030ec044
 */


void FUN_030ec044(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long local_50;
  undefined8 local_48;
  
  puVar2 = PTR_PTR_0434a090;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  if (param_1 == &local_50) {
    uVar6 = *(uint *)((long)param_1 + 0xc);
    uVar3 = uVar1;
  }
  else {
    FUN_032bcf84(PTR_PTR_0434a090,&local_50,8);
    iVar4 = *(int *)((long)param_1 + 0xc);
    if (iVar4 < 0) {
      FUN_032bcf84(puVar2,param_1,8);
      iVar4 = *(int *)((long)param_1 + 0xc);
    }
    lVar8 = *param_1;
    *param_1 = local_50;
    uVar3 = (uint)local_48;
    uVar6 = local_48._4_4_;
    local_48 = CONCAT44(iVar4,(int)param_1[1]);
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar6;
    local_50 = lVar8;
  }
  if ((int)(uVar6 & 0x3fffffff) < (int)param_2) {
    lVar8 = FUN_032bd1d4(PTR_PTR_0434a090,param_2,8,*param_1,uVar3,
                         (undefined1 *)((long)param_1 + 0xc));
    uVar3 = *(uint *)(param_1 + 1);
    *param_1 = lVar8;
  }
  if (uVar3 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  uVar9 = (ulong)param_2;
  uVar5 = uVar9 & 3;
  if (uVar9 - 1 < 3) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar7 = lVar8 * 8;
      lVar8 = lVar8 + 4;
      *(undefined8 *)(*param_1 + lVar7) = 0xffffffffffffffff;
      *(undefined8 *)(*param_1 + lVar7 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(*param_1 + lVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(*param_1 + lVar7 + 0x18) = 0xffffffffffffffff;
    } while (uVar9 - uVar5 != lVar8);
  }
  if ((param_2 & 3) != 0) {
    lVar8 = lVar8 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar8) = 0xffffffffffffffff;
      uVar5 = uVar5 - 1;
      lVar8 = lVar8 + 8;
    } while (uVar5 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar8 = *(long *)(local_50 + uVar5 * 8);
      if (lVar8 != -1) {
        iVar4 = (int)param_1[1];
        if (iVar4 <= (int)param_1[2] * 2) {
          FUN_030ec044(param_1,iVar4 << 1);
          iVar4 = (int)param_1[1];
        }
        uVar3 = (int)lVar8 * -0x61c8864f;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar6 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (int)((ulong)lVar8 >> 0x20) * -0x61c8864f;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = iVar4 - 1U & (uVar6 + (uVar6 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3);
        lVar7 = *param_1;
        plVar10 = (long *)(lVar7 + (long)(int)uVar3 * 8);
        if (*plVar10 == -1) {
          iVar4 = 1;
        }
        else if (*plVar10 == lVar8) {
          iVar4 = 0;
        }
        else {
          do {
            uVar3 = uVar3 + 1 & iVar4 - 1U;
            lVar11 = *(long *)(lVar7 + (long)(int)uVar3 * 8);
            if (lVar11 == -1) {
              iVar4 = 1;
              goto LAB_030ec288;
            }
          } while (lVar11 != lVar8);
          iVar4 = 0;
LAB_030ec288:
          plVar10 = (long *)(lVar7 + (long)(int)uVar3 * 8);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar4;
        *plVar10 = lVar8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  lVar8 = local_48;
  uVar5 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_50 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_50,(uVar5 & 0x3fffffff) << 3);
  }
  return;
}


