/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051ae90; name: FUN_0051ae90
 */


void FUN_0051ae90(long param_1,void *param_2,ulong param_3,ulong param_4,uint param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  size_t __n;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  char *__s;
  void *pvVar9;
  __tree_node_base *p_Var10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong local_70;
  size_t sStack_68;
  void *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    return;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  if (param_2 != (void *)0x0) {
    if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_3 < 0x17) {
      local_58 = (ulong)(byte)((int)param_3 << 1);
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (param_3 != 0) goto LAB_0051af1c;
    }
    else {
      uVar11 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
      local_58 = uVar11 | 1;
      local_50 = param_3;
      local_48 = pvVar9;
LAB_0051af1c:
      memcpy(pvVar9,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar9 + param_3) = 0;
  }
  lVar13 = param_1 + 0x110;
                    /* try { // try from 0051af34 to 0051af3f has its CatchHandler @ 0051b238 */
  puVar2 = (undefined8 *)FUN_005142ac(lVar13,&local_58);
  p_Var6 = (__tree_node_base *)(puVar2 + 1);
  p_Var3 = *(__tree_node_base **)p_Var6;
  if (p_Var3 == (__tree_node_base *)0x0) goto LAB_0051b19c;
  p_Var5 = p_Var3;
  p_Var10 = p_Var6;
  do {
    if (*(ulong *)(p_Var5 + 0x20) >= param_4) {
      p_Var10 = p_Var5;
    }
    p_Var5 = *(__tree_node_base **)(p_Var5 + (ulong)(*(ulong *)(p_Var5 + 0x20) < param_4) * 8);
  } while (p_Var5 != (__tree_node_base *)0x0);
  if ((p_Var10 == p_Var6) || (param_4 < *(ulong *)(p_Var10 + 0x20))) goto LAB_0051b19c;
  plVar7 = *(long **)(p_Var10 + 8);
  if (*(long **)(p_Var10 + 8) == (long *)0x0) {
    p_Var6 = p_Var10 + 0x10;
    plVar8 = *(long **)p_Var6;
    if ((__tree_node_base *)*plVar8 != p_Var10) {
      do {
        lVar4 = *(long *)p_Var6;
        p_Var6 = (__tree_node_base *)(lVar4 + 0x10);
        plVar8 = *(long **)p_Var6;
      } while (*plVar8 != lVar4);
    }
  }
  else {
    do {
      plVar8 = plVar7;
      plVar7 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  if ((__tree_node_base *)*puVar2 == p_Var10) {
    *puVar2 = plVar8;
  }
  puVar2[2] = puVar2[2] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>(p_Var3,p_Var10);
  puVar12 = *(undefined8 **)(p_Var10 + 0x28);
  *(undefined8 *)(p_Var10 + 0x28) = 0;
  if (puVar12 != (undefined8 *)0x0) {
    (**(code **)*puVar12)(puVar12);
    FUN_002e2ea0(PTR_LAB_04373088,puVar12);
  }
  FUN_002e2ea0(PTR_LAB_04373088,p_Var10);
  if (puVar2[2] != 0) goto LAB_0051b19c;
                    /* try { // try from 0051b030 to 0051b053 has its CatchHandler @ 0051b228 */
  lVar4 = FUN_005240e8(lVar13,&local_58);
  if (param_1 + 0x118 != lVar4) {
    FUN_005241f8(lVar13);
  }
  lVar13 = *(long *)(param_1 + 0xa8);
  local_70 = 0;
  sStack_68 = 0;
  local_60 = (void *)0x0;
  __s = *(char **)PTR_PTR_04374a68;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0051b1d4 to 0051b1db has its CatchHandler @ 0051b1dc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    pvVar9 = (void *)((ulong)&local_70 | 1);
    if (__n != 0) goto LAB_0051b0c8;
  }
  else {
    uVar11 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
    local_70 = uVar11 | 1;
    sStack_68 = __n;
    local_60 = pvVar9;
LAB_0051b0c8:
    memcpy(pvVar9,__s,__n);
  }
  *(undefined1 *)((long)pvVar9 + __n) = 0;
  if (*(long *)(lVar13 + 0x38) != 0) {
                    /* try { // try from 0051b0e8 to 0051b0f7 has its CatchHandler @ 0051b1f0 */
    FUN_0050e6a8(*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18),&local_70,&local_58,param_5 & 1);
    puVar2 = *(undefined8 **)(lVar13 + 0x38);
    plVar7 = *(long **)(puVar2[3] + 0x188);
    while (plVar7 != (long *)(puVar2[3] + 400)) {
      if (plVar7[0x10] != 0) goto LAB_0051b184;
      plVar8 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar8 = plVar7 + 2;
        bVar1 = *(long **)*plVar8 != plVar7;
        plVar7 = (long *)*plVar8;
        if (bVar1) {
          do {
            lVar4 = *plVar8;
            plVar8 = (long *)(lVar4 + 0x10);
            plVar7 = (long *)*plVar8;
          } while (*(long *)*plVar8 != lVar4);
        }
      }
      else {
        do {
          plVar7 = plVar8;
          plVar8 = (long *)*plVar7;
        } while (plVar8 != (long *)0x0);
      }
    }
    *(undefined8 *)(lVar13 + 0x38) = 0;
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0051b180 to 0051b183 has its CatchHandler @ 0051b1ec */
      (**(code **)*puVar2)();
    }
  }
LAB_0051b184:
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
LAB_0051b19c:
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


