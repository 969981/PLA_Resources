/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051aa88; name: FUN_0051aa88
 */


void FUN_0051aa88(long param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  size_t __n;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  char *__s;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong local_a8;
  size_t sStack_a0;
  void *local_98;
  byte local_90 [16];
  undefined8 local_80;
  char local_78;
  byte local_70;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
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
      if (param_3 != 0) goto LAB_0051ab08;
    }
    else {
      uVar11 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
      local_58 = uVar11 | 1;
      local_50 = param_3;
      local_48 = pvVar9;
LAB_0051ab08:
      memcpy(pvVar9,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar9 + param_3) = 0;
  }
                    /* try { // try from 0051ab20 to 0051ab27 has its CatchHandler @ 0051ae6c */
  plVar2 = (long *)FUN_005142ac(param_1 + 0x110,&local_58);
  plVar8 = (long *)*param_4;
  plVar12 = plVar2 + 1;
  plVar13 = (long *)*plVar12;
  if (plVar13 == (long *)0x0) {
    plVar13 = plVar12;
LAB_0051ab90:
    lVar10 = *plVar12;
    if (lVar10 == 0) goto LAB_0051ad2c;
LAB_0051ab98:
    *param_4 = 0;
    puVar7 = *(undefined8 **)(lVar10 + 0x28);
    *(long **)(lVar10 + 0x28) = plVar8;
  }
  else {
    plVar12 = plVar2 + 1;
    bVar1 = plVar8 <= (long *)plVar13[4];
    if (!bVar1 || (long *)plVar13[4] == plVar8) goto LAB_0051ab68;
    while (plVar12 = plVar13, plVar13 = (long *)*plVar12, plVar13 != (long *)0x0) {
      bVar1 = plVar8 <= (long *)plVar13[4];
      if ((long *)plVar13[4] <= plVar8) {
LAB_0051ab68:
        do {
          if (bVar1) goto LAB_0051ab90;
          plVar12 = plVar13 + 1;
          plVar5 = (long *)*plVar12;
          if (plVar5 == (long *)0x0) goto LAB_0051ab90;
          bVar1 = plVar8 <= (long *)plVar5[4];
          plVar13 = plVar5;
        } while (!bVar1 || (long *)plVar5[4] == plVar8);
      }
    }
    lVar10 = *plVar12;
    plVar13 = plVar12;
    if (lVar10 != 0) goto LAB_0051ab98;
LAB_0051ad2c:
    p_Var3 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(long **)(p_Var3 + 0x20) = plVar8;
    *(undefined8 *)(p_Var3 + 0x28) = 0;
    *(long **)(p_Var3 + 0x10) = plVar13;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *plVar12 = (long)p_Var3;
    if (*(long *)*plVar2 == 0) {
      p_Var4 = p_Var3;
    }
    else {
      *plVar2 = *(long *)*plVar2;
      p_Var4 = (__tree_node_base *)*plVar12;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar2[1],p_Var4);
    plVar2[2] = plVar2[2] + 1;
    uVar6 = *param_4;
    *param_4 = 0;
    puVar7 = *(undefined8 **)(p_Var3 + 0x28);
    *(undefined8 *)(p_Var3 + 0x28) = uVar6;
  }
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
  }
  if ((char)plVar2[3] != '\0') {
    if (PTR_DAT_04374a30[0x10] != '\0') {
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if ((local_58 & 1) != 0) {
        pvVar9 = local_48;
      }
                    /* try { // try from 0051adb0 to 0051addb has its CatchHandler @ 0051ae34 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x739,1,"[xds_client %p] returning cached cluster data for %s",param_1,pvVar9);
      if ((char)plVar2[3] == '\0') {
        FUN_0056f5d0();
        goto LAB_0051addc;
      }
    }
                    /* try { // try from 0051abe8 to 0051abef has its CatchHandler @ 0051ae34 */
    FUN_005140dc(local_90,plVar2 + 4);
                    /* try { // try from 0051abf8 to 0051ac03 has its CatchHandler @ 0051adfc */
    (**(code **)(*plVar8 + 0x10))(plVar8,local_90);
    if (local_78 != '\0') {
      if ((local_70 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_60);
      }
      local_78 = '\0';
    }
    if ((local_90[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  local_a8 = 0;
  sStack_a0 = 0;
  local_98 = (void *)0x0;
  __s = *(char **)PTR_PTR_04374a68;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
LAB_0051addc:
                    /* try { // try from 0051addc to 0051ade3 has its CatchHandler @ 0051adec */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_a8 = CONCAT71(local_a8._1_7_,(char)((int)__n << 1));
    pvVar9 = (void *)((ulong)&local_a8 | 1);
    if (__n == 0) goto LAB_0051acc4;
  }
  else {
    uVar11 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
    local_a8 = uVar11 | 1;
    sStack_a0 = __n;
    local_98 = pvVar9;
  }
  memcpy(pvVar9,__s,__n);
LAB_0051acc4:
  *(undefined1 *)((long)pvVar9 + __n) = 0;
                    /* try { // try from 0051acc8 to 0051acd7 has its CatchHandler @ 0051ae44 */
  FUN_0050e470(uVar6,&local_a8,&local_58);
  if ((local_a8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
  }
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


