/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051baf0; name: FUN_0051baf0
 */


void FUN_0051baf0(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4,void *param_5,
                 ulong param_6,void *param_7,ulong param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  byte bVar4;
  undefined7 uVar5;
  byte bVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  __tree_node_base *p_Var10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  void *pvVar17;
  byte bVar18;
  byte local_160;
  undefined7 uStack_15f;
  undefined1 local_158;
  undefined7 uStack_157;
  void *pvStack_150;
  long *local_148;
  long lStack_140;
  long local_138;
  long *plStack_130;
  long local_128;
  long lStack_120;
  undefined8 local_118;
  byte local_110;
  undefined7 uStack_10f;
  undefined1 local_108;
  undefined7 uStack_107;
  void *local_100;
  byte local_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  void *local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_110 = 0;
  uStack_10f = 0;
  local_108 = 0;
  uStack_107 = 0;
  local_100 = (void *)0x0;
  local_70 = param_3;
  uStack_68 = param_4;
  if (param_5 != (void *)0x0) {
    if (0xffffffffffffffef < param_6) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_6 < 0x17) {
      local_110 = (byte)((int)param_6 << 1);
      pvVar17 = (void *)((ulong)&local_110 | 1);
      if (param_6 != 0) goto LAB_0051bb84;
    }
    else {
      uVar9 = param_6 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
      local_110 = (byte)uVar9 | 1;
      uStack_10f = (undefined7)(uVar9 >> 8);
      local_108 = (undefined1)param_6;
      uStack_107 = (undefined7)(param_6 >> 8);
      local_100 = pvVar17;
LAB_0051bb84:
      memcpy(pvVar17,param_5,param_6);
    }
    *(undefined1 *)((long)pvVar17 + param_6) = 0;
  }
  local_158 = 0;
  uStack_157 = 0;
  pvStack_150 = (void *)0x0;
  local_160 = 0;
  uStack_15f = 0;
  if (param_7 == (void *)0x0) {
    pvVar17 = (void *)0x0;
    bVar18 = 0;
    goto LAB_0051bc1c;
  }
  if (0xffffffffffffffef < param_8) {
                    /* try { // try from 0051bfa8 to 0051bfaf has its CatchHandler @ 0051bfb0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_8 < 0x17) {
    local_160 = (byte)((int)param_8 << 1);
    pvVar17 = (void *)((ulong)&local_160 | 1);
    if (param_8 != 0) goto LAB_0051bc00;
  }
  else {
    uVar9 = param_8 + 0x10 & 0xfffffffffffffff0;
    pvVar17 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
    local_160 = (byte)uVar9 | 1;
    uStack_15f = (undefined7)(uVar9 >> 8);
    local_158 = (undefined1)param_8;
    uStack_157 = (undefined7)(param_8 >> 8);
    pvStack_150 = pvVar17;
LAB_0051bc00:
    memcpy(pvVar17,param_7,param_8);
  }
  *(undefined1 *)((long)pvVar17 + param_8) = 0;
  pvVar17 = pvStack_150;
  bVar18 = local_160;
LAB_0051bc1c:
  pvVar7 = local_100;
  bVar6 = local_110;
  local_80 = uStack_10f;
  uStack_79 = local_108;
  uStack_78 = uStack_107;
  local_90 = uStack_15f;
  uStack_89 = local_158;
  uStack_88 = uStack_157;
  local_118 = 0;
  local_160 = (byte)&local_158;
  bVar4 = local_160;
  uStack_15f = (undefined7)((ulong)&local_158 >> 8);
  uVar5 = uStack_15f;
  local_138 = 0;
  lStack_140 = 0;
  local_128 = 0;
  lStack_120 = 0;
  pvStack_150 = (void *)0x0;
  local_158 = 0;
  uStack_157 = 0;
  local_148 = &lStack_140;
  plStack_130 = &local_128;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 0051bc90 to 0051bc93 has its CatchHandler @ 0051c128 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar8 = tpidr_el0;
                    /* try { // try from 0051bcac to 0051bcaf has its CatchHandler @ 0051c128 */
  local_118 = FUN_002f00fc(*(undefined8 *)(lVar8 + 0x30));
  uStack_ef = uStack_88;
  uStack_f0 = uStack_89;
  uStack_10f = local_80;
  local_108 = uStack_79;
  uStack_107 = uStack_78;
  local_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  local_d0 = (long)pvStack_150;
  local_f7 = local_90;
  local_90 = 0;
  uStack_89 = 0;
  uStack_88 = 0;
  plVar14 = (long *)CONCAT71(uStack_15f,local_160);
  local_d8 = CONCAT71(uStack_157,local_158);
  local_e0 = &local_d8;
  if (pvStack_150 != (void *)0x0) {
    *(long **)(local_d8 + 0x10) = local_e0;
    local_158 = 0;
    uStack_157 = 0;
    pvStack_150 = (void *)0x0;
    local_160 = bVar4;
    uStack_15f = uVar5;
    local_e0 = plVar14;
  }
  local_c8 = local_148;
  local_c0 = lStack_140;
  local_b8 = local_138;
  if (local_138 == 0) {
    local_c8 = &local_c0;
  }
  else {
    *(long **)(lStack_140 + 0x10) = &local_c0;
    lStack_140 = 0;
    local_138 = 0;
    local_148 = &lStack_140;
  }
  local_b0 = plStack_130;
  local_a8 = local_128;
  local_a0 = lStack_120;
  if (lStack_120 == 0) {
    local_b0 = &local_a8;
  }
  else {
    *(long **)(local_128 + 0x10) = &local_a8;
    local_128 = 0;
    lStack_120 = 0;
    plStack_130 = &local_128;
  }
                    /* try { // try from 0051bd84 to 0051bd93 has its CatchHandler @ 0051c09c */
  local_110 = bVar6;
  local_100 = pvVar7;
  local_f8 = bVar18;
  local_e8 = pvVar17;
  local_98 = local_118;
  lVar8 = FUN_00524538(param_2 + 0x140,&local_110,&local_110);
  FUN_0051f670(&local_b0,local_a8);
  FUN_005244dc(&local_c8,local_c0);
  FUN_0051f75c(&local_e0,local_d8);
  if ((local_f8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_e8);
  }
  if ((local_110 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_100);
  }
  FUN_0051f670(&plStack_130,local_128);
  FUN_005244dc(&local_148,lStack_140);
  FUN_0051f75c(&local_160,CONCAT71(uStack_157,local_158));
  plVar14 = (long *)(param_2 + 0x10);
  do {
    lVar11 = *plVar14;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = lVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar13 = *(long *)(param_2 + 8);
  if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
                    /* try { // try from 0051be48 to 0051be7f has its CatchHandler @ 0051bfcc */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar13 + 8),(long *)(param_2 + 8),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x784,lVar11,lVar11 + 1,"DropStats");
  }
  local_110 = (byte)param_2;
  uStack_10f = (undefined7)((ulong)param_2 >> 8);
                    /* try { // try from 0051be8c to 0051be97 has its CatchHandler @ 0051c088 */
  uVar9 = FUN_00524878(&local_110,&local_70,lVar8 + 0x20,lVar8 + 0x38);
  *param_1 = uVar9;
  FUN_0050df34(&local_110);
  plVar14 = (long *)(lVar8 + 0x58);
  plVar15 = (long *)*plVar14;
  if (plVar15 == (long *)0x0) {
    plVar16 = plVar14;
LAB_0051bf10:
    lVar11 = *plVar14;
    plVar3 = plVar14;
  }
  else {
    uVar12 = plVar15[4];
    plVar14 = (long *)(lVar8 + 0x58);
    while( true ) {
      while( true ) {
        plVar3 = plVar15;
        plVar16 = plVar3;
        if (uVar9 < uVar12) break;
        if (uVar9 <= uVar12) goto LAB_0051bf10;
        plVar14 = plVar3 + 1;
        plVar15 = (long *)*plVar14;
        if (plVar15 == (long *)0x0) goto LAB_0051bf10;
        uVar12 = plVar15[4];
      }
      plVar15 = (long *)*plVar3;
      if (plVar15 == (long *)0x0) break;
      uVar12 = plVar15[4];
      plVar14 = plVar3;
    }
    lVar11 = *plVar3;
  }
  if (lVar11 == 0) {
    p_Var10 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    *(ulong *)(p_Var10 + 0x20) = uVar9;
    *(long **)(p_Var10 + 0x10) = plVar16;
    *(undefined8 *)p_Var10 = 0;
    *(undefined8 *)(p_Var10 + 8) = 0;
    *plVar3 = (long)p_Var10;
    if (**(long **)(lVar8 + 0x50) != 0) {
      *(long *)(lVar8 + 0x50) = **(long **)(lVar8 + 0x50);
      p_Var10 = (__tree_node_base *)*plVar3;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(lVar8 + 0x58),p_Var10);
    *(long *)(lVar8 + 0x60) = *(long *)(lVar8 + 0x60) + 1;
  }
                    /* try { // try from 0051bf7c to 0051bf7f has its CatchHandler @ 0051bfd0 */
  FUN_0050e28c(*(undefined8 *)(param_2 + 0xa8));
  return;
}


