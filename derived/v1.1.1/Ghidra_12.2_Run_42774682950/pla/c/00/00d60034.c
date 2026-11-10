/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d60034; name: FUN_00d60034
 */


void FUN_00d60034(long *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char *__format;
  long lVar4;
  long lVar5;
  long lVar6;
  char local_88 [96];
  long *local_28;
  
  if ((int)param_2 == 1) {
    __format = "anime_L_inventory_parts_00_L_btn_sub_%02d_unselect";
  }
  else {
    if ((int)param_2 != 0) goto LAB_00d60068;
    __format = "anime_L_inventory_parts_00_L_btn_main_%02d_unselect";
  }
  uVar1 = snprintf(local_88,0x60,__format,param_3 & 0xffffffff);
  param_2 = (ulong)uVar1;
LAB_00d60068:
  if (local_88[0] == '\0') {
    local_28 = (long *)FUN_00938550(param_2);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar3 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar3;
    FUN_02a47cd8(&local_28,uVar3,local_88);
  }
  if (local_28 == (long *)0x0) {
    lVar4 = *(long *)PTR_DAT_04379c88;
    lVar5 = *(long *)PTR_PTR_04379d00;
    lVar6 = 0;
  }
  else {
    lVar4 = local_28[0xb];
    lVar5 = local_28[0xc];
    lVar6 = local_28[0xd];
  }
  *param_1 = lVar4;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = 0;
  if (local_28 == (long *)0x0) {
    param_1[3] = 0;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    param_1[3] = (long)local_28;
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  return;
}


