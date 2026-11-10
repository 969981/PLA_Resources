/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce0f60; name: __tree_remove<std::__tree_node_base<void*>*>
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__tree_remove<std::__tree_node_base<void*>*>(std::__tree_node_base<void*>*,
   std::__tree_node_base<void*>*) */

void std::__tree_remove<std::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  __tree_node_base *p_Var1;
  __tree_node_base _Var2;
  undefined8 *puVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  long lVar8;
  bool bVar9;
  long lVar10;
  
  p_Var7 = *(__tree_node_base **)param_2;
  p_Var6 = param_2;
  if (p_Var7 == (__tree_node_base *)0x0) {
LAB_00ce0f88:
    p_Var7 = *(__tree_node_base **)(p_Var6 + 8);
    if (p_Var7 != (__tree_node_base *)0x0) goto LAB_00ce1138;
    bVar9 = false;
  }
  else {
    p_Var6 = *(__tree_node_base **)(param_2 + 8);
    if (p_Var6 != (__tree_node_base *)0x0) {
      for (p_Var7 = *(__tree_node_base **)p_Var6; p_Var7 != (__tree_node_base *)0x0;
          p_Var7 = *(__tree_node_base **)p_Var7) {
        p_Var6 = p_Var7;
      }
      goto LAB_00ce0f88;
    }
    p_Var6 = param_2;
LAB_00ce1138:
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var6 + 0x10);
    bVar9 = true;
  }
  puVar3 = *(undefined8 **)(p_Var6 + 0x10);
  if ((__tree_node_base *)*puVar3 == p_Var6) {
    *puVar3 = p_Var7;
    if (p_Var6 == param_1) {
      p_Var4 = (__tree_node_base *)0x0;
      param_1 = p_Var7;
      goto LAB_00ce0fc8;
    }
    puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x10) + 8);
  }
  else {
    puVar3[1] = p_Var7;
    puVar3 = *(undefined8 **)(p_Var6 + 0x10);
  }
  p_Var4 = (__tree_node_base *)*puVar3;
LAB_00ce0fc8:
  _Var2 = p_Var6[0x18];
  if (p_Var6 != param_2) {
    lVar8 = *(long *)(param_2 + 0x10);
    *(long *)(p_Var6 + 0x10) = lVar8;
    *(__tree_node_base **)
     (lVar8 + (ulong)((__tree_node_base *)**(undefined8 **)(param_2 + 0x10) != param_2) * 8) =
         p_Var6;
    lVar8 = *(long *)param_2;
    *(long *)p_Var6 = lVar8;
    *(__tree_node_base **)(lVar8 + 0x10) = p_Var6;
    lVar8 = *(long *)(param_2 + 8);
    *(long *)(p_Var6 + 8) = lVar8;
    if (lVar8 != 0) {
      *(__tree_node_base **)(lVar8 + 0x10) = p_Var6;
    }
    p_Var1 = p_Var6;
    if (param_1 != param_2) {
      p_Var1 = param_1;
    }
    p_Var6[0x18] = param_2[0x18];
    param_1 = p_Var1;
  }
  if ((_Var2 == (__tree_node_base)0x0) || (param_1 == (__tree_node_base *)0x0)) {
    return;
  }
  if (bVar9) {
    p_Var7[0x18] = (__tree_node_base)0x1;
    return;
  }
  while( true ) {
    puVar3 = *(undefined8 **)(p_Var4 + 0x10);
    p_Var6 = param_1;
    if ((__tree_node_base *)*puVar3 != p_Var4) break;
    if (p_Var4[0x18] == (__tree_node_base)0x0) {
      p_Var4[0x18] = (__tree_node_base)0x1;
      *(undefined1 *)(puVar3 + 3) = 0;
      plVar5 = *(long **)(p_Var4 + 0x10);
      lVar8 = *plVar5;
      lVar10 = *(long *)(lVar8 + 8);
      *plVar5 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 0x10) = plVar5;
      }
      *(long *)(lVar8 + 0x10) = plVar5[2];
      ((undefined8 *)plVar5[2])[*(long **)plVar5[2] != plVar5] = lVar8;
      *(long **)(lVar8 + 8) = plVar5;
      plVar5[2] = lVar8;
      p_Var6 = p_Var4;
      if (param_1 != *(__tree_node_base **)(p_Var4 + 8)) {
        p_Var6 = param_1;
      }
      p_Var4 = *(__tree_node_base **)*(__tree_node_base **)(p_Var4 + 8);
      lVar8 = *(long *)p_Var4;
      if (lVar8 != 0) goto LAB_00ce1064;
    }
    else {
      lVar8 = *(long *)p_Var4;
      if (lVar8 != 0) {
LAB_00ce1064:
        if (*(char *)(lVar8 + 0x18) == '\0') goto LAB_00ce12d4;
      }
    }
    lVar10 = *(long *)(p_Var4 + 8);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x18) == '\0')) {
      if ((lVar8 == 0) || (*(char *)(lVar8 + 0x18) != '\0')) {
        *(undefined1 *)(lVar10 + 0x18) = 1;
        p_Var6 = *(__tree_node_base **)(p_Var4 + 8);
        p_Var4[0x18] = (__tree_node_base)0x0;
        lVar8 = *(long *)p_Var6;
        *(long *)(p_Var4 + 8) = lVar8;
        if (lVar8 != 0) {
          *(__tree_node_base **)(lVar8 + 0x10) = p_Var4;
        }
        *(long *)(p_Var6 + 0x10) = *(long *)(p_Var4 + 0x10);
        (*(undefined8 **)(p_Var4 + 0x10))
        [(__tree_node_base *)**(undefined8 **)(p_Var4 + 0x10) != p_Var4] = p_Var6;
        *(__tree_node_base **)p_Var6 = p_Var4;
        *(__tree_node_base **)(p_Var4 + 0x10) = p_Var6;
        p_Var4 = p_Var6;
      }
LAB_00ce12d4:
      p_Var4[0x18] = *(__tree_node_base *)(*(long *)(p_Var4 + 0x10) + 0x18);
      *(undefined1 *)(*(long *)(p_Var4 + 0x10) + 0x18) = 1;
      *(undefined1 *)(*(long *)p_Var4 + 0x18) = 1;
      plVar5 = *(long **)(p_Var4 + 0x10);
      lVar8 = *plVar5;
      lVar10 = *(long *)(lVar8 + 8);
      *plVar5 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 0x10) = plVar5;
      }
      *(long *)(lVar8 + 0x10) = plVar5[2];
      ((undefined8 *)plVar5[2])[*(long **)plVar5[2] != plVar5] = lVar8;
      *(long **)(lVar8 + 8) = plVar5;
      plVar5[2] = lVar8;
      return;
    }
    p_Var4[0x18] = (__tree_node_base)0x0;
    p_Var7 = *(__tree_node_base **)(p_Var4 + 0x10);
    if (p_Var7 == p_Var6) goto LAB_00ce1338;
