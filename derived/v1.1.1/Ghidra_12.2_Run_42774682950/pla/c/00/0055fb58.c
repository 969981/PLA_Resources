/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055fb58; name: FUN_0055fb58
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0055fb58(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  __tree_node_base *p_Var4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  __tree_node_base *p_Var12;
  
  if ((int)param_3 < param_2) {
    return 0;
  }
  if ((param_2 < 0x7b) && (0x40 < (int)param_3)) {
    iVar5 = param_2;
    if (param_2 < 0x42) {
      iVar5 = 0x41;
    }
    uVar8 = param_3;
    if (0x59 < (int)param_3) {
      uVar8 = 0x5a;
    }
    if (iVar5 <= (int)uVar8) {
      *param_1 = *param_1 |
                 ~(-1 << (ulong)((uVar8 - iVar5) + 1 & 0x1f)) << (ulong)(iVar5 - 0x41U & 0x1f);
    }
    iVar5 = param_2;
    if (param_2 < 0x62) {
      iVar5 = 0x61;
    }
    uVar8 = param_3;
    if (0x79 < (int)param_3) {
      uVar8 = 0x7a;
    }
    if (iVar5 <= (int)uVar8) {
      param_1[1] = param_1[1] |
                   ~(-1 << (ulong)((uVar8 - iVar5) + 1 & 0x1f)) << (ulong)(iVar5 - 0x61U & 0x1f);
    }
  }
  p_Var11 = (__tree_node_base *)(param_1 + 6);
  p_Var4 = *(__tree_node_base **)p_Var11;
  if (p_Var4 != (__tree_node_base *)0x0) {
    p_Var12 = p_Var11;
    p_Var9 = p_Var4;
    do {
      if (param_2 <= *(int *)(p_Var9 + 0x20)) {
        p_Var12 = p_Var9;
      }
      p_Var9 = *(__tree_node_base **)(p_Var9 + (ulong)(*(int *)(p_Var9 + 0x20) < param_2) * 8);
    } while (p_Var9 != (__tree_node_base *)0x0);
    if (((p_Var12 != p_Var11) && (*(int *)(p_Var12 + 0x1c) <= param_2)) &&
       ((int)param_3 <= *(int *)(p_Var12 + 0x20))) {
      return 0;
    }
  }
  uVar8 = param_3;
  if ((0 < param_2) && (p_Var4 != (__tree_node_base *)0x0)) {
    p_Var9 = p_Var4;
    p_Var12 = p_Var11;
    do {
      if (param_2 + -1 <= *(int *)(p_Var9 + 0x20)) {
        p_Var12 = p_Var9;
      }
      p_Var9 = *(__tree_node_base **)(p_Var9 + (ulong)(*(int *)(p_Var9 + 0x20) < param_2 + -1) * 8);
    } while (p_Var9 != (__tree_node_base *)0x0);
    if ((p_Var12 != p_Var11) && (*(int *)(p_Var12 + 0x1c) < param_2)) {
      param_2 = *(int *)(p_Var12 + 0x1c);
      uVar1 = *(uint *)(p_Var12 + 0x20);
      uVar8 = uVar1;
      if ((int)uVar1 <= (int)param_3) {
        uVar8 = param_3;
      }
      param_1[2] = param_2 + ~uVar1 + param_1[2];
      plVar3 = *(long **)(p_Var12 + 8);
      if (*(long **)(p_Var12 + 8) == (long *)0x0) {
        p_Var9 = p_Var12 + 0x10;
        plVar6 = *(long **)p_Var9;
        if ((__tree_node_base *)*plVar6 != p_Var12) {
          do {
            lVar7 = *(long *)p_Var9;
            p_Var9 = (__tree_node_base *)(lVar7 + 0x10);
            plVar6 = *(long **)p_Var9;
          } while (*plVar6 != lVar7);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 4) == p_Var12) {
        *(long **)(param_1 + 4) = plVar6;
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var4,p_Var12);
      FUN_002e2ea0(PTR_LAB_04373088,p_Var12);
    }
  }
  if (((int)uVar8 < 0x10ffff) &&
     (p_Var4 = *(__tree_node_base **)p_Var11, p_Var4 != (__tree_node_base *)0x0)) {
    p_Var9 = p_Var4;
    p_Var12 = p_Var11;
    do {
      if ((int)uVar8 < *(int *)(p_Var9 + 0x20)) {
        p_Var12 = p_Var9;
      }
      p_Var9 = *(__tree_node_base **)(p_Var9 + (ulong)(*(int *)(p_Var9 + 0x20) <= (int)uVar8) * 8);
    } while (p_Var9 != (__tree_node_base *)0x0);
    if ((p_Var12 != p_Var11) && (*(int *)(p_Var12 + 0x1c) <= (int)(uVar8 + 1))) {
      uVar8 = *(uint *)(p_Var12 + 0x20);
      param_1[2] = *(int *)(p_Var12 + 0x1c) + ~uVar8 + param_1[2];
      plVar3 = *(long **)(p_Var12 + 8);
      if (*(long **)(p_Var12 + 8) == (long *)0x0) {
        p_Var9 = p_Var12 + 0x10;
        plVar6 = *(long **)p_Var9;
        if ((__tree_node_base *)*plVar6 != p_Var12) {
          do {
            lVar7 = *(long *)p_Var9;
            p_Var9 = (__tree_node_base *)(lVar7 + 0x10);
            plVar6 = *(long **)p_Var9;
          } while (*plVar6 != lVar7);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 4) == p_Var12) {
        *(long **)(param_1 + 4) = plVar6;
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var4,p_Var12);
      FUN_002e2ea0(PTR_LAB_04373088,p_Var12);
    }
  }
  puVar2 = PTR_LAB_04373088;
  p_Var12 = (__tree_node_base *)(param_1 + 6);
  p_Var4 = *(__tree_node_base **)p_Var12;
  while (p_Var4 != (__tree_node_base *)0x0) {
    p_Var10 = p_Var4;
    p_Var9 = p_Var11;
    do {
      if (param_2 <= *(int *)(p_Var10 + 0x20)) {
        p_Var9 = p_Var10;
      }
      p_Var10 = *(__tree_node_base **)(p_Var10 + (ulong)(*(int *)(p_Var10 + 0x20) < param_2) * 8);
    } while (p_Var10 != (__tree_node_base *)0x0);
    if ((p_Var9 == p_Var11) || ((int)uVar8 < *(int *)(p_Var9 + 0x1c))) {
      param_1[2] = (uVar8 - param_2) + param_1[2] + 1;
      if (p_Var4 != (__tree_node_base *)0x0) goto LAB_0055ffa0;
      lVar7 = *(long *)p_Var11;
      p_Var12 = p_Var11;
      goto joined_r0x00560020;
    }
    param_1[2] = *(int *)(p_Var9 + 0x1c) + ~*(uint *)(p_Var9 + 0x20) + param_1[2];
    plVar3 = *(long **)(p_Var9 + 8);
    if (*(long **)(p_Var9 + 8) == (long *)0x0) {
      p_Var10 = p_Var9 + 0x10;
      plVar6 = *(long **)p_Var10;
      if ((__tree_node_base *)*plVar6 != p_Var9) {
        do {
          lVar7 = *(long *)p_Var10;
          p_Var10 = (__tree_node_base *)(lVar7 + 0x10);
          plVar6 = *(long **)p_Var10;
        } while (*plVar6 != lVar7);
      }
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    if (*(__tree_node_base **)(param_1 + 4) == p_Var9) {
      *(long **)(param_1 + 4) = plVar6;
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>(p_Var4,p_Var9);
    FUN_002e2ea0(puVar2,p_Var9);
    p_Var4 = *(__tree_node_base **)(param_1 + 6);
  }
  param_1[2] = (uVar8 - param_2) + param_1[2] + 1;
  lVar7 = *(long *)p_Var11;
  p_Var12 = p_Var11;
joined_r0x00560020:
  if (lVar7 == 0) {
    p_Var4 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    *(ulong *)(p_Var4 + 0x1c) = CONCAT44(uVar8,param_2);
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(__tree_node_base **)(p_Var4 + 0x10) = p_Var11;
    *(__tree_node_base **)p_Var12 = p_Var4;
    if (**(long **)(param_1 + 4) != 0) {
      *(long *)(param_1 + 4) = **(long **)(param_1 + 4);
      p_Var4 = *(__tree_node_base **)p_Var12;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 6),p_Var4);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  return 1;
LAB_0055ffa0:
  p_Var11 = p_Var4;
  if ((int)uVar8 < *(int *)(p_Var4 + 0x1c)) {
    p_Var12 = p_Var4;
    if (*(__tree_node_base **)p_Var4 == (__tree_node_base *)0x0) {
      lVar7 = *(long *)p_Var4;
      goto joined_r0x00560020;
    }
    p_Var4 = *(__tree_node_base **)p_Var4;
  }
  else {
    if (param_2 <= *(int *)(p_Var4 + 0x20)) goto LAB_0055ffd4;
    p_Var12 = p_Var4 + 8;
    p_Var4 = *(__tree_node_base **)p_Var12;
    if (*(__tree_node_base **)p_Var12 == (__tree_node_base *)0x0) goto LAB_0055ffd4;
  }
  goto LAB_0055ffa0;
LAB_0055ffd4:
  lVar7 = *(long *)p_Var12;
  goto joined_r0x00560020;
}


