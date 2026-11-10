/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eaf70; name: FUN_003eaf70
 */


__tree_node_base * FUN_003eaf70(long *param_1,byte *param_2)

{
  size_t __n;
  byte bVar1;
  int iVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
  *(undefined8 *)(p_Var3 + 0x20) = 0;
  *(undefined8 *)(p_Var3 + 0x28) = 0;
  *(undefined8 *)(p_Var3 + 0x30) = 0;
  if ((*param_2 & 1) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar10 = *(undefined8 *)param_2;
    *(undefined8 *)(p_Var3 + 0x30) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(p_Var3 + 0x28) = uVar11;
    *(undefined8 *)(p_Var3 + 0x20) = uVar10;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
    if (0xffffffffffffffef < uVar8) {
                    /* try { // try from 003eb138 to 003eb13f has its CatchHandler @ 003eb140 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar6 = *(void **)(param_2 + 0x10);
    if (uVar8 < 0x17) {
      p_Var4 = p_Var3 + 0x21;
      p_Var3[0x20] = SUB41((int)uVar8 << 1,0);
      if (uVar8 != 0) goto LAB_003eb01c;
    }
    else {
      uVar9 = uVar8 + 0x10 & 0xfffffffffffffff0;
      p_Var4 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
      *(ulong *)(p_Var3 + 0x20) = uVar9 | 1;
      *(ulong *)(p_Var3 + 0x28) = uVar8;
      *(__tree_node_base **)(p_Var3 + 0x30) = p_Var4;
LAB_003eb01c:
      memcpy(p_Var4,pvVar6,uVar8);
    }
    p_Var4[uVar8] = (__tree_node_base)0x0;
  }
                    /* try { // try from 003eb038 to 003eb03b has its CatchHandler @ 003eb14c */
  FUN_003eaa30(p_Var3 + 0x38,param_2 + 0x18);
  plVar5 = param_1 + 1;
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    uVar8 = (ulong)((byte)p_Var3[0x20] >> 1);
    p_Var4 = p_Var3 + 0x21;
    if (((byte)p_Var3[0x20] & 1) != 0) {
      uVar8 = *(ulong *)(p_Var3 + 0x28);
      p_Var4 = *(__tree_node_base **)(p_Var3 + 0x30);
    }
    do {
      bVar1 = *(byte *)(plVar7 + 4);
      uVar9 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar9 = plVar7[5];
      }
      __n = uVar9;
      if (uVar8 <= uVar9) {
        __n = uVar8;
      }
      if (__n == 0) {
LAB_003eb0c0:
        if (uVar8 < uVar9) goto LAB_003eb0b4;
LAB_003eb068:
        plVar5 = (long *)plVar7[1];
        if (plVar5 == (long *)0x0) {
          plVar5 = plVar7 + 1;
          goto LAB_003eb0e0;
        }
      }
      else {
        pvVar6 = (void *)plVar7[6];
        if ((bVar1 & 1) == 0) {
          pvVar6 = (void *)((long)plVar7 + 0x21);
        }
        iVar2 = memcmp(p_Var4,pvVar6,__n);
        if (iVar2 == 0) goto LAB_003eb0c0;
        if (-1 < iVar2) goto LAB_003eb068;
LAB_003eb0b4:
        plVar5 = (long *)*plVar7;
        if (plVar5 == (long *)0x0) goto LAB_003eb0dc;
      }
      plVar7 = plVar5;
    } while( true );
  }
  plVar7 = plVar5;
LAB_003eb0e0:
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *(long **)(p_Var3 + 0x10) = plVar7;
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
LAB_003eb0dc:
  plVar5 = plVar7;
  goto LAB_003eb0e0;
}


