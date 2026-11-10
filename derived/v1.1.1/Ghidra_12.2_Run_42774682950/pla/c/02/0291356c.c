/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291356c; name: FUN_0291356c
 */


int FUN_0291356c(long param_1,long param_2,undefined4 *param_3,undefined8 *param_4,
                undefined1 (*param_5) [16],undefined8 param_6,undefined8 param_7,uint param_8)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  lVar8 = *(long *)(param_1 + 0x158);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_88);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_02913eb8(&local_a0,&local_88);
  puVar3 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar6 = (int *)(local_88 + 1);
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_90 = *puVar3;
      FUN_02a44274(lVar5 + 0xd8,&local_90);
    }
  }
  puVar3 = local_a0;
  if (local_a0 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    piVar6 = (int *)(local_a0 + 1);
    uVar7 = *local_a0;
    do {
      iVar4 = *piVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_88 = (undefined8 *)*puVar3;
      FUN_02a44274(lVar5 + 0xd8,&local_88);
    }
  }
  (**(code **)(**(long **)(lVar8 + 0x60) + 0x48))(*(long **)(lVar8 + 0x60),uVar7);
  local_70 = *param_3;
  uStack_6c = param_3[1];
  local_68 = param_3[2];
  local_88 = (undefined8 *)*param_4;
  auVar9._4_4_ = *(undefined4 *)(param_4 + 1);
  auVar9._0_4_ = *(undefined4 *)param_4;
  auVar9._8_4_ = *(undefined4 *)param_4;
  auVar9._12_4_ = *(undefined4 *)(param_4 + 1);
  auVar9 = NEON_ext(auVar9,*param_5,0xc,1);
  auVar10 = NEON_ext(*param_5,*param_5,8,1);
  uStack_78 = NEON_ext(*(undefined8 *)*param_5,auVar10._0_8_,4,1);
  local_80 = auVar9._0_8_;
  (**(code **)(**(long **)(lVar8 + 0x60) + 0x60))(*(long **)(lVar8 + 0x60),uVar7,&local_88);
  iVar4 = (**(code **)(**(long **)(lVar8 + 0x60) + 0xc0))
                    (*(long **)(lVar8 + 0x60),*(undefined8 *)(param_2 + 8),uVar7,1,&LAB_0290f2d0,
                     param_1,0,0,0);
  (**(code **)(**(long **)(lVar8 + 0x60) + 0x58))(*(long **)(lVar8 + 0x60),uVar7);
  if (iVar4 != 0) {
    FUN_0291629c(*(undefined8 *)(param_1 + 0x178),param_2,iVar4,0xffffffffffffffff,param_6,param_7,
                 param_8 & 1);
  }
  return iVar4;
}


