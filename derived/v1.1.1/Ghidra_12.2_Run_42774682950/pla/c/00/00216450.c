/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00216450; name: FUN_00216450
 */


undefined8
FUN_00216450(long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            char *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  if (param_7 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_8 != 0x70) {
    return 0xfffffffa;
  }
  if (*param_7 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pcVar11 = *(code **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar8 = PTR_FUN_04372820;
  if (pcVar11 == (code *)0x0) {
    *(undefined **)(param_1 + 0x40) = PTR_FUN_04372820;
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar12 = *(long *)(param_1 + 0x48);
    pcVar11 = (code *)puVar8;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x48);
  }
  if (lVar12 == 0) {
    *(undefined **)(param_1 + 0x48) = PTR_LAB_04372828;
    uVar7 = 6;
    if (param_2 != 0xffffffff) {
      uVar7 = param_2;
    }
  }
  else {
    uVar7 = 6;
    if (param_2 != 0xffffffff) {
      uVar7 = param_2;
    }
  }
  if ((int)param_4 < 0) {
    iVar13 = 0;
    uVar2 = -param_4;
  }
  else {
    uVar2 = param_4 - 0x10;
    if ((int)param_4 < 0x10) {
      uVar2 = param_4;
    }
    iVar13 = 1;
    if (0xf < (int)param_4) {
      iVar13 = 2;
    }
  }
  if (4 < param_6) {
    return 0xfffffffe;
  }
  if (9 < uVar7) {
    return 0xfffffffe;
  }
  if (param_3 != 8) {
    return 0xfffffffe;
  }
  if (8 < param_5 - 1U) {
    return 0xfffffffe;
  }
  if ((uVar2 & 0xfffffff8) != 8) {
    return 0xfffffffe;
  }
  if ((uVar2 == 8) && (iVar13 != 1)) {
    return 0xfffffffe;
  }
  uVar1 = 9;
  if (uVar2 != 8) {
    uVar1 = uVar2;
  }
  plVar9 = (long *)(*pcVar11)(*(undefined8 *)(param_1 + 0x50),1,0x1740);
  if (plVar9 != (long *)0x0) {
    iVar5 = 1 << (ulong)(uVar1 & 0x1f);
    *(long **)(param_1 + 0x38) = plVar9;
    *(undefined4 *)(plVar9 + 1) = 0x2a;
    *(int *)(plVar9 + 0xb) = iVar5 + -1;
    iVar6 = 1 << (ulong)(param_5 + 7U & 0x1f);
    *(int *)((long)plVar9 + 0x84) = iVar6;
    *(uint *)(plVar9 + 0x11) = param_5 + 7U;
    *(int *)(plVar9 + 6) = iVar13;
    *(int *)(plVar9 + 10) = iVar5;
    *(uint *)((long)plVar9 + 0x54) = uVar1;
    *plVar9 = param_1;
    plVar9[7] = 0;
    *(int *)((long)plVar9 + 0x8c) = iVar6 + -1;
    *(uint *)(plVar9 + 0x12) = (param_5 + 9U & 0xff) / 3;
    lVar12 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar5,2);
    plVar9[0xc] = lVar12;
    lVar12 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),(int)plVar9[10],2);
    plVar9[0xe] = lVar12;
    lVar12 = (**(code **)(param_1 + 0x40))
                       (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar9 + 0x84),2);
    iVar13 = 1 << (ulong)(param_5 + 6U & 0x1f);
    plVar9[0xf] = lVar12;
    plVar9[0x2e7] = 0;
    *(int *)(plVar9 + 0x2e1) = iVar13;
    lVar12 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar13,4);
    uVar2 = *(uint *)(plVar9 + 0x2e1);
    plVar9[2] = lVar12;
    plVar9[3] = (ulong)uVar2 << 2;
    puVar8 = PTR_PTR_04372830;
    if ((((plVar9[0xc] != 0) && (plVar9[0xe] != 0)) && (lVar12 != 0)) && (plVar9[0xf] != 0)) {
      plVar9[0x2e0] = lVar12 + (ulong)uVar2 * 3;
      plVar9[0x2e2] = lVar12 + (ulong)(uVar2 & 0xfffffffe);
      *(uint *)((long)plVar9 + 0xc4) = uVar7;
      *(uint *)(plVar9 + 0x19) = param_6;
      *(undefined1 *)(plVar9 + 9) = 8;
      uVar10 = FUN_00216c40(param_1);
      if ((int)uVar10 == 0) {
        lVar14 = *(long *)(param_1 + 0x38);
        *(ulong *)(lVar14 + 0x68) = (ulong)*(uint *)(lVar14 + 0x50) << 1;
        *(undefined2 *)(*(long *)(lVar14 + 0x78) + (ulong)(*(int *)(lVar14 + 0x84) - 1) * 2) = 0;
        memset(*(void **)(lVar14 + 0x78),0,(ulong)(*(int *)(lVar14 + 0x84) - 1) << 1);
        *(undefined4 *)(lVar14 + 0x172c) = 0;
        *(undefined8 *)(lVar14 + 0xb4) = 0x200000000;
        lVar12 = (long)*(int *)(lVar14 + 0xc4) * 0x10;
        *(undefined8 *)(lVar14 + 0x98) = 0;
        uVar3 = *(ushort *)(&DAT_0411f75a + lVar12);
        *(uint *)(lVar14 + 0xbc) = (uint)*(ushort *)(&DAT_0411f75e + lVar12);
        *(uint *)(lVar14 + 0xc0) = (uint)uVar3;
        uVar3 = *(ushort *)(&DAT_0411f758 + lVar12);
        uVar4 = *(ushort *)(&DAT_0411f75c + lVar12);
        *(undefined8 *)(lVar14 + 0xa8) = 0;
        *(undefined4 *)(lVar14 + 0x80) = 0;
        *(uint *)(lVar14 + 0xcc) = (uint)uVar3;
        *(uint *)(lVar14 + 0xd0) = (uint)uVar4;
        *(undefined4 *)(lVar14 + 0xa0) = 2;
        return 0;
      }
      return uVar10;
    }
    *(undefined4 *)(plVar9 + 1) = 0x29a;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar8 + 0x30);
    FUN_00216770(param_1);
  }
  return 0xfffffffc;
}


