/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c5260; name: FUN_003c5260
 */


undefined8 FUN_003c5260(long *param_1,ulong *param_2,undefined8 *param_3)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *__dest;
  undefined8 uVar3;
  ulong uVar4;
  void *pvVar5;
  void *__dest_00;
  ulong uVar6;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  
  uStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if ((*param_2 & 1) == 0) {
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = (void *)param_2[2];
  }
  else {
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      local_80 = (ulong)(byte)((int)uVar4 << 1);
      __dest_00 = (void *)((ulong)&local_80 | 1);
      if (uVar4 != 0) goto LAB_003c52fc;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      __dest_00 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      local_80 = uVar6 | 1;
      uStack_78 = uVar4;
      local_70 = __dest_00;
LAB_003c52fc:
      memcpy(__dest_00,pvVar5,uVar4);
    }
    *(undefined1 *)((long)__dest_00 + uVar4) = 0;
  }
  uStack_60 = param_3[1];
  local_68 = *param_3;
                    /* try { // try from 003c531c to 003c532b has its CatchHandler @ 003c54ac */
  plVar1 = (long *)FUN_003c5dd4(param_1,&local_48,&local_80);
  if (*plVar1 != 0) {
    uVar3 = 0;
    goto joined_r0x003c5464;
  }
  p_Var2 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x48);
  pvVar5 = local_70;
  uVar4 = uStack_78;
  *(undefined8 *)(p_Var2 + 0x20) = 0;
  *(undefined8 *)(p_Var2 + 0x28) = 0;
  *(undefined8 *)(p_Var2 + 0x30) = 0;
  if ((local_80 & 1) == 0) {
    *(void **)(p_Var2 + 0x30) = local_70;
    *(ulong *)(p_Var2 + 0x28) = uStack_78;
    *(ulong *)(p_Var2 + 0x20) = local_80;
  }
  else {
    if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c5474 to 003c5477 has its CatchHandler @ 003c5478 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_78 < 0x17) {
      __dest = p_Var2 + 0x21;
      p_Var2[0x20] = SUB41((int)uStack_78 << 1,0);
      if (uStack_78 != 0) goto LAB_003c5400;
    }
    else {
      uVar6 = uStack_78 + 0x10 & 0xfffffffffffffff0;
      __dest = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      *(ulong *)(p_Var2 + 0x20) = uVar6 | 1;
      *(ulong *)(p_Var2 + 0x28) = uVar4;
      *(__tree_node_base **)(p_Var2 + 0x30) = __dest;
LAB_003c5400:
      memcpy(__dest,pvVar5,uVar4);
    }
    __dest[uVar4] = (__tree_node_base)0x0;
  }
  *(undefined8 *)(p_Var2 + 0x40) = uStack_60;
  *(undefined8 *)(p_Var2 + 0x38) = local_68;
  *(undefined8 *)p_Var2 = 0;
  *(undefined8 *)(p_Var2 + 8) = 0;
  *(undefined8 *)(p_Var2 + 0x10) = local_48;
  *plVar1 = (long)p_Var2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    p_Var2 = (__tree_node_base *)*plVar1;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var2);
  param_1[2] = param_1[2] + 1;
  uVar3 = 1;
joined_r0x003c5464:
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return uVar3;
}


