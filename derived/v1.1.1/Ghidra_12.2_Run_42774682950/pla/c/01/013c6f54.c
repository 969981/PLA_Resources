/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6f54; name: FUN_013c6f54
 */


void FUN_013c6f54(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [13];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 1:
    lVar3 = *(long *)(param_1 + 0x90);
    goto LAB_013c6f94;
  case 2:
    lVar3 = *(long *)(param_1 + 0x98);
    goto LAB_013c6f94;
  case 3:
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0x98) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x98) + 0x5b0);
    }
    *(long **)(param_1 + 0x88) = plVar1;
    (**(code **)(*plVar1 + 0x18))();
    FUN_013c5578(*(undefined8 *)(param_1 + 0x98));
    local_28 = 0x78914a6428d91062;
    local_c0 = &LAB_013c7be8;
    local_b8 = (code *)&LAB_013c7c04;
    local_b0 = &LAB_013c7c08;
    local_a8 = &LAB_013c7c14;
    goto LAB_013c7204;
  default:
    goto switchD_013c6f8c_caseD_4;
  case 6:
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0x98) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x98) + 0x5b0);
    }
    *(long **)(param_1 + 0x88) = plVar1;
    (**(code **)(*plVar1 + 0x18))();
    FUN_013c5578(*(undefined8 *)(param_1 + 0x98));
    local_28 = 0x7891466428d90996;
    local_c0 = &LAB_013c7c20;
    local_b8 = (code *)&LAB_013c7c3c;
    local_b0 = &LAB_013c7c40;
    local_a8 = &LAB_013c7c4c;
    goto LAB_013c7204;
  case 7:
    local_c0 = (undefined1 *)0x7891456428d907e3;
    break;
  case 8:
    local_c0 = (undefined1 *)0x7891476428d90b49;
    break;
  case 9:
  case 10:
    local_c0 = (undefined1 *)0x7894cd6428dc24d2;
    FUN_027bcf60(param_1 + 0xc0,&local_c0);
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xa8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xa8) + 0x5b0);
    }
    *(long **)(param_1 + 0x88) = plVar1;
    pcVar4 = *(code **)(*plVar1 + 0x18);
    goto LAB_013c7234;
  case 0xb:
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xa8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xa8) + 0x5b0);
    }
    *(long **)(param_1 + 0x88) = plVar1;
    (**(code **)(*plVar1 + 0x18))();
    local_28 = 0x7894cc6428dc231f;
    local_c0 = &LAB_013c7c58;
    local_b8 = FUN_013c7c74;
    local_b0 = &LAB_013c7c78;
    local_a8 = &LAB_013c7c84;
LAB_013c7204:
    local_30 = 0x6a172ac0e36379dd;
    local_38 = 0x6a1727c0e36374c4;
    alStack_a0[0] = param_1;
    FUN_027bc980(param_1 + 0xc0,&local_28,&local_30,&local_38,&local_c0);
    pcVar4 = local_b8;
    if (local_b8 == (code *)0x0) {
      return;
    }
LAB_013c7228:
    plVar1 = alStack_a0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
LAB_013c7234:
    (*pcVar4)(plVar1);
    return;
  case 0xc:
    local_c0 = (undefined1 *)0x7894c96428dc1e06;
    break;
  case 0xd:
    plVar1 = (long *)0x0;
    if (*(long *)(param_1 + 0xb0) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 0x5b0);
    }
    *(long **)(param_1 + 0x88) = plVar1;
    (**(code **)(*plVar1 + 0x18))();
    uVar2 = (**(code **)(**(long **)(param_1 + 0x70) + 0x10))();
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x70) + 0x18))();
      if ((uVar2 & 1) == 0) {
        return;
      }
      local_28 = 0x7898526428df3ca8;
      local_c0 = &LAB_013c7cbc;
      local_b8 = (code *)&LAB_013c7ccc;
      local_b0 = &LAB_013c7cd0;
      local_a8 = &LAB_013c7cdc;
    }
    else {
      local_28 = 0x7898556428df41c1;
      local_c0 = &LAB_013c7c90;
      local_b8 = (code *)&LAB_013c7ca0;
      local_b0 = &LAB_013c7ca4;
      local_a8 = &LAB_013c7cb0;
    }
    goto LAB_013c732c;
  case 0xe:
    lVar3 = *(long *)(param_1 + 0xb8);
    goto LAB_013c6f94;
  case 0xf:
    local_28 = 0x7883d06428cdb6b8;
    local_c0 = &LAB_013c7ce8;
    local_b8 = FUN_013c7cf8;
    local_b0 = &LAB_013c7cfc;
    local_a8 = &LAB_013c7d08;
LAB_013c732c:
    alStack_a0[0] = param_1;
    FUN_027bc868(param_1 + 0xc0,&local_28,&local_c0);
    pcVar4 = local_b8;
    if (local_b8 == (code *)0x0) {
      return;
    }
    goto LAB_013c7228;
  case 0x10:
    local_c0 = (undefined1 *)0x789b5a6428e18017;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    lVar3 = *(long *)(param_1 + 0xa0);
LAB_013c6f94:
    plVar1 = (long *)0x0;
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x5b0);
    }
    *(long **)(param_1 + 0x88) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x013c6fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  FUN_027bcc14(param_1 + 0xc0,&local_c0);
switchD_013c6f8c_caseD_4:
  return;
}


