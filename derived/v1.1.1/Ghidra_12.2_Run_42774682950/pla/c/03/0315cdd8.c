/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315cdd8; name: FUN_0315cdd8
 */


void FUN_0315cdd8(float param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  lVar16 = tpidr_el0;
  if (*(long *)(lVar16 + 0x38d490) == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar9;
    lVar16 = *(long *)(lVar9 + 0x10);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38d490) + 0x10);
  }
  if (lVar16 != 0) {
    puVar3 = *(undefined8 **)(lVar16 + 8);
    uVar12 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar12, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtinitClearanceCache";
      uVar17 = nn::os::GetSystemTick();
      puVar3[1] = uVar17;
    }
  }
  *(float *)(param_2 + 0x18) = param_1;
  fVar20 = *(float *)(*(long *)(*(long *)(param_3 + 0x20) + 0x68) + 0xb0);
  *(float *)(param_2 + 0x1c) = fVar20;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (param_1 <= fVar20 + 0.001) {
    *(undefined8 *)(param_2 + 0x20) = 0;
    goto LAB_0315d100;
  }
  uVar19 = *(uint *)(param_2 + 0x34);
  *(float *)(param_2 + 0x20) = (param_1 - fVar20) / 254.0;
  *(int *)(param_2 + 0x24) = (int)(254.0 / (param_1 - fVar20)) + 1;
  puVar5 = PTR_PTR_0434a080;
  uVar1 = *(int *)(*(long *)(param_3 + 0x20) + 0xd8) + *(int *)(*(long *)(param_3 + 0x20) + 0x20);
  uVar10 = uVar19 & 0x3fffffff;
  if ((int)uVar10 < (int)uVar1) {
    uVar17 = *(undefined8 *)(param_2 + 0x28);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar19 = *(uint *)(param_2 + 0x34);
      uVar10 = uVar19 & 0x3fffffff;
    }
    uVar13 = (uVar19 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    local_7c = uVar1;
    if ((int)uVar1 <= (int)uVar13) {
      local_7c = uVar13;
    }
    local_88 = (ulong)local_7c << 2;
    if (((int)local_7c < (int)uVar10) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_68 = &local_7c;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar19 = *(uint *)(param_2 + 0x34);
    }
    uVar8 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_88,&local_88);
    if (-1 < (int)uVar19) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,uVar17,uVar19 << 2);
    }
    if (local_88 < 0xfffffffc) {
      uVar11 = (undefined4)(local_88 >> 2);
    }
    else {
      uVar11 = 0x3fffffff;
    }
    *(undefined4 *)(param_2 + 0x34) = uVar11;
    uVar10 = *(uint *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = uVar8;
    bVar7 = SBORROW4(uVar1,uVar10);
    uVar19 = uVar1 - uVar10;
    if ((int)uVar1 <= (int)uVar10) goto LAB_0315d23c;
LAB_0315cfa4:
    *(uint *)(param_2 + 0x30) = uVar1;
    memset((void *)(*(long *)(param_2 + 0x28) + (long)(int)uVar10 * 4),0xff,
           (ulong)(uVar1 + ~uVar10) * 4 + 4);
  }
  else {
    uVar10 = 0;
    bVar7 = false;
    uVar19 = uVar1;
    if (0 < (int)uVar1) goto LAB_0315cfa4;
LAB_0315d23c:
    if ((int)uVar19 < 0 != bVar7) {
      *(uint *)(param_2 + 0x30) = uVar1;
    }
  }
  iVar15 = *(int *)(*(long *)(param_3 + 0x20) + 0x30);
  iVar4 = *(int *)(*(long *)(param_3 + 0x20) + 0xe8);
  puVar18 = (uint *)(param_2 + 0x5c);
  uVar10 = *puVar18;
  uVar1 = iVar4 + iVar15;
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar1) {
    uVar17 = *(undefined8 *)(param_2 + 0x50);
    uVar11 = *(undefined4 *)(param_2 + 0x58);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar10 = *puVar18;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar19 = uVar1;
    if ((int)uVar1 <= (int)uVar10) {
      uVar19 = uVar10;
    }
    uVar17 = FUN_032bd1d4(puVar5,uVar19,2,uVar17,uVar11,puVar18);
    *(undefined8 *)(param_2 + 0x50) = uVar17;
  }
  uVar10 = *(uint *)(param_2 + 0x58);
  if ((int)uVar10 < (int)uVar1) {
    *(uint *)(param_2 + 0x58) = uVar1;
    uVar6 = DAT_04434b68;
    puVar2 = (undefined2 *)(*(long *)(param_2 + 0x50) + (long)(int)uVar10 * 2);
    uVar19 = uVar1 - uVar10 & 3;
    if (2 < uVar1 + ~uVar10) {
      iVar15 = ((uVar10 + uVar19) - iVar4) - iVar15;
      puVar14 = puVar2;
      do {
        puVar2 = puVar14 + 4;
        *puVar14 = uVar6;
        iVar15 = iVar15 + 4;
        puVar14[1] = uVar6;
        puVar14[2] = uVar6;
        puVar14[3] = uVar6;
        puVar14 = puVar2;
      } while (iVar15 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar2 = uVar6;
      puVar2 = puVar2 + 1;
    }
  }
  else if ((int)uVar1 < (int)uVar10) {
    *(uint *)(param_2 + 0x58) = uVar1;
  }
  puVar18 = (uint *)(param_2 + 0x6c);
  uVar10 = *puVar18;
  uVar1 = *(int *)(*(long *)(param_3 + 0x20) + 0xf8) + *(int *)(*(long *)(param_3 + 0x20) + 0x40);
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar1) {
    uVar17 = *(undefined8 *)(param_2 + 0x60);
    uVar11 = *(undefined4 *)(param_2 + 0x68);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar10 = *puVar18;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar19 = uVar1;
    if ((int)uVar1 <= (int)uVar10) {
      uVar19 = uVar10;
    }
    uVar17 = FUN_032bd1d4(puVar5,uVar19,1,uVar17,uVar11,puVar18);
    *(undefined8 *)(param_2 + 0x60) = uVar17;
  }
  uVar10 = *(uint *)(param_2 + 0x68);
  if ((int)uVar10 < (int)uVar1) {
    *(uint *)(param_2 + 0x68) = uVar1;
    memset((void *)(*(long *)(param_2 + 0x60) + (long)(int)uVar10),0xff,(ulong)(uVar1 + ~uVar10) + 1
          );
  }
  else if ((int)uVar1 < (int)uVar10) {
    *(uint *)(param_2 + 0x68) = uVar1;
  }
LAB_0315d100:
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (lVar16 != 0) {
    puVar3 = *(undefined8 **)(lVar16 + 8);
    uVar12 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar12 <= *(ulong *)(lVar16 + 0x10)) &&
       (*(ulong *)(lVar16 + 8) = uVar12, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_0390f40e;
      uVar17 = nn::os::GetSystemTick();
      puVar3[1] = uVar17;
    }
  }
  return;
}


