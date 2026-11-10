/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ecacc; name: FUN_005ecacc
 */


__tree_node_base * FUN_005ecacc(long *param_1,byte *param_2)

{
  undefined8 *puVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  ulong __n;
  void *__src;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  
  puVar1 = (undefined8 *)FUN_005ecc24(param_1,&local_48,param_2);
  p_Var3 = (__tree_node_base *)*puVar1;
  if (p_Var3 != (__tree_node_base *)0x0) goto LAB_005ecbe4;
  p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  *(undefined8 *)(p_Var3 + 0x20) = 0;
  *(undefined8 *)(p_Var3 + 0x28) = 0;
  *(undefined8 *)(p_Var3 + 0x30) = 0;
  if ((*param_2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)(p_Var3 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(p_Var3 + 0x28) = uVar6;
    *(undefined8 *)(p_Var3 + 0x20) = uVar5;
  }
  else {
    __n = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005ecc00 to 005ecc03 has its CatchHandler @ 005ecc04 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = *(void **)(param_2 + 0x10);
    if (__n < 0x17) {
      p_Var2 = p_Var3 + 0x21;
      p_Var3[0x20] = SUB41((int)__n << 1,0);
      if (__n != 0) goto LAB_005ecb8c;
    }
    else {
      uVar4 = __n + 0x10 & 0xfffffffffffffff0;
      p_Var2 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
      *(ulong *)(p_Var3 + 0x20) = uVar4 | 1;
      *(ulong *)(p_Var3 + 0x28) = __n;
      *(__tree_node_base **)(p_Var3 + 0x30) = p_Var2;
LAB_005ecb8c:
      memcpy(p_Var2,__src,__n);
    }
    p_Var2[__n] = (__tree_node_base)0x0;
  }
  *(undefined8 *)(p_Var3 + 0x38) = 0;
  *(undefined8 *)(p_Var3 + 0x10) = local_48;
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *puVar1 = p_Var3;
  if (*(long *)*param_1 == 0) {
    p_Var2 = p_Var3;
  }
  else {
    *param_1 = *(long *)*param_1;
    p_Var2 = (__tree_node_base *)*puVar1;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var2);
  param_1[2] = param_1[2] + 1;
LAB_005ecbe4:
  return p_Var3 + 0x38;
}


