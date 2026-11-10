/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d2aa0; name: FUN_031d2aa0
 */


void FUN_031d2aa0(undefined4 param_1,long param_2,long param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 in_x7;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint local_108;
  undefined4 local_104;
  undefined4 local_100 [2];
  undefined2 local_f8 [4];
  uint local_f0 [2];
  undefined2 local_e8 [4];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  uint local_68 [2];
  
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar14 = *(long *)(param_3 + 0x20);
  }
  else {
    lVar14 = FUN_02898b44();
  }
  local_98 = 0;
  local_90 = -0x8000000000000000;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  local_68[0] = *param_4;
  local_e8[0] = (undefined2)param_4[2];
  FUN_031d3080(param_2,param_3,local_68,local_e8);
  local_f0[0] = *param_4;
  local_f8[0] = (undefined2)param_4[2];
  FUN_031d31fc(param_3,local_f0,local_f8,&local_98,0);
  if (0 < (int)local_90) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      iVar8 = *(int *)(local_98 + lVar15 + 4);
      iVar7 = iVar8 - *(int *)(lVar14 + 0x30);
      if (iVar8 < *(int *)(lVar14 + 0x30)) {
        if (*(int *)(lVar14 + 0x78) == 0) {
          iVar7 = iVar8;
        }
        else {
          iVar7 = *(int *)(*(long *)(lVar14 + 0x70) + (long)iVar8 * 4);
        }
        plVar5 = (long *)(lVar14 + 0xc0);
        if (iVar7 != -1) goto LAB_031d2ba8;
        lVar10 = 0;
      }
      else {
        plVar5 = (long *)(lVar14 + 0xe0);
LAB_031d2ba8:
        lVar10 = *plVar5 + (long)iVar7 * 0x14;
      }
      *(undefined8 *)(lVar10 + 8) = 0xffffffffffffffff;
      local_100[0] = *(undefined4 *)(local_98 + lVar15);
      FUN_0318ac98(param_3,local_100);
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 8;
    } while (lVar16 < (int)local_90);
  }
  local_108 = *param_4;
  lVar15 = (long)(int)local_108;
  lVar10 = *(long *)(param_3 + 0x20);
  lVar16 = *(long *)(lVar10 + 0x18);
  if (*(int *)(lVar10 + 0x108) == 0) {
    plVar5 = (long *)0x0;
  }
  else if ((*(byte *)(*(long *)(lVar10 + 0x100) + lVar15) >> 3 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(lVar10 + 0x188);
    lVar3 = FUN_031920dc(plVar5,&local_108);
    if (lVar3 == 0) {
      uVar9 = 0;
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(uint *)(lVar3 + 4);
      uVar9 = ((int)lVar3 - (int)*(undefined8 *)(lVar10 + 0x198)) * 0x20000000;
    }
    lVar10 = *(long *)(param_3 + 0x20);
    plVar5 = (long *)(*plVar5 + (long)(int)(uVar4 | uVar9) * 0x38 + 8);
  }
  lVar16 = lVar16 + lVar15 * 0x10;
  uVar11 = (ulong)(((uint)(ushort)param_4[2] - (uint)*(ushort *)(lVar16 + 8)) -
                  (uint)*(ushort *)(lVar16 + 10)) & 0xffff;
  iVar8 = *(int *)(lVar10 + 0x40);
  iVar7 = *(int *)(*plVar5 + uVar11 * 0x14);
  plVar6 = (long *)(lVar10 + 0x38);
  if (iVar7 < iVar8) {
    iVar12 = 0;
    plVar13 = plVar6;
  }
  else {
    plVar13 = (long *)(lVar10 + 0xf0);
    iVar12 = iVar8;
  }
  puVar1 = (undefined8 *)(*plVar13 + (long)(iVar7 - iVar12) * 0x10);
  uStack_d8 = puVar1[1];
  local_e0 = *puVar1;
  iVar7 = *(int *)(*plVar5 + uVar11 * 0x14 + 4);
  if (iVar7 < iVar8) {
    iVar8 = 0;
  }
  else {
    plVar6 = (long *)(lVar10 + 0xf0);
  }
  puVar1 = (undefined8 *)(*plVar6 + (long)(iVar7 - iVar8) * 0x10);
  uStack_c8 = puVar1[1];
  local_d0 = *puVar1;
  local_68[0] = param_4[1];
  local_e8[0] = *(undefined2 *)((long)param_4 + 10);
  FUN_031d3080(param_2,param_3,local_68,local_e8);
  local_f0[0] = param_4[1];
  local_f8[0] = *(undefined2 *)((long)param_4 + 10);
  FUN_031d31fc(param_3,local_f0,local_f8,&local_88,0);
  if (0 < (int)local_80) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      iVar8 = *(int *)(local_88 + lVar15 + 4);
      iVar7 = iVar8 - *(int *)(lVar14 + 0x30);
      if (iVar8 < *(int *)(lVar14 + 0x30)) {
        if (*(int *)(lVar14 + 0x78) == 0) {
          iVar7 = iVar8;
        }
        else {
          iVar7 = *(int *)(*(long *)(lVar14 + 0x70) + (long)iVar8 * 4);
        }
        plVar5 = (long *)(lVar14 + 0xc0);
        if (iVar7 != -1) goto LAB_031d2d2c;
        lVar10 = 0;
      }
      else {
        plVar5 = (long *)(lVar14 + 0xe0);
LAB_031d2d2c:
        lVar10 = *plVar5 + (long)iVar7 * 0x14;
      }
      *(undefined8 *)(lVar10 + 8) = 0xffffffffffffffff;
      local_100[0] = *(undefined4 *)(local_88 + lVar15);
      FUN_0318ac98(param_3,local_100);
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 8;
    } while (lVar16 < (int)local_80);
  }
  local_108 = param_4[1];
  lVar16 = (long)(int)local_108;
  lVar15 = *(long *)(param_3 + 0x20);
  lVar14 = *(long *)(lVar15 + 0x18);
  if ((*(int *)(lVar15 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar15 + 0x100) + lVar16) >> 3 & 1) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(lVar15 + 0x188);
    lVar10 = FUN_031920dc(plVar5,&local_108);
    if (lVar10 == 0) {
      uVar9 = 0;
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(uint *)(lVar10 + 4);
      uVar9 = ((int)lVar10 - (int)*(undefined8 *)(lVar15 + 0x198)) * 0x20000000;
    }
    lVar15 = *(long *)(param_3 + 0x20);
    plVar5 = (long *)(*plVar5 + (long)(int)(uVar4 | uVar9) * 0x38 + 8);
  }
  lVar14 = lVar14 + lVar16 * 0x10;
  uVar11 = (ulong)(((uint)*(ushort *)((long)param_4 + 10) - (uint)*(ushort *)(lVar14 + 8)) -
                  (uint)*(ushort *)(lVar14 + 10)) & 0xffff;
  iVar8 = *(int *)(lVar15 + 0x40);
  iVar7 = *(int *)(*plVar5 + uVar11 * 0x14);
  plVar6 = (long *)(lVar15 + 0x38);
  if (iVar7 < iVar8) {
    iVar12 = 0;
    plVar13 = plVar6;
  }
  else {
    plVar13 = (long *)(lVar15 + 0xf0);
    iVar12 = iVar8;
  }
  puVar1 = (undefined8 *)(*plVar13 + (long)(iVar7 - iVar12) * 0x10);
  uStack_b8 = puVar1[1];
  local_c0 = *puVar1;
  iVar7 = *(int *)(*plVar5 + uVar11 * 0x14 + 4);
  if (iVar7 < iVar8) {
    iVar8 = 0;
  }
  else {
    plVar6 = (long *)(lVar15 + 0xf0);
  }
  puVar1 = (undefined8 *)(*plVar6 + (long)(iVar7 - iVar8) * 0x10);
  uStack_a8 = puVar1[1];
  local_b0 = *puVar1;
  local_108 = local_108 & 0xffff0000;
  local_104 = param_1;
  FUN_031df430(*(undefined8 *)(param_2 + 0x18),param_3,param_3,&local_e0,&local_c0,local_98,
               local_98 + (long)(int)local_90 * 8,in_x7,local_88,local_88 + (long)(int)local_80 * 8,
               &local_108);
  FUN_031cdd40(param_2 + 0xb8,param_4);
  FUN_031cdd40(param_2 + 0xb8,param_4 + 1);
  lVar14 = local_80;
  puVar2 = PTR_PTR_0434a090;
  uVar4 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_88 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_88,8,uVar4 & 0x3fffffff);
  }
  lVar14 = local_90;
  local_80 = CONCAT44(0x80000000,(int)local_80);
  uVar4 = local_90._4_4_;
  local_88 = 0;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_98 != 0)) {
    FUN_032cf244(puVar2,local_98,8,uVar4 & 0x3fffffff);
  }
  return;
}


