/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005457fc; name: FUN_005457fc
 */


undefined1  [16] FUN_005457fc(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  size_t __n;
  char *__s1;
  char *__s2;
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  __tree_node_base *p_Var5;
  undefined8 uVar6;
  __tree_node_base *p_Var7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    plVar10 = plVar8;
  }
  else {
    __s1 = (char *)*param_2;
    uVar1 = param_2[1];
    plVar8 = param_1 + 1;
    while( true ) {
      while( true ) {
        __s2 = (char *)plVar9[4];
        uVar2 = plVar9[5];
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar4 = strncmp(__s1,__s2,__n);
        bVar3 = uVar1 < uVar2;
        if (iVar4 != 0) {
          bVar3 = iVar4 < 0;
        }
        plVar10 = plVar9;
        if (!bVar3) break;
        if ((long *)*plVar9 == (long *)0x0) {
          p_Var7 = (__tree_node_base *)*plVar9;
          goto joined_r0x005458c0;
        }
        plVar8 = plVar9;
        plVar9 = (long *)*plVar9;
      }
      iVar4 = strncmp(__s2,__s1,__n);
      bVar3 = uVar2 < uVar1;
      if (iVar4 != 0) {
        bVar3 = iVar4 < 0;
      }
      if (!bVar3) break;
      plVar8 = plVar9 + 1;
      if ((long *)*plVar8 == (long *)0x0) break;
      plVar9 = (long *)*plVar8;
    }
  }
  p_Var7 = (__tree_node_base *)*plVar8;
  plVar9 = plVar8;
joined_r0x005458c0:
  if (p_Var7 == (__tree_node_base *)0x0) {
    p_Var7 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x38);
    uVar6 = *(undefined8 *)*param_4;
    *(undefined8 *)(p_Var7 + 0x28) = ((undefined8 *)*param_4)[1];
    *(undefined8 *)(p_Var7 + 0x20) = uVar6;
    *(undefined8 *)(p_Var7 + 0x30) = 0;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(long **)(p_Var7 + 0x10) = plVar10;
    *plVar9 = (long)p_Var7;
    if (*(long *)*param_1 == 0) {
      p_Var5 = p_Var7;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var5 = (__tree_node_base *)*plVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var5);
    uVar6 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar6 = 0;
  }
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = p_Var7;
  return auVar11;
}


