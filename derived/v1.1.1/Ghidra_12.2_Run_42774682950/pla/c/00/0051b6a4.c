/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051b6a4; name: FUN_0051b6a4
 */


void FUN_0051b6a4(long param_1,void *param_2,ulong param_3,ulong param_4,uint param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  size_t __n;
  __tree_node_base *p_Var5;
  long *plVar6;
  __tree_node_base *p_Var7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  char *__s;
  __tree_node_base *p_Var11;
  ulong uVar12;
  void *pvVar13;
  __tree_node_base *p_Var14;
  ulong local_88;
  ulong local_80;
  void *local_78;
  undefined1 auStack_70 [8];
  ulong *local_68;
  __tree_node_base *local_60;
  size_t sStack_58;
  void *local_50;
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    return;
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  if (param_2 != (void *)0x0) {
    if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_3 < 0x17) {
      local_88 = (ulong)(byte)((int)param_3 << 1);
      pvVar13 = (void *)((ulong)&local_88 | 1);
      if (param_3 != 0) goto LAB_0051b730;
    }
    else {
      uVar12 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
      local_88 = uVar12 | 1;
      local_80 = param_3;
      local_78 = pvVar13;
LAB_0051b730:
      memcpy(pvVar13,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar13 + param_3) = 0;
  }
  plVar8 = (long *)(param_1 + 0x128);
  local_68 = &local_88;
                    /* try { // try from 0051b750 to 0051b797 has its CatchHandler @ 0051bacc */
  puVar2 = (undefined8 *)FUN_0052006c(plVar8,&local_48,&local_88);
  p_Var14 = (__tree_node_base *)*puVar2;
  if (p_Var14 == (__tree_node_base *)0x0) {
    FUN_00520188(&local_60,plVar8,&DAT_03a2945a,&local_68,auStack_70);
    *(undefined8 *)(local_60 + 0x10) = local_48;
    *(undefined8 *)local_60 = 0;
    *(undefined8 *)(local_60 + 8) = 0;
    *puVar2 = local_60;
    p_Var14 = local_60;
    if (*(long *)*plVar8 != 0) {
      *plVar8 = *(long *)*plVar8;
      p_Var14 = (__tree_node_base *)*puVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x130),p_Var14);
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    p_Var5 = local_60 + 0x40;
    p_Var3 = *(__tree_node_base **)p_Var5;
    p_Var14 = local_60;
  }
  else {
    p_Var5 = p_Var14 + 0x40;
    p_Var3 = *(__tree_node_base **)p_Var5;
  }
  if (p_Var3 == (__tree_node_base *)0x0) goto LAB_0051ba30;
  p_Var7 = p_Var3;
  p_Var11 = p_Var5;
  do {
    if (*(ulong *)(p_Var7 + 0x20) >= param_4) {
      p_Var11 = p_Var7;
    }
    p_Var7 = *(__tree_node_base **)(p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) < param_4) * 8);
  } while (p_Var7 != (__tree_node_base *)0x0);
  if ((p_Var11 == p_Var5) || (param_4 < *(ulong *)(p_Var11 + 0x20))) goto LAB_0051ba30;
  plVar9 = *(long **)(p_Var11 + 8);
  if (*(long **)(p_Var11 + 8) == (long *)0x0) {
    p_Var5 = p_Var11 + 0x10;
    plVar6 = *(long **)p_Var5;
    if ((__tree_node_base *)*plVar6 != p_Var11) {
      do {
        lVar4 = *(long *)p_Var5;
        p_Var5 = (__tree_node_base *)(lVar4 + 0x10);
        plVar6 = *(long **)p_Var5;
      } while (*plVar6 != lVar4);
    }
  }
  else {
    do {
      plVar6 = plVar9;
      plVar9 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  if (*(__tree_node_base **)(p_Var14 + 0x38) == p_Var11) {
    *(long **)(p_Var14 + 0x38) = plVar6;
  }
  *(long *)(p_Var14 + 0x48) = *(long *)(p_Var14 + 0x48) + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var11);
  puVar2 = *(undefined8 **)(p_Var11 + 0x28);
  *(undefined8 *)(p_Var11 + 0x28) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  FUN_002e2ea0(PTR_LAB_04373088,p_Var11);
  if (*(long *)(p_Var14 + 0x48) != 0) goto LAB_0051ba30;
                    /* try { // try from 0051b8c4 to 0051b8e7 has its CatchHandler @ 0051babc */
  lVar4 = FUN_005242fc(plVar8,&local_88);
  if (param_1 + 0x130 != lVar4) {
    FUN_0052440c(plVar8);
  }
  lVar4 = *(long *)(param_1 + 0xa8);
  local_60 = (__tree_node_base *)0x0;
  sStack_58 = 0;
  local_50 = (void *)0x0;
  __s = *(char **)PTR_PTR_04374a70;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0051ba68 to 0051ba6f has its CatchHandler @ 0051ba70 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = (__tree_node_base *)CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    pvVar13 = (void *)((ulong)&local_60 | 1);
    if (__n != 0) goto LAB_0051b95c;
  }
  else {
    uVar12 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar13 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
    local_60 = (__tree_node_base *)(uVar12 | 1);
    sStack_58 = __n;
    local_50 = pvVar13;
LAB_0051b95c:
    memcpy(pvVar13,__s,__n);
  }
  *(undefined1 *)((long)pvVar13 + __n) = 0;
  if (*(long *)(lVar4 + 0x38) != 0) {
                    /* try { // try from 0051b97c to 0051b98b has its CatchHandler @ 0051ba84 */
    FUN_0050e6a8(*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x18),&local_60,&local_88,param_5 & 1);
    puVar2 = *(undefined8 **)(lVar4 + 0x38);
    plVar8 = *(long **)(puVar2[3] + 0x188);
    while (plVar8 != (long *)(puVar2[3] + 400)) {
      if (plVar8[0x10] != 0) goto LAB_0051ba18;
      plVar9 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar9 = plVar8 + 2;
        bVar1 = *(long **)*plVar9 != plVar8;
        plVar8 = (long *)*plVar9;
        if (bVar1) {
          do {
            lVar10 = *plVar9;
            plVar9 = (long *)(lVar10 + 0x10);
            plVar8 = (long *)*plVar9;
          } while (*(long *)*plVar9 != lVar10);
        }
      }
      else {
        do {
          plVar8 = plVar9;
          plVar9 = (long *)*plVar8;
        } while (plVar9 != (long *)0x0);
      }
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0051ba14 to 0051ba17 has its CatchHandler @ 0051ba80 */
      (**(code **)*puVar2)();
    }
  }
LAB_0051ba18:
  if (((ulong)local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
LAB_0051ba30:
  if ((local_88 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_78);
  }
  return;
}


