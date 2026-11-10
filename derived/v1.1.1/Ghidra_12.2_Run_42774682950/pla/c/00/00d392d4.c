/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d392d4; name: FUN_00d392d4
 */


void FUN_00d392d4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined **local_148;
  undefined **ppuStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if (*(long *)(param_1 + 0x4c8) != 0) {
    if (*(int *)(param_1 + 0xc4) == 0) {
      iVar3 = *(int *)(param_1 + 0x120);
      if (((*PTR_DAT_043796b8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043796b8);
      }
      lVar7 = *(long *)PTR_DAT_043796c0;
      *(long *)PTR_DAT_043796c8 = lVar7;
      if (iVar3 == 2) {
        pppuVar6 = (undefined ***)(param_1 + 0x230);
      }
      else if (iVar3 == 0) {
        pppuVar6 = (undefined ***)(param_1 + 0x128);
      }
      else {
        pppuVar6 = (undefined ***)(lVar7 + 0x70);
      }
    }
    else {
      pppuVar6 = (undefined ***)FUN_00d27930(param_1 + 0x118,0);
    }
    lVar7 = *(long *)(param_1 + 0x4c8);
    local_48 = 0;
    local_148 = &PTR_FUN_041eadb0;
    ppuStack_140 = &PTR_LAB_041ed738;
    local_138 = 0x30000000a;
    local_130 = 10;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_00d43d18(*(undefined8 *)(lVar7 + 0x58),pppuVar6);
    uVar1 = *(undefined8 *)(lVar7 + 0x60);
    plVar5 = (long *)(**(code **)(**(long **)(*(long *)(lVar7 + 0x58) + 0x580) + 0x18))();
    if (plVar5[1] != *plVar5) {
      pppuVar6 = &local_148;
    }
    FUN_00d43d18(uVar1,pppuVar6);
    FUN_00d43d18(*(undefined8 *)(lVar7 + 0x68),&local_148);
    FUN_00d3bc90(&local_148);
    plVar5 = *(long **)(*(long *)(param_1 + 0x4c8) + 0x70);
    plVar2 = *(long **)(*(long *)(param_1 + 0x4c8) + 0x78);
    if ((((plVar5 != plVar2) && (FUN_00d2f1f8(*plVar5 + 0x180), plVar5 + 1 != plVar2)) &&
        (FUN_00d2f1f8(plVar5[1] + 0x180), plVar5 + 2 != plVar2)) &&
       ((FUN_00d2f1f8(plVar5[2] + 0x180), plVar5 + 3 != plVar2 &&
        (FUN_00d2f1f8(plVar5[3] + 0x180), plVar5 + 4 != plVar2)))) {
      FUN_00d2f1f8(plVar5[4] + 0x180);
      for (plVar5 = plVar5 + 5; plVar5 != plVar2; plVar5 = plVar5 + 1) {
        FUN_00d2f1f8(*plVar5 + 0x180);
      }
    }
    if (*(int *)(param_1 + 0x120) == 2) {
      FUN_00d9a268(param_1 + 0x230);
      return;
    }
  }
  return;
}


