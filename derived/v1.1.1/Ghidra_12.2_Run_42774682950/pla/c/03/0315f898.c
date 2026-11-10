/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f898; name: FUN_0315f898
 */


void FUN_0315f898(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  puVar3 = PTR_PTR_0434a080;
  uVar14 = *(uint *)((long)param_2 + 0xc);
  if ((uVar14 & 0x3fffffe0) == 0) {
    puVar9 = (undefined8 *)*param_2;
    uVar2 = (uVar14 & 0x3fffffff) * 2;
    uVar6 = (ulong)uVar2;
    uVar1 = *(uint *)(param_2 + 1);
    uVar10 = (ulong)uVar1;
    if (uVar2 < 0x3fffffff) {
      if (uVar2 < 0x21) {
        uVar6 = 0x20;
      }
    }
    else {
      uVar6 = 0x3fffffff;
    }
    uVar2 = uVar14 & 0x3fffffff;
    local_80[0] = uVar6 << 4;
    local_54 = (uint)uVar6;
    if (local_54 < uVar2) {
      local_80[1] = 1;
      puStack_68 = &local_54;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
      uVar14 = *(uint *)((long)param_2 + 0xc);
      uVar2 = uVar14 & 0x3fffffff;
    }
    lVar4 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_80[0],local_80);
    if (0 < (int)uVar1) {
      puVar11 = puVar9;
      puVar13 = (undefined4 *)(lVar4 + 0xc);
      uVar6 = uVar10;
      do {
        *(undefined8 *)(puVar13 + -3) = 0;
        *(undefined8 *)(puVar13 + -1) = 0x8000000000000000;
        if (*(int *)((long)puVar11 + 0xc) < 0) {
          FUN_031600b4(puVar3,puVar11);
        }
        *(undefined8 *)(puVar13 + -3) = *puVar11;
        puVar13[-1] = *(undefined4 *)(puVar11 + 1);
        uVar6 = uVar6 - 1;
        *puVar13 = *(undefined4 *)((long)puVar11 + 0xc);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11 = puVar11 + 2;
        puVar13 = puVar13 + 4;
      } while (uVar6 != 0);
      puVar12 = (uint *)((long)puVar9 + 0xc);
      do {
        puVar12[-1] = 0;
        if ((-1 < (int)*puVar12) && (*(long *)(puVar12 + -3) != 0)) {
          FUN_032cf244(puVar3,*(long *)(puVar12 + -3),0x20,*puVar12 & 0x3fffffff);
        }
        uVar10 = uVar10 - 1;
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        *puVar12 = 0x80000000;
        puVar12 = puVar12 + 4;
      } while (uVar10 != 0);
    }
    if (-1 < (int)uVar14) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,puVar9,(ulong)uVar2 << 4);
    }
    if (local_80[0] < 0x3fffffff0) {
      uVar5 = (undefined4)(local_80[0] >> 4);
    }
    else {
      uVar5 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_2 + 0xc) = uVar5;
    *param_2 = lVar4;
  }
  uVar14 = *(uint *)(param_2 + 1);
  lVar4 = (long)(int)uVar14;
  if ((int)uVar14 < 0x20) {
    lVar8 = *param_2;
    *(undefined4 *)(param_2 + 1) = 0x20;
    if ((uVar14 & 1) != 0) {
      puVar9 = (undefined8 *)(lVar8 + lVar4 * 0x10);
      *puVar9 = 0;
      puVar9[1] = 0x8000000000000000;
      lVar4 = lVar4 + 1;
    }
    if (uVar14 != 0x1f) {
      lVar7 = lVar4 + -0x20;
      puVar9 = (undefined8 *)(lVar8 + lVar4 * 0x10 + 0x10);
      do {
        puVar9[-2] = 0;
        puVar9[-1] = 0x8000000000000000;
        lVar7 = lVar7 + 2;
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
        puVar9 = puVar9 + 4;
      } while (lVar7 != 0);
    }
  }
  else if (uVar14 != 0x20) {
    lVar8 = lVar4 + -0x20;
    *(undefined4 *)(param_2 + 1) = 0x20;
    puVar13 = (undefined4 *)(*param_2 + lVar4 * 0x10 + -8);
    do {
      *puVar13 = 0;
      if ((-1 < (int)puVar13[1]) && (*(long *)(puVar13 + -2) != 0)) {
        FUN_032cf244(puVar3,*(long *)(puVar13 + -2),0x20,puVar13[1] & 0x3fffffff);
      }
      *(undefined8 *)(puVar13 + -2) = 0;
      lVar8 = lVar8 + -1;
      puVar13[1] = 0x80000000;
      puVar13 = puVar13 + -4;
    } while (lVar8 != 0);
  }
  FUN_0315f5d0(param_1,0,*param_2);
  FUN_0315f5d0(param_1,1,*param_2 + 0x10);
  FUN_0315f5d0(param_1,2,*param_2 + 0x20);
  FUN_0315f5d0(param_1,3,*param_2 + 0x30);
  FUN_0315f5d0(param_1,4,*param_2 + 0x40);
  FUN_0315f5d0(param_1,5,*param_2 + 0x50);
  FUN_0315f5d0(param_1,6,*param_2 + 0x60);
  FUN_0315f5d0(param_1,7,*param_2 + 0x70);
  FUN_0315f5d0(param_1,8,*param_2 + 0x80);
  FUN_0315f5d0(param_1,9,*param_2 + 0x90);
  FUN_0315f5d0(param_1,10,*param_2 + 0xa0);
  FUN_0315f5d0(param_1,0xb,*param_2 + 0xb0);
  FUN_0315f5d0(param_1,0xc,*param_2 + 0xc0);
  FUN_0315f5d0(param_1,0xd,*param_2 + 0xd0);
  FUN_0315f5d0(param_1,0xe,*param_2 + 0xe0);
  FUN_0315f5d0(param_1,0xf,*param_2 + 0xf0);
  FUN_0315f5d0(param_1,0x10,*param_2 + 0x100);
  FUN_0315f5d0(param_1,0x11,*param_2 + 0x110);
  FUN_0315f5d0(param_1,0x12,*param_2 + 0x120);
  FUN_0315f5d0(param_1,0x13,*param_2 + 0x130);
  FUN_0315f5d0(param_1,0x14,*param_2 + 0x140);
  FUN_0315f5d0(param_1,0x15,*param_2 + 0x150);
  FUN_0315f5d0(param_1,0x16,*param_2 + 0x160);
  FUN_0315f5d0(param_1,0x17,*param_2 + 0x170);
  FUN_0315f5d0(param_1,0x18,*param_2 + 0x180);
  FUN_0315f5d0(param_1,0x19,*param_2 + 400);
  FUN_0315f5d0(param_1,0x1a,*param_2 + 0x1a0);
  FUN_0315f5d0(param_1,0x1b,*param_2 + 0x1b0);
  FUN_0315f5d0(param_1,0x1c,*param_2 + 0x1c0);
  FUN_0315f5d0(param_1,0x1d,*param_2 + 0x1d0);
  FUN_0315f5d0(param_1,0x1e,*param_2 + 0x1e0);
  FUN_0315f5d0(param_1,0x1f,*param_2 + 0x1f0);
  return;
}


