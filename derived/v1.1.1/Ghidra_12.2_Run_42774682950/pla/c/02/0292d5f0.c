/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292d5f0; name: FUN_0292d5f0
 */


undefined8 FUN_0292d5f0(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0 [12];
  
  puVar2 = PTR_DAT_04379c28;
  uVar1 = 0x206000;
  if (*param_1 != 0) {
    uVar1 = 0x206200;
  }
  if (param_1[2] != 0) {
    uVar1 = uVar1 | 0x100;
  }
  if (param_1[4] != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar3 = PTR_DAT_04379c38;
  puVar7 = (undefined8 *)PTR_DAT_04379c30;
  lVar9 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar9;
  if (((*puVar2 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), puVar7 = (undefined8 *)PTR_DAT_04379c30,
     iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
    puVar7 = (undefined8 *)PTR_DAT_04379c30;
  }
  *(undefined8 *)puVar3 = *puVar7;
  uVar5 = FUN_02911ed0();
  local_c0 = &LAB_0292dc1c;
  local_b8 = FUN_0292dc30;
  local_a0[0] = &LAB_0292d890;
  local_b0 = &LAB_0292dc34;
  puStack_a8 = &LAB_0292dc40;
  plVar6 = *(long **)(*(long *)(lVar9 + 0x158) + 0x60);
  iVar4 = (**(code **)(*plVar6 + 0xc0))
                    (plVar6,*(undefined8 *)(param_2 + 8),uVar5,uVar1 | 1,&LAB_0290f2d0,lVar9,0,0,0);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    pcVar8 = FUN_0292dc30;
  }
  else {
    FUN_0291629c(*(undefined8 *)(lVar9 + 0x178),param_2,iVar4,uVar5,&local_c0,param_1,0);
    *(int *)(param_1 + 10) = iVar4;
    pcVar8 = local_b8;
    if (local_b8 == (code *)0x0) goto LAB_0292d75c;
  }
  local_b0 = (undefined1 *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar8)(local_a0);
  if ((int)param_1[10] == 0) {
    return 0;
  }
LAB_0292d75c:
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined2 *)((long)param_1 + 0x69) = 1;
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  lVar9 = *(long *)PTR_DAT_04379e48;
  *(long *)PTR_DAT_04379e50 = lVar9;
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(lVar9 + 0x3d8);
  *(undefined1 *)(param_1 + 0xd) = 0;
  return 1;
}


