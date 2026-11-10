/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031aaf24; name: FUN_031aaf24
 */


long FUN_031aaf24(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar4 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = *param_5;
  uVar3 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  uVar10 = uVar9 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_7c = uVar3;
  }
  local_88 = (ulong)local_7c * 0xa0;
  if ((int)local_7c < (int)uVar10 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar9 = *param_5;
    uVar10 = uVar9 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  puVar1 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    puVar5 = (undefined4 *)(lVar2 + 0x9c);
    puVar7 = (undefined8 *)(param_3 + 0x90);
    uVar8 = uVar4;
    do {
      memcpy(puVar5 + -0x27,puVar7 + -0x12,0x90);
      *(undefined8 *)(puVar5 + -3) = 0;
      *(undefined8 *)(puVar5 + -1) = 0x8000000000000000;
      if (*(int *)((long)puVar7 + 0xc) < 0) {
        FUN_032bcf84(puVar1,puVar7,4);
      }
      *(undefined8 *)(puVar5 + -3) = *puVar7;
      puVar5[-1] = *(undefined4 *)(puVar7 + 1);
      uVar8 = uVar8 - 1;
      *puVar5 = *(undefined4 *)((long)puVar7 + 0xc);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar5 = puVar5 + 0x28;
      puVar7 = puVar7 + 0x14;
    } while (uVar8 != 0);
    piVar6 = (int *)(param_3 + 0x9c);
    do {
      piVar6[-1] = 0;
      if ((-1 < *piVar6) && (*(long *)(piVar6 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1,*(long *)(piVar6 + -3),*piVar6 << 2);
      }
      piVar6[-3] = 0;
      piVar6[-2] = 0;
      uVar4 = uVar4 - 1;
      *piVar6 = -0x80000000;
      piVar6 = piVar6 + 0x28;
    } while (uVar4 != 0);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar10 * 0xa0);
  }
  if (local_88 < 0x27ffffff60) {
    uVar3 = (uint)(local_88 / 0xa0);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