LAB_00ce1044:
    if (p_Var7[0x18] == (__tree_node_base)0x0) goto LAB_00ce1338;
    p_Var4 = (__tree_node_base *)
             (*(undefined8 **)(p_Var7 + 0x10))
             [(__tree_node_base *)**(undefined8 **)(p_Var7 + 0x10) == p_Var7];
    param_1 = p_Var6;
  }
  if (p_Var4[0x18] == (__tree_node_base)0x0) {
    p_Var4[0x18] = (__tree_node_base)0x1;
    *(undefined1 *)(puVar3 + 3) = 0;
    lVar8 = *(long *)(p_Var4 + 0x10);
    plVar5 = *(long **)(lVar8 + 8);
    lVar10 = *plVar5;
    *(long *)(lVar8 + 8) = lVar10;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar8;
    }
    plVar5[2] = *(long *)(lVar8 + 0x10);
    (*(long **)(lVar8 + 0x10))[**(long **)(lVar8 + 0x10) != lVar8] = (long)plVar5;
    *plVar5 = lVar8;
    *(long **)(lVar8 + 0x10) = plVar5;
    p_Var6 = p_Var4;
    if (param_1 != *(__tree_node_base **)p_Var4) {
      p_Var6 = param_1;
    }
    p_Var4 = *(__tree_node_base **)(*(__tree_node_base **)p_Var4 + 8);
    lVar8 = *(long *)p_Var4;
    if (lVar8 != 0) goto LAB_00ce1070;
LAB_00ce102c:
    if ((*(long *)(p_Var4 + 8) == 0) || (*(char *)(*(long *)(p_Var4 + 8) + 0x18) != '\0')) {
      p_Var4[0x18] = (__tree_node_base)0x0;
      p_Var7 = *(__tree_node_base **)(p_Var4 + 0x10);
      if (p_Var7 != p_Var6) goto LAB_00ce1044;
      p_Var7 = p_Var6;
LAB_00ce1338:
      p_Var7[0x18] = (__tree_node_base)0x1;
      return;
    }
  }
  else {
    lVar8 = *(long *)p_Var4;
    if (lVar8 == 0) goto LAB_00ce102c;
LAB_00ce1070:
    if (*(char *)(lVar8 + 0x18) != '\0') goto LAB_00ce102c;
    if ((*(long *)(p_Var4 + 8) == 0) || (*(char *)(*(long *)(p_Var4 + 8) + 0x18) != '\0')) {
      *(undefined1 *)(lVar8 + 0x18) = 1;
      p_Var6 = *(__tree_node_base **)p_Var4;
      p_Var4[0x18] = (__tree_node_base)0x0;
      lVar8 = *(long *)(p_Var6 + 8);
      *(long *)p_Var4 = lVar8;
      if (lVar8 != 0) {
        *(__tree_node_base **)(lVar8 + 0x10) = p_Var4;
      }
      *(long *)(p_Var6 + 0x10) = *(long *)(p_Var4 + 0x10);
      (*(undefined8 **)(p_Var4 + 0x10))
      [(__tree_node_base *)**(undefined8 **)(p_Var4 + 0x10) != p_Var4] = p_Var6;
      *(__tree_node_base **)(p_Var6 + 8) = p_Var4;
      *(__tree_node_base **)(p_Var4 + 0x10) = p_Var6;
      goto LAB_00ce11a8;
    }
  }
  p_Var6 = p_Var4;
LAB_00ce11a8:
  p_Var6[0x18] = *(__tree_node_base *)(*(long *)(p_Var6 + 0x10) + 0x18);
  *(undefined1 *)(*(long *)(p_Var6 + 0x10) + 0x18) = 1;
  *(undefined1 *)(*(long *)(p_Var6 + 8) + 0x18) = 1;
  lVar8 = *(long *)(p_Var6 + 0x10);
  plVar5 = *(long **)(lVar8 + 8);
  lVar10 = *plVar5;
  *(long *)(lVar8 + 8) = lVar10;
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x10) = lVar8;
  }
  plVar5[2] = *(long *)(lVar8 + 0x10);
  (*(long **)(lVar8 + 0x10))[**(long **)(lVar8 + 0x10) != lVar8] = (long)plVar5;
  *plVar5 = lVar8;
  *(long **)(lVar8 + 0x10) = plVar5;
  return;
}


