/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121af58; name: FUN_0121af58
 */


void FUN_0121af58(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  char *local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  char acStack_b8 [64];
  uint local_78 [6];
  long *local_58;
  
  if (param_2 != 0) {
    local_78[0] = FUN_02c69870(*(undefined8 *)(param_2 + 0x98));
    local_78[0] = local_78[0] & 3;
    uVar4 = FUN_02c69870(*(undefined8 *)(param_2 + 0x98));
    local_78[1] = uVar4 >> 2 & 3;
    uVar4 = FUN_02c69870(*(undefined8 *)(param_2 + 0x98));
    local_78[2] = uVar4 >> 4 & 3;
    uVar4 = FUN_02c69870(*(undefined8 *)(param_2 + 0x98));
    local_78[3] = uVar4 >> 6 & 3;
    uVar4 = FUN_02c69870(*(undefined8 *)(param_2 + 0x98));
    local_78[4] = uVar4 >> 8 & 3;
    uVar4 = FUN_02c69870(*(undefined8 *)(param_2 + 0x98));
    puVar2 = PTR_PTR_04379d00;
    puVar1 = PTR_DAT_04379c88;
    local_78[5] = uVar4 >> 10 & 3;
    lVar5 = 0;
    do {
      snprintf(acStack_b8,0x40,"anime_L_icon_marking_00_L_%02d",(int)lVar5);
      local_d8 = acStack_b8;
      FUN_0121f9f4(&local_58,&local_d8,&PTR_s__default_041fc338 + (int)local_78[lVar5]);
      plVar3 = local_58;
      if (local_58 == (long *)0x0) {
        local_d8 = *(char **)puVar1;
LAB_0121b0ec:
        lStack_d0 = *(long *)puVar2;
        if (local_58 != (long *)0x0) goto LAB_0121b05c;
LAB_0121b0f8:
        local_c8 = 0;
      }
      else {
        local_d8 = (char *)local_58[0xb];
        if (local_58 == (long *)0x0) goto LAB_0121b0ec;
        lStack_d0 = local_58[0xc];
        if (local_58 == (long *)0x0) goto LAB_0121b0f8;
LAB_0121b05c:
        local_c8 = local_58[0xd];
        local_c0 = (long *)0x0;
        (**(code **)(*local_58 + 0x18))(local_58);
      }
      local_c0 = plVar3;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_d8);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 6);
  }
  return;
}


