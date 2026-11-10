/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00512a40; name: FUN_00512a40
 */


void FUN_00512a40(long param_1,char *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  size_t __n;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  __tree_node_base *p_Var10;
  long lVar11;
  long lVar12;
  __tree_node_base *p_Var13;
  char *__s;
  void *pvVar14;
  ulong local_88;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_04374a30;
  if (*param_2 == '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x3b1,1,"[xds_client %p] RDS update does not include requested resource",
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18));
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    lVar11 = lVar12;
    if (*(char *)(lVar12 + 0xf0) != '\0') {
      plVar7 = (long *)(lVar12 + 0xf8);
      if (*plVar7 != 0) {
        FUN_0051e9cc(plVar7);
        FUN_002e2ea0(PTR_LAB_04373088,*plVar7);
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
      }
      *(undefined1 *)(lVar12 + 0xf0) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00512b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar11 + 0xa0) + 0x20))();
    return;
  }
  if (PTR_DAT_04374a30[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x3b9,1,
                 "[xds_client %p] RDS update received;  RouteConfiguration contains %lu routes",
                 param_1,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) *
                         -0x1111111111111111);
    puVar4 = PTR_LAB_04373088;
    if (*param_2 != '\0') {
      lVar11 = 0;
      uVar8 = 0;
      do {
        if ((ulong)((*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * -0x1111111111111111)
            <= uVar8) goto LAB_00512a7c;
        FUN_005b7d3c(&local_80,*(long *)(param_2 + 8) + lVar11);
        pvVar14 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar14 = local_70;
        }
                    /* try { // try from 00512ec0 to 00512ed7 has its CatchHandler @ 00512f40 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x3be,1,"Route %lu:\n%s",uVar8,pvVar14);
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(puVar4,local_70);
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0x78;
      } while (*param_2 != '\0');
    }
    uVar9 = FUN_0056f5d0();
                    /* catch() { ... } // from try @ 00512ec0 with catch @ 00512f40 */
    if (((byte)local_80 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar9);
    }
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar9);
  }
LAB_00512a7c:
  __s = *(char **)PTR_PTR_04374a60;
  local_80 = 0;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  plVar7 = (long *)(param_1 + 0x188);
  if (__n < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    pvVar14 = (void *)((ulong)&local_80 | 1);
    if (__n != 0) goto LAB_00512b94;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
    local_80 = uVar8 | 1;
    sStack_78 = __n;
    local_70 = pvVar14;
LAB_00512b94:
    memcpy(pvVar14,__s,__n);
  }
  *(undefined1 *)((long)pvVar14 + __n) = 0;
                    /* try { // try from 00512ba8 to 00512bb7 has its CatchHandler @ 00512f74 */
  puVar6 = (undefined8 *)FUN_005213b8(plVar7,&local_68,&local_80);
  p_Var13 = (__tree_node_base *)*puVar6;
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
    *(void **)(p_Var13 + 0x30) = local_70;
    *(size_t *)(p_Var13 + 0x28) = sStack_78;
    *(ulong *)(p_Var13 + 0x20) = local_80;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    *(undefined8 *)(p_Var13 + 0x70) = 0;
    *(undefined8 *)(p_Var13 + 0x68) = 0;
    *(undefined8 *)(p_Var13 + 0x80) = 0;
    *(undefined8 *)(p_Var13 + 0x78) = 0;
    *(__tree_node_base **)(p_Var13 + 0x70) = p_Var13 + 0x78;
    *(undefined8 *)(p_Var13 + 0x60) = 0;
    *(undefined8 *)(p_Var13 + 0x58) = 0;
    *(undefined8 *)(p_Var13 + 0x50) = 0;
    *(undefined8 *)(p_Var13 + 0x48) = 0;
    *(undefined8 *)(p_Var13 + 0x40) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x10) = local_68;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *puVar6 = p_Var13;
    if (*(long *)*plVar7 == 0) {
      p_Var10 = p_Var13;
    }
    else {
      *plVar7 = *(long *)*plVar7;
      p_Var10 = (__tree_node_base *)*puVar6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var10);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
  }
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  if (*(char *)(lVar11 + 0xb0) == '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                  "operator->");
  }
  plVar7 = (long *)FUN_00510118(p_Var13 + 0x70,lVar11 + 0xb8);
  lVar11 = *plVar7;
  if ((lVar11 != 0) && (*(char *)(lVar11 + 0x51) != '\0')) {
    FUN_002f5c80(lVar11 + 0x58);
    *(undefined1 *)(lVar11 + 0x51) = 0;
  }
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  bVar1 = (*(char *)(lVar11 + 0xf0) != '\0') != (*param_2 != '\0');
  if ((bVar1) || (*(char *)(lVar11 + 0xf0) == '\0')) {
    if (!bVar1) {
LAB_00512c94:
      if (puVar5[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x3ca,1,"[xds_client %p] RDS update identical to current, ignoring.",
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18));
      }
      return;
    }
  }
  else {
    if (*param_2 == '\0') goto LAB_00512f1c;
    lVar12 = *(long *)(lVar11 + 0xf8);
    lVar3 = *(long *)(lVar11 + 0x100);
    lVar2 = *(long *)(param_2 + 8);
    if (lVar3 - lVar12 == *(long *)(param_2 + 0x10) - lVar2) {
      for (; lVar12 != lVar3; lVar12 = lVar12 + 0x78) {
        uVar8 = FUN_0051e374(lVar12,lVar2);
        if ((uVar8 & 1) == 0) {
          lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
          goto LAB_00512d6c;
        }
        lVar2 = lVar2 + 0x78;
      }
      goto LAB_00512c94;
    }
  }
LAB_00512d6c:
  FUN_00512fa0(lVar11 + 0xf0,param_2);
  local_80 = 0;
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  if (*(char *)(lVar11 + 0xf0) != '\0') {
                    /* try { // try from 00512d94 to 00512dbf has its CatchHandler @ 00512f60 */
    lVar11 = FUN_00510d48(lVar11,lVar11 + 0xf8,&local_80);
    plVar7 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18) + 0xa0);
    if (lVar11 == 0) {
      local_88 = local_80;
      local_80 = 0;
                    /* try { // try from 00512dd4 to 00512ddb has its CatchHandler @ 00512f50 */
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_88);
      FUN_0050d03c(&local_88);
    }
    else {
      (**(code **)(*plVar7 + 0x18))();
    }
    FUN_0050d03c(&local_80);
    return;
  }
                    /* try { // try from 00512f18 to 00512f1b has its CatchHandler @ 00512f60 */
  FUN_0056f5d0();
LAB_00512f1c:
                    /* WARNING: Subroutine does not return */
  __assert_fail("false && \"this->engaged_\"","external/com_google_absl\\absl/types/optional.h",
                0x1ac,"operator()");
}


