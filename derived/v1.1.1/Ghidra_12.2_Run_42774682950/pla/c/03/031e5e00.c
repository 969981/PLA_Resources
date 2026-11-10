/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e5e00; name: FUN_031e5e00
 */


void FUN_031e5e00(long param_1,int *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined8 *local_178;
  int local_168 [2];
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_78;
  ulong local_70 [2];
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar8;
    lVar12 = *(long *)(lVar8 + 0x10);
  }
  else {
    lVar12 = *(long *)(lVar8 + 0x10);
  }
  if (lVar12 != 0) {
    FUN_032d5af0(lVar12,"TtthreadSafeResetClearanceMediator",0x22);
    lVar8 = *(long *)(lVar2 + 0x38d490);
  }
  lVar13 = (long)DAT_0444b53c;
  local_78 = lVar12;
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar13 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  puVar4 = PTR_PTR_0434a090;
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0);
  local_d8 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uVar14 = (ulong)((long)param_4 - (long)param_3) >> 5;
  local_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_e0 = PTR_DAT_04388dc8 + 0x10;
  local_90 = 0x40000000;
  if ((int)uVar14 < 1) {
    local_178 = (undefined8 *)0x0;
    uVar14 = 0x80000000;
  }
  else {
    if (0x3fffffff < (int)uVar14) {
      FUN_032bd0a8(uVar14 & 0xffffffff);
    }
    FUN_032bd100(uVar14 & 0xffffffff,0x20,0x80000000,&local_160);
    local_178 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_160,&local_160);
    if (local_160 < 0x7ffffffe0) {
      uVar14 = local_160 >> 5;
    }
    else {
      uVar14 = 0x3fffffff;
    }
  }
  uVar16 = (uint)uVar14;
  uVar18 = FUN_03179fd0(param_1,*(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x180));
  local_e8 = CONCAT44(uVar18,uVar18);
  if (param_3 == param_4) {
    uVar9 = 0;
    puVar5 = local_178;
  }
  else {
    lVar13 = -1;
    puVar15 = local_178;
    uVar17 = 0;
    do {
      local_148 = param_3[3];
      uVar16 = (uint)uVar14;
      uVar9 = uVar17 + 1;
      local_158 = param_3[1];
      local_160 = *param_3;
      local_150 = param_3[2];
      puVar5 = puVar15;
      if ((uVar16 & 0x3fffffff) <= uVar17) {
        if (0x3ffffffe < uVar17) {
          FUN_032bd0a8(uVar9 & 0xffffffff);
        }
        uVar7 = (uVar16 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar7) {
          uVar7 = 0x3fffffff;
        }
        uVar1 = (uint)uVar9;
        if ((int)(uint)uVar9 <= (int)uVar7) {
          uVar1 = uVar7;
        }
        FUN_032bd100(uVar1,0x20,uVar14 & 0xffffffff,local_70);
        puVar5 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_70[0],local_70);
        if (uVar17 != 0) {
          uVar10 = local_178[3];
          puVar5[1] = local_178[1];
          puVar5[3] = uVar10;
          uVar10 = *local_178;
          puVar5[2] = local_178[2];
          *puVar5 = uVar10;
          if (uVar17 != 1) {
            lVar11 = lVar13;
            puVar3 = puVar5;
            do {
              uVar10 = puVar15[7];
              lVar11 = lVar11 + -1;
              puVar3[5] = puVar15[5];
              puVar3[7] = uVar10;
              uVar10 = puVar15[4];
              puVar3[6] = puVar15[6];
              puVar3[4] = uVar10;
              puVar3 = puVar3 + 4;
              puVar15 = puVar15 + 4;
            } while (lVar11 != 0);
          }
        }
        if (-1 < (int)uVar16) {
          (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_178,(ulong)(uVar16 & 0x3fffffff) << 5);
        }
        if (local_70[0] < 0x7ffffffe0) {
          uVar14 = local_70[0] >> 5;
        }
        else {
          uVar14 = 0x3fffffff;
        }
        local_178 = puVar5;
      }
      uVar16 = (uint)uVar14;
      FUN_0333e180(lVar8 + 0x60,&local_160,&local_e8,puVar5 + uVar17 * 4);
      param_3 = param_3 + 4;
      lVar13 = lVar13 + 1;
      puVar15 = puVar5;
      uVar17 = uVar9;
    } while (param_3 != param_4);
    uVar9 = uVar9 & 0xffffffff;
  }
  puStack_b0 = puVar5 + uVar9 * 4;
  lVar13 = (long)DAT_0444b53c;
  lVar8 = *(long *)(lVar2 + 0x38d490);
  local_b8 = puVar5;
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar13 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  local_168[0] = *param_2;
  FUN_031e6280(&local_160,param_1,local_168);
  plVar6 = (long *)FUN_0317a2bc(param_1);
  (**(code **)(*plVar6 + 0x58))(plVar6,&local_e0,&local_160);
  FUN_031e6308(&local_160);
  if ((puVar5 != (undefined8 *)0x0) && (-1 < (int)uVar16)) {
    FUN_032cf244(puVar4,local_178,0x20,uVar16 & 0x3fffffff);
  }
  if (lVar12 != 0) {
    FUN_032d5b34(lVar12,&DAT_0390f40e);
  }
  return;
}


