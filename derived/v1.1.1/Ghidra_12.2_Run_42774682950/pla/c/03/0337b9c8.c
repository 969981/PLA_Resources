/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337b9c8; name: FUN_0337b9c8
 */


/* WARNING: Removing unreachable block (ram,0x0337bb2c) */

void FUN_0337b9c8(long *param_1,long *param_2,int param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if ((param_3 < (int)((ulong)(param_5 - param_4) >> 3)) &&
     (lVar7 = *(long *)(param_4 + (long)param_3 * 8), lVar7 != 0)) {
    *param_2 = lVar7;
    return;
  }
  *param_2 = *(long *)(param_6 + (long)param_3 * 8);
  uVar13 = *(uint *)(param_1 + 1);
  uVar12 = *(uint *)((long)param_1 + 0xc);
  lVar11 = *param_1;
  uVar2 = uVar12 & 0x3fffffff;
  uVar1 = uVar13 + 1;
  lVar7 = lVar11;
  if ((int)uVar13 < (int)uVar2) goto LAB_0337ba30;
  if (0x3ffffffe < (int)uVar13) {
    FUN_032bd0a8(uVar1);
    uVar12 = *(uint *)((long)param_1 + 0xc);
    uVar2 = uVar12 & 0x3fffffff;
  }
  puVar4 = PTR_PTR_0434a080;
  uVar5 = (uVar12 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  local_7c = uVar1;
  if ((int)uVar1 <= (int)uVar5) {
    local_7c = uVar5;
  }
  local_88 = (ulong)local_7c << 4;
  if (((int)local_7c < (int)uVar2) || (0x3fffffff < (int)local_7c)) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar12 = *(uint *)((long)param_1 + 0xc);
    uVar2 = uVar12 & 0x3fffffff;
  }
  lVar7 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_88,&local_88);
  if (0 < (int)uVar13) {
    if (uVar13 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar9 = (undefined8 *)(lVar7 + 0x10);
      puVar10 = (undefined8 *)(lVar11 + 0x10);
      do {
        uVar3 = puVar10[-1];
        lVar8 = lVar8 + 2;
        puVar9[-2] = puVar10[-2];
        puVar9[-1] = uVar3;
        uVar3 = puVar10[1];
        *puVar9 = *puVar10;
        puVar9[1] = uVar3;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
      } while ((ulong)uVar13 - ((ulong)uVar13 & 1) != lVar8);
      if ((uVar13 & 1) == 0) goto LAB_0337bb74;
    }
    puVar9 = (undefined8 *)(lVar7 + lVar8 * 0x10);
    puVar10 = (undefined8 *)(lVar11 + lVar8 * 0x10);
    uVar3 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar3;
  }
LAB_0337bb74:
  if (-1 < (int)uVar12) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar11,(ulong)uVar2 << 4);
  }
  if (local_88 < 0x3fffffff0) {
    uVar6 = (undefined4)(local_88 >> 4);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  uVar13 = *(uint *)(param_1 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = uVar6;
  *param_1 = lVar7;
LAB_0337ba30:
  puVar9 = (undefined8 *)(lVar7 + (long)(int)uVar13 * 0x10);
  *puVar9 = param_2;
  *(int *)(puVar9 + 1) = param_3;
  *(uint *)(param_1 + 1) = uVar1;
  return;
}


