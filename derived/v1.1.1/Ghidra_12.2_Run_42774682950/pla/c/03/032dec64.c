/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dec64; name: FUN_032dec64
 */


ulong FUN_032dec64(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined *puStack_48;
  int *local_40;
  undefined4 *puStack_38;
  
  local_68 = param_2;
  lVar4 = FUN_032df55c(param_1,&local_68);
  if ((lVar4 == 0) ||
     (uVar5 = (ulong)*(uint *)(lVar4 + 4) | (lVar4 - param_1[2]) * 0x20000000, (int)uVar5 < 0)) {
    local_78 = 0;
    local_70 = 0x8000000000000000;
    FUN_032df034(param_2,&local_78,0);
    local_50 = 0;
    puStack_48 = (undefined *)0x8000000000000000;
    uVar5 = FUN_032df43c(param_1,&local_68,&local_50);
    puVar3 = PTR_PTR_0434a080;
    lVar4 = *param_1;
    plVar1 = (long *)(lVar4 + (long)(int)uVar5 * 0x18 + 8);
    if (&local_78 == plVar1) {
      uVar6 = local_70._4_4_;
      if ((long)local_70 < 0) {
        return uVar5;
      }
    }
    else {
      lVar12 = (long)(int)uVar5;
      puVar9 = (uint *)(lVar4 + lVar12 * 0x18 + 0x14);
      if ((int)*puVar9 < 0) {
        local_54 = 0x10;
        piVar13 = (int *)(lVar4 + lVar12 * 0x18 + 0x10);
        local_60 = (long)*piVar13 << 4;
        if (*piVar13 < 0) {
          local_50 = 2;
          puStack_48 = &DAT_0411b3a0;
          puStack_38 = &local_54;
          local_40 = piVar13;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_50);
          iVar7 = *piVar13;
        }
        else {
          iVar7 = *piVar13;
        }
        if (iVar7 == 0) {
          *puVar9 = 0;
          *plVar1 = 0;
        }
        else {
          lVar8 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
          if (lVar8 != 0) {
            uVar6 = (uint)(local_60 >> 4);
            if (0x3ffffffe < (int)uVar6) {
              uVar6 = 0x3fffffff;
            }
            if (0 < *piVar13) {
              lVar10 = 0;
              lVar11 = 0;
              do {
                uVar2 = ((undefined8 *)(*plVar1 + lVar10))[1];
                lVar11 = lVar11 + 1;
                *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)(*plVar1 + lVar10);
                ((undefined8 *)(lVar8 + lVar10))[1] = uVar2;
                lVar10 = lVar10 + 0x10;
              } while (lVar11 < *piVar13);
            }
            *plVar1 = lVar8;
            *puVar9 = uVar6;
          }
        }
      }
      if ((long)local_70 < 0) {
        local_54 = 0x10;
        local_60 = (long)(int)local_70 << 4;
        if ((int)local_70 < 0) {
          local_50 = 2;
          puStack_48 = &DAT_0411b3a0;
          local_40 = (int *)&local_70;
          puStack_38 = &local_54;
          FUN_03320b50(0x77a36e5f,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x27,"Array size overflow {}*{}",&local_50);
        }
        if ((int)local_70 == 0) {
          local_70 = local_70 & 0xffffffff;
          local_78 = 0;
        }
        else {
          lVar8 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
          if (lVar8 != 0) {
            iVar7 = (int)(local_60 >> 4);
            if (0x3ffffffe < iVar7) {
              iVar7 = 0x3fffffff;
            }
            if (0 < (int)local_70) {
              lVar10 = 0;
              lVar11 = 0;
              do {
                uVar2 = ((undefined8 *)(local_78 + lVar10))[1];
                lVar11 = lVar11 + 1;
                *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)(local_78 + lVar10);
                ((undefined8 *)(lVar8 + lVar10))[1] = uVar2;
                lVar10 = lVar10 + 0x10;
              } while (lVar11 < (int)local_70);
            }
            local_70 = CONCAT44(iVar7,(int)local_70);
            local_78 = lVar8;
          }
        }
      }
      lVar8 = *plVar1;
      *plVar1 = local_78;
      *(int *)(lVar4 + lVar12 * 0x18 + 0x10) = (int)local_70;
      uVar6 = *puVar9;
      *puVar9 = (uint)(local_70 >> 0x20);
      local_78 = lVar8;
      if ((int)uVar6 < 0) {
        return uVar5;
      }
    }
    local_70 = (ulong)uVar6 << 0x20;
    if (local_78 != 0) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_78,(ulong)(uVar6 & 0x3fffffff) << 4);
    }
  }
  return uVar5;
}


