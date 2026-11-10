/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dab054; name: FUN_00dab054
 */


uint FUN_00dab054(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *local_38;
  
  puVar2 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar4 = PTR_DAT_04379568;
  puVar3 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148c68(&local_38);
  uVar6 = FUN_011171a4(local_38);
  FUN_00dafb54(param_1,"now_money",uVar6);
  plVar5 = local_38;
  if ((local_38 != (long *)0x0) && (uVar9 = FUN_02a43a5c(local_38[0xb]), (uVar9 & 1) != 0)) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  uVar10 = FUN_00dac4c0(0x11);
  FUN_00dafb54(param_1,"use_mball_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x12);
  FUN_00dafb54(param_1,"use_mball2_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x13);
  FUN_00dafb54(param_1,"use_mball3_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x14);
  FUN_00dafb54(param_1,"use_wball_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x15);
  FUN_00dafb54(param_1,"use_wball2_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x16);
  FUN_00dafb54(param_1,"use_wball3_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x17);
  FUN_00dafb54(param_1,"use_hvball_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x18);
  FUN_00dafb54(param_1,"use_hvball2_cnt",uVar10);
  uVar10 = FUN_00dac4c0(0x19);
  FUN_00dafb54(param_1,"use_hvball3_cnt",uVar10);
  if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
  FUN_01148e38(&local_38);
  uVar6 = FUN_010da868(local_38,0x6ae);
  FUN_00dafb54(param_1,"use_mball",uVar6);
  uVar6 = FUN_010da868(local_38,0x6af);
  FUN_00dafb54(param_1,"use_mball2",uVar6);
  uVar6 = FUN_010da868(local_38,0x6b0);
  FUN_00dafb54(param_1,"use_mball3",uVar6);
  uVar6 = FUN_010da868(local_38,0x6b1);
  FUN_00dafb54(param_1,"use_wball",uVar6);
  uVar6 = FUN_010da868(local_38,0x6d2);
  FUN_00dafb54(param_1,"use_wball2",uVar6);
  uVar6 = FUN_010da868(local_38,0x6d3);
  FUN_00dafb54(param_1,"use_wball3",uVar6);
  uVar6 = FUN_010da868(local_38,0x6d4);
  FUN_00dafb54(param_1,"use_hvball",uVar6);
  uVar6 = FUN_010da868(local_38,0x6d5);
  FUN_00dafb54(param_1,"use_hvball2",uVar6);
  uVar6 = FUN_010da868(local_38,0x6d6);
  FUN_00dafb54(param_1,"use_hvball3",uVar6);
  plVar5 = local_38;
  if ((local_38 == (long *)0x0) || (uVar9 = FUN_02a43a5c(local_38[0xb]), (uVar9 & 1) == 0)) {
    bVar1 = *puVar2;
  }
  else {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    bVar1 = *puVar2;
  }
  if (((bVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
  FUN_01148f20(&local_38);
  uVar6 = FUN_0113097c(local_38);
  FUN_00dafb54(param_1,"star_point",uVar6);
  if ((local_38 != (long *)0x0) && (uVar9 = FUN_02a43a5c(local_38[0xb]), (uVar9 & 1) != 0)) {
    (**(code **)(*local_38 + 0x20))(local_38);
  }
  uVar7 = FUN_00daa3a8(param_1);
  return uVar7 & 1;
}


