/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051c180; name: FUN_0051c180
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0051c180(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5,
                 void *param_6,ulong param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  ulong *puVar6;
  long *plVar7;
  __tree_node_base *p_Var8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  __tree_node_base *p_Var12;
  long lVar13;
  ulong *puVar14;
  void *pvVar15;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong *local_98;
  ulong uStack_90;
  void *local_88;
  ulong *local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  
  local_98 = (ulong *)0x0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
  if (param_4 != (void *)0x0) {
    if (0xffffffffffffffef < param_5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_5 < 0x17) {
      local_98 = (ulong *)(ulong)(byte)((int)param_5 << 1);
      pvVar15 = (void *)((ulong)&local_98 | 1);
      if (param_5 != 0) goto LAB_0051c20c;
    }
    else {
      uVar3 = param_5 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
      local_98 = (ulong *)(uVar3 | 1);
      uStack_90 = param_5;
      local_88 = pvVar15;
LAB_0051c20c:
      memcpy(pvVar15,param_4,param_5);
    }
    *(undefined1 *)((long)pvVar15 + param_5) = 0;
  }
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  if (param_6 == (void *)0x0) goto LAB_0051c290;
  if (0xffffffffffffffef < param_7) {
                    /* try { // try from 0051c4e0 to 0051c4e7 has its CatchHandler @ 0051c4e8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_7 < 0x17) {
    local_b0 = (ulong)(byte)((int)param_7 << 1);
    pvVar15 = (void *)((ulong)&local_b0 | 1);
    if (param_7 != 0) goto LAB_0051c27c;
  }
  else {
    uVar3 = param_7 + 0x10 & 0xfffffffffffffff0;
    pvVar15 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_b0 = uVar3 | 1;
    uStack_a8 = param_7;
    local_a0 = pvVar15;
LAB_0051c27c:
    memcpy(pvVar15,param_6,param_7);
  }
  *(undefined1 *)((long)pvVar15 + param_7) = 0;
LAB_0051c290:
  local_70 = local_88;
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_58 = local_a0;
  uStack_60 = uStack_a8;
  local_68 = local_b0;
  local_98 = (ulong *)0x0;
  uStack_90 = 0;
  lVar10 = param_1 + 0x148;
  local_88 = (void *)0x0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  lVar11 = *(long *)(param_1 + 0x148);
  lVar2 = lVar10;
  if (lVar11 != 0) {
    lVar13 = lVar10;
    do {
      uVar3 = FUN_00524728(lVar11 + 0x20,&local_80);
      lVar1 = 8;
      if ((uVar3 & 1) == 0) {
        lVar1 = 0;
        lVar13 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + lVar1);
    } while (lVar11 != 0);
    if ((lVar13 != lVar10) && (uVar3 = FUN_00524728(&local_80,lVar13 + 0x20), (uVar3 & 1) == 0)) {
      lVar2 = lVar13;
    }
  }
  if ((local_68 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  if (((ulong)local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if (lVar2 != lVar10) {
    p_Var5 = (__tree_node_base *)(lVar2 + 0x58);
    p_Var8 = *(__tree_node_base **)p_Var5;
    if (p_Var8 != (__tree_node_base *)0x0) {
      p_Var12 = p_Var5;
      do {
        if (*(ulong *)(p_Var8 + 0x20) >= param_8) {
          p_Var12 = p_Var8;
        }
        p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(*(ulong *)(p_Var8 + 0x20) < param_8) * 8);
      } while (p_Var8 != (__tree_node_base *)0x0);
      if ((p_Var12 != p_Var5) && (*(ulong *)(p_Var12 + 0x20) <= param_8)) {
        FUN_005b6c6c(&local_80,param_8);
        if (local_80 != &uStack_78) {
          puVar14 = local_80;
          do {
            uVar3 = puVar14[7];
                    /* try { // try from 0051c3dc to 0051c3e3 has its CatchHandler @ 0051c50c */
            plVar4 = (long *)FUN_0051c524(lVar2 + 0x68,puVar14 + 4);
            *plVar4 = *plVar4 + uVar3;
            puVar6 = (ulong *)puVar14[1];
            if ((ulong *)puVar14[1] == (ulong *)0x0) {
              puVar6 = puVar14 + 2;
              puVar9 = (ulong *)*puVar6;
              if ((ulong *)*puVar9 != puVar14) {
                do {
                  uVar3 = *puVar6;
                  puVar6 = (ulong *)(uVar3 + 0x10);
                  puVar9 = (ulong *)*puVar6;
                } while (*puVar9 != uVar3);
              }
            }
            else {
              do {
                puVar9 = puVar6;
                puVar6 = (ulong *)*puVar9;
              } while ((ulong *)*puVar9 != (ulong *)0x0);
            }
            puVar14 = puVar9;
          } while (puVar9 != &uStack_78);
        }
        FUN_005244dc(&local_80,uStack_78);
        plVar4 = *(long **)(p_Var12 + 8);
        if (*(long **)(p_Var12 + 8) == (long *)0x0) {
          p_Var5 = p_Var12 + 0x10;
          plVar7 = *(long **)p_Var5;
          if ((__tree_node_base *)*plVar7 != p_Var12) {
            do {
              lVar10 = *(long *)p_Var5;
              p_Var5 = (__tree_node_base *)(lVar10 + 0x10);
              plVar7 = *(long **)p_Var5;
            } while (*plVar7 != lVar10);
          }
        }
        else {
          do {
            plVar7 = plVar4;
            plVar4 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        if (*(__tree_node_base **)(lVar2 + 0x50) == p_Var12) {
          *(long **)(lVar2 + 0x50) = plVar7;
        }
        *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x60) + -1;
        std::__tree_remove<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(lVar2 + 0x58),p_Var12);
        FUN_002e2ea0(PTR_LAB_04373088,p_Var12);
      }
    }
  }
  return;
}


