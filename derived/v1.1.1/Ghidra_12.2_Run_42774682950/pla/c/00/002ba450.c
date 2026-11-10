/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ba450; name: FUN_002ba450
 */


__tree_node_base * FUN_002ba450(long *param_1,undefined8 *param_2)

{
  size_t __n;
  ulong uVar1;
  int iVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  long *plVar5;
  void *__s1;
  long *plVar6;
  ulong uVar7;
  
  p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  __s1 = (void *)*param_2;
  *(void **)(p_Var3 + 0x20) = __s1;
  uVar7 = param_2[1];
  *(undefined8 *)(p_Var3 + 0x30) = param_2[2];
  *(ulong *)(p_Var3 + 0x28) = uVar7;
  *(undefined8 *)(p_Var3 + 0x38) = param_2[3];
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    do {
      uVar1 = plVar6[5];
      __n = uVar7;
      if (uVar1 <= uVar7) {
        __n = uVar1;
      }
      iVar2 = memcmp(__s1,(void *)plVar6[4],__n);
      if ((iVar2 < 0) || (uVar7 < uVar1 && iVar2 == 0)) {
        plVar5 = (long *)*plVar6;
        if (plVar5 == (long *)0x0) {
          plVar5 = plVar6;
          goto LAB_002ba4fc;
        }
      }
      else {
        plVar5 = (long *)plVar6[1];
        if (plVar5 == (long *)0x0) goto code_r0x002ba4e8;
      }
      plVar6 = plVar5;
    } while( true );
  }
  plVar6 = plVar5;
LAB_002ba4fc:
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *(long **)(p_Var3 + 0x10) = plVar6;
  *plVar5 = (long)p_Var3;
  if (*(long *)*param_1 == 0) {
    p_Var4 = p_Var3;
  }
  else {
    *param_1 = *(long *)*param_1;
    p_Var4 = (__tree_node_base *)*plVar5;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var4);
  param_1[2] = param_1[2] + 1;
  return p_Var3;
code_r0x002ba4e8:
  plVar5 = plVar6 + 1;
  goto LAB_002ba4fc;
}


