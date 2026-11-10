/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bc038; name: FUN_031bc038
 */


undefined8 FUN_031bc038(long param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar3 = FUN_031bb464(param_1,param_2,param_4);
  if ((iVar3 == 0) && (*param_2 == *(int *)(param_1 + 0x24))) {
    iVar3 = -1;
    if (param_3 == 0) {
      iVar3 = 1;
    }
    iVar4 = 0;
    if (param_3 != 1) {
      iVar4 = iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x74);
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x70);
      if (iVar4 != 1) {
        iVar3 = *(int *)(param_1 + 0x80) + -1;
      }
    }
    iVar2 = 1;
    if (iVar4 != 1) {
      iVar2 = -1;
    }
    iVar2 = iVar3 + iVar2;
    lVar6 = (long)iVar2;
    if (iVar4 != 1) {
      if (*(int *)(param_1 + 0x70) <= iVar2) {
        lVar7 = 0;
        lVar8 = lVar6 * 0x30;
        while( true ) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar3 * 0x30 + lVar7);
          local_90 = *puVar1;
          local_88 = puVar1[1];
          local_80 = puVar1[2];
          uStack_78 = puVar1[3];
          local_70 = puVar1[4];
          uStack_68 = puVar1[5];
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar8 + lVar7);
          local_98 = puVar1[5];
          local_a8 = puVar1[3];
          local_b8 = puVar1[1];
          local_c0 = *puVar1;
          local_b0 = puVar1[2];
          local_a0 = puVar1[4];
          FUN_031bb3f8(param_1,&local_90,&local_c0);
          iVar4 = FUN_031bc330(param_1,&local_90,param_2);
          if (iVar4 != 0) break;
          lVar6 = lVar6 + -1;
          if (lVar6 < *(int *)(param_1 + 0x70)) {
            local_c0._0_6_ = CONCAT15(2,(undefined5)local_c0);
          }
          FUN_031bb9e0(param_1,&local_90,&local_c0);
          lVar7 = lVar7 + -0x30;
          if (lVar6 < *(int *)(param_1 + 0x70)) {
            return 1;
          }
        }
        goto LAB_031bc2e0;
      }
    }
    else if (iVar2 < *(int *)(param_1 + 0x80)) {
      lVar7 = 0;
      lVar8 = lVar6 * 0x30;
      while( true ) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar3 * 0x30 + lVar7);
        local_90 = *puVar1;
        local_88 = puVar1[1];
        local_80 = puVar1[2];
        uStack_78 = puVar1[3];
        local_70 = puVar1[4];
        uStack_68 = puVar1[5];
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar8 + lVar7);
        local_98 = puVar1[5];
        local_a8 = puVar1[3];
        local_b8 = puVar1[1];
        local_c0 = *puVar1;
        local_b0 = puVar1[2];
        local_a0 = puVar1[4];
        FUN_031bb3f8(param_1,&local_90,&local_c0);
        iVar4 = FUN_031bc330(param_1,&local_90,param_2);
        if (iVar4 != 0) break;
        lVar6 = lVar6 + 1;
        if (*(int *)(param_1 + 0x80) <= lVar6) {
          local_c0._0_6_ = CONCAT15(2,(undefined5)local_c0);
        }
        FUN_031bb9e0(param_1,&local_90,&local_c0);
        lVar7 = lVar7 + 0x30;
        if (*(int *)(param_1 + 0x80) <= lVar6) {
          return 1;
        }
      }
LAB_031bc2e0:
      local_f0 = *(undefined8 *)param_2;
      uStack_e8 = *(undefined8 *)(param_2 + 2);
      local_d0 = *(undefined8 *)(param_2 + 8);
      uStack_c8 = *(undefined8 *)(param_2 + 10);
      local_e0 = *(undefined8 *)(param_2 + 4);
      uStack_d8 = *(undefined8 *)(param_2 + 6);
      local_90 = *(undefined8 *)(param_1 + 0xd0);
      local_88 = CONCAT71(local_88._1_7_,*(undefined1 *)(param_1 + 0xd8));
      uStack_78 = *(undefined8 *)(param_1 + 0xe8);
      local_80 = *(undefined8 *)(param_1 + 0xe0);
      uStack_68 = *(undefined8 *)(param_1 + 0xf8);
      local_70 = *(undefined8 *)(param_1 + 0xf0);
      FUN_031bb9e0(param_1,&local_90,&local_f0);
      return 1;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


