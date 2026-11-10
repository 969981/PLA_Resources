/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005600fc; name: FUN_005600fc
 */


void FUN_005600fc(uint *param_1,uint param_2)

{
  __tree_node_base *p_Var1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  uint uVar6;
  __tree_node_base *p_Var7;
  long *plVar8;
  __tree_node_base *p_Var9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  __tree_node_base *p_Var13;
  
  if (0x10fffe < (int)param_2) {
    return;
  }
  if ((int)param_2 < 0x7a) {
    if ((int)param_2 < 0x61) {
      param_1[1] = 0;
      if ((int)param_2 < 0x5a) {
        if ((int)param_2 < 0x41) {
          *param_1 = 0;
          p_Var5 = *(__tree_node_base **)(param_1 + 6);
          puVar3 = PTR_LAB_04373088;
        }
        else {
          *param_1 = *param_1 & 0x3ffffffU >> (ulong)(0x5a - param_2 & 0x1f);
          p_Var5 = *(__tree_node_base **)(param_1 + 6);
          puVar3 = PTR_LAB_04373088;
        }
        goto joined_r0x00560188;
      }
    }
    else {
      param_1[1] = param_1[1] & 0x3ffffffU >> (ulong)(0x7a - param_2 & 0x1f);
    }
  }
  p_Var5 = *(__tree_node_base **)(param_1 + 6);
  puVar3 = PTR_LAB_04373088;
joined_r0x00560188:
  PTR_LAB_04373088 = puVar3;
  if (p_Var5 != (__tree_node_base *)0x0) {
    p_Var1 = (__tree_node_base *)(param_1 + 6);
    do {
      p_Var7 = p_Var5;
      p_Var13 = p_Var1;
      do {
        if ((int)param_2 < *(int *)(p_Var7 + 0x20)) {
          p_Var13 = p_Var7;
        }
        p_Var7 = *(__tree_node_base **)
                  (p_Var7 + (ulong)(*(int *)(p_Var7 + 0x20) <= (int)param_2) * 8);
      } while (p_Var7 != (__tree_node_base *)0x0);
      if (p_Var13 == p_Var1) {
        return;
      }
      if (0x10ffff < *(int *)(p_Var13 + 0x1c)) {
        return;
      }
      uVar12 = *(ulong *)(p_Var13 + 0x1c);
      plVar4 = *(long **)(p_Var13 + 8);
      if (*(long **)(p_Var13 + 8) == (long *)0x0) {
        p_Var7 = p_Var13 + 0x10;
        plVar8 = *(long **)p_Var7;
        if ((__tree_node_base *)*plVar8 != p_Var13) {
          do {
            lVar10 = *(long *)p_Var7;
            p_Var7 = (__tree_node_base *)(lVar10 + 0x10);
            plVar8 = *(long **)p_Var7;
          } while (*plVar8 != lVar10);
        }
      }
      else {
        do {
          plVar8 = plVar4;
          plVar4 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (*(__tree_node_base **)(param_1 + 4) == p_Var13) {
        *(long **)(param_1 + 4) = plVar8;
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var5,p_Var13);
      FUN_002e2ea0(puVar3,p_Var13);
      iVar11 = (int)uVar12;
      uVar6 = ~(uint)(uVar12 >> 0x20) + iVar11 + param_1[2];
      param_1[2] = uVar6;
      if (iVar11 <= (int)param_2) {
        p_Var13 = *(__tree_node_base **)p_Var1;
        p_Var5 = p_Var1;
        if (p_Var13 == (__tree_node_base *)0x0) {
          p_Var7 = p_Var1;
        }
        else {
          uVar2 = *(uint *)(p_Var13 + 0x1c);
          while( true ) {
            while (p_Var7 = p_Var13, (int)param_2 < (int)uVar2) {
              p_Var9 = *(__tree_node_base **)p_Var13;
              if (p_Var9 == (__tree_node_base *)0x0) {
                lVar10 = *(long *)p_Var13;
                goto joined_r0x00560310;
              }
              p_Var5 = p_Var13;
              p_Var13 = p_Var9;
              uVar2 = *(uint *)(p_Var9 + 0x1c);
            }
            if (iVar11 <= (int)*(uint *)(p_Var13 + 0x20)) break;
            p_Var5 = p_Var13 + 8;
            p_Var13 = *(__tree_node_base **)p_Var5;
            if (p_Var13 == (__tree_node_base *)0x0) break;
            uVar2 = *(uint *)(p_Var13 + 0x1c);
          }
        }
        lVar10 = *(long *)p_Var5;
        p_Var13 = p_Var5;
joined_r0x00560310:
        if (lVar10 == 0) {
          p_Var5 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x28);
          *(ulong *)(p_Var5 + 0x1c) = uVar12 & 0xffffffff | (ulong)param_2 << 0x20;
          *(undefined8 *)p_Var5 = 0;
          *(undefined8 *)(p_Var5 + 8) = 0;
          *(__tree_node_base **)(p_Var5 + 0x10) = p_Var7;
          *(__tree_node_base **)p_Var13 = p_Var5;
          if (**(long **)(param_1 + 4) != 0) {
            *(long *)(param_1 + 4) = **(long **)(param_1 + 4);
            p_Var5 = *(__tree_node_base **)p_Var13;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_1 + 6),p_Var5);
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          uVar6 = param_1[2];
        }
        param_1[2] = ((param_2 + 1) - iVar11) + uVar6;
      }
      p_Var5 = *(__tree_node_base **)p_Var1;
    } while (p_Var5 != (__tree_node_base *)0x0);
  }
  return;
}


