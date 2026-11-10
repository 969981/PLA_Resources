/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01212824; name: FUN_01212824
 */


void FUN_01212824(long param_1,int param_2,uint param_3,uint param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char acStack_a0 [64];
  long *local_58;
  
  snprintf(acStack_a0,0x40,"anime_L_btn_search_sub_%02d_text_only",param_3);
  local_c8 = acStack_a0;
  if (param_2 == 0) {
    FUN_009313e8(&local_58,&local_c8);
    plVar1 = local_58;
    if (local_58 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
LAB_01212b64:
      lStack_b8 = *(long *)PTR_PTR_04379d00;
      if (local_58 != (long *)0x0) goto LAB_012129fc;
LAB_01212b74:
      local_b0 = 0;
    }
    else {
      local_c0 = local_58[0xb];
      if (local_58 == (long *)0x0) goto LAB_01212b64;
      lStack_b8 = local_58[0xc];
      if (local_58 == (long *)0x0) goto LAB_01212b74;
LAB_012129fc:
      local_b0 = local_58[0xd];
      local_a8 = (long *)0x0;
      (**(code **)(*local_58 + 0x18))(local_58);
    }
    local_a8 = plVar1;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    snprintf(acStack_a0,0x40,"anime_L_btn_search_sub_%02d_marking",param_3);
    local_c8 = acStack_a0;
    FUN_009313e8(&local_58,&local_c8);
    plVar1 = local_58;
    if (local_58 == (long *)0x0) {
      local_c0 = *(long *)PTR_DAT_04379c88;
    }
    else {
      local_c0 = local_58[0xb];
      if (local_58 != (long *)0x0) {
        lStack_b8 = local_58[0xc];
        goto joined_r0x01212b9c;
      }
    }
    lStack_b8 = *(long *)PTR_PTR_04379d00;
joined_r0x01212b9c:
    if (local_58 == (long *)0x0) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_58[0xd];
      local_a8 = (long *)0x0;
      (**(code **)(*local_58 + 0x18))(local_58);
    }
    local_a8 = plVar1;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_c0);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (local_58 == (long *)0x0) {
      return;
    }
    (**(code **)(*local_58 + 0x20))();
    return;
  }
  FUN_009313e8(&local_58,&local_c8);
  plVar1 = local_58;
  if (local_58 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
LAB_01212b0c:
    lStack_b8 = *(long *)PTR_PTR_04379d00;
    if (local_58 != (long *)0x0) goto LAB_012128a4;
LAB_01212b1c:
    local_b0 = 0;
  }
  else {
    local_c0 = local_58[0xb];
    if (local_58 == (long *)0x0) goto LAB_01212b0c;
    lStack_b8 = local_58[0xc];
    if (local_58 == (long *)0x0) goto LAB_01212b1c;
LAB_012128a4:
    local_b0 = local_58[0xd];
    local_a8 = (long *)0x0;
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  local_a8 = plVar1;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_c0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  snprintf(acStack_a0,0x40,"anime_L_btn_search_sub_%02d_marking",param_3);
  local_c8 = acStack_a0;
  FUN_009313e8(&local_58,&local_c8);
  plVar1 = local_58;
  if (local_58 == (long *)0x0) {
    local_c0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_c0 = local_58[0xb];
    if (local_58 != (long *)0x0) {
      lStack_b8 = local_58[0xc];
      goto joined_r0x01212b44;
    }
  }
  lStack_b8 = *(long *)PTR_PTR_04379d00;
joined_r0x01212b44:
  if (local_58 == (long *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_58[0xd];
    local_a8 = (long *)0x0;
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  local_a8 = plVar1;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar3 = PTR_PTR_04379d00;
  puVar2 = PTR_DAT_04379c88;
  lVar4 = 0;
  do {
    snprintf(acStack_a0,0x40,
             *(char **)((long)&PTR_s_anime_L_btn_search_sub__02d_mark_041fc118 + lVar4),
             (ulong)param_3);
    local_c8 = acStack_a0;
    if ((ulong)param_4 * 8 == lVar4) {
      FUN_009313e8(&local_58,&local_c8);
      plVar1 = local_58;
      if (local_58 == (long *)0x0) {
        local_c0 = *(long *)puVar2;
LAB_01212cf4:
        lStack_b8 = *(long *)puVar3;
        if (local_58 != (long *)0x0) goto LAB_01212c24;
LAB_01212d00:
        local_b0 = 0;
      }
      else {
        local_c0 = local_58[0xb];
        if (local_58 == (long *)0x0) goto LAB_01212cf4;
        lStack_b8 = local_58[0xc];
        if (local_58 == (long *)0x0) goto LAB_01212d00;
LAB_01212c24:
        local_b0 = local_58[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_58 + 0x18))(local_58);
      }
      local_a8 = plVar1;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
      }
    }
    else {
      FUN_009313e8(&local_58,&local_c8);
      plVar1 = local_58;
      if (local_58 == (long *)0x0) {
        local_c0 = *(long *)puVar2;
LAB_01212d18:
        lStack_b8 = *(long *)puVar3;
        if (local_58 != (long *)0x0) goto LAB_01212c8c;
LAB_01212d24:
        local_b0 = 0;
      }
      else {
        local_c0 = local_58[0xb];
        if (local_58 == (long *)0x0) goto LAB_01212d18;
        lStack_b8 = local_58[0xc];
        if (local_58 == (long *)0x0) goto LAB_01212d24;
LAB_01212c8c:
        local_b0 = local_58[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_58 + 0x18))(local_58);
      }
      local_a8 = plVar1;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_c0);
      }
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x18) {
      return;
    }
  } while( true );
}


