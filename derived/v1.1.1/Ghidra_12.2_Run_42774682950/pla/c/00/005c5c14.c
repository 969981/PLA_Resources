/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c5c14; name: FUN_005c5c14
 */


undefined1  [16] FUN_005c5c14(long *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  __tree_node_base *p_Var7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_005c5d7c(param_1,&local_38,param_2);
  p_Var9 = (__tree_node_base *)*puVar1;
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x78);
    uVar10 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(p_Var9 + 0x30) = param_3[2];
    *(undefined8 *)(p_Var9 + 0x28) = uVar10;
    *(undefined8 *)(p_Var9 + 0x20) = uVar2;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined8 *)(p_Var9 + 0x38) = 0;
    uVar5 = *param_4;
    if ((uVar5 & 1) == 0) {
      uVar4 = uVar5 >> 1;
      if (uVar4 != 0) {
        puVar6 = param_4 + 2;
        p_Var3 = p_Var9 + 0x40;
        do {
          while( true ) {
            *(ulong *)p_Var3 = puVar6[-1];
            uVar5 = *puVar6;
            p_Var7 = p_Var3 + 8;
            *(ulong *)p_Var7 = uVar5;
            uVar8 = puVar6[1];
            *(ulong *)(p_Var3 + 0x10) = uVar8;
            if (uVar8 != 0) break;
            *(__tree_node_base **)p_Var3 = p_Var7;
            puVar6 = puVar6 + 3;
            uVar4 = uVar4 - 1;
            p_Var3 = p_Var3 + 0x18;
            if (uVar4 == 0) goto LAB_005c5ce8;
          }
          *(__tree_node_base **)(uVar5 + 0x10) = p_Var7;
          puVar6[1] = 0;
          puVar6[-1] = (ulong)puVar6;
          *puVar6 = 0;
          puVar6 = puVar6 + 3;
          uVar4 = uVar4 - 1;
          p_Var3 = p_Var3 + 0x18;
        } while (uVar4 != 0);
LAB_005c5ce8:
        uVar5 = *param_4;
      }
      *(ulong *)(p_Var9 + 0x38) = uVar5 & 0xfffffffffffffffe;
    }
    else {
      uVar5 = param_4[1];
      *(ulong *)(p_Var9 + 0x48) = param_4[2];
      *(ulong *)(p_Var9 + 0x40) = uVar5;
      *(ulong *)(p_Var9 + 0x38) = *param_4 | 1;
      *param_4 = 0;
    }
    *(undefined8 *)(p_Var9 + 0x70) = 0;
    *(ulong *)(p_Var9 + 0x70) = param_4[7];
    param_4[7] = 0;
    *(undefined8 *)(p_Var9 + 0x10) = local_38;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *puVar1 = p_Var9;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var9;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*puVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    uVar2 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = p_Var9;
  return auVar11;
}


