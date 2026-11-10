/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00527880; name: FUN_00527880
 */


void FUN_00527880(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 ulong param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  __tree_node_base *p_Var5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  __tree_node_base *p_Var14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char *local_a0;
  undefined4 local_98;
  undefined **local_90;
  undefined8 *puStack_88;
  undefined ***local_70;
  
  lVar11 = *(long *)(param_1 + 8);
  if (param_4 == (undefined4 *)0x0) {
    if (param_6 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0x104c,2,"assertion failed: %s","watcher_timer_init == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_00527ed8(lVar11,param_5,1);
    return;
  }
  puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x58);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  plVar12 = puVar4 + 1;
  *plVar12 = 0;
  plVar17 = puVar4 + 2;
  *plVar17 = 1;
  *puVar4 = &PTR_FUN_04185c48;
  puVar4[3] = lVar11;
  puVar4[4] = param_2;
  puVar4[5] = param_3;
  *(undefined4 *)(puVar4 + 6) = *param_4;
  puVar4[7] = param_4;
  puVar4[8] = param_5;
  puVar4[9] = param_6;
  *(undefined1 *)(puVar4 + 10) = 0;
                    /* try { // try from 00527914 to 005279c7 has its CatchHandler @ 00527ed4 */
  FUN_003d6ba0(puVar4 + 4,*(undefined8 *)(lVar11 + 0xc0));
  plVar10 = *(long **)(puVar4[3] + 0x10);
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",plVar10[0xb],plVar10,plVar10[4],"ExternalConnectivityWatcher");
  }
  plVar1 = plVar10 + 1;
  do {
    lVar13 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar8 = *plVar10;
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),plVar10,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar13,
                 lVar13 + 1,"ExternalConnectivityWatcher");
  }
  if (lVar13 < 1) {
                    /* try { // try from 00527d3c to 00527d5b has its CatchHandler @ 00527ed4 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89
                  ,"RefNonZero");
  }
  lVar13 = puVar4[3];
                    /* try { // try from 005279d8 to 005279df has its CatchHandler @ 00527ed0 */
  FUN_002ef750(lVar13 + 0x1a0);
  puVar15 = *(undefined8 **)(lVar11 + 0x1c8);
  puVar16 = (undefined8 *)(lVar11 + 0x1c8);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = puVar16;
    puVar19 = puVar16;
LAB_00527a74:
    p_Var14 = (__tree_node_base *)*puVar19;
    puVar18 = puVar15;
  }
  else {
    bVar3 = param_5 <= (ulong)puVar15[4];
    puVar18 = puVar16;
    if (!bVar3 || puVar15[4] == param_5) goto LAB_00527a18;
    while (puVar18 = puVar15, puVar15 = (undefined8 *)*puVar18, puVar15 != (undefined8 *)0x0) {
      bVar3 = param_5 <= (ulong)puVar15[4];
      if ((ulong)puVar15[4] <= param_5) {
LAB_00527a18:
        do {
          puVar19 = puVar18;
          if (bVar3) goto LAB_00527a74;
          puVar18 = puVar15 + 1;
          puVar6 = (undefined8 *)*puVar18;
          puVar19 = puVar18;
          if (puVar6 == (undefined8 *)0x0) goto LAB_00527a74;
          bVar3 = param_5 <= (ulong)puVar6[4];
          puVar15 = puVar6;
        } while (!bVar3 || puVar6[4] == param_5);
      }
    }
    p_Var14 = (__tree_node_base *)*puVar18;
    puVar19 = puVar18;
  }
  if (p_Var14 == (__tree_node_base *)0x0) {
    p_Var14 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(ulong *)(p_Var14 + 0x20) = param_5;
    *(undefined8 *)(p_Var14 + 0x28) = 0;
    *(undefined8 **)(p_Var14 + 0x10) = puVar18;
    *(undefined8 *)p_Var14 = 0;
    *(undefined8 *)(p_Var14 + 8) = 0;
    *puVar19 = p_Var14;
    if (**(long **)(lVar11 + 0x1c0) == 0) {
      p_Var5 = p_Var14;
    }
    else {
      *(long *)(lVar11 + 0x1c0) = **(long **)(lVar11 + 0x1c0);
      p_Var5 = (__tree_node_base *)*puVar19;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(lVar11 + 0x1c8),p_Var5);
    *(long *)(lVar11 + 0x1d0) = *(long *)(lVar11 + 0x1d0) + 1;
  }
  if (*(long *)(p_Var14 + 0x28) != 0) {
                    /* try { // try from 00527d5c to 00527d83 has its CatchHandler @ 00527dd4 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x497,2,"assertion failed: %s","chand->external_watchers_[on_complete] == nullptr"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    lVar8 = *plVar17;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar9 = *plVar12;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 00527b10 to 00527b4b has its CatchHandler @ 00527e84 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar9 + 8),plVar12,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x49a,lVar8,lVar8 + 1,"AddWatcherToExternalWatchersMapLocked");
  }
  puVar15 = (undefined8 *)*puVar16;
  if (puVar15 == (undefined8 *)0x0) {
    p_Var14 = (__tree_node_base *)*puVar16;
    puVar15 = puVar16;
  }
  else {
    puVar16 = (undefined8 *)(lVar11 + 0x1c8);
    bVar3 = param_5 <= (ulong)puVar15[4];
    if (!bVar3 || puVar15[4] == param_5) goto LAB_00527b88;
LAB_00527b78:
    puVar16 = puVar15;
    if ((undefined8 *)*puVar15 != (undefined8 *)0x0) {
      puVar19 = (undefined8 *)*puVar15;
LAB_00527b68:
      puVar15 = puVar19;
      bVar3 = param_5 <= (ulong)puVar15[4];
      if (!bVar3 || puVar15[4] == param_5) {
LAB_00527b88:
        if (!bVar3) goto code_r0x00527b8c;
        goto LAB_00527b98;
      }
      goto LAB_00527b78;
    }
    p_Var14 = (__tree_node_base *)*puVar15;
  }
joined_r0x00527bb8:
  if (p_Var14 == (__tree_node_base *)0x0) {
    p_Var14 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    *(ulong *)(p_Var14 + 0x20) = param_5;
    *(undefined8 *)(p_Var14 + 0x28) = 0;
    *(undefined8 **)(p_Var14 + 0x10) = puVar15;
    *(undefined8 *)p_Var14 = 0;
    *(undefined8 *)(p_Var14 + 8) = 0;
    *puVar16 = p_Var14;
    if (**(long **)(lVar11 + 0x1c0) == 0) {
      p_Var5 = p_Var14;
    }
    else {
      *(long *)(lVar11 + 0x1c0) = **(long **)(lVar11 + 0x1c0);
      p_Var5 = (__tree_node_base *)*puVar16;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(lVar11 + 0x1c8),p_Var5);
    *(long *)(lVar11 + 0x1d0) = *(long *)(lVar11 + 0x1d0) + 1;
    plVar12 = *(long **)(p_Var14 + 0x28);
  }
  else {
    plVar12 = *(long **)(p_Var14 + 0x28);
  }
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[1];
    plVar10 = plVar12 + 2;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 00527c58 to 00527c77 has its CatchHandler @ 00527dd8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),plVar12 + 1,lVar8);
    }
    if (lVar8 < 1) {
                    /* try { // try from 00527dac to 00527dd3 has its CatchHandler @ 00527dd8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 == 1) {
      (**(code **)(*plVar12 + 8))(plVar12);
      FUN_002e2ea0(PTR_LAB_04373088,plVar12);
    }
  }
  *(undefined8 **)(p_Var14 + 0x28) = puVar4;
                    /* try { // try from 00527c8c to 00527c93 has its CatchHandler @ 00527ecc */
  FUN_002ef790(lVar13 + 0x1a0);
  local_90 = &PTR_LAB_04185c90;
  local_a0 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
  local_98 = 0x4a2;
                    /* try { // try from 00527cc4 to 00527ccf has its CatchHandler @ 00527e98 */
  puStack_88 = puVar4;
  local_70 = &local_90;
  FUN_003d4d40(*(undefined8 *)(puVar4[3] + 0xb0),&local_90,&local_a0);
  if (&local_90 == local_70) {
    pcVar7 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) {
      return;
    }
    pcVar7 = (code *)(*local_70)[5];
  }
  (*pcVar7)();
  return;
code_r0x00527b8c:
  puVar16 = puVar15 + 1;
  puVar19 = (undefined8 *)*puVar16;
  if ((undefined8 *)*puVar16 == (undefined8 *)0x0) {
LAB_00527b98:
    p_Var14 = (__tree_node_base *)*puVar16;
    goto joined_r0x00527bb8;
  }
  goto LAB_00527b68;
}


