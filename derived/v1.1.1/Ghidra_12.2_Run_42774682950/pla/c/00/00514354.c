/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00514354; name: FUN_00514354
 */


void FUN_00514354(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  byte bVar2;
  __tree_node_base _Var3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  __tree_node_base *p_Var12;
  __tree_node_base *p_Var13;
  ulong uVar14;
  long *plVar15;
  __tree_node_base *p_Var16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  __tree_node_base *p_Var20;
  long lVar21;
  __tree_node_base *p_Var22;
  long lVar23;
  char *__s;
  byte *pbVar24;
  ulong uVar25;
  void *pvVar26;
  long lVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  byte *pbVar31;
  ulong in_stack_fffffffffffffea0;
  undefined4 uVar32;
  undefined1 auStack_100 [64];
  byte local_c0 [16];
  ulong local_b0;
  ulong local_a8;
  undefined1 *puStack_a0;
  void *local_98;
  undefined *puStack_90;
  long local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_a8 = 0;
  __s = *(char **)PTR_PTR_04374a70;
  puStack_a0 = (undefined1 *)0x0;
  local_98 = (void *)0x0;
  puVar8 = (undefined1 *)strlen(__s);
  if ((undefined1 *)0xffffffffffffffef < puVar8) {
LAB_00514f80:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  plVar29 = (long *)(param_1 + 0x188);
  if (&DAT_00000016 < puVar8) {
    pvVar26 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(puVar8 + 0x10) & 0xfffffffffffffff0);
    local_a8 = (ulong)(puVar8 + 0x10) & 0xfffffffffffffff0 | 1;
    puStack_a0 = puVar8;
    local_98 = pvVar26;
LAB_005143ec:
    memcpy(pvVar26,__s,(size_t)puVar8);
  }
  else {
    local_a8 = CONCAT71(local_a8._1_7_,(char)((int)puVar8 << 1));
    pvVar26 = (void *)((ulong)&local_a8 | 1);
    if (puVar8 != (undefined1 *)0x0) goto LAB_005143ec;
  }
  *(undefined1 *)((long)pvVar26 + (long)puVar8) = 0;
                    /* try { // try from 00514400 to 0051440f has its CatchHandler @ 00514fb0 */
  puVar9 = (undefined8 *)FUN_005213b8(plVar29,&local_78,&local_a8);
  p_Var12 = (__tree_node_base *)*puVar9;
  if (p_Var12 == (__tree_node_base *)0x0) {
    p_Var12 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
    *(void **)(p_Var12 + 0x30) = local_98;
    *(undefined1 **)(p_Var12 + 0x28) = puStack_a0;
    *(ulong *)(p_Var12 + 0x20) = local_a8;
    local_a8 = 0;
    puStack_a0 = (undefined1 *)0x0;
    local_98 = (void *)0x0;
    *(undefined8 *)(p_Var12 + 0x80) = 0;
    *(undefined8 *)(p_Var12 + 0x78) = 0;
    *(undefined8 *)(p_Var12 + 0x70) = 0;
    *(undefined8 *)(p_Var12 + 0x68) = 0;
    *(__tree_node_base **)(p_Var12 + 0x70) = p_Var12 + 0x78;
    *(undefined8 *)(p_Var12 + 0x60) = 0;
    *(undefined8 *)(p_Var12 + 0x58) = 0;
    *(undefined8 *)(p_Var12 + 0x50) = 0;
    *(undefined8 *)(p_Var12 + 0x48) = 0;
    *(undefined8 *)(p_Var12 + 0x40) = 0;
    *(undefined8 *)(p_Var12 + 0x38) = 0;
    *(undefined8 *)(p_Var12 + 0x10) = local_78;
    *(undefined8 *)p_Var12 = 0;
    *(undefined8 *)(p_Var12 + 8) = 0;
    *puVar9 = p_Var12;
    if (*(long *)*plVar29 == 0) {
      p_Var10 = p_Var12;
    }
    else {
      *plVar29 = *(long *)*plVar29;
      p_Var10 = (__tree_node_base *)*puVar9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var10);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
  }
  if ((local_a8 & 1) == 0) {
    plVar29 = (long *)*param_2;
    if (plVar29 != param_2 + 1) goto LAB_005144f0;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
    plVar29 = (long *)*param_2;
    if (plVar29 != param_2 + 1) {
LAB_005144f0:
      p_Var10 = p_Var12 + 0x70;
      pbVar31 = (byte *)(plVar29 + 4);
      if ((*pbVar31 & 1) == 0) goto LAB_00514544;
LAB_0051454c:
      pbVar31 = (byte *)plVar29[6];
      plVar30 = plVar29;
      do {
        puStack_a0 = (undefined1 *)0x0;
        local_98 = (void *)0x0;
        local_a8 = 0;
        puVar8 = (undefined1 *)strlen((char *)pbVar31);
        if ((undefined1 *)0xffffffffffffffef < puVar8) goto LAB_00514f80;
        if (&DAT_00000016 < puVar8) {
          pvVar26 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                         (ulong)(puVar8 + 0x10) & 0xfffffffffffffff0);
          local_a8 = (ulong)(puVar8 + 0x10) & 0xfffffffffffffff0 | 1;
          puStack_a0 = puVar8;
          local_98 = pvVar26;
LAB_005145b0:
          memcpy(pvVar26,pbVar31,(size_t)puVar8);
        }
        else {
          local_a8 = CONCAT71(local_a8._1_7_,(char)((int)puVar8 << 1));
          pvVar26 = (void *)((ulong)&local_a8 | 1);
          if (puVar8 != (undefined1 *)0x0) goto LAB_005145b0;
        }
        *(undefined1 *)((long)pvVar26 + (long)puVar8) = 0;
                    /* try { // try from 005145c4 to 005145d3 has its CatchHandler @ 00514fd0 */
        puVar9 = (undefined8 *)FUN_0052197c(p_Var10,&local_78,&local_a8);
        p_Var22 = (__tree_node_base *)*puVar9;
        if (p_Var22 == (__tree_node_base *)0x0) {
          p_Var22 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
          *(void **)(p_Var22 + 0x30) = local_98;
          *(undefined8 *)(p_Var22 + 0x38) = 0;
          *(undefined1 **)(p_Var22 + 0x28) = puStack_a0;
          *(ulong *)(p_Var22 + 0x20) = local_a8;
          puStack_a0 = (undefined1 *)0x0;
          local_98 = (void *)0x0;
          local_a8 = 0;
          *(undefined8 *)(p_Var22 + 0x10) = local_78;
          *(undefined8 *)p_Var22 = 0;
          *(undefined8 *)(p_Var22 + 8) = 0;
          *puVar9 = p_Var22;
          if (**(long **)p_Var10 == 0) {
            p_Var11 = p_Var22;
          }
          else {
            *(long *)p_Var10 = **(long **)p_Var10;
            p_Var11 = (__tree_node_base *)*puVar9;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(p_Var12 + 0x78),p_Var11);
          *(long *)(p_Var12 + 0x80) = *(long *)(p_Var12 + 0x80) + 1;
          if ((local_a8 & 1) == 0) goto LAB_005145e8;
LAB_0051467c:
          FUN_002e2ea0(PTR_LAB_04373088,local_98);
          lVar23 = *(long *)(p_Var22 + 0x38);
        }
        else {
          if ((local_a8 & 1) != 0) goto LAB_0051467c;
LAB_005145e8:
          lVar23 = *(long *)(p_Var22 + 0x38);
        }
        if ((lVar23 != 0) && (*(char *)(lVar23 + 0x51) != '\0')) {
          FUN_002f5c80(lVar23 + 0x58);
          *(undefined1 *)(lVar23 + 0x51) = 0;
        }
        puVar1 = (ulong *)(plVar30 + 7);
        if (PTR_DAT_04374a30[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                       ,0x42e,1,
                       "[xds_client %p] EDS response with %lu priorities and %lu drop categories received (drop_all=%d)"
                       ,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),
                       (ulong)plVar30[7] >> 1,*(ulong *)(plVar30[0xe] + 0x18) >> 1,
                       *(undefined1 *)(plVar30[0xe] + 0x60));
          if (1 < (ulong)plVar30[7]) {
            uVar17 = 0;
            do {
              puVar9 = (undefined8 *)FUN_005b74c4(puVar1,uVar17 & 0xffffffff);
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                           ,0x439,1,"[xds_client %p] Priority %lu contains %lu localities",
                           *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),
                           uVar17,puVar9[2]);
              plVar29 = puVar9 + 1;
              if ((long *)*puVar9 != plVar29) {
                lVar23 = 0;
                plVar15 = (long *)*puVar9;
LAB_00514b88:
                do {
                  uVar32 = (undefined4)(in_stack_fffffffffffffea0 >> 0x20);
                  lVar21 = plVar15[5];
                  uVar28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
                  pbVar24 = (byte *)(lVar21 + 0x60);
                  bVar2 = *pbVar24;
                  if ((bVar2 & 1) == 0) {
                    if (bVar2 >> 1 == 0) goto LAB_00514bc0;
LAB_00514bac:
                    if ((bVar2 & 1) != 0) goto LAB_00514c50;
LAB_00514bb0:
                    lVar21 = lVar21 + 0x61;
                  }
                  else {
                    if (*(long *)(lVar21 + 0x68) != 0) goto LAB_00514bac;
LAB_00514bc0:
                    local_a8 = lVar21 + 0x18;
                    local_98 = (void *)(lVar21 + 0x30);
                    local_88 = lVar21 + 0x48;
                    puStack_a0 = PTR_LAB_04374a18;
                    puStack_90 = PTR_LAB_04374a18;
                    puStack_80 = PTR_LAB_04374a18;
                    FUN_002e6390(&local_78,"{region=\"%s\", zone=\"%s\", sub_zone=\"%s\"}",0x27,
                                 &local_a8,3);
                    if ((*(byte *)(lVar21 + 0x60) & 1) == 0) {
                      pbVar24[0] = 0;
                      pbVar24[1] = 0;
                    }
                    else {
                      **(undefined1 **)(lVar21 + 0x70) = 0;
                      *(undefined8 *)(lVar21 + 0x68) = 0;
                      if ((*(byte *)(lVar21 + 0x60) & 1) != 0) {
                        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar21 + 0x70));
                        *(undefined8 *)(lVar21 + 0x60) = 0;
                      }
                    }
                    *(undefined8 *)(lVar21 + 0x70) = local_68;
                    *(undefined8 *)(lVar21 + 0x68) = uStack_70;
                    *(undefined8 *)pbVar24 = local_78;
                    if ((*pbVar24 & 1) == 0) goto LAB_00514bb0;
LAB_00514c50:
                    lVar21 = *(long *)(lVar21 + 0x70);
                  }
                  in_stack_fffffffffffffea0 = CONCAT44(uVar32,(int)plVar15[0x19]);
                  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                               ,0x440,1,
                               "[xds_client %p] Priority %lu, locality %lu %s has weight %d, contains %lu server addresses"
                               ,uVar28,uVar17,lVar23,lVar21,in_stack_fffffffffffffea0,
                               (ulong)plVar15[6] >> 1);
                  uVar14 = plVar15[6];
                  if (1 < uVar14) {
                    lVar21 = 0;
                    uVar25 = 0;
                    if (uVar14 >> 1 != 0) {
                      do {
                        plVar18 = plVar15 + 7;
                        if ((uVar14 & 1) != 0) {
                          plVar18 = (long *)plVar15[7];
                        }
                        FUN_003086d0(local_c0,(long)plVar18 + lVar21,0);
                        lVar27 = plVar15[5];
                        uVar28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18)
                        ;
                        pbVar24 = (byte *)(lVar27 + 0x60);
                        bVar2 = *pbVar24;
                        if ((bVar2 & 1) == 0) {
                          if (bVar2 >> 1 == 0) goto LAB_00514d28;
LAB_00514d14:
                          if ((bVar2 & 1) != 0) goto LAB_00514db8;
LAB_00514d18:
                          lVar27 = lVar27 + 0x61;
                        }
                        else {
                          if (*(long *)(lVar27 + 0x68) != 0) goto LAB_00514d14;
LAB_00514d28:
                          local_a8 = lVar27 + 0x18;
                          local_98 = (void *)(lVar27 + 0x30);
                          local_88 = lVar27 + 0x48;
                          puStack_a0 = PTR_LAB_04374a18;
                          puStack_90 = PTR_LAB_04374a18;
                          puStack_80 = PTR_LAB_04374a18;
                    /* try { // try from 00514d48 to 00514dfb has its CatchHandler @ 00514fe4 */
                          FUN_002e6390(&local_78,"{region=\"%s\", zone=\"%s\", sub_zone=\"%s\"}",
                                       0x27,&local_a8,3);
                          if ((*pbVar24 & 1) == 0) {
                            pbVar24[0] = 0;
                            pbVar24[1] = 0;
                          }
                          else {
                            **(undefined1 **)(lVar27 + 0x70) = 0;
                            *(undefined8 *)(lVar27 + 0x68) = 0;
                            if ((*(byte *)(lVar27 + 0x60) & 1) != 0) {
                              FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar27 + 0x70));
                              *(undefined8 *)(lVar27 + 0x60) = 0;
                            }
                          }
                          *(undefined8 *)(lVar27 + 0x70) = local_68;
                          *(undefined8 *)(lVar27 + 0x68) = uStack_70;
                          *(undefined8 *)pbVar24 = local_78;
                          if ((*pbVar24 & 1) == 0) goto LAB_00514d18;
LAB_00514db8:
                          lVar27 = *(long *)(lVar27 + 0x70);
                        }
                        uVar14 = (ulong)local_c0 | 1;
                        if ((local_c0[0] & 1) != 0) {
                          uVar14 = local_b0;
                        }
                        in_stack_fffffffffffffea0 = uVar25;
                        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                                     ,0x449,1,
                                     "[xds_client %p] Priority %lu, locality %lu %s, server address %lu: %s"
                                     ,uVar28,uVar17,lVar23,lVar27,uVar25,uVar14);
                        if ((local_c0[0] & 1) != 0) {
                          FUN_002e2ea0(PTR_LAB_04373088,local_b0);
                        }
                        uVar14 = plVar15[6];
                        uVar25 = uVar25 + 1;
                        lVar21 = lVar21 + 0x90;
                        if (uVar14 >> 1 <= uVar25) goto LAB_00514e18;
                        if (uVar14 >> 1 <= uVar25) break;
                      } while( true );
                    }
                    goto LAB_00514f60;
                  }
