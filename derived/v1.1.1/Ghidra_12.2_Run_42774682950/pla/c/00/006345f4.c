/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006345f4; name: FUN_006345f4
 */


undefined8 FUN_006345f4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  int iVar6;
  __tree_node_base *p_Var7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  __tree_node_base *p_Var11;
  long lVar12;
  byte *__s1;
  
  p_Var11 = (__tree_node_base *)(param_1 + 1);
  p_Var7 = (__tree_node_base *)FUN_0063449c(param_1,param_2,*(undefined8 *)p_Var11,p_Var11);
  if (p_Var11 != p_Var7) {
    pbVar10 = *(byte **)*param_2;
    pbVar8 = (byte *)**(undefined8 **)(p_Var7 + 0x20);
    bVar3 = *pbVar8;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar8 + 8);
    }
    bVar4 = *pbVar10;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar10 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(pbVar10 + 0x10);
      if ((bVar4 & 1) == 0) {
        __s1 = pbVar10 + 1;
      }
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      iVar6 = memcmp(__s1,pbVar10,__n);
      if (iVar6 != 0) {
        if (iVar6 < 0) {
          return 0;
        }
        goto LAB_0063468c;
      }
    }
    if (uVar1 <= uVar2) {
LAB_0063468c:
      plVar5 = *(long **)(p_Var7 + 8);
      if (*(long **)(p_Var7 + 8) == (long *)0x0) {
        p_Var11 = p_Var7 + 0x10;
        plVar9 = *(long **)p_Var11;
        if ((__tree_node_base *)*plVar9 != p_Var7) {
          do {
            lVar12 = *(long *)p_Var11;
            p_Var11 = (__tree_node_base *)(lVar12 + 0x10);
            plVar9 = *(long **)p_Var11;
          } while (*plVar9 != lVar12);
        }
      }
      else {
        do {
          plVar9 = plVar5;
          plVar5 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if ((__tree_node_base *)*param_1 == p_Var7) {
        *param_1 = plVar9;
      }
      param_1[3] = param_1[3] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_1[1],p_Var7);
      if (param_1[2] == 0) {
        FUN_002ee710(p_Var7);
      }
      return 1;
    }
  }
  return 0;
}


