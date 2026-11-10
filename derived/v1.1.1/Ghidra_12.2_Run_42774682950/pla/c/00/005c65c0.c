/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c65c0; name: FUN_005c65c0
 */


undefined1  [16] FUN_005c65c0(long *param_1,undefined8 *param_2,ulong *param_3)

{
  __tree_node_base *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  __tree_node_base *p_Var4;
  ulong __n;
  __tree_node_base *p_Var5;
  void *__src;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_48;
  
  p_Var1 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x38);
  __src = (void *)*param_2;
  __n = *param_3;
  p_Var4 = p_Var1 + 0x20;
  *(undefined8 *)p_Var4 = 0;
  *(undefined8 *)(p_Var1 + 0x28) = 0;
  *(undefined8 *)(p_Var1 + 0x30) = 0;
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 005c6714 to 005c671b has its CatchHandler @ 005c671c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    p_Var5 = p_Var1 + 0x21;
    p_Var1[0x20] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_005c6664;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    p_Var5 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    *(ulong *)(p_Var1 + 0x20) = uVar6 | 1;
    *(ulong *)(p_Var1 + 0x28) = __n;
    *(__tree_node_base **)(p_Var1 + 0x30) = p_Var5;
  }
  memcpy(p_Var5,__src,__n);
LAB_005c6664:
  p_Var5[__n] = (__tree_node_base)0x0;
  puVar2 = (undefined8 *)FUN_003667bc(param_1,&local_48,p_Var4);
  p_Var5 = (__tree_node_base *)*puVar2;
  if (p_Var5 == (__tree_node_base *)0x0) {
    *(undefined8 *)p_Var1 = 0;
    *(undefined8 *)(p_Var1 + 8) = 0;
    *(undefined8 *)(p_Var1 + 0x10) = local_48;
    *puVar2 = p_Var1;
    if (*(long *)*param_1 == 0) {
      p_Var4 = p_Var1;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var4 = (__tree_node_base *)*puVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var4);
    param_1[2] = param_1[2] + 1;
    uVar3 = 1;
  }
  else {
    if (((byte)*p_Var4 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var1 + 0x30));
    }
    FUN_002e2ea0(PTR_LAB_04373088,p_Var1);
    uVar3 = 0;
    p_Var1 = p_Var5;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = p_Var1;
  return auVar7;
}