LAB_00514e18:
                  lVar23 = lVar23 + 1;
                  plVar18 = (long *)plVar15[1];
                  if ((long *)plVar15[1] == (long *)0x0) {
                    plVar18 = plVar15 + 2;
                    plVar19 = (long *)*plVar18;
                    if ((long *)*plVar19 != plVar15) {
                      do {
                        lVar21 = *plVar18;
                        plVar18 = (long *)(lVar21 + 0x10);
                        plVar19 = (long *)*plVar18;
                      } while (*plVar19 != lVar21);
                    }
                    plVar15 = plVar19;
                    if (plVar19 == plVar29) break;
                    goto LAB_00514b88;
                  }
                  do {
                    plVar15 = plVar18;
                    plVar18 = (long *)*plVar15;
                  } while ((long *)*plVar15 != (long *)0x0);
                } while (plVar15 != plVar29);
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < *puVar1 >> 1);
          }
          lVar23 = plVar30[0xe];
          if (1 < *(ulong *)(lVar23 + 0x18)) {
            lVar21 = 0;
            uVar17 = 0;
            if ((*(ulong *)(lVar23 + 0x18) & 1) == 0) goto LAB_00514eec;
            do {
              lVar23 = *(long *)(lVar23 + 0x20);
              while( true ) {
                if ((*(byte *)(lVar23 + lVar21) & 1) == 0) {
                  lVar27 = lVar23 + lVar21 + 1;
                }
                else {
                  lVar27 = *(long *)(lVar23 + lVar21 + 0x10);
                }
                FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                             ,0x457,1,
                             "[xds_client %p] Drop category %s has drop rate %d per million",
                             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),
                             lVar27,*(undefined4 *)(lVar23 + lVar21 + 0x18));
                lVar23 = plVar30[0xe];
                uVar17 = uVar17 + 1;
                lVar21 = lVar21 + 0x20;
                if (*(ulong *)(lVar23 + 0x18) >> 1 <= uVar17) goto LAB_005146ac;
                if ((*(ulong *)(lVar23 + 0x18) & 1) != 0) break;
LAB_00514eec:
                lVar23 = lVar23 + 0x20;
              }
            } while( true );
          }
        }
