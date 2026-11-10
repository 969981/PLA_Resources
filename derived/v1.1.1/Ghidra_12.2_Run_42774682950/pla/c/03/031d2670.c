/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d2670; name: FUN_031d2670
 */


void FUN_031d2670(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int local_c0 [2];
  int local_b8 [2];
  undefined4 local_b0 [2];
  undefined2 local_a8 [4];
  int local_a0 [2];
  undefined2 local_98 [4];
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  int local_68 [2];
  
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar10 = *(long *)(param_3 + 0x20);
  }
  else {
    lVar10 = FUN_02898b44();
  }
  local_90 = 0;
  local_88 = -0x8000000000000000;
  local_80 = 0;
  local_78 = -0x8000000000000000;
  local_68[0] = *param_4;
  local_98[0] = (undefined2)param_4[2];
  FUN_031d3080(param_2,param_3,local_68,local_98);
  local_a0[0] = *param_4;
  local_a8[0] = (undefined2)param_4[2];
  FUN_031d31fc(param_3,local_a0,local_a8,&local_90,0);
  if (0 < (int)local_88) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      iVar8 = *(int *)(local_90 + lVar11 + 4);
      iVar5 = iVar8 - *(int *)(lVar10 + 0x30);
      if (iVar8 < *(int *)(lVar10 + 0x30)) {
        if (*(int *)(lVar10 + 0x78) == 0) {
          iVar5 = iVar8;
        }
        else {
          iVar5 = *(int *)(*(long *)(lVar10 + 0x70) + (long)iVar8 * 4);
        }
        plVar6 = (long *)(lVar10 + 0xc0);
        if (iVar5 != -1) goto LAB_031d2778;
        lVar7 = 0;
      }
      else {
        plVar6 = (long *)(lVar10 + 0xe0);
LAB_031d2778:
        lVar7 = *plVar6 + (long)iVar5 * 0x14;
      }
      *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
      local_b0[0] = *(undefined4 *)(local_90 + lVar11);
      FUN_0318ac98(param_3,local_b0);
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 8;
    } while (lVar12 < (int)local_88);
  }
  local_68[0] = param_4[1];
  local_98[0] = *(undefined2 *)((long)param_4 + 10);
  FUN_031d3080(param_2,param_3,local_68,local_98);
  local_a0[0] = param_4[1];
  local_a8[0] = *(undefined2 *)((long)param_4 + 10);
  FUN_031d31fc(param_3,local_a0,local_a8,&local_80,0);
  if (0 < (int)local_78) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      iVar8 = *(int *)(local_80 + lVar11 + 4);
      iVar5 = iVar8 - *(int *)(lVar10 + 0x30);
      if (iVar8 < *(int *)(lVar10 + 0x30)) {
        if (*(int *)(lVar10 + 0x78) == 0) {
          iVar5 = iVar8;
        }
        else {
          iVar5 = *(int *)(*(long *)(lVar10 + 0x70) + (long)iVar8 * 4);
        }
        plVar6 = (long *)(lVar10 + 0xc0);
        if (iVar5 != -1) goto LAB_031d2864;
        lVar7 = 0;
      }
      else {
        plVar6 = (long *)(lVar10 + 0xe0);
LAB_031d2864:
        lVar7 = *plVar6 + (long)iVar5 * 0x14;
      }
      *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
      local_b0[0] = *(undefined4 *)(local_80 + lVar11);
      FUN_0318ac98(param_3,local_b0);
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 8;
    } while (lVar12 < (int)local_78);
  }
  lVar12 = *(long *)(param_3 + 0x20);
  iVar8 = *param_4;
  iVar5 = *(int *)(lVar12 + 0x20);
  lVar10 = *(long *)(lVar12 + 0x18);
  if (iVar8 < iVar5) {
    iVar9 = iVar8;
    if (*(int *)(lVar12 + 0x98) != 0) {
      iVar9 = *(int *)(*(long *)(lVar12 + 0x90) + (long)iVar8 * 4);
    }
    lVar11 = lVar10;
    if (iVar9 != -1) {
      plVar6 = (long *)(lVar12 + 0xb0);
      iVar8 = iVar9;
      goto LAB_031d28f0;
    }
  }
  else {
    plVar6 = (long *)(lVar12 + 0xd0);
    iVar8 = iVar8 - iVar5;
LAB_031d28f0:
    lVar11 = *plVar6;
  }
  uVar1 = *(ushort *)(param_4 + 2);
  sVar2 = *(short *)(lVar11 + (long)iVar8 * 0x10 + 8);
  if ((short)uVar1 < sVar2) {
    local_b8[0] = *(int *)(lVar11 + (long)iVar8 * 0x10) + (uint)uVar1;
  }
  else {
    local_b8[0] = *(int *)(lVar11 + (long)iVar8 * 0x10 + 4) + ((uint)uVar1 - (int)sVar2 & 0xffff);
  }
  iVar8 = param_4[1];
  if (iVar8 < iVar5) {
    iVar5 = iVar8;
    if (*(int *)(lVar12 + 0x98) != 0) {
      iVar5 = *(int *)(*(long *)(lVar12 + 0x90) + (long)iVar8 * 4);
    }
    if (iVar5 == -1) goto LAB_031d2978;
    plVar6 = (long *)(lVar12 + 0xb0);
    iVar8 = iVar5;
  }
  else {
    plVar6 = (long *)(lVar12 + 0xd0);
    iVar8 = iVar8 - iVar5;
  }
  lVar10 = *plVar6;
LAB_031d2978:
  uVar1 = *(ushort *)((long)param_4 + 10);
  sVar2 = *(short *)(lVar10 + (long)iVar8 * 0x10 + 8);
  if ((short)uVar1 < sVar2) {
    local_c0[0] = *(int *)(lVar10 + (long)iVar8 * 0x10) + (uint)uVar1;
  }
  else {
    local_c0[0] = *(int *)(lVar10 + (long)iVar8 * 0x10 + 4) + ((uint)uVar1 - (int)sVar2 & 0xffff);
  }
  FUN_031d3568(param_1,param_2,param_3,local_b8,local_c0,local_90,local_90 + (long)(int)local_88 * 8
               ,local_80,local_80 + (long)(int)local_78 * 8);
  FUN_031cdd40(param_2 + 0xb8,param_4);
  FUN_031cdd40(param_2 + 0xb8,param_4 + 1);
  lVar10 = local_78;
  puVar3 = PTR_PTR_0434a090;
  uVar4 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_80 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_80,8,uVar4 & 0x3fffffff);
  }
  lVar10 = local_88;
  local_78 = CONCAT44(0x80000000,(int)local_78);
  uVar4 = local_88._4_4_;
  local_80 = 0;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_90 != 0)) {
    FUN_032cf244(puVar3,local_90,8,uVar4 & 0x3fffffff);
  }
  return;
}


