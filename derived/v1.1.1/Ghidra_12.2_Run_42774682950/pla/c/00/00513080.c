/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00513080; name: FUN_00513080
 */


void FUN_00513080(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  size_t sVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  size_t sVar11;
  undefined8 *puVar12;
  __tree_node_base *p_Var13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  __tree_node_base *p_Var17;
  char *pcVar18;
  void *pvVar19;
  long lVar20;
  long *plVar21;
  char *pcVar22;
  __tree_node_base *p_Var23;
  __tree_node_base *p_Var24;
  long *plVar25;
  long *plVar26;
  __tree_node_base *p_Var27;
  void *pvVar28;
  byte *pbVar29;
  __tree_node_base *p_Var30;
  byte *__src;
  long lVar31;
  byte local_e0 [16];
  undefined8 local_d0;
  char local_c8;
  byte local_c0;
  undefined8 local_b0;
  __tree_node_base *local_a8;
  __tree_node_base *local_a0;
  long local_98;
  undefined1 auStack_90 [8];
  __tree_node_base *local_88;
  __tree_node_base *local_80;
  size_t sStack_78;
  void *local_70;
  __tree_node_base **local_68;
  
  local_80 = (__tree_node_base *)0x0;
  pcVar22 = *(char **)PTR_PTR_04374a68;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  sVar11 = strlen(pcVar22);
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  plVar1 = (long *)(param_1 + 0x188);
  if (sVar11 < 0x17) {
    local_80 = (__tree_node_base *)CONCAT71(local_80._1_7_,(char)((int)sVar11 << 1));
    pvVar28 = (void *)((ulong)&local_80 | 1);
    if (sVar11 != 0) goto LAB_00513118;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
    local_80 = (__tree_node_base *)(uVar15 | 1);
    sStack_78 = sVar11;
    local_70 = pvVar28;
LAB_00513118:
    memcpy(pvVar28,pcVar22,sVar11);
  }
  *(undefined1 *)((long)pvVar28 + sVar11) = 0;
                    /* try { // try from 0051312c to 0051313b has its CatchHandler @ 00513ef4 */
  puVar12 = (undefined8 *)FUN_005213b8(plVar1,&local_a8,&local_80);
  p_Var23 = (__tree_node_base *)*puVar12;
  if (p_Var23 == (__tree_node_base *)0x0) {
    p_Var23 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
    *(void **)(p_Var23 + 0x30) = local_70;
    *(size_t *)(p_Var23 + 0x28) = sStack_78;
    *(__tree_node_base **)(p_Var23 + 0x20) = local_80;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = (__tree_node_base *)0x0;
    *(undefined8 *)(p_Var23 + 0x70) = 0;
    *(undefined8 *)(p_Var23 + 0x68) = 0;
    *(undefined8 *)(p_Var23 + 0x80) = 0;
    *(undefined8 *)(p_Var23 + 0x78) = 0;
    *(__tree_node_base **)(p_Var23 + 0x70) = p_Var23 + 0x78;
    *(undefined8 *)(p_Var23 + 0x60) = 0;
    *(undefined8 *)(p_Var23 + 0x58) = 0;
    *(undefined8 *)(p_Var23 + 0x50) = 0;
    *(undefined8 *)(p_Var23 + 0x48) = 0;
    *(undefined8 *)(p_Var23 + 0x40) = 0;
    *(undefined8 *)(p_Var23 + 0x38) = 0;
    *(__tree_node_base **)(p_Var23 + 0x10) = local_a8;
    *(undefined8 *)p_Var23 = 0;
    *(undefined8 *)(p_Var23 + 8) = 0;
    *puVar12 = p_Var23;
    if (*(long *)*plVar1 == 0) {
      p_Var27 = p_Var23;
    }
    else {
      *plVar1 = *(long *)*plVar1;
      p_Var27 = (__tree_node_base *)*puVar12;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var27);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
  }
  if (((ulong)local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  puVar8 = PTR_LAB_04373088;
  local_a0 = (__tree_node_base *)0x0;
  local_98 = 0;
  plVar21 = param_2 + 1;
  plVar25 = (long *)*param_2;
  local_a8 = (__tree_node_base *)&local_a0;
  if (plVar25 != plVar21) {
    pvVar28 = (void *)((ulong)&local_80 | 1);
    p_Var27 = p_Var23 + 0x70;
    pbVar29 = (byte *)(plVar25 + 4);
    if ((*pbVar29 & 1) == 0) goto LAB_005131cc;
LAB_005131d4:
    pbVar29 = (byte *)plVar25[6];
    plVar26 = plVar25;
    do {
      sStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (__tree_node_base *)0x0;
      sVar11 = strlen((char *)pbVar29);
      if (0xffffffffffffffef < sVar11) {
LAB_00513ea0:
                    /* try { // try from 00513ea0 to 00513ea7 has its CatchHandler @ 00513edc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar11 < 0x17) {
        local_80 = (__tree_node_base *)CONCAT71(local_80._1_7_,(char)((int)sVar11 << 1));
        pvVar19 = pvVar28;
        if (sVar11 != 0) goto LAB_00513238;
      }
      else {
        uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
        pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
        local_80 = (__tree_node_base *)(uVar15 | 1);
        sStack_78 = sVar11;
        local_70 = pvVar19;
LAB_00513238:
        memcpy(pvVar19,pbVar29,sVar11);
      }
      *(undefined1 *)((long)pvVar19 + sVar11) = 0;
                    /* try { // try from 0051324c to 0051325b has its CatchHandler @ 00513f2c */
      puVar12 = (undefined8 *)FUN_0052197c(p_Var27,&local_68,&local_80);
      p_Var30 = (__tree_node_base *)*puVar12;
      if (p_Var30 == (__tree_node_base *)0x0) {
        p_Var30 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x40);
        *(void **)(p_Var30 + 0x30) = local_70;
        *(undefined8 *)(p_Var30 + 0x38) = 0;
        *(size_t *)(p_Var30 + 0x28) = sStack_78;
        *(__tree_node_base **)(p_Var30 + 0x20) = local_80;
        sStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = (__tree_node_base *)0x0;
        *(__tree_node_base ***)(p_Var30 + 0x10) = local_68;
        *(undefined8 *)p_Var30 = 0;
        *(undefined8 *)(p_Var30 + 8) = 0;
        *puVar12 = p_Var30;
        if (**(long **)p_Var27 == 0) {
          p_Var13 = p_Var30;
        }
        else {
          *(long *)p_Var27 = **(long **)p_Var27;
          p_Var13 = (__tree_node_base *)*puVar12;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(p_Var23 + 0x78),p_Var13);
        *(long *)(p_Var23 + 0x80) = *(long *)(p_Var23 + 0x80) + 1;
        if (((ulong)local_80 & 1) == 0) goto LAB_00513270;
LAB_00513304:
        FUN_002e2ea0(puVar8,local_70);
        lVar20 = *(long *)(p_Var30 + 0x38);
      }
      else {
        if (((ulong)local_80 & 1) != 0) goto LAB_00513304;
LAB_00513270:
        lVar20 = *(long *)(p_Var30 + 0x38);
      }
      if ((lVar20 != 0) && (*(char *)(lVar20 + 0x51) != '\0')) {
                    /* try { // try from 00513284 to 00513287 has its CatchHandler @ 00513f20 */
        FUN_002f5c80(lVar20 + 0x58);
        *(undefined1 *)(lVar20 + 0x51) = 0;
      }
      puVar2 = (ulong *)(plVar26 + 7);
      if (PTR_DAT_04374a30[0x10] != '\0') {
        if ((*puVar2 & 1) == 0) {
          lVar20 = (long)plVar26 + 0x39;
          if ((char)plVar26[10] != '\0') goto LAB_00513908;
LAB_0051391c:
          pcVar22 = "(N/A)";
        }
        else {
          lVar20 = plVar26[9];
          if ((char)plVar26[10] == '\0') goto LAB_0051391c;
LAB_00513908:
          if ((*(byte *)(plVar26 + 0xb) & 1) == 0) {
            pcVar22 = (char *)((long)plVar26 + 0x59);
          }
          else {
            pcVar22 = (char *)plVar26[0xd];
          }
        }
                    /* try { // try from 0051392c to 0051394b has its CatchHandler @ 00513f20 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,999,1,
                     "[xds_client %p] CDS update (cluster=%s) received: eds_service_name=%s, lrs_load_reporting_server_name=%s"
                     ,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),pbVar29,
                     lVar20,pcVar22);
      }
      bVar6 = (byte)*puVar2;
      pvVar19 = pvVar28;
      if ((bVar6 & 1) == 0) {
        if (bVar6 >> 1 == 0) goto LAB_0051336c;
LAB_00513344:
        local_70 = (void *)0x0;
        sStack_78 = 0;
        local_80 = (__tree_node_base *)0x0;
        if ((bVar6 & 1) != 0) {
          sVar11 = plVar26[8];
          if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __src = (byte *)plVar26[9];
          if (sVar11 < 0x17) {
            local_80 = (__tree_node_base *)(ulong)(byte)((int)sVar11 << 1);
            if (sVar11 == 0) goto LAB_00513434;
          }
          else {
            uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
            pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
            local_80 = (__tree_node_base *)(uVar15 | 1);
            sStack_78 = sVar11;
            local_70 = pvVar19;
          }
LAB_0051342c:
          memcpy(pvVar19,__src,sVar11);
          goto LAB_00513434;
        }
        sStack_78 = plVar26[8];
        local_80 = (__tree_node_base *)*puVar2;
        local_70 = (void *)plVar26[9];
      }
      else {
        if (plVar26[8] != 0) goto LAB_00513344;
LAB_0051336c:
        local_70 = (void *)0x0;
        sStack_78 = 0;
        local_80 = (__tree_node_base *)0x0;
        sVar11 = strlen((char *)pbVar29);
        if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00513eb0 to 00513ebf has its CatchHandler @ 00513ed4 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (0x16 < sVar11) {
          uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
          pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
          local_80 = (__tree_node_base *)(uVar15 | 1);
          sStack_78 = sVar11;
          local_70 = pvVar19;
LAB_005133f0:
          __src = pbVar29;
          goto LAB_0051342c;
        }
        local_80 = (__tree_node_base *)CONCAT71(local_80._1_7_,(char)((int)sVar11 << 1));
        if (sVar11 != 0) goto LAB_005133f0;
LAB_00513434:
        *(undefined1 *)((long)pvVar19 + sVar11) = 0;
      }
      plVar25 = (long *)FUN_003667bc(&local_a8,&local_68,&local_80);
      if (*plVar25 == 0) {
        p_Var30 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x38);
        *(void **)(p_Var30 + 0x30) = local_70;
        *(size_t *)(p_Var30 + 0x28) = sStack_78;
        *(__tree_node_base **)(p_Var30 + 0x20) = local_80;
        sStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = (__tree_node_base *)0x0;
        *(undefined8 *)p_Var30 = 0;
        *(undefined8 *)(p_Var30 + 8) = 0;
        *(__tree_node_base ***)(p_Var30 + 0x10) = local_68;
        *plVar25 = (long)p_Var30;
        if (*(__tree_node_base **)local_a8 != (__tree_node_base *)0x0) {
          p_Var30 = (__tree_node_base *)*plVar25;
          local_a8 = *(__tree_node_base **)local_a8;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_a0,p_Var30);
        local_98 = local_98 + 1;
      }
      if (((ulong)local_80 & 1) != 0) {
        FUN_002e2ea0(puVar8,local_70);
      }
      lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
      local_80 = (__tree_node_base *)0x0;
      sStack_78 = 0;
      local_70 = (void *)0x0;
      sVar11 = strlen((char *)pbVar29);
      if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00513ea8 to 00513eaf has its CatchHandler @ 00513ed8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar11 < 0x17) {
        local_80 = (__tree_node_base *)CONCAT71(local_80._1_7_,(char)((int)sVar11 << 1));
        pvVar19 = pvVar28;
        if (sVar11 != 0) goto LAB_005134d4;
      }
      else {
        uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
        pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
        local_80 = (__tree_node_base *)(uVar15 | 1);
        sStack_78 = sVar11;
        local_70 = pvVar19;
LAB_005134d4:
        memcpy(pvVar19,pbVar29,sVar11);
      }
      local_68 = &local_80;
      *(undefined1 *)((long)pvVar19 + sVar11) = 0;
                    /* try { // try from 005134f4 to 0051350b has its CatchHandler @ 00513f3c */
      lVar20 = FUN_005228dc(lVar20 + 0x110,&local_80,&DAT_03a2945a,&local_68,&local_88);
      if (((ulong)local_80 & 1) != 0) {
        FUN_002e2ea0(puVar8,local_70);
      }
      cVar5 = *(char *)(lVar20 + 0x50);
      puVar3 = (ulong *)(lVar20 + 0x58);
      if (cVar5 == '\0') {
LAB_00513698:
        lVar16 = plVar26[8];
        uVar15 = *puVar2;
        *(long *)(lVar20 + 0x68) = plVar26[9];
        *(long *)(lVar20 + 0x60) = lVar16;
        *puVar3 = uVar15;
        plVar26[8] = 0;
        plVar26[9] = 0;
        *puVar2 = 0;
        *(undefined8 *)(lVar20 + 0x78) = 0;
        *(undefined8 *)(lVar20 + 0x70) = 0;
        *(undefined8 *)(lVar20 + 0x88) = 0;
        *(undefined8 *)(lVar20 + 0x80) = 0;
        if ((char)plVar26[10] != '\0') {
          lVar31 = plVar26[0xc];
          lVar16 = plVar26[0xb];
          *(long *)(lVar20 + 0x88) = plVar26[0xd];
          *(long *)(lVar20 + 0x80) = lVar31;
          *(long *)(lVar20 + 0x78) = lVar16;
          plVar26[0xb] = 0;
          plVar26[0xc] = 0;
          plVar26[0xd] = 0;
          *(undefined1 *)(lVar20 + 0x70) = 1;
        }
        *(undefined1 *)(lVar20 + 0x50) = 1;
LAB_005137c8:
        plVar25 = *(long **)(lVar20 + 0x38);
        while (plVar25 != (long *)(lVar20 + 0x40)) {
          if (*(char *)(lVar20 + 0x50) == '\0') {
                    /* try { // try from 00513e9c to 00513e9f has its CatchHandler @ 00513ee0 */
            FUN_0056f5d0();
            goto LAB_00513ea0;
          }
          plVar14 = (long *)plVar25[4];
                    /* try { // try from 00513808 to 00513813 has its CatchHandler @ 00513f5c */
          FUN_005140dc(local_e0,puVar3);
                    /* try { // try from 0051381c to 00513827 has its CatchHandler @ 00513f64 */
          (**(code **)(*plVar14 + 0x10))(plVar14,local_e0);
          if (local_c8 != '\0') {
            if ((local_c0 & 1) != 0) {
              FUN_002e2ea0(puVar8,local_b0);
            }
            local_c8 = '\0';
          }
          if ((local_e0[0] & 1) != 0) {
            FUN_002e2ea0(puVar8,local_d0);
          }
          plVar14 = (long *)plVar25[1];
          if ((long *)plVar25[1] == (long *)0x0) {
            plVar14 = plVar25 + 2;
            bVar9 = *(long **)*plVar14 != plVar25;
            plVar25 = (long *)*plVar14;
            if (bVar9) {
              do {
                lVar16 = *plVar14;
                plVar14 = (long *)(lVar16 + 0x10);
                plVar25 = (long *)*plVar14;
              } while (*(long *)*plVar14 != lVar16);
            }
          }
          else {
            do {
              plVar25 = plVar14;
              plVar14 = (long *)*plVar25;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      else {
        bVar6 = *(byte *)(plVar26 + 7);
        uVar15 = (ulong)(bVar6 >> 1);
        sVar11 = uVar15;
        if ((bVar6 & 1) != 0) {
          sVar11 = plVar26[8];
        }
        bVar7 = *(byte *)(lVar20 + 0x58);
        sVar4 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar4 = *(size_t *)(lVar20 + 0x60);
        }
        if (sVar11 != sVar4) {
LAB_00513688:
          if ((*(byte *)puVar3 & 1) == 0) {
            *(undefined2 *)puVar3 = 0;
          }
          else {
            **(undefined1 **)(lVar20 + 0x68) = 0;
            *(undefined8 *)(lVar20 + 0x60) = 0;
            if ((*(byte *)(lVar20 + 0x58) & 1) != 0) {
              FUN_002e2ea0(puVar8,*(undefined8 *)(lVar20 + 0x68));
              *(undefined8 *)(lVar20 + 0x58) = 0;
            }
          }
          lVar16 = plVar26[8];
          uVar15 = *puVar2;
          *(long *)(lVar20 + 0x68) = plVar26[9];
          *(long *)(lVar20 + 0x60) = lVar16;
          *puVar3 = uVar15;
          plVar26[8] = 0;
          plVar26[9] = 0;
          *puVar2 = 0;
          if ((char)plVar26[10] == '\0') {
            if (*(char *)(lVar20 + 0x70) != '\0') {
              if ((*(byte *)(lVar20 + 0x78) & 1) != 0) {
                FUN_002e2ea0(puVar8,*(undefined8 *)(lVar20 + 0x88));
              }
              *(undefined1 *)(lVar20 + 0x70) = 0;
            }
          }
          else {
            plVar25 = plVar26 + 0xb;
            pbVar29 = (byte *)(lVar20 + 0x78);
            if (*(char *)(lVar20 + 0x70) == '\0') {
              lVar31 = plVar26[0xc];
              lVar16 = *plVar25;
              *(long *)(lVar20 + 0x88) = plVar26[0xd];
              *(long *)(lVar20 + 0x80) = lVar31;
              *(long *)pbVar29 = lVar16;
              plVar26[0xc] = 0;
              plVar26[0xd] = 0;
              *plVar25 = 0;
              *(undefined1 *)(lVar20 + 0x70) = 1;
            }
            else {
              if ((*pbVar29 & 1) == 0) {
                pbVar29[0] = 0;
                pbVar29[1] = 0;
              }
              else {
                **(undefined1 **)(lVar20 + 0x88) = 0;
                *(undefined8 *)(lVar20 + 0x80) = 0;
                if ((*(byte *)(lVar20 + 0x78) & 1) != 0) {
                  FUN_002e2ea0(puVar8,*(undefined8 *)(lVar20 + 0x88));
                  *(undefined8 *)(lVar20 + 0x78) = 0;
                }
              }
              lVar31 = plVar26[0xc];
              lVar16 = *plVar25;
              *(long *)(lVar20 + 0x88) = plVar26[0xd];
              *(long *)(lVar20 + 0x80) = lVar31;
              *(long *)pbVar29 = lVar16;
              plVar26[0xc] = 0;
              plVar26[0xd] = 0;
              *plVar25 = 0;
            }
          }
          goto LAB_005137c8;
        }
        pvVar19 = (void *)plVar26[9];
        if ((bVar6 & 1) == 0) {
          pvVar19 = (void *)((long)plVar26 + 0x39);
        }
        pcVar22 = *(char **)(lVar20 + 0x68);
        if ((bVar7 & 1) == 0) {
          pcVar22 = (char *)(lVar20 + 0x59);
        }
        if ((bVar6 & 1) == 0) {
          if (sVar11 != 0) {
            pcVar18 = (char *)((long)plVar26 + 0x39);
            do {
              if (*pcVar18 != *pcVar22) goto LAB_00513684;
              uVar15 = uVar15 - 1;
              pcVar18 = pcVar18 + 1;
              pcVar22 = pcVar22 + 1;
            } while (uVar15 != 0);
          }
        }
        else if ((sVar11 != 0) && (iVar10 = memcmp(pvVar19,pcVar22,sVar11), iVar10 != 0))
        goto LAB_00513688;
                    /* try { // try from 00513614 to 00513657 has its CatchHandler @ 00513f18 */
        uVar15 = FUN_00513fc0(plVar26 + 10,lVar20 + 0x70);
        if ((uVar15 & 1) == 0) {
          cVar5 = *(char *)(lVar20 + 0x50);
LAB_00513684:
          if (cVar5 == '\0') goto LAB_00513698;
          goto LAB_00513688;
        }
        if (PTR_DAT_04374a30[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                       ,0x3fa,1,"[xds_client %p] CDS update identical to current, ignoring.",
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18));
        }
      }
      plVar14 = (long *)plVar26[1];
      if ((long *)plVar26[1] == (long *)0x0) {
        plVar14 = plVar26 + 2;
        plVar25 = (long *)*plVar14;
        if ((long *)*plVar25 != plVar26) {
          do {
            lVar20 = *plVar14;
            plVar14 = (long *)(lVar20 + 0x10);
            plVar25 = (long *)*plVar14;
          } while (*plVar25 != lVar20);
        }
      }
      else {
        do {
          plVar25 = plVar14;
          plVar14 = (long *)*plVar25;
        } while ((long *)*plVar25 != (long *)0x0);
      }
      if (plVar25 == plVar21) break;
      pbVar29 = (byte *)(plVar25 + 4);
      if ((*pbVar29 & 1) != 0) goto LAB_005131d4;
LAB_005131cc:
      pbVar29 = pbVar29 + 1;
      plVar26 = plVar25;
    } while( true );
  }
  puVar8 = PTR_LAB_04373088;
  p_Var27 = *(__tree_node_base **)(p_Var23 + 0x70);
  while (p_Var27 != p_Var23 + 0x78) {
                    /* try { // try from 00513984 to 0051398f has its CatchHandler @ 00513f50 */
    plVar25 = (long *)FUN_005229e0(param_2,p_Var27 + 0x20);
    if (plVar21 == plVar25) {
                    /* try { // try from 005139a8 to 005139af has its CatchHandler @ 00513f1c */
      plVar25 = (long *)FUN_005142ac(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18) +
                                     0x110,p_Var27 + 0x20);
      if ((char)plVar25[3] != '\0') {
        if ((char)plVar25[7] != '\0') {
          if ((*(byte *)(plVar25 + 8) & 1) != 0) {
            FUN_002e2ea0(puVar8,plVar25[10]);
          }
          *(undefined1 *)(plVar25 + 7) = 0;
        }
        if ((*(byte *)(plVar25 + 4) & 1) != 0) {
          FUN_002e2ea0(puVar8,plVar25[6]);
        }
        *(undefined1 *)(plVar25 + 3) = 0;
      }
      plVar26 = (long *)*plVar25;
      while (plVar26 != plVar25 + 1) {
                    /* try { // try from 00513a1c to 00513a1f has its CatchHandler @ 00513f58 */
        (**(code **)(*(long *)plVar26[4] + 0x20))();
        plVar14 = (long *)plVar26[1];
        if ((long *)plVar26[1] == (long *)0x0) {
          plVar14 = plVar26 + 2;
          bVar9 = (long *)*(long *)*plVar14 != plVar26;
          plVar26 = (long *)*plVar14;
          if (bVar9) {
            do {
              lVar20 = *plVar14;
              plVar14 = (long *)(lVar20 + 0x10);
              plVar26 = (long *)*plVar14;
            } while (*(long *)*plVar14 != lVar20);
          }
        }
        else {
          do {
            plVar26 = plVar14;
            plVar14 = (long *)*plVar26;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    p_Var30 = *(__tree_node_base **)(p_Var27 + 8);
    if (*(__tree_node_base **)(p_Var27 + 8) == (__tree_node_base *)0x0) {
      p_Var30 = p_Var27 + 0x10;
      bVar9 = *(__tree_node_base **)*(__tree_node_base **)p_Var30 != p_Var27;
      p_Var27 = *(__tree_node_base **)p_Var30;
      if (bVar9) {
        do {
          lVar20 = *(long *)p_Var30;
          p_Var30 = (__tree_node_base *)(lVar20 + 0x10);
          p_Var27 = *(__tree_node_base **)p_Var30;
        } while (*(long *)*(__tree_node_base **)p_Var30 != lVar20);
      }
    }
    else {
      do {
        p_Var27 = p_Var30;
        p_Var30 = *(__tree_node_base **)p_Var27;
      } while (p_Var30 != (__tree_node_base *)0x0);
    }
  }
  pcVar22 = *(char **)PTR_PTR_04374a70;
  local_80 = (__tree_node_base *)0x0;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  sVar11 = strlen(pcVar22);
  if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00513ec8 to 00513ecf has its CatchHandler @ 00513ed0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_80 = (__tree_node_base *)CONCAT71(local_80._1_7_,(char)((int)sVar11 << 1));
    pvVar28 = (void *)((ulong)&local_80 | 1);
    if (sVar11 != 0) goto LAB_00513b24;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar15);
    local_80 = (__tree_node_base *)(uVar15 | 1);
    sStack_78 = sVar11;
    local_70 = pvVar28;
LAB_00513b24:
    memcpy(pvVar28,pcVar22,sVar11);
  }
  *(undefined1 *)((long)pvVar28 + sVar11) = 0;
                    /* try { // try from 00513b38 to 00513b47 has its CatchHandler @ 00513ee4 */
  puVar12 = (undefined8 *)FUN_005213b8(plVar1,&local_68,&local_80);
  p_Var23 = (__tree_node_base *)*puVar12;
  if (p_Var23 == (__tree_node_base *)0x0) {
    p_Var23 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
    *(void **)(p_Var23 + 0x30) = local_70;
    *(size_t *)(p_Var23 + 0x28) = sStack_78;
    *(__tree_node_base **)(p_Var23 + 0x20) = local_80;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = (__tree_node_base *)0x0;
    *(undefined8 *)(p_Var23 + 0x70) = 0;
    *(undefined8 *)(p_Var23 + 0x68) = 0;
    *(undefined8 *)(p_Var23 + 0x80) = 0;
    *(undefined8 *)(p_Var23 + 0x78) = 0;
    *(__tree_node_base **)(p_Var23 + 0x70) = p_Var23 + 0x78;
    *(undefined8 *)(p_Var23 + 0x60) = 0;
    *(undefined8 *)(p_Var23 + 0x58) = 0;
    *(undefined8 *)(p_Var23 + 0x50) = 0;
    *(undefined8 *)(p_Var23 + 0x48) = 0;
    *(undefined8 *)(p_Var23 + 0x40) = 0;
    *(undefined8 *)(p_Var23 + 0x38) = 0;
    *(__tree_node_base ***)(p_Var23 + 0x10) = local_68;
    *(undefined8 *)p_Var23 = 0;
    *(undefined8 *)(p_Var23 + 8) = 0;
    *puVar12 = p_Var23;
    if (*(long *)*plVar1 == 0) {
      p_Var27 = p_Var23;
    }
    else {
      *plVar1 = *(long *)*plVar1;
      p_Var27 = (__tree_node_base *)*puVar12;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var27);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
    if (((ulong)local_80 & 1) == 0) goto LAB_00513b5c;
LAB_00513ca4:
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
    p_Var27 = *(__tree_node_base **)(p_Var23 + 0x70);
    p_Var23 = p_Var23 + 0x78;
    if (p_Var27 == p_Var23) goto LAB_00513e70;
  }
  else {
    if (((ulong)local_80 & 1) != 0) goto LAB_00513ca4;
LAB_00513b5c:
    p_Var27 = *(__tree_node_base **)(p_Var23 + 0x70);
    p_Var23 = p_Var23 + 0x78;
    if (p_Var27 == p_Var23) goto LAB_00513e70;
  }
  do {
    p_Var30 = p_Var27 + 0x20;
                    /* try { // try from 00513ce0 to 00513ceb has its CatchHandler @ 00513f28 */
    p_Var13 = (__tree_node_base *)FUN_003668d8(&local_a8,p_Var30);
    if ((__tree_node_base *)&local_a0 == p_Var13) {
      lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
      plVar1 = (long *)(lVar20 + 0x128);
                    /* try { // try from 00513d0c to 00513d5b has its CatchHandler @ 00513f24 */
      local_88 = p_Var30;
      puVar12 = (undefined8 *)FUN_0052006c(plVar1,&local_68,p_Var30);
      p_Var30 = (__tree_node_base *)*puVar12;
      if (p_Var30 == (__tree_node_base *)0x0) {
        FUN_00520188(&local_80,plVar1,&DAT_03a2945a,&local_88,auStack_90);
        *(__tree_node_base ***)(local_80 + 0x10) = local_68;
        *(undefined8 *)local_80 = 0;
        *(undefined8 *)(local_80 + 8) = 0;
        *puVar12 = local_80;
        p_Var30 = local_80;
        if (*(long *)*plVar1 != 0) {
          *plVar1 = *(long *)*plVar1;
          p_Var30 = (__tree_node_base *)*puVar12;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(lVar20 + 0x130),p_Var30);
        *(long *)(lVar20 + 0x138) = *(long *)(lVar20 + 0x138) + 1;
        p_Var30 = local_80;
        if (local_80[0x50] == (__tree_node_base)0x0) goto LAB_00513d30;
LAB_00513da4:
        FUN_005151b0(p_Var30 + 0x58);
        p_Var30[0x50] = (__tree_node_base)0x0;
        p_Var24 = *(__tree_node_base **)(p_Var30 + 0x38);
        p_Var13 = p_Var30 + 0x40;
        if (p_Var24 == p_Var13) goto LAB_00513e28;
      }
      else {
        if (p_Var30[0x50] != (__tree_node_base)0x0) goto LAB_00513da4;
LAB_00513d30:
        p_Var13 = p_Var30 + 0x40;
        p_Var24 = *(__tree_node_base **)(p_Var30 + 0x38);
        if (*(__tree_node_base **)(p_Var30 + 0x38) == p_Var13) goto LAB_00513e28;
      }
      do {
                    /* try { // try from 00513ddc to 00513ddf has its CatchHandler @ 00513f54 */
        (**(code **)(**(long **)(p_Var24 + 0x20) + 0x20))();
        p_Var30 = *(__tree_node_base **)(p_Var24 + 8);
        if (*(__tree_node_base **)(p_Var24 + 8) == (__tree_node_base *)0x0) {
          p_Var30 = p_Var24 + 0x10;
          p_Var17 = *(__tree_node_base **)p_Var30;
          if (*(__tree_node_base **)p_Var17 != p_Var24) {
            do {
              lVar20 = *(long *)p_Var30;
              p_Var30 = (__tree_node_base *)(lVar20 + 0x10);
              p_Var17 = *(__tree_node_base **)p_Var30;
            } while (*(long *)p_Var17 != lVar20);
          }
        }
        else {
          do {
            p_Var17 = p_Var30;
            p_Var30 = *(__tree_node_base **)p_Var17;
          } while (*(__tree_node_base **)p_Var17 != (__tree_node_base *)0x0);
        }
        p_Var24 = p_Var17;
      } while (p_Var17 != p_Var13);
    }
LAB_00513e28:
    p_Var30 = *(__tree_node_base **)(p_Var27 + 8);
    if (*(__tree_node_base **)(p_Var27 + 8) == (__tree_node_base *)0x0) {
      p_Var30 = p_Var27 + 0x10;
      p_Var13 = *(__tree_node_base **)p_Var30;
      if (*(__tree_node_base **)p_Var13 != p_Var27) {
        do {
          lVar20 = *(long *)p_Var30;
          p_Var30 = (__tree_node_base *)(lVar20 + 0x10);
          p_Var13 = *(__tree_node_base **)p_Var30;
        } while (*(long *)p_Var13 != lVar20);
      }
    }
    else {
      do {
        p_Var13 = p_Var30;
        p_Var30 = *(__tree_node_base **)p_Var13;
      } while (*(__tree_node_base **)p_Var13 != (__tree_node_base *)0x0);
    }
    p_Var27 = p_Var13;
  } while (p_Var13 != p_Var23);
LAB_00513e70:
  FUN_0036b9a4(&local_a8,local_a0);
  return;
}


