/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e7a5c; name: FUN_031e7a5c
 */


void FUN_031e7a5c(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long local_50;
  undefined8 local_48;
  
  puVar3 = PTR_PTR_0434a090;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  if (param_1 == &local_50) {
    uVar7 = *(uint *)((long)param_1 + 0xc);
    uVar4 = uVar1;
  }
  else {
    FUN_032bcf84(PTR_PTR_0434a090,&local_50,4);
    iVar5 = *(int *)((long)param_1 + 0xc);
    if (iVar5 < 0) {
      FUN_032bcf84(puVar3,param_1,4);
      iVar5 = *(int *)((long)param_1 + 0xc);
    }
    lVar8 = *param_1;
    *param_1 = local_50;
    uVar4 = (uint)local_48;
    uVar7 = local_48._4_4_;
    local_48 = CONCAT44(iVar5,(int)param_1[1]);
    *(uint *)(param_1 + 1) = uVar4;
    *(uint *)((long)param_1 + 0xc) = uVar7;
    local_50 = lVar8;
  }
  if ((int)(uVar7 & 0x3fffffff) < (int)param_2) {
    lVar8 = FUN_032bd1d4(PTR_PTR_0434a090,param_2,4,*param_1,uVar4,
                         (undefined1 *)((long)param_1 + 0xc));
    uVar4 = *(uint *)(param_1 + 1);
    *param_1 = lVar8;
  }
  if (uVar4 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  uVar9 = (ulong)param_2;
  uVar6 = uVar9 & 3;
  if (uVar9 - 1 < 3) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar12 = lVar8 * 4;
      lVar8 = lVar8 + 4;
      *(undefined4 *)(*param_1 + lVar12) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 4) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 8) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 0xc) = 0xffffffff;
    } while (uVar9 - uVar6 != lVar8);
  }
  if ((param_2 & 3) != 0) {
    lVar8 = lVar8 << 2;
    do {
      *(undefined4 *)(*param_1 + lVar8) = 0xffffffff;
      uVar6 = uVar6 - 1;
      lVar8 = lVar8 + 4;
    } while (uVar6 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      iVar5 = *(int *)(local_50 + uVar6 * 4);
      if (iVar5 != -1) {
        iVar11 = (int)param_1[1];
        if (iVar11 <= (int)param_1[2] * 2) {
          FUN_031e7a5c(param_1,iVar11 << 1);
          iVar11 = (int)param_1[1];
        }
        uVar4 = (iVar5 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar5 * -0x61c8864f & 0xff00ffU) << 8;
        uVar4 = iVar11 - 1U & (uVar4 >> 0x10 | uVar4 << 0x10);
        lVar8 = *param_1;
        piVar10 = (int *)(lVar8 + (long)(int)uVar4 * 4);
        if (*piVar10 == -1) {
          iVar11 = 1;
        }
        else if (*piVar10 == iVar5) {
          iVar11 = 0;
        }
        else {
          do {
            uVar4 = uVar4 + 1 & iVar11 - 1U;
            iVar2 = *(int *)(lVar8 + (long)(int)uVar4 * 4);
            if (iVar2 == -1) {
              iVar11 = 1;
              goto LAB_031e7c80;
            }
          } while (iVar2 != iVar5);
          iVar11 = 0;
LAB_031e7c80:
          piVar10 = (int *)(lVar8 + (long)(int)uVar4 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar11;
        *piVar10 = iVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  lVar8 = local_48;
  uVar1 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_50 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_50,4,uVar1 & 0x3fffffff);
  }
  return;
}


