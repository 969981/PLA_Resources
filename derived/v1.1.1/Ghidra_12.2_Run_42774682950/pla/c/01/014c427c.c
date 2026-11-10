/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c427c; name: FUN_014c427c
 */


void FUN_014c427c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  char *local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  char acStack_a8 [64];
  int local_68 [6];
  
  FUN_02c5d518(param_2,local_68);
  puVar2 = PTR_PTR_04379d00;
  puVar1 = PTR_DAT_04379c88;
  lVar4 = 0;
  do {
    snprintf(acStack_a8,0x40,"anime_L_pt_mark_00_L_marking_%02d_keep_state_%02d",(int)lVar4,
             local_68[lVar4]);
    local_d8 = acStack_a8;
    FUN_009313e8(&local_d0,&local_d8);
    plVar3 = local_d0;
    if (local_d0 == (long *)0x0) {
      local_c8 = *(long *)puVar1;
LAB_014c43a4:
      lStack_c0 = *(long *)puVar2;
      if (local_d0 != (long *)0x0) goto LAB_014c4318;
LAB_014c43b0:
      local_b8 = 0;
    }
    else {
      local_c8 = local_d0[0xb];
      if (local_d0 == (long *)0x0) goto LAB_014c43a4;
      lStack_c0 = local_d0[0xc];
      if (local_d0 == (long *)0x0) goto LAB_014c43b0;
LAB_014c4318:
      local_b8 = local_d0[0xd];
      local_b0 = (long *)0x0;
      (**(code **)(*local_d0 + 0x18))(local_d0);
    }
    local_b0 = plVar3;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c8);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 6) {
      return;
    }
  } while( true );
}


