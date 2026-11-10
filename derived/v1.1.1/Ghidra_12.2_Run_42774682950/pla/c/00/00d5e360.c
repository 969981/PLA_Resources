/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5e360; name: FUN_00d5e360
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d5e360(long *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *__format;
  long lVar4;
  long lVar5;
  char local_90 [96];
  long *local_28;
  
  iVar1 = param_3;
  if (param_3 == 2) {
    iVar1 = 0;
  }
  lVar2 = FUN_00d2ee28(param_2 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  lVar4 = **(long **)(lVar2 + 0x838);
  lVar2 = (*(long **)(lVar2 + 0x838))[1];
  if ((lVar4 != lVar2) && (*(char *)(lVar4 + 0x20) != '\0' || *(int *)(lVar4 + 0x24) != param_4)) {
    lVar5 = lVar4 + 0x30;
    do {
      lVar4 = lVar5;
      if (lVar2 == lVar4) {
        lVar4 = lVar2;
        goto LAB_00d5e3f4;
      }
      lVar5 = lVar4 + 0x30;
    } while ((*(char *)(lVar4 + 0x20) != '\0') || (*(int *)(lVar4 + 0x24) != param_4));
  }
LAB_00d5e3f4:
  if ((lVar4 == 0 || lVar2 == lVar4) || (*(int *)(lVar4 + 0x28) == -1)) {
LAB_00d5e4bc:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (long)&DAT_cbf29ce484222645;
    param_1[1] = (long)&DAT_03996322;
    return;
  }
  if (param_3 == 1) {
    __format = "anime_L_inventory_parts_00_L_btn_sub_%02d_byebye";
  }
  else {
    if (param_3 != 0) goto LAB_00d5e4bc;
    __format = "anime_L_inventory_parts_00_L_btn_main_%02d_byebye";
  }
  iVar1 = snprintf(local_90,0x60,__format);
  if (local_90[0] == '\0') {
    local_28 = (long *)FUN_00938550(iVar1);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))(local_28);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar3 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar3;
    FUN_02a47cd8(&local_28,uVar3,local_90);
  }
  if (local_28 == (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_04379c88;
    lVar4 = *(long *)PTR_PTR_04379d00;
    lVar5 = 0;
  }
  else {
    lVar2 = local_28[0xb];
    lVar4 = local_28[0xc];
    lVar5 = local_28[0xd];
  }
  *param_1 = lVar2;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
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