LAB_005146ac:
        lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
        puStack_a0 = (undefined1 *)0x0;
        local_98 = (void *)0x0;
        local_a8 = 0;
        puVar8 = (undefined1 *)strlen((char *)pbVar31);
        if ((undefined1 *)0xffffffffffffffef < puVar8) goto LAB_00514f80;
        plVar29 = (long *)(lVar23 + 0x128);
        if (&DAT_00000016 < puVar8) {
          pvVar26 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                         (ulong)(puVar8 + 0x10) & 0xfffffffffffffff0);
          local_a8 = (ulong)(puVar8 + 0x10) & 0xfffffffffffffff0 | 1;
          puStack_a0 = puVar8;
          local_98 = pvVar26;
LAB_00514720:
          memcpy(pvVar26,pbVar31,(size_t)puVar8);
        }
        else {
          local_a8 = CONCAT71(local_a8._1_7_,(char)((int)puVar8 << 1));
          pvVar26 = (void *)((ulong)&local_a8 | 1);
          if (puVar8 != (undefined1 *)0x0) goto LAB_00514720;
        }
        *(undefined1 *)((long)pvVar26 + (long)puVar8) = 0;
                    /* try { // try from 00514734 to 00514743 has its CatchHandler @ 00514fc0 */
        puVar9 = (undefined8 *)FUN_0052006c(plVar29,&local_78,&local_a8);
        p_Var22 = (__tree_node_base *)*puVar9;
        if (p_Var22 == (__tree_node_base *)0x0) {
          p_Var22 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x98);
          *(void **)(p_Var22 + 0x30) = local_98;
          *(undefined1 **)(p_Var22 + 0x28) = puStack_a0;
          *(ulong *)(p_Var22 + 0x20) = local_a8;
          puStack_a0 = (undefined1 *)0x0;
          local_98 = (void *)0x0;
          local_a8 = 0;
          *(undefined8 *)(p_Var22 + 0x40) = 0;
          *(__tree_node_base **)(p_Var22 + 0x38) = p_Var22 + 0x40;
          *(undefined8 *)(p_Var22 + 0x48) = 0;
          *(undefined8 *)(p_Var22 + 0x50) = 0;
          *(undefined8 *)(p_Var22 + 0x60) = 0;
          *(undefined8 *)(p_Var22 + 0x58) = 0;
          *(undefined8 *)(p_Var22 + 0x70) = 0;
          *(undefined8 *)(p_Var22 + 0x68) = 0;
          *(undefined8 *)(p_Var22 + 0x80) = 0;
          *(undefined8 *)(p_Var22 + 0x78) = 0;
          *(undefined8 *)(p_Var22 + 0x90) = 0;
          *(undefined8 *)(p_Var22 + 0x88) = 0;
          *(undefined8 *)(p_Var22 + 0x10) = local_78;
          *(undefined8 *)p_Var22 = 0;
          *(undefined8 *)(p_Var22 + 8) = 0;
          *puVar9 = p_Var22;
          if (*(long *)*plVar29 == 0) {
            p_Var11 = p_Var22;
          }
          else {
            *plVar29 = *(long *)*plVar29;
            p_Var11 = (__tree_node_base *)*puVar9;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(lVar23 + 0x130),p_Var11);
          *(long *)(lVar23 + 0x138) = *(long *)(lVar23 + 0x138) + 1;
          if ((local_a8 & 1) == 0) goto LAB_0051475c;
