/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c69c4; name: FUN_032c69c4
 */


int FUN_032c69c4(long param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int local_84;
  int local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  
  puVar3 = PTR_PTR_0434a080;
  if (param_2 == 0) {
    if (*param_3 == 0) {
      return 0;
    }
    return -0x7ffbfda9;
  }
  local_58 = 0x8000000a00000000;
  uVar7 = (uint)*param_3;
  uVar9 = uVar7;
  if (9 < (int)uVar7) {
    uVar9 = 10;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar9 = uVar7;
  }
  local_60 = local_50;
  if ((int)uVar9 < 0xb) {
    local_58._0_4_ = 0;
    bVar4 = SBORROW4(0,uVar9);
    iVar6 = -uVar9;
    bVar5 = uVar9 == 0;
    if (0 < (int)uVar9) goto LAB_032c6a38;
LAB_032c6b54:
    if (!bVar5 && iVar6 < 0 == bVar4) {
      local_58 = CONCAT44(local_58._4_4_,uVar9);
    }
  }
  else {
    if ((int)uVar9 < 0x40000000) {
      uVar7 = 0x14;
    }
    else {
      FUN_032bd0a8(uVar9);
      uVar7 = (local_58._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
    }
    uVar2 = uVar9;
    if ((int)uVar9 <= (int)uVar7) {
      uVar2 = uVar7;
    }
    local_60 = (undefined1 *)FUN_032bd1d4(puVar3,uVar2,1,local_50,0,(long)&local_58 + 4);
    bVar4 = SBORROW4((uint)local_58,uVar9);
    iVar6 = (uint)local_58 - uVar9;
    bVar5 = (uint)local_58 == uVar9;
    if ((int)uVar9 <= (int)(uint)local_58) goto LAB_032c6b54;
LAB_032c6a38:
    lVar1 = (long)(int)(uint)local_58;
    uVar7 = ~(uint)local_58;
    local_58 = CONCAT44(local_58._4_4_,uVar9);
    memset(local_60 + lVar1,0,(ulong)(uVar9 + uVar7) + 1);
  }
  local_70 = 0;
  local_78 = 0;
  lStack_68 = param_2;
  iVar6 = FUN_032c6c14(local_80);
  if (-1 < iVar6) {
    iVar10 = 0;
    do {
      if (local_80[0] == 1) {
        FUN_032c5d4c(param_1,local_78,(int)local_70 - (int)local_78);
      }
      else if (local_80[0] == 2) {
        iVar6 = FUN_032c6d80(local_78,local_70,param_3,iVar10,param_1,&local_84);
        if (iVar6 < 0) break;
        if ((-1 < local_84) && (local_84 < (int)(uint)local_58)) {
          local_60[local_84] = 1;
        }
        iVar10 = local_84 + 1;
      }
      else if (local_80[0] == 0) {
        if ((int)(uint)local_58 < 1) goto LAB_032c6b88;
        uVar8 = 0;
        goto LAB_032c6b74;
      }
      iVar6 = FUN_032c6c14(local_80);
    } while (-1 < iVar6);
  }
LAB_032c6b8c:
  uVar8 = local_58;
  uVar9 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < (long)uVar8) && (local_60 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar3,local_60,1,uVar9 & 0x3fffffff);
  }
  return iVar6;
  while (uVar8 = uVar8 + 1, (local_58 & 0xffffffff) != uVar8) {
LAB_032c6b74:
    if (local_60[uVar8] == '\0') {
      if (-1 < (int)uVar8) {
        iVar6 = -0x7ffb7ffb;
        goto LAB_032c6b8c;
      }
      break;
    }
  }
LAB_032c6b88:
  iVar6 = 0;
  goto LAB_032c6b8c;
}


