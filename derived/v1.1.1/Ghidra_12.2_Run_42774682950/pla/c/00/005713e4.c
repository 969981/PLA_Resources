/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005713e4; name: FUN_005713e4
 */


undefined8 FUN_005713e4(ulong *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined1 *local_110;
  long local_108;
  undefined1 auStack_100 [32];
  byte local_e0;
  undefined5 uStack_df;
  undefined2 uStack_da;
  char cStack_d8;
  undefined2 local_d7;
  char local_d5;
  undefined2 uStack_d4;
  undefined1 local_d2;
  undefined1 uStack_d1;
  undefined8 local_d0;
  byte local_b0 [16];
  ulong local_a0;
  undefined1 auStack_98 [32];
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
                    /* try { // try from 00571410 to 00571413 has its CatchHandler @ 005719a0 */
  FUN_00572f34();
  uVar10 = *param_1 >> 1;
  if (uVar10 == 0) {
                    /* try { // try from 00571918 to 00571937 has its CatchHandler @ 00571968 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                  "operator[]");
  }
  if ((*param_1 & 1) == 0) {
    puVar12 = param_1 + 1;
  }
  else {
    puVar12 = (ulong *)param_1[1];
  }
  uStack_d4 = 0;
  local_d2 = 0;
  uStack_d1 = 0;
  local_e0 = 0x14;
  local_d7 = 0x6972;
  local_d0 = 0;
  uStack_df = s_server_uri_0395ed97._0_5_;
  uStack_da = s_server_uri_0395ed97._5_2_;
  cStack_d8 = s_server_uri_0395ed97[7];
  local_d5 = 0;
                    /* try { // try from 00571460 to 0057146b has its CatchHandler @ 0057198c */
  lVar4 = FUN_00572e24(param_2 + 0x20,&local_e0);
  lVar13 = uVar10 - 1;
  puVar11 = puVar12 + lVar13 * 0x11;
  if ((local_e0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d0);
  }
  if (param_2 + 0x28 == lVar4) {
                    /* try { // try from 005714c0 to 0057151b has its CatchHandler @ 00571978 */
    FUN_002f2c60(&local_e0,"\"server_uri\" field not present");
    lVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xac,&local_e0,0,0);
    if (local_70 < local_68) goto LAB_00571558;
    lVar13 = (long)local_70 - (long)local_78 >> 3;
    uVar10 = lVar13 + 1;
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
LAB_005715d0:
    if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
      uVar8 = (long)local_68 - (long)local_78 >> 2;
      if (uVar10 <= uVar8) {
        uVar10 = uVar8;
      }
      if (uVar10 != 0) goto LAB_005715fc;
      lVar5 = 0;
    }
    else {
      uVar10 = 0x1fffffffffffffff;
LAB_005715fc:
      lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar10 << 3);
    }
    plVar1 = (long *)(lVar5 + lVar13 * 8);
    plVar2 = (long *)(lVar5 + uVar10 * 8);
    *plVar1 = lVar4;
    sVar7 = (long)local_70 - (long)local_78;
    plVar9 = (long *)((long)plVar1 - sVar7);
    if (0 < (long)sVar7) {
      memcpy(plVar9,local_78,sVar7);
    }
    bVar3 = local_78 != (long *)0x0;
    local_78 = plVar9;
    local_70 = plVar1 + 1;
    local_68 = plVar2;
    if (bVar3) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  else if (*(int *)(lVar4 + 0x38) == 4) {
    if ((*puVar11 & 1) == 0) {
      *(undefined2 *)puVar11 = 0;
    }
    else {
      *(undefined1 *)puVar12[lVar13 * 0x11 + 2] = 0;
      puVar12[lVar13 * 0x11 + 1] = 0;
      if ((*puVar11 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,puVar12[lVar13 * 0x11 + 2]);
        *puVar11 = 0;
      }
    }
    uVar8 = *(ulong *)(lVar4 + 0x48);
    uVar10 = *(ulong *)(lVar4 + 0x40);
    puVar11[2] = *(ulong *)(lVar4 + 0x50);
    puVar11[1] = uVar8;
    *puVar11 = uVar10;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(ulong *)(lVar4 + 0x40) = 0;
  }
  else {
                    /* try { // try from 0057151c to 00571547 has its CatchHandler @ 00571974 */
    FUN_002f2c60(&local_e0,"\"server_uri\" field is not a string");
    lVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xaf,&local_e0,0,0);
    if (local_68 <= local_70) {
      lVar13 = (long)local_70 - (long)local_78 >> 3;
      uVar10 = lVar13 + 1;
      if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 00571958 to 0057195f has its CatchHandler @ 00571974 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_005715d0;
    }
