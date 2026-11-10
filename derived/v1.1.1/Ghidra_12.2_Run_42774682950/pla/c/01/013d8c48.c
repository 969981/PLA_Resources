/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d8c48; name: FUN_013d8c48
 */


void FUN_013d8c48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint local_50 [6];
  long *local_38;
  
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_027f6cdc(param_1,param_2,local_50,param_3);
  *param_1 = &DAT_0420bb78;
  param_1[9] = &PTR_LAB_0420bc48;
  param_1[10] = &PTR_LAB_0420bc90;
  uVar6 = FUN_0195323c(1);
  if ((uVar6 & 1) == 0) {
    if (((*PTR_DAT_0437e418 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437e418), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437f2f8,PTR_DAT_0437e420,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437e418);
    }
    lVar7 = *(long *)PTR_DAT_0437e420;
    *(long *)PTR_DAT_0437f2f0 = lVar7;
    if (lVar7 == 0) {
      bVar2 = false;
    }
    else {
      uVar6 = FUN_010cc384();
      bVar2 = (uVar6 & 1) == 0;
    }
  }
  else {
    bVar2 = true;
  }
  FUN_02a4754c(local_50,&DAT_0420bca8);
  uVar3 = FUN_028501c4(local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_02a4754c(local_50,&DAT_0420bcc0);
  uVar6 = FUN_028501c4(local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  bVar1 = true;
  if ((uVar6 & 1) == 0) {
    bVar1 = bVar2;
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  local_50[0] = 0;
  uVar8 = *(undefined8 *)PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = uVar8;
  FUN_0286ba94(uVar8,local_50);
  FUN_027f7fe8(param_1,1,(uVar3 & 1) == 0);
  FUN_027f7fe8(param_1,4,!bVar2);
  FUN_027f7fe8(param_1,0xb,!bVar1);
  FUN_027f7fe8(param_1,0x14,1);
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar7 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar7;
  if ((!bVar1) && (lVar7 != 0)) {
    iVar4 = FUN_02788e04(lVar7);
    iVar5 = FUN_0278aff0(lVar7);
    FUN_027f8174(param_1,0xb,iVar4 + iVar5 != 0);
  }
  return;
}


