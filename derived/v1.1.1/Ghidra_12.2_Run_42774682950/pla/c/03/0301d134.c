/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301d134; name: FUN_0301d134
 */


void FUN_0301d134(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_68;
  undefined8 *local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  
  local_68 = param_1 + 0xa8;
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x7e8);
  local_60 = *(undefined8 **)(param_2 + 0x4e0);
  local_58 = *(uint **)(param_1[0xaa] + (long)(int)param_1[0xab] * 8 + -8);
  local_50 = *local_58 >> 0x10;
  local_4c = *local_58 & 0xffff;
  *(uint *)(param_1 + 0xa9) = (int)param_1[0xa9] - local_4c;
  if (param_3 != 0) {
    *(long ***)(param_3 + 0x28) = &local_68;
  }
  lVar8 = *(long *)*param_1;
  puVar9 = *(undefined4 **)(*(long *)(lVar8 + 0x530) + (long)*(int *)(lVar8 + 0x538) * 8 + -8);
  uVar2 = *puVar9;
  uVar3 = *puVar9;
  *(undefined4 **)(lVar8 + 0x730) = puVar9;
  *(short *)(lVar8 + 0x738) = (short)((uint)uVar2 >> 0x10);
  *(short *)(lVar8 + 0x73a) = (short)uVar3;
  *(int *)(lVar8 + 0x73c) = -*(int *)(lVar8 + 0x528);
  iVar6 = (int)param_1[0xa5];
  plVar5 = param_1;
  if (0 < iVar6) {
    lVar14 = 0;
    lVar8 = 0;
    do {
      if (*(int *)(param_1[0xa4] + lVar14 + 0xc) != 0) {
        plVar5 = (long *)FUN_0301d5f4(plVar5,uVar13,param_1[0xa4] + lVar14,&local_68);
        puVar1 = (undefined8 *)(param_1[0xa4] + lVar14);
        *puVar1 = 0;
        *(undefined4 *)((long)puVar1 + 0xc) = 0;
        puVar1[2] = 0;
        *(long *)(param_1[0xa6] + lVar8 * 8) = param_1[0xa4] + lVar14;
        iVar6 = (int)param_1[0xa5];
      }
      lVar8 = lVar8 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar8 < iVar6);
  }
  while( true ) {
    puVar1 = local_60;
    lVar8 = *(long *)*param_1;
    iVar6 = *(int *)(lVar8 + 0x73c) + *(int *)(lVar8 + 0x528);
    if (iVar6 == 0) {
      lVar11 = (long)*(int *)(lVar8 + 0x538) + -1;
      lVar14 = *(long *)(lVar8 + 0x530);
    }
    else {
      lVar11 = (long)*(int *)(lVar8 + 0x538) + -1;
      lVar14 = *(long *)(lVar8 + 0x530);
      puVar12 = *(uint **)(lVar8 + 0x730);
      if ((puVar12 != *(uint **)(lVar14 + lVar11 * 8)) &&
         ((uint)*(ushort *)(lVar8 + 0x73a) == (*puVar12 & 0xffff))) {
        puVar12 = *(uint **)(puVar12 + 2);
        *(undefined4 *)(lVar8 + 0x738) = 0;
      }
      *(short *)(lVar8 + 0x73a) = (short)*puVar12 - *(short *)(lVar8 + 0x73a);
      *(uint **)(lVar8 + 0x730) = puVar12;
    }
    *(int *)(lVar8 + 0x73c) = iVar6;
    uVar10 = *(undefined8 *)(lVar8 + 0x738);
    local_90 = *(undefined8 *)(lVar8 + 0x730);
    local_80 = *(undefined8 *)(lVar8 + 0x740);
    puVar9 = *(undefined4 **)(lVar14 + lVar11 * 8);
    uVar2 = *puVar9;
    uVar3 = *puVar9;
    *(undefined4 **)(lVar8 + 0x730) = puVar9;
    *(short *)(lVar8 + 0x738) = (short)((uint)uVar2 >> 0x10);
    *(short *)(lVar8 + 0x73a) = (short)uVar3;
    *(int *)(lVar8 + 0x73c) = -*(int *)(lVar8 + 0x528);
    local_88._4_4_ = (int)((ulong)uVar10 >> 0x20);
    local_88 = uVar10;
    if (local_88._4_4_ == 0) break;
    lVar8 = *(long *)*param_1;
    puVar9 = *(undefined4 **)(*(long *)(lVar8 + 0x530) + (long)*(int *)(lVar8 + 0x538) * 8 + -8);
    uVar2 = *puVar9;
    uVar3 = *puVar9;
    *(undefined4 **)(lVar8 + 0x730) = puVar9;
    *(short *)(lVar8 + 0x738) = (short)((uint)uVar2 >> 0x10);
    *(short *)(lVar8 + 0x73a) = (short)uVar3;
    *(int *)(lVar8 + 0x73c) = -*(int *)(lVar8 + 0x528);
    plVar5 = (long *)FUN_0301d5f4(plVar5,uVar13,&local_90,&local_68);
  }
  if (local_4c == 0) {
    plVar5 = local_68 + 3;
    iVar6 = (int)*plVar5;
    if (iVar6 < 2) goto LAB_0301d2bc;
    iVar4 = *(int *)(local_60 + 0xb);
    lVar14 = *(long *)(local_68[2] + (long)(iVar6 + -2) * 8);
    lVar8 = local_60[1];
    *(undefined8 *)(lVar8 + (long)iVar4 * 8) = *(undefined8 *)(local_68[2] + (long)(iVar6 + -1) * 8)
    ;
    *(int *)(local_60 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_60 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_60 + 0x28))((long *)*local_60,lVar8 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar1 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar14 + 8) = 0;
    uVar7 = 0xffffffff;
  }
  else {
LAB_0301d2bc:
    plVar5 = local_68 + 1;
    local_58[2] = 0;
    local_58[3] = 0;
    *local_58 = *local_58 & 0xffff0000 | local_4c & 0xffff;
    *local_58 = *local_58 & 0xffff | local_50 << 0x10;
    uVar7 = local_4c;
  }
  *(uint *)plVar5 = (int)*plVar5 + uVar7;
  local_58 = (uint *)0x0;
  local_68 = (long *)0x0;
  if (param_3 != 0) {
    *(undefined8 *)(param_3 + 0x28) = 0;
  }
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar8 = 0;
  do {
    lVar15 = *(long *)(*param_1 + lVar8 * 8);
    FUN_032be7c0(lVar15 + 0x520,*(undefined8 *)(lVar15 + 0x4e0));
    FUN_032be7c0(lVar15 + 0x620,*(undefined8 *)(lVar15 + 0x4e0));
    puVar1 = local_60;
    lVar8 = lVar8 + 1;
    puVar9 = *(undefined4 **)(*(long *)(lVar15 + 0x530) + (long)*(int *)(lVar15 + 0x538) * 8 + -8);
    uVar2 = *puVar9;
    uVar3 = *puVar9;
    *(undefined4 **)(lVar15 + 0x730) = puVar9;
    *(short *)(lVar15 + 0x738) = (short)((uint)uVar2 >> 0x10);
    *(short *)(lVar15 + 0x73a) = (short)uVar3;
    *(int *)(lVar15 + 0x73c) = -*(int *)(lVar15 + 0x528);
    lVar14 = *(long *)(lVar15 + 8);
    *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(lVar14 + 0x490);
    *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(lVar14 + 0x8e8);
    lVar11 = *(long *)(lVar14 + 0x8a8);
    *(long *)(lVar15 + 0x10) = lVar11 + 0x20;
    *(long *)(lVar15 + 0x18) = lVar11 + 0x820;
    lVar11 = *(long *)(*(long *)(lVar14 + 0x898) + 0x48);
    uVar7 = *(uint *)(*(long *)(lVar14 + 0x898) + 0x50);
    *(long *)(lVar15 + 0x20) = lVar11;
    *(ulong *)(lVar15 + 0x28) = lVar11 + (ulong)uVar7 * 0x50;
    lVar11 = *(long *)(*(long *)(lVar14 + 0x8a0) + 0x40);
    iVar6 = *(int *)(*(long *)(lVar14 + 0x8a0) + 0x48);
    *(long *)(lVar15 + 0x30) = lVar11;
    *(long *)(lVar15 + 0x38) = lVar11 + (long)iVar6 * 0x70;
    *(undefined8 *)(lVar15 + 0x500) = *(undefined8 *)(lVar14 + 0x118);
  } while (lVar8 < (int)param_1[1]);
  if (local_68 == (long *)0x0) {
    return;
  }
  if (local_4c == 0) {
    plVar5 = local_68 + 3;
    iVar6 = (int)*plVar5;
    if (1 < iVar6) {
      iVar4 = *(int *)(local_60 + 0xb);
      lVar14 = *(long *)(local_68[2] + (long)(iVar6 + -2) * 8);
      lVar8 = local_60[1];
      *(undefined8 *)(lVar8 + (long)iVar4 * 8) =
           *(undefined8 *)(local_68[2] + (long)(iVar6 + -1) * 8);
      *(int *)(local_60 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_60 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_60 + 0x28))((long *)*local_60,lVar8 + (long)(iVar4 + -5) * 8,6)
        ;
        *(int *)(puVar1 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar14 + 8) = 0;
      local_4c = 0xffffffff;
      goto LAB_0301d578;
    }
  }
  plVar5 = local_68 + 1;
  local_58[2] = 0;
  local_58[3] = 0;
  *local_58 = *local_58 & 0xffff0000 | local_4c & 0xffff;
  *local_58 = *local_58 & 0xffff | local_50 << 0x10;
LAB_0301d578:
  *(uint *)plVar5 = (int)*plVar5 + local_4c;
  return;
}


