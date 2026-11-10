/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051b25c; name: FUN_0051b25c
 */


void FUN_0051b25c(long param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  size_t __n;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  long *plVar5;
  char *__s;
  long lVar6;
  void *pvVar7;
  __tree_node_base *p_Var8;
  ulong uVar9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  undefined1 auStack_c8 [64];
  ulong local_88;
  ulong local_80;
  void *local_78;
  undefined1 auStack_70 [8];
  ulong *local_68;
  __tree_node_base *local_60;
  size_t sStack_58;
  void *local_50;
  undefined8 local_48;
  
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
      pvVar7 = (void *)((ulong)&local_88 | 1);
      if (param_3 != 0) goto LAB_0051b2dc;
    }
    else {
      uVar9 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
      local_88 = uVar9 | 1;
      local_80 = param_3;
      local_78 = pvVar7;
LAB_0051b2dc:
      memcpy(pvVar7,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar7 + param_3) = 0;
  }
  plVar5 = (long *)(param_1 + 0x128);
  local_68 = &local_88;
                    /* try { // try from 0051b2fc to 0051b393 has its CatchHandler @ 0051b680 */
  puVar2 = (undefined8 *)FUN_0052006c(plVar5,&local_48,&local_88);
  p_Var8 = (__tree_node_base *)*puVar2;
  if (p_Var8 == (__tree_node_base *)0x0) {
    FUN_00520188(&local_60,plVar5,&DAT_03a2945a,&local_68,auStack_70);
    *(undefined8 *)(local_60 + 0x10) = local_48;
    *(undefined8 *)local_60 = 0;
    *(undefined8 *)(local_60 + 8) = 0;
    *puVar2 = local_60;
    p_Var8 = local_60;
    if (*(long *)*plVar5 != 0) {
      *plVar5 = *(long *)*plVar5;
      p_Var8 = (__tree_node_base *)*puVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x130),p_Var8);
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    plVar5 = (long *)*param_4;
    p_Var10 = local_60 + 0x40;
    p_Var11 = *(__tree_node_base **)p_Var10;
    p_Var8 = local_60;
    if (p_Var11 == (__tree_node_base *)0x0) goto LAB_0051b3e4;
LAB_0051b328:
    p_Var10 = p_Var8 + 0x40;
    bVar1 = plVar5 <= *(long **)(p_Var11 + 0x20);
    if (!bVar1 || *(long **)(p_Var11 + 0x20) == plVar5) goto LAB_0051b354;
    while (p_Var10 = p_Var11, p_Var11 = *(__tree_node_base **)p_Var10,
          p_Var11 != (__tree_node_base *)0x0) {
      bVar1 = plVar5 <= *(long **)(p_Var11 + 0x20);
      if (*(long **)(p_Var11 + 0x20) <= plVar5) {
LAB_0051b354:
        do {
          if (bVar1) goto LAB_0051b3e8;
          p_Var10 = p_Var11 + 8;
          p_Var3 = *(__tree_node_base **)p_Var10;
          if (p_Var3 == (__tree_node_base *)0x0) goto LAB_0051b3e8;
          bVar1 = plVar5 <= *(long **)(p_Var3 + 0x20);
          p_Var11 = p_Var3;
        } while (!bVar1 || *(long **)(p_Var3 + 0x20) == plVar5);
      }
    }
    lVar6 = *(long *)p_Var10;
    p_Var11 = p_Var10;
    if (lVar6 != 0) goto LAB_0051b3f0;
LAB_0051b550:
    p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(long **)(p_Var3 + 0x20) = plVar5;
    *(undefined8 *)(p_Var3 + 0x28) = 0;
    *(__tree_node_base **)(p_Var3 + 0x10) = p_Var11;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(__tree_node_base **)p_Var10 = p_Var3;
    if (**(long **)(p_Var8 + 0x38) == 0) {
      p_Var10 = p_Var3;
    }
    else {
      *(long *)(p_Var8 + 0x38) = **(long **)(p_Var8 + 0x38);
      p_Var10 = *(__tree_node_base **)p_Var10;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(p_Var8 + 0x40),p_Var10);
    *(long *)(p_Var8 + 0x48) = *(long *)(p_Var8 + 0x48) + 1;
    uVar4 = *param_4;
    *param_4 = 0;
    puVar2 = *(undefined8 **)(p_Var3 + 0x28);
    *(undefined8 *)(p_Var3 + 0x28) = uVar4;
  }
  else {
    plVar5 = (long *)*param_4;
    p_Var10 = p_Var8 + 0x40;
    p_Var11 = *(__tree_node_base **)p_Var10;
    if (p_Var11 != (__tree_node_base *)0x0) goto LAB_0051b328;
LAB_0051b3e4:
    p_Var11 = p_Var10;
LAB_0051b3e8:
    lVar6 = *(long *)p_Var10;
    if (lVar6 == 0) goto LAB_0051b550;
LAB_0051b3f0:
    *param_4 = 0;
    puVar2 = *(undefined8 **)(lVar6 + 0x28);
    *(long **)(lVar6 + 0x28) = plVar5;
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  if (p_Var8[0x50] != (__tree_node_base)0x0) {
    if (PTR_DAT_04374a30[0x10] != '\0') {
      pvVar7 = (void *)((ulong)&local_88 | 1);
      if ((local_88 & 1) != 0) {
        pvVar7 = local_78;
      }
                    /* try { // try from 0051b5d4 to 0051b5ff has its CatchHandler @ 0051b638 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x75d,1,"[xds_client %p] returning cached endpoint data for %s",param_1,pvVar7);
      if (p_Var8[0x50] == (__tree_node_base)0x0) {
        FUN_0056f5d0();
        goto LAB_0051b600;
      }
    }
                    /* try { // try from 0051b440 to 0051b447 has its CatchHandler @ 0051b638 */
    FUN_0051501c(auStack_c8,p_Var8 + 0x58);
                    /* try { // try from 0051b450 to 0051b45b has its CatchHandler @ 0051b620 */
    (**(code **)(*plVar5 + 0x10))(plVar5,auStack_c8);
    FUN_005151b0(auStack_c8);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  local_60 = (__tree_node_base *)0x0;
  sStack_58 = 0;
  local_50 = (void *)0x0;
  __s = *(char **)PTR_PTR_04374a70;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
LAB_0051b600:
                    /* try { // try from 0051b600 to 0051b607 has its CatchHandler @ 0051b610 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = (__tree_node_base *)CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    pvVar7 = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_0051b4e8;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
    local_60 = (__tree_node_base *)(uVar9 | 1);
    sStack_58 = __n;
    local_50 = pvVar7;
  }
  memcpy(pvVar7,__s,__n);
LAB_0051b4e8:
  *(undefined1 *)((long)pvVar7 + __n) = 0;
                    /* try { // try from 0051b4ec to 0051b4fb has its CatchHandler @ 0051b648 */
  FUN_0050e470(uVar4,&local_60,&local_88);
  if (((ulong)local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if ((local_88 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_78);
  }
  return;
}


