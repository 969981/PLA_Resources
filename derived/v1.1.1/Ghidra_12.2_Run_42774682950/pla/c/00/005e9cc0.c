/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e9cc0; name: FUN_005e9cc0
 */


__tree_node_base * FUN_005e9cc0(long *param_1,byte *param_2)

{
  size_t __n;
  byte *__s1;
  byte bVar1;
  int iVar2;
  __tree_node_base *p_Var3;
  ulong uVar4;
  void *pvVar5;
  __tree_node_base *p_Var6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  void *__s1_00;
  undefined8 uVar10;
  undefined8 uVar11;
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 != (long *)0x0) {
    uVar4 = (ulong)(*param_2 >> 1);
    __s1 = *(byte **)(param_2 + 0x10);
    plVar8 = param_1 + 1;
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    else {
      uVar4 = *(ulong *)(param_2 + 8);
    }
    do {
      while( true ) {
        bVar1 = *(byte *)(plVar9 + 4);
        uVar7 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar7 = plVar9[5];
        }
        __n = uVar7;
        if (uVar4 <= uVar7) {
          __n = uVar4;
        }
        if (__n == 0) break;
        __s1_00 = (void *)plVar9[6];
        pvVar5 = __s1_00;
        if ((bVar1 & 1) == 0) {
          pvVar5 = (void *)((long)plVar9 + 0x21);
        }
        iVar2 = memcmp(__s1,pvVar5,__n);
        if (iVar2 == 0) break;
        if (iVar2 < 0) goto LAB_005e9d58;
LAB_005e9d74:
        if ((bVar1 & 1) == 0) {
          __s1_00 = (void *)((long)plVar9 + 0x21);
        }
        iVar2 = memcmp(__s1_00,__s1,__n);
        if (iVar2 == 0) goto LAB_005e9da4;
        if (-1 < iVar2) goto LAB_005e9db4;
LAB_005e9d90:
        plVar8 = plVar9 + 1;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_005e9db4;
        plVar9 = (long *)*plVar8;
      }
      if (uVar7 <= uVar4) {
        if (__n != 0) {
          __s1_00 = (void *)plVar9[6];
          goto LAB_005e9d74;
        }
LAB_005e9da4:
        if (uVar7 < uVar4) goto LAB_005e9d90;
        goto LAB_005e9db4;
      }
LAB_005e9d58:
      plVar8 = plVar9;
      if ((long *)*plVar9 == (long *)0x0) goto LAB_005e9df4;
      plVar9 = (long *)*plVar9;
    } while( true );
  }
  plVar9 = plVar8;
LAB_005e9db4:
  p_Var6 = (__tree_node_base *)*plVar8;
joined_r0x005e9dfc:
  if (p_Var6 != (__tree_node_base *)0x0) goto LAB_005e9eac;
  p_Var6 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  *(undefined8 *)(p_Var6 + 0x20) = 0;
  *(undefined8 *)(p_Var6 + 0x28) = 0;
  *(undefined8 *)(p_Var6 + 0x30) = 0;
  if ((*param_2 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)param_2;
    *(undefined8 *)(p_Var6 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(p_Var6 + 0x28) = uVar11;
    *(undefined8 *)(p_Var6 + 0x20) = uVar10;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005e9ecc to 005e9ecf has its CatchHandler @ 005e9ed0 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = *(void **)(param_2 + 0x10);
    if (uVar4 < 0x17) {
      p_Var3 = p_Var6 + 0x21;
      p_Var6[0x20] = SUB41((int)uVar4 << 1,0);
      if (uVar4 != 0) goto LAB_005e9e58;
    }
    else {
      uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
      p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
      *(ulong *)(p_Var6 + 0x20) = uVar7 | 1;
      *(ulong *)(p_Var6 + 0x28) = uVar4;
      *(__tree_node_base **)(p_Var6 + 0x30) = p_Var3;
LAB_005e9e58:
      memcpy(p_Var3,pvVar5,uVar4);
    }
    p_Var3[uVar4] = (__tree_node_base)0x0;
  }
  *(undefined8 *)(p_Var6 + 0x38) = 0;
  *(long **)(p_Var6 + 0x10) = plVar9;
  *(undefined8 *)p_Var6 = 0;
  *(undefined8 *)(p_Var6 + 8) = 0;
  *plVar8 = (long)p_Var6;
  if (*(long *)*param_1 == 0) {
    p_Var3 = p_Var6;
  }
  else {
    *param_1 = *(long *)*param_1;
    p_Var3 = (__tree_node_base *)*plVar8;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var3);
  param_1[2] = param_1[2] + 1;
LAB_005e9eac:
  return p_Var6 + 0x38;
LAB_005e9df4:
  p_Var6 = (__tree_node_base *)*plVar9;
  goto joined_r0x005e9dfc;
}