LAB_00514800:
          FUN_002e2ea0(PTR_LAB_04373088,local_98);
          if (p_Var22[0x50] == (__tree_node_base)0x0) goto LAB_005149b0;
LAB_00514818:
          uVar6 = FUN_005b72e4(p_Var22 + 0x58,puVar1);
          if ((*(long *)(p_Var22 + 0x90) == 0) ||
             (uVar7 = FUN_0051eab0(*(long *)(p_Var22 + 0x90),plVar30[0xe]), (uVar6 & uVar7 & 1) == 0
             )) {
            if (p_Var22[0x50] == (__tree_node_base)0x0) goto LAB_005149b0;
            FUN_00522af0(p_Var22 + 0x58,puVar1);
            lVar23 = plVar30[0xe];
            puVar9 = *(undefined8 **)(p_Var22 + 0x90);
            if (puVar9 != (undefined8 *)0x0) {
              lVar21 = puVar9[1];
              plVar29 = puVar9 + 2;
              do {
                lVar27 = *plVar29;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar5) {
                  *plVar29 = lVar27 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((lVar21 != 0) && (*(char *)(lVar21 + 0x10) != '\0')) {
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,
                             1,"%s:%p unref %ld -> %ld",*(undefined8 *)(lVar21 + 8),puVar9 + 1,
                             lVar27);
              }
              if (lVar27 < 1) {
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,
                             2,"assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (lVar27 == 1) {
                (**(code **)*puVar9)(puVar9);
                FUN_002e2ea0(PTR_LAB_04373088,puVar9);
              }
            }
            *(long *)(p_Var22 + 0x90) = lVar23;
            plVar30[0xe] = 0;
            p_Var20 = *(__tree_node_base **)(p_Var22 + 0x38);
            p_Var11 = p_Var22 + 0x40;
            if (p_Var20 != p_Var11) goto LAB_00514918;
            goto LAB_00514a6c;
          }
          if (PTR_DAT_04374a30[0x10] == '\0') goto LAB_00514a6c;
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                       ,0x469,1,"[xds_client %p] EDS update identical to current, ignoring.",
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18));
          plVar15 = (long *)plVar30[1];
          if ((long *)plVar30[1] != (long *)0x0) goto LAB_00514a74;
