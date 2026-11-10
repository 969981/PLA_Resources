/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8ef1c; name: FUN_02a8ef1c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02a8ef1c(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50 [2];
  long *local_38;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[6] = param_2;
  *(undefined1 **)(param_1 + 8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 10) = &DAT_03996322;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = *param_4;
  uVar3 = param_5[1];
  *(undefined8 *)(param_1 + 0x12) = *param_5;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  if (param_2 == -1) {
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar2 != 0)) {
      local_50[0] = FUN_00938550();
      puVar1 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,local_50);
      FUN_00100250(PTR_LAB_0437a8d8,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    plVar5 = *(long **)PTR_DAT_0437a7d0;
    plVar4 = (long *)PTR_DAT_04379c88;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 0xb;
    }
    lVar6 = *plVar4;
    plVar4 = (long *)PTR_PTR_04379d00;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 0xc;
    }
    lVar7 = *plVar4;
    if (plVar5 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = plVar5[0xd];
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar4 = *(long **)(param_1 + 0xe);
    *(long *)(param_1 + 8) = lVar6;
    *(long *)(param_1 + 10) = lVar7;
    *(long *)(param_1 + 0xc) = lVar8;
    *(undefined8 *)(param_1 + 0xe) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    *(long **)(param_1 + 0xe) = plVar5;
    return;
  }
  iVar2 = snprintf((char *)local_50,0x10,"save%d",param_2);
  if ((char)local_50[0] == '\0') {
    plVar4 = (long *)FUN_00938550(iVar2);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      goto joined_r0x02a8f104;
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
    FUN_02a47cd8(&local_38,uVar3,local_50);
    plVar4 = local_38;
joined_r0x02a8f104:
    if (plVar4 != (long *)0x0) {
      lVar6 = plVar4[0xb];
      goto joined_r0x02a8f114;
    }
  }
  lVar6 = *(long *)PTR_DAT_04379c88;
joined_r0x02a8f114:
  if (plVar4 == (long *)0x0) {
    lVar7 = *(long *)PTR_PTR_04379d00;
    lVar8 = 0;
  }
  else {
    lVar7 = plVar4[0xc];
    lVar8 = plVar4[0xd];
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar5 = *(long **)(param_1 + 0xe);
  *(long *)(param_1 + 8) = lVar6;
  *(long *)(param_1 + 10) = lVar7;
  *(long *)(param_1 + 0xc) = lVar8;
  *(undefined8 *)(param_1 + 0xe) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(long **)(param_1 + 0xe) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}


