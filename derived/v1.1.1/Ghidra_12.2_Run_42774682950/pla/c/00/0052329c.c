/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052329c; name: FUN_0052329c
 */


undefined1  [16] FUN_0052329c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__s1;
  ulong uVar1;
  bool bVar2;
  int iVar3;
  __tree_node_base *p_Var4;
  undefined8 uVar5;
  __tree_node_base *p_Var6;
  ulong __n;
  void *__s2;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar9 = plVar7;
  }
  else {
    __s1 = (void *)*param_2;
    uVar1 = param_2[1];
    plVar7 = param_1 + 1;
    uVar10 = plVar8[5];
    __n = uVar1;
    if (uVar10 <= uVar1) {
      __n = uVar10;
    }
    if (__n == 0) goto LAB_00523308;
LAB_005232e0:
    __s2 = (void *)plVar8[4];
    iVar3 = memcmp(__s1,__s2,__n);
    if (iVar3 == 0) goto LAB_00523308;
    if (iVar3 < 0) goto LAB_00523310;
    bVar2 = uVar10 < uVar1;
    while( true ) {
      iVar3 = memcmp(__s2,__s1,__n);
      if (iVar3 == 0) goto LAB_0052336c;
      plVar9 = plVar8;
      if (-1 < iVar3) break;
      while( true ) {
        plVar7 = plVar9 + 1;
        plVar8 = (long *)*plVar7;
        if (plVar8 == (long *)0x0) goto LAB_00523380;
        while( true ) {
          uVar10 = plVar8[5];
          __n = uVar1;
          if (uVar10 <= uVar1) {
            __n = uVar10;
          }
          if (__n != 0) goto LAB_005232e0;
LAB_00523308:
          if (uVar10 <= uVar1) break;
LAB_00523310:
          plVar7 = plVar8;
          plVar8 = (long *)*plVar7;
          if (plVar8 == (long *)0x0) {
            p_Var6 = (__tree_node_base *)*plVar7;
            plVar9 = plVar7;
            goto joined_r0x00523384;
          }
        }
        bVar2 = uVar10 < uVar1;
        if (__n != 0) break;
LAB_0052336c:
        plVar9 = plVar8;
        if ((!bVar2) || (uVar1 < uVar10)) goto LAB_00523380;
      }
      __s2 = (void *)plVar8[4];
    }
  }
LAB_00523380:
  p_Var6 = (__tree_node_base *)*plVar7;
joined_r0x00523384:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    uVar11 = param_3[1];
    uVar5 = *param_3;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar9;
    *(undefined8 *)(p_Var6 + 0x28) = uVar11;
    *(undefined8 *)(p_Var6 + 0x20) = uVar5;
    *plVar7 = (long)p_Var6;
    if (*(long *)*param_1 == 0) {
      p_Var4 = p_Var6;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var4 = (__tree_node_base *)*plVar7;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var4);
    uVar5 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar5 = 0;
  }
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = p_Var6;
  return auVar12;
}