LAB_00571558:
    *local_70 = lVar4;
    local_70 = local_70 + 1;
  }
  uStack_d1 = 0;
  local_e0 = 0x1a;
  uStack_df._0_1_ = s_channel_creds_03942646[0];
  uStack_df._1_1_ = s_channel_creds_03942646[1];
  uStack_df._2_1_ = s_channel_creds_03942646[2];
  uStack_df._3_1_ = s_channel_creds_03942646[3];
  uStack_df._4_1_ = s_channel_creds_03942646[4];
  local_d0 = 0;
  local_d2 = 0;
  uStack_da = s_channel_creds_03942646._5_2_;
  cStack_d8 = s_channel_creds_03942646[7];
  local_d7 = s_channel_creds_03942646._8_2_;
  local_d5 = s_channel_creds_03942646[10];
  uStack_d4 = s_channel_creds_03942646._11_2_;
                    /* try { // try from 00571680 to 0057168b has its CatchHandler @ 0057197c */
  lVar4 = FUN_00572e24(param_2 + 0x20,&local_e0);
  if ((local_e0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d0);
  }
  if (param_2 + 0x28 == lVar4) {
LAB_005717f8:
    if (local_78 != local_70) goto LAB_00571804;
  }
  else {
    if (*(int *)(lVar4 + 0x38) == 6) {
                    /* try { // try from 005716bc to 005716ff has its CatchHandler @ 0057196c */
      lVar4 = FUN_005719f4(param_1,(int *)(lVar4 + 0x38),puVar11);
      if (lVar4 == 0) goto LAB_005717f8;
      if (local_70 == local_68) {
        lVar13 = (long)local_70 - (long)local_78 >> 3;
        uVar10 = lVar13 + 1;
        if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        goto LAB_00571774;
      }
    }
    else {
                    /* try { // try from 00571700 to 0057172b has its CatchHandler @ 00571970 */
      FUN_002f2c60(&local_e0,"\"channel_creds\" field is not an array");
      lVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0xb7,&local_e0,0,0);
      if (local_68 <= local_70) {
        lVar13 = (long)local_70 - (long)local_78 >> 3;
        uVar10 = lVar13 + 1;
        if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 00571960 to 00571967 has its CatchHandler @ 00571970 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_00571774:
        if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
          uVar8 = (long)local_68 - (long)local_78 >> 2;
          if (uVar10 <= uVar8) {
            uVar10 = uVar8;
          }
          if (uVar10 != 0) goto LAB_005717a0;
          lVar5 = 0;
        }
        else {
          uVar10 = 0x1fffffffffffffff;
LAB_005717a0:
          lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar10 << 3);
        }
        plVar1 = (long *)(lVar5 + lVar13 * 8);
        plVar2 = (long *)(lVar5 + uVar10 * 8);
        *plVar1 = lVar4;
        sVar7 = (long)local_70 - (long)local_78;
        plVar9 = (long *)((long)plVar1 - sVar7);
        if (0 < (long)sVar7) {
          memcpy(plVar9,local_78,sVar7);
        }
        bVar3 = local_78 != (long *)0x0;
        local_78 = plVar9;
        local_70 = plVar1 + 1;
        local_68 = plVar2;
        if (bVar3) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
        goto LAB_005717f8;
      }
    }
    *local_70 = lVar4;
    local_70 = local_70 + 1;
    if (local_78 != local_70) {
LAB_00571804:
      local_e0 = 0xf;
      uStack_df._0_1_ = -0x4c;
      uStack_df._1_1_ = -0x69;
      uStack_df._2_1_ = '\x03';
      uStack_df._3_1_ = '\0';
      uStack_df._4_1_ = '\0';
      uStack_da = 0;
      cStack_d8 = '\x15';
      local_d7 = 0;
      local_d5 = '\0';
      uStack_d4 = 0;
      local_d2 = 0;
      uStack_d1 = 0;
                    /* try { // try from 0057181c to 0057184b has its CatchHandler @ 005719cc */
      local_108 = FUN_002ed6c0(param_3,auStack_100);
      local_108 = local_108 - (long)auStack_100;
      local_110 = auStack_100;
      if (local_108 < 0) {
                    /* try { // try from 00571938 to 00571957 has its CatchHandler @ 005719cc */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      FUN_002eced0(local_b0,&local_e0,&local_110);
      uVar10 = (ulong)local_b0 | 1;
      if ((local_b0[0] & 1) != 0) {
        uVar10 = local_a0;
      }
                    /* try { // try from 00571860 to 00571883 has its CatchHandler @ 005719a4 */
      FUN_002f2ff0(auStack_98,uVar10);
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0xc1,auStack_98,0,0);
      if ((local_b0[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_a0);
      }
      if (local_70 != local_78) {
        uVar10 = 0;
        do {
                    /* try { // try from 005718b4 to 005718bb has its CatchHandler @ 005719d0 */
          uVar6 = FUN_002f13f0(uVar6,local_78[uVar10]);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)((long)local_70 - (long)local_78 >> 3));
      }
      goto joined_r0x00571910;
    }
  }
  uVar6 = 0;
joined_r0x00571910:
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar6;
}


