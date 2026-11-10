/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b80f4; name: FUN_005b80f4
 */


void FUN_005b80f4(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4,
                 byte *param_5,byte *param_6,ulong param_7,uint param_8)

{
  long *plVar1;
  byte bVar2;
  ulong *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long *plVar15;
  byte *pbVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long *plVar20;
  undefined1 *local_f0;
  long local_e8;
  undefined1 auStack_e0 [32];
  char *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  byte local_90 [16];
  undefined8 local_80;
  byte *local_78;
  byte *local_70;
  undefined8 uStack_68;
  
  lVar9 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 005b8148 to 005b8157 has its CatchHandler @ 005b87d8 */
  plVar10 = (long *)FUN_0053ee00(PTR_PTR_04374ff0,lVar9);
  uVar11 = *(ulong *)(param_3 + 8);
  pbVar16 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar16 = param_3 + 1;
    uVar11 = (ulong)(*param_3 >> 1);
  }
  plVar10[2] = (long)pbVar16;
  plVar10[3] = uVar11;
  bVar2 = *param_5;
  uVar11 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar11 = *(ulong *)(param_5 + 8);
  }
  if (uVar11 != 0) {
    pbVar16 = *(byte **)(param_5 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar16 = param_5 + 1;
    }
    *plVar10 = (long)pbVar16;
    plVar10[1] = uVar11;
  }
  bVar2 = *param_6;
  uVar11 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar11 = *(ulong *)(param_6 + 8);
  }
  if (uVar11 != 0) {
    pbVar16 = *(byte **)(param_6 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar16 = param_6 + 1;
    }
    plVar10[4] = (long)pbVar16;
    plVar10[5] = uVar11;
  }
  if (param_7 != 0) {
                    /* try { // try from 005b81cc to 005b81db has its CatchHandler @ 005b87d4 */
    uVar11 = FUN_002f1380(param_7,0,&local_c0);
    if ((uVar11 & 1) == 0) {
                    /* try { // try from 005b8620 to 005b8647 has its CatchHandler @ 005b87d4 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                   ,0x22c,2,"assertion failed: %s",
                   "grpc_error_get_str(error, GRPC_ERROR_STR_DESCRIPTION, &error_description_slice)"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar12 = plVar10[7];
    uVar11 = uStack_b8;
    uVar17 = local_b0;
    if (local_c0 == (char *)0x0) {
      uVar11 = uStack_b8 & 0xff;
      uVar17 = (long)&uStack_b8 + 1;
    }
                    /* try { // try from 005b8208 to 005b823f has its CatchHandler @ 005b87cc */
    if ((lVar12 == 0) && (lVar12 = FUN_0053ee00(PTR_PTR_04374ff8,lVar9), lVar12 != 0)) {
      plVar10[7] = lVar12;
    }
    *(ulong *)(lVar12 + 8) = uVar17;
    *(ulong *)(lVar12 + 0x10) = uVar11;
    if (4 < param_7) {
      FUN_002f0430(param_7,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                   ,0x235);
    }
  }
  if ((param_8 & 1) != 0) {
                    /* try { // try from 005b824c to 005b825b has its CatchHandler @ 005b87a4 */
    if ((plVar10[6] == 0) && (lVar12 = FUN_0053ee00(PTR_PTR_04375000,lVar9), lVar12 != 0)) {
      plVar10[6] = lVar12;
    }
    uStack_b8 = 0;
    local_b0 = 0;
    local_c0 = (char *)0x0;
                    /* try { // try from 005b827c to 005b8287 has its CatchHandler @ 005b87a8 */
    FUN_005b8800(lVar9,param_2[2],param_2 + 3,param_2 + 6,&local_c0);
    if (((ulong)local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
  }
  plVar19 = (long *)*param_4;
  if (plVar19 != param_4 + 1) {
    plVar1 = plVar10 + 8;
    local_c0 = (char *)plVar19[4];
    uStack_b8 = plVar19[5];
    puVar14 = (ulong *)*plVar1;
    if (puVar14 != (ulong *)0x0) goto LAB_005b82e4;
LAB_005b82f0:
                    /* try { // try from 005b82f0 to 005b8303 has its CatchHandler @ 005b87dc */
    FUN_0053f0c0(plVar1,&local_c0,10,lVar9);
    plVar15 = (long *)plVar19[1];
    plVar20 = plVar19;
    if ((long *)plVar19[1] != (long *)0x0) goto LAB_005b8334;
    do {
      plVar15 = plVar20 + 2;
      plVar19 = (long *)*plVar15;
      if ((long *)*plVar19 != plVar20) {
        do {
          lVar12 = *plVar15;
          plVar15 = (long *)(lVar12 + 0x10);
          plVar19 = (long *)*plVar15;
        } while (*plVar19 != lVar12);
      }
      while( true ) {
        if (plVar19 == param_4 + 1) goto LAB_005b8374;
        local_c0 = (char *)plVar19[4];
        uStack_b8 = plVar19[5];
        puVar14 = (ulong *)*plVar1;
        if (puVar14 == (ulong *)0x0) goto LAB_005b82f0;
LAB_005b82e4:
        if (puVar14[1] == puVar14[2]) goto LAB_005b82f0;
        puVar3 = (ulong *)((*puVar14 & 0xfffffffffffffff8) + puVar14[1] * 0x10);
        puVar3[1] = uStack_b8;
        *puVar3 = (ulong)local_c0;
        puVar14[1] = puVar14[1] + 1;
        plVar15 = (long *)plVar19[1];
        plVar20 = plVar19;
        if ((long *)plVar19[1] == (long *)0x0) break;
LAB_005b8334:
        do {
          plVar19 = plVar15;
          plVar15 = (long *)*plVar19;
        } while ((long *)*plVar19 != (long *)0x0);
      }
    } while( true );
  }
LAB_005b8374:
  if (*(char *)(param_2[1] + 0x10) != '\0') {
    uVar13 = *param_2;
                    /* try { // try from 005b83d4 to 005b83db has its CatchHandler @ 005b87d8 */
    iVar8 = FUN_002ec180(0);
    if (iVar8 != 0) {
      local_70 = (byte *)0x0;
      uStack_68 = 0;
      local_78 = (byte *)0x0;
      uStack_b8 = plVar10[1];
      local_c0 = (char *)*plVar10;
                    /* try { // try from 005b83f0 to 005b8407 has its CatchHandler @ 005b8724 */
      FUN_005be370("version_info",&local_c0,&local_78,0);
      if (plVar10[6] != 0) {
                    /* try { // try from 005b8410 to 005b8417 has its CatchHandler @ 005b86ac */
        FUN_005be470(plVar10[6],&local_78);
      }
      puVar14 = (ulong *)plVar10[8];
      if ((puVar14 != (ulong *)0x0) && (uVar11 = puVar14[1], uVar11 != 0)) {
        uVar17 = *puVar14 & 0xfffffffffffffff8;
        do {
                    /* try { // try from 005b8438 to 005b844b has its CatchHandler @ 005b8734 */
          FUN_005be370("resource_names",uVar17,&local_78,0);
          uVar11 = uVar11 - 1;
          uVar17 = uVar17 + 0x10;
        } while (uVar11 != 0);
      }
      uStack_b8 = plVar10[3];
      local_c0 = (char *)plVar10[2];
                    /* try { // try from 005b8460 to 005b8477 has its CatchHandler @ 005b8714 */
      FUN_005be370("type_url",&local_c0,&local_78,0);
      uStack_b8 = plVar10[5];
      local_c0 = (char *)plVar10[4];
                    /* try { // try from 005b8480 to 005b8497 has its CatchHandler @ 005b8704 */
      FUN_005be370("response_nonce",&local_c0,&local_78,0);
      piVar18 = (int *)plVar10[7];
      if (piVar18 != (int *)0x0) {
                    /* try { // try from 005b84a0 to 005b84af has its CatchHandler @ 005b869c */
        FUN_005bec2c(&local_78,"error_detail {");
        if (*piVar18 != 0) {
          local_c0 = "  code: ";
          uStack_b8 = 8;
                    /* try { // try from 005b84d0 to 005b84f7 has its CatchHandler @ 005b86bc */
          local_e8 = FUN_002ed6a0(*piVar18,auStack_e0);
          local_e8 = local_e8 - (long)auStack_e0;
          local_f0 = auStack_e0;
          if (local_e8 < 0) {
                    /* try { // try from 005b8648 to 005b8667 has its CatchHandler @ 005b86bc */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          FUN_002eced0(local_90,&local_c0,&local_f0);
                    /* try { // try from 005b84f8 to 005b8503 has its CatchHandler @ 005b8668 */
          FUN_005bef00(&local_78,local_90);
          if ((local_90[0] & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_80);
          }
        }
        uStack_b8 = *(ulong *)(piVar18 + 4);
        local_c0 = *(char **)(piVar18 + 2);
                    /* try { // try from 005b8524 to 005b853b has its CatchHandler @ 005b868c */
        FUN_005be370("  message",&local_c0,&local_78,0);
                    /* try { // try from 005b853c to 005b8543 has its CatchHandler @ 005b867c */
        FUN_005bf0c0(&local_78);
      }
                    /* try { // try from 005b8548 to 005b855f has its CatchHandler @ 005b86f4 */
      FUN_002e5790(&local_c0,local_78,local_70,&DAT_0396725e,1);
      uVar11 = (ulong)&local_c0 | 1;
      if (((ulong)local_c0 & 1) != 0) {
        uVar11 = local_b0;
      }
                    /* try { // try from 005b8574 to 005b8593 has its CatchHandler @ 005b86cc */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_api.cc"
                   ,0x203,0,"[xds_client %p] constructed ADS request: %s",uVar13,uVar11);
      if (((ulong)local_c0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      }
      pbVar16 = local_78;
      puVar6 = PTR_LAB_04373088;
      if (local_78 != (byte *)0x0) {
        if (local_70 != local_78) {
          bVar2 = local_70[-0x18];
          pbVar7 = local_70 + -0x18;
          pbVar5 = local_70;
          while( true ) {
            pbVar4 = pbVar7;
            if ((bVar2 & 1) != 0) {
              FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar5 + -8));
            }
            if (pbVar16 == pbVar4) break;
            bVar2 = pbVar4[-0x18];
            pbVar7 = pbVar4 + -0x18;
            pbVar5 = pbVar4;
          }
        }
        local_70 = pbVar16;
        FUN_002e2ea0(PTR_LAB_04373088,local_78);
      }
    }
  }
                    /* try { // try from 005b8380 to 005b83a3 has its CatchHandler @ 005b87d8 */
  uVar13 = FUN_00542580(plVar10,PTR_PTR_04374ff0,lVar9,&local_c0);
  FUN_002f2f40(param_1,uVar13,local_c0);
  if (lVar9 != 0) {
                    /* try { // try from 005b83a8 to 005b83af has its CatchHandler @ 005b87d0 */
    FUN_0053f5f0(lVar9);
  }
  return;
}


