/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033440c; name: FUN_0033440c
 */


void FUN_0033440c(long param_1,int param_2)

{
  int *piVar1;
  size_t __n;
  long *plVar2;
  int *__dest;
  int *piVar3;
  __tree_node_base *p_Var4;
  ushort uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  __tree_node_base *p_Var8;
  long *plVar9;
  ulong uVar10;
  __tree_node_base *p_Var11;
  long lVar12;
  __tree_node_base *p_Var13;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    __dest = *(int **)(param_1 + 0x10);
    uVar5 = *(ushort *)(param_1 + 10);
    uVar6 = (ulong)uVar5;
    piVar1 = __dest + uVar6 * 8;
    if (uVar6 != 0) {
      piVar3 = __dest;
      do {
        uVar10 = uVar6 >> 1;
        __dest = piVar3 + uVar10 * 8 + 8;
        uVar6 = uVar6 + ~uVar10;
        if (param_2 <= piVar3[uVar10 * 8]) {
          __dest = piVar3;
          uVar6 = uVar10;
        }
        piVar3 = __dest;
      } while (uVar6 != 0);
    }
    if ((__dest != piVar1) && (*__dest == param_2)) {
      __n = (long)piVar1 - (long)(__dest + 8);
      if (__n != 0) {
        memmove(__dest,__dest + 8,__n);
        uVar5 = *(ushort *)(param_1 + 10);
      }
      *(ushort *)(param_1 + 10) = uVar5 - 1;
    }
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    p_Var13 = (__tree_node_base *)(puVar7 + 1);
    p_Var4 = *(__tree_node_base **)p_Var13;
    if (p_Var4 != (__tree_node_base *)0x0) {
      p_Var8 = p_Var4;
      p_Var11 = p_Var13;
      do {
        if (param_2 <= *(int *)(p_Var8 + 0x20)) {
          p_Var11 = p_Var8;
        }
        p_Var8 = *(__tree_node_base **)(p_Var8 + (ulong)(*(int *)(p_Var8 + 0x20) < param_2) * 8);
      } while (p_Var8 != (__tree_node_base *)0x0);
      if ((p_Var11 != p_Var13) && (*(int *)(p_Var11 + 0x20) <= param_2)) {
        plVar2 = *(long **)(p_Var11 + 8);
        if (*(long **)(p_Var11 + 8) == (long *)0x0) {
          p_Var13 = p_Var11 + 0x10;
          plVar9 = *(long **)p_Var13;
          if ((__tree_node_base *)*plVar9 != p_Var11) {
            do {
              lVar12 = *(long *)p_Var13;
              p_Var13 = (__tree_node_base *)(lVar12 + 0x10);
              plVar9 = *(long **)p_Var13;
            } while (*plVar9 != lVar12);
          }
        }
        else {
          do {
            plVar9 = plVar2;
            plVar2 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        if ((__tree_node_base *)*puVar7 == p_Var11) {
          *puVar7 = plVar9;
        }
        puVar7[2] = puVar7[2] + -1;
        std::__tree_remove<std::__tree_node_base<void*>*>(p_Var4,p_Var11);
        FUN_002e2ea0(PTR_LAB_04373088,p_Var11);
        return;
      }
    }
  }
  return;
}


