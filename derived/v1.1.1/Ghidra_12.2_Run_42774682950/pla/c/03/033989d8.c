/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033989d8; name: FUN_033989d8
 */


long FUN_033989d8(long *param_1,uint param_2,ulong *param_3,uint param_4,uint *param_5)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar9 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar11 = *param_5;
  uVar5 = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar5) {
    local_7c = uVar5;
  }
  uVar5 = uVar11 & 0x3fffffff;
  local_88 = (ulong)local_7c << 4;
  if ((int)local_7c < (int)uVar5 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar11 = *param_5;
    uVar5 = uVar11 & 0x3fffffff;
  }
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    puVar6 = (undefined4 *)(lVar3 + 8);
    puVar8 = param_3;
    uVar10 = uVar9;
    do {
      *(ulong *)(puVar6 + -2) = *puVar8;
      puVar1 = puVar8 + 1;
      *puVar8 = 0;
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 2;
      *puVar6 = (int)*puVar1;
      puVar6 = puVar6 + 4;
    } while (uVar10 != 0);
    lVar2 = tpidr_el0;
    puVar8 = param_3;
    do {
      uVar10 = *puVar8;
      if ((uVar10 & 1) != 0) {
        lVar7 = *(long *)(lVar2 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar7;
        }
        plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        *(undefined8 *)(uVar10 - 0x11) = 0;
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
      }
      puVar8 = puVar8 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar5 << 4);
  }
  if (local_88 < 0x3fffffff0) {
    uVar11 = (uint)(local_88 >> 4);
  }
  else {
    uVar11 = 0x3fffffff;
  }
  *param_5 = uVar11;
  return lVar3;
}


