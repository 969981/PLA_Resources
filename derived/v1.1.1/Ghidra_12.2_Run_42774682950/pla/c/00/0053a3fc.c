/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053a3fc; name: FUN_0053a3fc
 */


undefined1  [16]
FUN_0053a3fc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  char *__s1;
  __tree_node_base *p_Var4;
  char *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    plVar7 = plVar5;
  }
  else {
    __s1 = (char *)*param_2;
    plVar5 = param_1 + 1;
    while( true ) {
      while( true ) {
        __s2 = (char *)plVar6[4];
        iVar1 = strcmp(__s1,__s2);
        plVar7 = plVar6;
        if (-1 < iVar1) break;
        if ((long *)*plVar6 == (long *)0x0) {
          p_Var4 = (__tree_node_base *)*plVar6;
          goto joined_r0x0053a47c;
        }
        plVar5 = plVar6;
        plVar6 = (long *)*plVar6;
      }
      iVar1 = strcmp(__s2,__s1);
      if (-1 < iVar1) break;
      plVar5 = plVar6 + 1;
      if ((long *)*plVar5 == (long *)0x0) break;
      plVar6 = (long *)*plVar5;
    }
  }
  p_Var4 = (__tree_node_base *)*plVar5;
  plVar6 = plVar5;
joined_r0x0053a47c:
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(undefined8 *)(p_Var4 + 0x20) = *(undefined8 *)*param_4;
    *(undefined8 *)(p_Var4 + 0x28) = 0;
    *(long **)(p_Var4 + 0x10) = plVar7;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *plVar6 = (long)p_Var4;
    if (*(long *)*param_1 == 0) {
      p_Var2 = p_Var4;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = p_Var4;
  return auVar8;
}


