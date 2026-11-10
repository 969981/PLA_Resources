/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f8368; name: FUN_032f8368
 */


undefined8 FUN_032f8368(char *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  char **ppcVar12;
  undefined8 *puVar13;
  long lVar14;
  char *local_208;
  undefined8 local_200;
  ulong *local_1f8;
  ulong *puStack_1f0;
  undefined8 local_b8;
  ulong *local_b0;
  ulong *local_a8;
  char *local_a0 [2];
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_208 = param_1;
  local_200 = param_2;
  local_1f8 = param_3;
  puStack_1f0 = param_4;
  if ((param_3 != (ulong *)0x0) || (*param_1 != '\0')) {
    FUN_032e2c7c(local_a0,param_4,&DAT_04358dc0);
    if (((ulong)local_90 & 1) != 0) {
      plVar4 = (long *)((ulong)local_90 & 0xfffffffffffffffe);
      plVar1 = plVar4 + 1;
      do {
        lVar14 = *plVar1;
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *(int *)plVar1 = (int)lVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((plVar4 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (local_a0[0] == (char *)0x0) {
      iVar3 = FUN_032f9800(&local_208,param_4,0,param_3,0);
    }
    else {
      iVar3 = (**(code **)local_a0[0])(local_200,param_4,0,param_3,0);
    }
    if (iVar3 < 0) {
      return 0x80040200;
    }
  }
  local_b8 = param_2;
  local_b0 = param_4;
  local_a8 = param_3;
  local_a0[0] = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar14 = (long)*(int *)(param_1 + 0x10) << 3;
    puVar13 = *(undefined8 **)(param_1 + 8);
    do {
      iVar3 = (**(code **)(*(long *)*puVar13 + 0x18))((long *)*puVar13,param_2,param_3,param_4);
      if (iVar3 < 0) {
        if (DAT_0444acb0 < 4) {
          if (DAT_04350668 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_04350668 == '\0') {
          local_a0[0] = (char *)0x0;
          local_90 = &DAT_0444ac60;
          uStack_88 = 4;
          local_80 = FUN_032ba19c();
          uStack_78 = 0;
          local_70 = 0;
          local_68 = 0;
          ppcVar12 = local_a0;
          local_60 = 0;
          uStack_58 = 0;
          local_208 = param_1;
          FUN_03326338(local_a0,"{}, Compiler could not convert types {}->{}, p = {}",&DAT_0434d860,
                       &local_208,&local_a8,&local_b0,&local_b8);
          bVar7 = false;
          bVar2 = true;
          goto LAB_032f86ac;
        }
        ppcVar12 = &local_208;
        FUN_03326a7c(&local_208,&DAT_0444ac60,4);
        FUN_03326338(&local_208,"{}, Compiler could not convert types {}->{}, p = {}",&DAT_0434d860,
                     local_a0,&local_a8,&local_b0,&local_b8);
        bVar2 = false;
        bVar7 = true;
LAB_032f86ac:
        ppcVar12[7] = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
        ;
        ppcVar12[8] = (char *)0x179;
        if (bVar7) {
          FUN_03326adc(&local_208);
        }
        if (bVar2) {
          FUN_033266e0(local_a0);
          FUN_032c7b9c(&uStack_78);
          return 0x80040200;
        }
        return 0x80040200;
      }
      lVar14 = lVar14 + -8;
      puVar13 = puVar13 + 1;
    } while (lVar14 != 0);
  }
  if (param_3 == (ulong *)0x0) {
LAB_032f849c:
    uVar9 = 0;
    puVar10 = param_4;
    do {
      uVar8 = (uint)uVar9;
      uVar11 = (uint)*puVar10;
      if ((uVar11 >> 0x15 & 1) != 0) {
        uVar8 = (uVar11 & 0x1fffff) - (uVar11 >> 1 & 0x55555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar9 = puVar10[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | uVar9
        ;
        uVar8 = (uint)uVar9;
      }
      if ((*puVar10 & 1) != 0) break;
      uVar8 = (uint)uVar9;
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
    if ((uVar8 >> 0xc & 1) == 0) goto LAB_032f8548;
  }
  else {
    uVar9 = 0;
    puVar10 = param_3;
    do {
      uVar8 = (uint)uVar9;
      uVar11 = (uint)*puVar10;
      if ((uVar11 >> 0x15 & 1) != 0) {
        uVar8 = (uVar11 & 0x1fffff) - (uVar11 >> 1 & 0x55555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar9 = puVar10[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | uVar9
        ;
        uVar8 = (uint)uVar9;
      }
      if ((*puVar10 & 1) != 0) break;
      uVar8 = (uint)uVar9;
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
    if ((uVar8 >> 0xc & 1) == 0) goto LAB_032f849c;
  }
  iVar5 = *(int *)(param_1 + 0x60);
  lVar14 = *(long *)(param_1 + 0x58);
  iVar3 = iVar5 + 1;
  if ((int)(*(uint *)(param_1 + 100) & 0x3fffffff) <= iVar5) {
    lVar14 = FUN_032fc270(PTR_PTR_0434a080,iVar3);
    iVar5 = *(int *)(param_1 + 0x60);
    *(long *)(param_1 + 0x58) = lVar14;
  }
  plVar1 = (long *)(lVar14 + (long)iVar5 * 0x10);
  *plVar1 = (long)param_3;
  plVar1[1] = (long)param_4;
  *(int *)(param_1 + 0x60) = iVar3;
LAB_032f8548:
  cVar6 = DAT_04350668;
  if (DAT_0444acb0 < 4) {
    if (DAT_04350668 == '\0') {
      return 0;
    }
    cVar6 = '\x01';
  }
  if (cVar6 != '\0') {
    ppcVar12 = &local_208;
    FUN_03326a7c(&local_208,&DAT_0444ac60,4);
    FUN_03326338(&local_208,"{} Type newly compiled {}->{}, p = {}",&DAT_0434d860,local_a0,&local_a8
                 ,&local_b0,&local_b8);
  }
  else {
    local_a0[0] = (char *)0x0;
    local_90 = &DAT_0444ac60;
    uStack_88 = 4;
    local_80 = FUN_032ba19c();
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    ppcVar12 = local_a0;
    local_60 = 0;
    uStack_58 = 0;
    local_208 = param_1;
    FUN_03326338(local_a0,"{} Type newly compiled {}->{}, p = {}",&DAT_0434d860,&local_208,&local_a8
                 ,&local_b0,&local_b8);
  }
  ppcVar12[7] = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp";
  ppcVar12[8] = (char *)0x183;
  if (cVar6 != '\0') {
    FUN_03326adc(&local_208);
  }
  else {
    FUN_033266e0(local_a0);
    FUN_032c7b9c(&uStack_78);
  }
  return 0;
}


