/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d22e8; name: FUN_031d22e8
 */


void FUN_031d22e8(long param_1,long param_2,int *param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ushort uVar16;
  int local_98 [2];
  undefined4 local_90 [2];
  int local_88 [2];
  ushort local_80 [4];
  int local_78 [2];
  ushort local_70 [4];
  int local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar6 = *(long *)(param_2 + 0x20);
    lVar5 = lVar6;
  }
  else {
    lVar5 = FUN_02898b44();
    lVar6 = *(long *)(param_2 + 0x20);
  }
  local_48 = *param_3;
  lVar9 = (long)local_48;
  if ((*(int *)(lVar6 + 0x108) != 0) && ((*(byte *)(*(long *)(lVar6 + 0x100) + lVar9) & 1) != 0)) {
    iVar8 = *(int *)(lVar6 + 0x20);
    lVar11 = *(long *)(lVar6 + 0x18);
    iVar15 = local_48 - iVar8;
    if (local_48 < iVar8) {
      iVar15 = local_48;
      if (*(int *)(lVar6 + 0x98) != 0) {
        iVar15 = *(int *)(*(long *)(lVar6 + 0x90) + lVar9 * 4);
      }
      if (iVar15 != -1) {
        lVar9 = *(long *)(lVar6 + 0xb0);
        goto LAB_031d25a8;
      }
      piVar10 = (int *)(lVar11 + lVar9 * 0x10);
    }
    else {
      lVar9 = *(long *)(lVar6 + 0xd0);
LAB_031d25a8:
      piVar10 = (int *)(lVar9 + (long)iVar15 * 0x10);
    }
    uVar16 = *(ushort *)(param_3 + 2);
    if ((int)(short)uVar16 < (int)(short)piVar10[2]) {
      local_44 = *piVar10 + (uint)uVar16;
    }
    else {
      local_44 = piVar10[1] + ((int)(short)uVar16 - (int)(short)piVar10[2] & 0xffffU);
    }
    iVar15 = param_3[1];
    iVar12 = iVar15 - iVar8;
    if (iVar15 < iVar8) {
      iVar12 = iVar15;
      if (*(int *)(lVar6 + 0x98) != 0) {
        iVar12 = *(int *)(*(long *)(lVar6 + 0x90) + (long)iVar15 * 4);
      }
      if (iVar12 != -1) {
        plVar7 = (long *)(lVar6 + 0xb0);
        goto LAB_031d2614;
      }
      iVar12 = iVar15;
    }
    else {
      plVar7 = (long *)(lVar6 + 0xd0);
LAB_031d2614:
      lVar11 = *plVar7;
    }
    uVar1 = *(ushort *)((long)param_3 + 10);
    sVar2 = *(short *)(lVar11 + (long)iVar12 * 0x10 + 8);
    if ((short)uVar1 < sVar2) {
      iVar8 = *(int *)(lVar11 + (long)iVar12 * 0x10) + (uint)uVar1;
    }
    else {
      iVar8 = *(int *)(lVar11 + (long)iVar12 * 0x10 + 4) + ((uint)uVar1 - (int)sVar2 & 0xffff);
    }
    goto LAB_031d2448;
  }
  iVar12 = param_3[1];
  iVar8 = *(int *)(lVar6 + 0x20);
  lVar11 = *(long *)(lVar6 + 0x18);
  iVar15 = iVar12 - iVar8;
  if (iVar12 < iVar8) {
    iVar15 = iVar12;
    if (*(int *)(lVar6 + 0x98) != 0) {
      iVar15 = *(int *)(*(long *)(lVar6 + 0x90) + (long)iVar12 * 4);
    }
    lVar13 = lVar11;
    iVar14 = iVar12;
    if (iVar15 != -1) {
      plVar7 = (long *)(lVar6 + 0xb0);
      goto LAB_031d2388;
    }
  }
  else {
    plVar7 = (long *)(lVar6 + 0xd0);
LAB_031d2388:
    lVar13 = *plVar7;
    iVar14 = iVar15;
  }
  uVar16 = *(ushort *)((long)param_3 + 10);
  iVar15 = (int)*(short *)(lVar13 + (long)iVar14 * 0x10 + 8);
  if ((short)uVar16 < iVar15) {
    local_44 = *(int *)(lVar13 + (long)iVar14 * 0x10) + (uint)uVar16;
  }
  else {
    local_44 = *(int *)(lVar13 + (long)iVar14 * 0x10 + 4) + ((short)uVar16 - iVar15 & 0xffffU);
  }
  iVar15 = local_48 - iVar8;
  if (local_48 < iVar8) {
    iVar15 = local_48;
    if (*(int *)(lVar6 + 0x98) != 0) {
      iVar15 = *(int *)(*(long *)(lVar6 + 0x90) + lVar9 * 4);
    }
    iVar8 = local_48;
    if (iVar15 != -1) {
      plVar7 = (long *)(lVar6 + 0xb0);
      goto LAB_031d2400;
    }
  }
  else {
    plVar7 = (long *)(lVar6 + 0xd0);
LAB_031d2400:
    lVar11 = *plVar7;
    iVar8 = iVar15;
  }
  uVar1 = *(ushort *)(param_3 + 2);
  sVar2 = *(short *)(lVar11 + (long)iVar8 * 0x10 + 8);
  if ((short)uVar1 < sVar2) {
    iVar8 = *(int *)(lVar11 + (long)iVar8 * 0x10) + (uint)uVar1;
  }
  else {
    iVar8 = *(int *)(lVar11 + (long)iVar8 * 0x10 + 4) + ((uint)uVar1 - (int)sVar2 & 0xffff);
  }
  iVar15 = local_48;
  local_48 = iVar12;
LAB_031d2448:
  iVar12 = local_48;
  local_60 = (undefined4 *)0x0;
  local_58 = -0x8000000000000000;
  local_70[0] = uVar16;
  local_68[0] = local_48;
  cVar4 = FUN_031d3080(param_1,param_2,local_68,local_70);
  local_78[0] = iVar12;
  if (cVar4 != '\0') {
    FUN_031cdd40(param_1 + 0xb8,&local_48);
    local_78[0] = local_48;
  }
  local_80[0] = uVar16;
  FUN_031d31fc(param_2,local_78,local_80,&local_60,0);
  local_88[0] = iVar8;
  lVar6 = FUN_0318edc0(lVar5,local_88);
  *(undefined4 *)(lVar6 + 0xc) = *local_60;
  *(undefined4 *)(lVar6 + 8) = local_60[1];
  lVar5 = *(long *)(lVar5 + 0xe0) + (long)(local_60[1] - *(int *)(lVar5 + 0x30)) * 0x14;
  *(int *)(lVar5 + 8) = iVar8;
  *(int *)(lVar5 + 0xc) = iVar15;
  local_90[0] = *local_60;
  FUN_0318ac98(param_2,local_90);
  local_98[0] = iVar15;
  FUN_0318ac98(param_2,local_98);
  lVar5 = local_58;
  uVar3 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_60 != (undefined4 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_60,8,uVar3 & 0x3fffffff);
  }
  return;
}


