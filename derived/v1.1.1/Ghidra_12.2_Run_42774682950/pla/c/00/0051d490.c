/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051d490; name: FUN_0051d490
 */


void FUN_0051d490(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  ulong local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  __tree_node_base *local_b0;
  __tree_node_base *local_a8;
  long local_a0;
  __tree_node_base *local_98;
  __tree_node_base *local_90;
  long local_88;
  ulong local_80;
  undefined *puStack_78;
  ulong local_70;
  undefined *puStack_68;
  
  puVar4 = PTR_LAB_04374a18;
  puVar3 = PTR_FUN_043739e0;
  puVar2 = PTR_LAB_04373088;
  puVar1 = PTR_FUN_04373078;
  local_90 = (__tree_node_base *)0x0;
  local_88 = 0;
  local_a0 = 0;
  local_a8 = (__tree_node_base *)0x0;
  local_b0 = (__tree_node_base *)&local_a8;
  local_98 = (__tree_node_base *)&local_90;
  if (param_2 != param_3) {
    do {
      puStack_c0 = puVar4;
                    /* try { // try from 0051d528 to 0051d53f has its CatchHandler @ 0051d74c */
      local_c8 = param_2;
      FUN_002e6390(&local_80,&DAT_038bd9bd,2,&local_c8,1);
      plVar5 = (long *)FUN_003667bc(&local_98,&local_c8,&local_80);
      if (*plVar5 == 0) {
        p_Var6 = (__tree_node_base *)FUN_002e2e80(puVar1,0x38);
        *(ulong *)(p_Var6 + 0x30) = local_70;
        *(undefined **)(p_Var6 + 0x28) = puStack_78;
        *(ulong *)(p_Var6 + 0x20) = local_80;
        puStack_78 = (undefined *)0x0;
        local_70 = 0;
        local_80 = 0;
        *(undefined8 *)p_Var6 = 0;
        *(undefined8 *)(p_Var6 + 8) = 0;
        *(ulong *)(p_Var6 + 0x10) = local_c8;
        *plVar5 = (long)p_Var6;
        if (*(__tree_node_base **)local_98 != (__tree_node_base *)0x0) {
          p_Var6 = (__tree_node_base *)*plVar5;
          local_98 = *(__tree_node_base **)local_98;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_90,p_Var6);
        local_88 = local_88 + 1;
      }
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(puVar2,local_70);
      }
      puStack_78 = puVar4;
      local_70 = (ulong)*(uint *)(param_2 + 0x18);
      puStack_68 = puVar3;
                    /* try { // try from 0051d578 to 0051d58f has its CatchHandler @ 0051d748 */
      local_80 = param_2;
      FUN_002e6390(&local_c8,"%s_%d",5,&local_80,2);
      plVar5 = (long *)FUN_003667bc(&local_b0,&local_80,&local_c8);
      if (*plVar5 == 0) {
        p_Var6 = (__tree_node_base *)FUN_002e2e80(puVar1,0x38);
        *(undefined8 *)(p_Var6 + 0x30) = local_b8;
        *(undefined **)(p_Var6 + 0x28) = puStack_c0;
        *(ulong *)(p_Var6 + 0x20) = local_c8;
        puStack_c0 = (undefined *)0x0;
        local_b8 = 0;
        local_c8 = 0;
        *(undefined8 *)p_Var6 = 0;
        *(undefined8 *)(p_Var6 + 8) = 0;
        *(ulong *)(p_Var6 + 0x10) = local_80;
        *plVar5 = (long)p_Var6;
        if (*(__tree_node_base **)local_b0 != (__tree_node_base *)0x0) {
          p_Var6 = (__tree_node_base *)*plVar5;
          local_b0 = *(__tree_node_base **)local_b0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_a8,p_Var6);
        local_a0 = local_a0 + 1;
      }
      if ((local_c8 & 1) != 0) {
        FUN_002e2ea0(puVar2,local_b8);
      }
      param_2 = param_2 + 0x20;
    } while (param_2 != param_3);
  }
                    /* try { // try from 0051d6b8 to 0051d6cf has its CatchHandler @ 0051d744 */
  FUN_0051f800(param_1,local_98,(__tree_node_base *)&local_90,&DAT_038b4e31,1);
                    /* try { // try from 0051d6d8 to 0051d6eb has its CatchHandler @ 0051d724 */
  FUN_0051f800(param_1 + 0x18,local_b0,(__tree_node_base *)&local_a8,&DAT_038b4e31,1);
  FUN_0036b9a4(&local_b0,local_a8);
  FUN_0036b9a4(&local_98,local_90);
  return;
}


