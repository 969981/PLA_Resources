/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315ea40; name: FUN_0315ea40
 */


void FUN_0315ea40(long param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  puVar4 = PTR_PTR_0434a080;
  if ((*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) &&
     ((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x48)) * 3 < *(int *)(param_1 + 0x40) * 2)) {
    plVar1 = (long *)(param_1 + 0x38);
    local_50 = 0;
    local_48 = -0x8000000000000000;
    if (plVar1 == &local_50) {
      iVar7 = 0;
    }
    else {
      FUN_032bcf84(PTR_PTR_0434a080,&local_50,1);
      iVar10 = *(int *)(param_1 + 0x44);
      if (iVar10 < 0) {
        FUN_032bcf84(puVar4,plVar1,1);
        iVar10 = *(int *)(param_1 + 0x44);
      }
      lVar9 = *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = local_50;
      iVar7 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x40) = (undefined4)local_48;
      uVar5 = local_48._4_4_;
      local_48 = CONCAT44(iVar10,iVar7);
      *(undefined4 *)(param_1 + 0x44) = uVar5;
      local_50 = lVar9;
    }
    local_60 = 0;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0x80000000;
    uVar3 = iVar7 - *(int *)(param_1 + 0x48);
    if (0 < (int)uVar3) {
      if ((int)uVar3 < 0x40000000) {
        uVar6 = 0;
      }
      else {
        FUN_032bd0a8(uVar3);
        uVar6 = (local_58._4_4_ & 0x3fffffff) * 2;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
      }
      if ((int)uVar3 <= (int)uVar6) {
        uVar3 = uVar6;
      }
      local_60 = FUN_032bd1d4(puVar4,uVar3,1,0,0,(long)&local_58 + 4);
    }
    uVar3 = *(uint *)(param_1 + 0x30);
    if (0 < (int)uVar3) {
      uVar8 = 0;
      do {
        iVar7 = *(int *)(*(long *)(param_1 + 0x28) + uVar8 * 4);
        if (iVar7 != -1) {
          lVar9 = 0;
          do {
            iVar10 = (int)lVar9;
            cVar2 = *(char *)(local_50 + (iVar7 + iVar10));
            *(char *)(local_60 + (int)local_58 + lVar9) = cVar2;
            lVar9 = lVar9 + 1;
          } while (cVar2 != -1);
          *(int *)(*(long *)(param_1 + 0x28) + uVar8 * 4) = (int)local_58;
          local_58._0_4_ = (int)local_58 + iVar10 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar3);
    }
    if (&local_60 != plVar1) {
      if (*(int *)(param_1 + 0x44) < 0) {
        FUN_032bcf84(puVar4,plVar1,1);
      }
      if ((int)local_58._4_4_ < 0) {
        FUN_032bcf84(puVar4,&local_60,1);
      }
      lVar9 = *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = local_60;
      uVar3 = *(uint *)(param_1 + 0x44);
      *(int *)(param_1 + 0x40) = (int)local_58;
      *(uint *)(param_1 + 0x44) = local_58._4_4_;
      local_60 = lVar9;
      local_58._4_4_ = uVar3;
    }
    uVar3 = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x48) = 0;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    if ((-1 < (int)uVar3) && (local_60 != 0)) {
      FUN_032cf244(puVar4,local_60,1,uVar3 & 0x3fffffff);
    }
    lVar9 = local_48;
    uVar3 = local_48._4_4_;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    if ((-1 < lVar9) && (local_50 != 0)) {
      FUN_032cf244(puVar4,local_50,1,uVar3 & 0x3fffffff);
    }
    return;
  }
  return;
}