LAB_00514a84:
          plVar15 = plVar30 + 2;
          plVar29 = (long *)*plVar15;
          if ((long *)*plVar29 != plVar30) {
            do {
              lVar23 = *plVar15;
              plVar15 = (long *)(lVar23 + 0x10);
              plVar29 = (long *)*plVar15;
            } while (*plVar29 != lVar23);
          }
        }
        else {
          if ((local_a8 & 1) != 0) goto LAB_00514800;
LAB_0051475c:
          if (p_Var22[0x50] != (__tree_node_base)0x0) goto LAB_00514818;
LAB_005149b0:
          *(undefined8 *)(p_Var22 + 0x58) = 0;
          uVar17 = *puVar1;
          if ((uVar17 & 1) == 0) {
            uVar14 = uVar17 >> 1;
            if (uVar14 != 0) {
              plVar29 = plVar30 + 9;
              p_Var11 = p_Var22 + 0x60;
              do {
                while( true ) {
                  *(long *)p_Var11 = plVar29[-1];
                  lVar23 = *plVar29;
                  p_Var20 = p_Var11 + 8;
                  *(long *)p_Var20 = lVar23;
                  lVar21 = plVar29[1];
                  *(long *)(p_Var11 + 0x10) = lVar21;
                  if (lVar21 != 0) break;
                  *(__tree_node_base **)p_Var11 = p_Var20;
                  plVar29 = plVar29 + 3;
                  uVar14 = uVar14 - 1;
                  p_Var11 = p_Var11 + 0x18;
                  if (uVar14 == 0) goto LAB_00514a1c;
                }
                *(__tree_node_base **)(lVar23 + 0x10) = p_Var20;
                plVar29[1] = 0;
                plVar29[-1] = (long)plVar29;
                *plVar29 = 0;
                plVar29 = plVar29 + 3;
                uVar14 = uVar14 - 1;
                p_Var11 = p_Var11 + 0x18;
              } while (uVar14 != 0);
LAB_00514a1c:
              uVar17 = *puVar1;
            }
            *(ulong *)(p_Var22 + 0x58) = uVar17 & 0xfffffffffffffffe;
          }
          else {
            lVar23 = plVar30[8];
            *(long *)(p_Var22 + 0x68) = plVar30[9];
            *(long *)(p_Var22 + 0x60) = lVar23;
            *(ulong *)(p_Var22 + 0x58) = plVar30[7] | 1;
            plVar30[7] = 0;
          }
          *(undefined8 *)(p_Var22 + 0x90) = 0;
          *(long *)(p_Var22 + 0x90) = plVar30[0xe];
          plVar30[0xe] = 0;
          p_Var22[0x50] = (__tree_node_base)0x1;
          p_Var20 = *(__tree_node_base **)(p_Var22 + 0x38);
          p_Var11 = p_Var22 + 0x40;
          if (p_Var20 != p_Var11) {
LAB_00514918:
            _Var3 = p_Var22[0x50];
            do {
              if (_Var3 == (__tree_node_base)0x0) {
                FUN_0056f5d0();
LAB_00514f60:
                    /* WARNING: Subroutine does not return */
                __assert_fail("i < size()",
                              "external/com_google_absl\\absl/container/inlined_vector.h",0x13e,
                              "operator[]");
              }
              plVar29 = *(long **)(p_Var20 + 0x20);
              FUN_0051501c(auStack_100,p_Var22 + 0x58);
                    /* try { // try from 00514954 to 0051495f has its CatchHandler @ 00515008 */
              (**(code **)(*plVar29 + 0x10))(plVar29,auStack_100);
              FUN_005151b0(auStack_100);
              p_Var13 = *(__tree_node_base **)(p_Var20 + 8);
              if (*(__tree_node_base **)(p_Var20 + 8) == (__tree_node_base *)0x0) {
                p_Var13 = p_Var20 + 0x10;
                p_Var16 = *(__tree_node_base **)p_Var13;
                if (*(__tree_node_base **)p_Var16 != p_Var20) {
                  do {
                    lVar23 = *(long *)p_Var13;
                    p_Var13 = (__tree_node_base *)(lVar23 + 0x10);
                    p_Var16 = *(__tree_node_base **)p_Var13;
                  } while (*(long *)p_Var16 != lVar23);
                }
              }
              else {
                do {
                  p_Var16 = p_Var13;
                  p_Var13 = *(__tree_node_base **)p_Var16;
                } while (*(__tree_node_base **)p_Var16 != (__tree_node_base *)0x0);
              }
              if (p_Var16 == p_Var11) break;
              _Var3 = p_Var22[0x50];
              p_Var20 = p_Var16;
            } while( true );
          }
LAB_00514a6c:
          plVar15 = (long *)plVar30[1];
          if ((long *)plVar30[1] == (long *)0x0) goto LAB_00514a84;
LAB_00514a74:
          do {
            plVar29 = plVar15;
            plVar15 = (long *)*plVar29;
          } while ((long *)*plVar29 != (long *)0x0);
        }
        if (plVar29 == param_2 + 1) {
          return;
        }
        pbVar31 = (byte *)(plVar29 + 4);
        if ((*pbVar31 & 1) != 0) goto LAB_0051454c;
LAB_00514544:
        pbVar31 = pbVar31 + 1;
        plVar30 = plVar29;
      } while( true );
    }
  }
  return;
}


