/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03152c04; name: FUN_03152c04
 */


long FUN_03152c04(long *param_1,uint param_2,ulong *param_3,ulong param_4,uint *param_5)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar8 = param_4 & 0xffffffff;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar10 = *param_5;
  uVar4 = (uVar10 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar4) {
    local_7c = uVar4;
  }
  uVar4 = uVar10 & 0x3fffffff;
  local_88 = (ulong)local_7c << 3;
  if ((int)local_7c < (int)uVar4 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar10 = *param_5;
    uVar4 = uVar10 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = param_3 + 1;
      do {
        puVar1 = (ulong *)(lVar2 + lVar6 * 8);
        lVar6 = lVar6 + 2;
        *puVar1 = puVar7[-1];
        puVar7[-1] = 0;
        puVar1[1] = *puVar7;
        *puVar7 = 0;
        puVar7 = puVar7 + 2;
      } while (uVar8 - (param_4 & 1) != lVar6);
    }
    if ((param_4 & 1) != 0) {
      *(ulong *)(lVar2 + lVar6 * 8) = param_3[lVar6];
      param_3[lVar6] = 0;
    }
    puVar7 = param_3;
    do {
      uVar9 = *puVar7;
      if ((uVar9 & 1) != 0) {
        lVar6 = tpidr_el0;
        lVar5 = *(long *)(lVar6 + 0x38d490);
        if (lVar5 == 0) {
          lVar5 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar5;
        }
        plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
        *(undefined8 *)(uVar9 - 0x11) = 0;
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,(undefined8 *)(uVar9 - 0x11),(long)*(int *)(uVar9 - 9) + 0x10);
      }
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar10) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar4 << 3);
  }
  if (local_88 < 0x1fffffff8) {
    uVar10 = (uint)(local_88 >> 3);
  }
  else {
    uVar10 = 0x3fffffff;
  }
  *param_5 = uVar10;
  return lVar2;
}


