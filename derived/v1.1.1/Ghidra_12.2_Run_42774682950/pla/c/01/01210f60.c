/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01210f60; name: FUN_01210f60
 */


void FUN_01210f60(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  int param4;
  uint uVar3;
  char *local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char acStack_a0 [64];
  
  uVar3 = 0;
  param4 = 0;
  do {
    uVar1 = param_2 >> (ulong)(uVar3 & 0x1f) & 3;
    snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_default",param_3,
             param4);
    local_d0 = acStack_a0;
    if (uVar1 == 0) {
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_01211394:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_01211000;
LAB_012113a4:
        local_b0 = 0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_01211394;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_012113a4;
LAB_01211000:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_a8 = plVar2;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_blue",param_3,
               param4);
LAB_01211070:
      local_d0 = acStack_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_012113c0:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_012110a0;
LAB_012113d0:
        local_b0 = 0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_012113c0;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_012113d0;
LAB_012110a0:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_a8 = plVar2;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_c0);
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_red",param_3,
               param4);
      if (uVar1 != 2) goto LAB_01211118;
      local_d0 = acStack_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_01211470:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_0121134c;
LAB_01211480:
        local_b0 = 0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_01211470;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_01211480;
LAB_0121134c:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_a8 = plVar2;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
      }
    }
    else {
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_01211418:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_01211200;
LAB_01211428:
        local_b0 = 0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_01211418;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_01211428;
LAB_01211200:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_a8 = plVar2;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_c0);
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_blue",param_3,
               param4);
      if (uVar1 != 1) goto LAB_01211070;
      local_d0 = acStack_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_01211444:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_012112a8;
LAB_01211454:
        local_b0 = 0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_01211444;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_01211454;
LAB_012112a8:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_a8 = plVar2;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      snprintf(acStack_a0,0x40,"anime_L_btn_search_main_%02d_L_marking_set_L_%02d_red",param_3,
               param4);
LAB_01211118:
      local_d0 = acStack_a0;
      FUN_009313e8(&local_c8,&local_d0);
      plVar2 = local_c8;
      if (local_c8 == (long *)0x0) {
        local_c0 = *(long *)PTR_DAT_04379c88;
LAB_012113ec:
        lStack_b8 = *(long *)PTR_PTR_04379d00;
        if (local_c8 != (long *)0x0) goto LAB_01211148;
LAB_012113fc:
        local_b0 = 0;
      }
      else {
        local_c0 = local_c8[0xb];
        if (local_c8 == (long *)0x0) goto LAB_012113ec;
        lStack_b8 = local_c8[0xc];
        if (local_c8 == (long *)0x0) goto LAB_012113fc;
LAB_01211148:
        local_b0 = local_c8[0xd];
        local_a8 = (long *)0x0;
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      local_a8 = plVar2;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_c0);
      }
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    param4 = param4 + 1;
    uVar3 = uVar3 + 2;
    if (param4 == 6) {
      return;
    }
  } while( true );
}


