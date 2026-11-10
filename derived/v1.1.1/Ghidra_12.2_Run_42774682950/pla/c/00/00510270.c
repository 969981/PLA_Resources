/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00510270; name: FUN_00510270
 */


void FUN_00510270(long param_1,char *param_2)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  __tree_node_base *p_Var12;
  long lVar13;
  __tree_node_base *p_Var14;
  long lVar15;
  char *pcVar16;
  void *pvVar17;
  undefined8 uVar18;
  ulong local_88;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_04374a30;
  if (*param_2 == '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x368,1,"[xds_client %p] LDS update does not include requested resource",
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18));
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    if (*(char *)(lVar13 + 0xb0) == '\0') goto LAB_0051069c;
    if ((*(byte *)(lVar13 + 0xb8) & 1) == 0) {
      if (*(byte *)(lVar13 + 0xb8) >> 1 == 0) goto LAB_0051069c;
    }
    else if (*(long *)(lVar13 + 0xc0) == 0) goto LAB_0051069c;
    pcVar16 = *(char **)PTR_PTR_04374a60;
    local_80 = 0;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    sVar7 = strlen(pcVar16);
    if (0xffffffffffffffef < sVar7) goto LAB_00510be8;
    if (sVar7 < 0x17) {
      local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar7 << 1));
      pvVar17 = (void *)((ulong)&local_80 | 1);
      if (sVar7 != 0) goto LAB_005105f8;
    }
    else {
      uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
      local_80 = uVar10 | 1;
      sStack_78 = sVar7;
      local_70 = pvVar17;
LAB_005105f8:
      memcpy(pvVar17,pcVar16,sVar7);
    }
    *(undefined1 *)((long)pvVar17 + sVar7) = 0;
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    if (*(char *)(lVar13 + 0xb0) == '\0') {
                    /* try { // try from 00510c30 to 00510c4f has its CatchHandler @ 00510d00 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                    "operator->");
    }
                    /* try { // try from 00510624 to 00510633 has its CatchHandler @ 00510d00 */
    FUN_0050e6a8(param_1,&local_80,lVar13 + 0xb8,0);
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    lVar13 = lVar15;
    if (*(char *)(lVar15 + 0xf0) != '\0') {
      plVar9 = (long *)(lVar15 + 0xf8);
      if (*plVar9 != 0) {
        FUN_0051e9cc(plVar9);
        FUN_002e2ea0(PTR_LAB_04373088,*plVar9);
        lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
      }
      *(undefined1 *)(lVar15 + 0xf0) = 0;
    }
LAB_0051069c:
    if (*(char *)(lVar13 + 0xb0) != '\0') {
      if (*(char *)(lVar13 + 0xd0) != '\0') {
        plVar9 = (long *)(lVar13 + 0xd8);
        if (*plVar9 != 0) {
          FUN_0051e9cc(plVar9);
          FUN_002e2ea0(PTR_LAB_04373088,*plVar9);
        }
        *(undefined1 *)(lVar13 + 0xd0) = 0;
      }
      if ((*(byte *)(lVar13 + 0xb8) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar13 + 200));
      }
      *(undefined1 *)(lVar13 + 0xb0) = 0;
      lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    }
    (**(code **)(**(long **)(lVar13 + 0xa0) + 0x20))();
    return;
  }
  if (PTR_DAT_04374a30[0x10] != '\0') {
    bVar3 = param_2[8];
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0) goto LAB_00510abc;
LAB_00510ab0:
      if ((bVar3 & 1) == 0) {
        pcVar16 = param_2 + 9;
      }
      else {
        pcVar16 = *(char **)(param_2 + 0x18);
      }
    }
    else {
      if (*(long *)(param_2 + 0x10) != 0) goto LAB_00510ab0;
LAB_00510abc:
      pcVar16 = "<inlined>";
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x377,1,"[xds_client %p] LDS update received: route_config_name=%s",
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),pcVar16);
    if (*param_2 == '\0') goto LAB_00510bf0;
    if (param_2[0x20] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x37e,1,"RouteConfiguration contains %lu routes",
                   (*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 3) *
                   -0x1111111111111111);
      puVar5 = PTR_LAB_04373088;
      if (*param_2 == '\0') goto LAB_00510bf0;
      lVar13 = 0;
      uVar10 = 0;
      cVar4 = param_2[0x20];
      while( true ) {
        if (cVar4 == '\0') {
          uVar11 = FUN_0056f5d0();
                    /* catch() { ... } // from try @ 00510bb8 with catch @ 00510cb4 */
          if (((byte)local_80 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_70);
          }
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar11);
        }
        if ((ulong)((*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 3) *
                   -0x1111111111111111) <= uVar10) break;
        FUN_005b7d3c(&local_80,*(long *)(param_2 + 0x28) + lVar13);
        pvVar17 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar17 = local_70;
        }
                    /* try { // try from 00510bb8 to 00510bcf has its CatchHandler @ 00510cb4 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x382,1,"Route %lu:\n%s",uVar10,pvVar17);
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(puVar5,local_70);
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x78;
        if (*param_2 == '\0') goto LAB_00510bf0;
        cVar4 = param_2[0x20];
      }
    }
  }
  pcVar16 = *(char **)PTR_PTR_04374a58;
  local_80 = 0;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  sVar7 = strlen(pcVar16);
  if (0xffffffffffffffef < sVar7) goto LAB_00510be8;
  plVar9 = (long *)(param_1 + 0x188);
  if (sVar7 < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar7 << 1));
    pvVar17 = (void *)((ulong)&local_80 | 1);
    if (sVar7 != 0) goto LAB_00510370;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar17 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    local_80 = uVar10 | 1;
    sStack_78 = sVar7;
    local_70 = pvVar17;
LAB_00510370:
    memcpy(pvVar17,pcVar16,sVar7);
  }
  *(undefined1 *)((long)pvVar17 + sVar7) = 0;
                    /* try { // try from 00510384 to 00510393 has its CatchHandler @ 00510d24 */
  puVar8 = (undefined8 *)FUN_005213b8(plVar9,&local_68,&local_80);
  p_Var14 = (__tree_node_base *)*puVar8;
  if (p_Var14 == (__tree_node_base *)0x0) {
    p_Var14 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
    *(void **)(p_Var14 + 0x30) = local_70;
    *(size_t *)(p_Var14 + 0x28) = sStack_78;
    *(ulong *)(p_Var14 + 0x20) = local_80;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    *(undefined8 *)(p_Var14 + 0x70) = 0;
    *(undefined8 *)(p_Var14 + 0x68) = 0;
    *(undefined8 *)(p_Var14 + 0x80) = 0;
    *(undefined8 *)(p_Var14 + 0x78) = 0;
    *(__tree_node_base **)(p_Var14 + 0x70) = p_Var14 + 0x78;
    *(undefined8 *)(p_Var14 + 0x60) = 0;
    *(undefined8 *)(p_Var14 + 0x58) = 0;
    *(undefined8 *)(p_Var14 + 0x50) = 0;
    *(undefined8 *)(p_Var14 + 0x48) = 0;
    *(undefined8 *)(p_Var14 + 0x40) = 0;
    *(undefined8 *)(p_Var14 + 0x38) = 0;
    *(undefined8 *)(p_Var14 + 0x10) = local_68;
    *(undefined8 *)p_Var14 = 0;
    *(undefined8 *)(p_Var14 + 8) = 0;
    *puVar8 = p_Var14;
    if (*(long *)*plVar9 == 0) {
      p_Var12 = p_Var14;
    }
    else {
      *plVar9 = *(long *)*plVar9;
      p_Var12 = (__tree_node_base *)*puVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 400),p_Var12);
    *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 1;
  }
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  plVar9 = (long *)FUN_00510118(p_Var14 + 0x70,
                                *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18) + 0x88
                               );
  lVar13 = *plVar9;
  if ((lVar13 != 0) && (*(char *)(lVar13 + 0x51) != '\0')) {
    FUN_002f5c80(lVar13 + 0x58);
    *(undefined1 *)(lVar13 + 0x51) = 0;
  }
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  cVar4 = *(char *)(lVar13 + 0xb0);
  bVar2 = (cVar4 != '\0') != (*param_2 != '\0');
  if ((bVar2) || (cVar4 == '\0')) {
    if (!bVar2) goto LAB_00510464;
  }
  else {
    if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"this->engaged_\"","external/com_google_absl\\absl/types/optional.h",
                    0x1ac,"operator()");
    }
    uVar10 = FUN_0051e20c(lVar13 + 0xb8,param_2 + 8);
    if ((uVar10 & 1) != 0) {
LAB_00510464:
      if (puVar6[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x38d,1,"[xds_client %p] LDS update identical to current, ignoring.",
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18));
      }
      return;
    }
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    cVar4 = *(char *)(lVar13 + 0xb0);
  }
  if (cVar4 != '\0') {
    if ((*(byte *)(lVar13 + 0xb8) & 1) == 0) {
      if (*(byte *)(lVar13 + 0xb8) >> 1 != 0) {
LAB_00510564:
        pcVar16 = *(char **)PTR_PTR_04374a60;
        local_80 = 0;
        sStack_78 = 0;
        local_70 = (void *)0x0;
        sVar7 = strlen(pcVar16);
        if (0xffffffffffffffef < sVar7) goto LAB_00510be8;
        if (sVar7 < 0x17) {
          local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar7 << 1));
          pvVar17 = (void *)((ulong)&local_80 | 1);
          if (sVar7 != 0) goto LAB_00510738;
        }
        else {
          uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
          pvVar17 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
          local_80 = uVar10 | 1;
          sStack_78 = sVar7;
          local_70 = pvVar17;
LAB_00510738:
          memcpy(pvVar17,pcVar16,sVar7);
        }
        *(undefined1 *)((long)pvVar17 + sVar7) = 0;
        lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
        if (*(char *)(lVar13 + 0xb0) == '\0') {
                    /* try { // try from 00510c50 to 00510c8f has its CatchHandler @ 00510cf0 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                        "operator->");
        }
        if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
          __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                        "operator->");
        }
        if ((param_2[8] & 1U) == 0) {
          uVar10 = (ulong)((byte)param_2[8] >> 1);
        }
        else {
          uVar10 = *(ulong *)(param_2 + 0x10);
        }
                    /* try { // try from 00510788 to 00510793 has its CatchHandler @ 00510cf0 */
        FUN_0050e6a8(param_1,&local_80,lVar13 + 0xb8,uVar10 != 0);
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_70);
        }
        lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
        lVar13 = lVar15;
        if (*(char *)(lVar15 + 0xf0) != '\0') {
          plVar9 = (long *)(lVar15 + 0xf8);
          if (*plVar9 != 0) {
            FUN_0051e9cc(plVar9);
            FUN_002e2ea0(PTR_LAB_04373088,*plVar9);
            lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
          }
          *(undefined1 *)(lVar15 + 0xf0) = 0;
        }
      }
    }
    else if (*(long *)(lVar13 + 0xc0) != 0) goto LAB_00510564;
  }
  if (*param_2 == '\0') {
    if (*(char *)(lVar13 + 0xb0) != '\0') {
      if (*(char *)(lVar13 + 0xd0) != '\0') {
        plVar9 = (long *)(lVar13 + 0xd8);
        if (*plVar9 != 0) {
          FUN_0051e9cc(plVar9);
          FUN_002e2ea0(PTR_LAB_04373088,*plVar9);
        }
        *(undefined1 *)(lVar13 + 0xd0) = 0;
      }
      if ((*(byte *)(lVar13 + 0xb8) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar13 + 200));
      }
      *(undefined1 *)(lVar13 + 0xb0) = 0;
    }
  }
  else {
    pcVar16 = param_2 + 8;
    pbVar1 = (byte *)(lVar13 + 0xb8);
    if (*(char *)(lVar13 + 0xb0) == '\0') {
      uVar18 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)pcVar16;
      *(undefined8 *)(lVar13 + 200) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar13 + 0xc0) = uVar18;
      *(undefined8 *)pbVar1 = uVar11;
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      pcVar16[0] = '\0';
      pcVar16[1] = '\0';
      pcVar16[2] = '\0';
      pcVar16[3] = '\0';
      pcVar16[4] = '\0';
      pcVar16[5] = '\0';
      pcVar16[6] = '\0';
      pcVar16[7] = '\0';
      *(undefined8 *)(lVar13 + 0xd8) = 0;
      *(undefined8 *)(lVar13 + 0xd0) = 0;
      *(undefined8 *)(lVar13 + 0xe8) = 0;
      *(undefined8 *)(lVar13 + 0xe0) = 0;
      if (param_2[0x20] != '\0') {
        *(undefined8 *)(lVar13 + 0xd8) = 0;
        *(undefined8 *)(lVar13 + 0xe0) = 0;
        *(undefined8 *)(lVar13 + 0xe8) = 0;
        uVar11 = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar13 + 0xe0) = *(undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(lVar13 + 0xd8) = uVar11;
        *(undefined8 *)(lVar13 + 0xe8) = *(undefined8 *)(param_2 + 0x38);
        param_2[0x28] = '\0';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        param_2[0x30] = '\0';
        param_2[0x31] = '\0';
        param_2[0x32] = '\0';
        param_2[0x33] = '\0';
        param_2[0x34] = '\0';
        param_2[0x35] = '\0';
        param_2[0x36] = '\0';
        param_2[0x37] = '\0';
        param_2[0x38] = '\0';
        param_2[0x39] = '\0';
        param_2[0x3a] = '\0';
        param_2[0x3b] = '\0';
        param_2[0x3c] = '\0';
        param_2[0x3d] = '\0';
        param_2[0x3e] = '\0';
        param_2[0x3f] = '\0';
        *(undefined1 *)(lVar13 + 0xd0) = 1;
      }
      *(undefined1 *)(lVar13 + 0xb0) = 1;
    }
    else {
      if ((*pbVar1 & 1) == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        **(undefined1 **)(lVar13 + 200) = 0;
        *(undefined8 *)(lVar13 + 0xc0) = 0;
        if ((*(byte *)(lVar13 + 0xb8) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar13 + 200));
          *(undefined8 *)(lVar13 + 0xb8) = 0;
        }
      }
      uVar18 = *(undefined8 *)(param_2 + 0x10);
      uVar11 = *(undefined8 *)pcVar16;
      *(undefined8 *)(lVar13 + 200) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar13 + 0xc0) = uVar18;
      *(undefined8 *)pbVar1 = uVar11;
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      pcVar16[0] = '\0';
      pcVar16[1] = '\0';
      pcVar16[2] = '\0';
      pcVar16[3] = '\0';
      pcVar16[4] = '\0';
      pcVar16[5] = '\0';
      pcVar16[6] = '\0';
      pcVar16[7] = '\0';
      FUN_00512fa0(lVar13 + 0xd0,param_2 + 0x20);
    }
  }
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  if (*(char *)(lVar13 + 0xb0) == '\0') {
LAB_00510bf0:
                    /* WARNING: Subroutine does not return */
    __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                  "operator->");
  }
  if (*(char *)(lVar13 + 0xd0) != '\0') {
    local_80 = 0;
                    /* try { // try from 00510948 to 00510973 has its CatchHandler @ 00510d10 */
    lVar13 = FUN_00510d48(lVar13,lVar13 + 0xd8,&local_80);
    plVar9 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18) + 0xa0);
    if (lVar13 == 0) {
      local_88 = local_80;
      local_80 = 0;
                    /* try { // try from 005109d0 to 005109d7 has its CatchHandler @ 00510cc4 */
      (**(code **)(*plVar9 + 0x10))(plVar9,&local_88);
      FUN_0050d03c(&local_88);
    }
    else {
      (**(code **)(*plVar9 + 0x18))();
    }
    FUN_0050d03c(&local_80);
    return;
  }
  pcVar16 = *(char **)PTR_PTR_04374a60;
  local_80 = 0;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  sVar7 = strlen(pcVar16);
  if (0xffffffffffffffef < sVar7) {
LAB_00510be8:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar7 << 1));
    pvVar17 = (void *)((ulong)&local_80 | 1);
    if (sVar7 == 0) goto LAB_00510a24;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar17 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    local_80 = uVar10 | 1;
    sStack_78 = sVar7;
    local_70 = pvVar17;
  }
  memcpy(pvVar17,pcVar16,sVar7);
LAB_00510a24:
  *(undefined1 *)((long)pvVar17 + sVar7) = 0;
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
  if (*(char *)(lVar13 + 0xb0) == '\0') {
                    /* try { // try from 00510c90 to 00510caf has its CatchHandler @ 00510ce0 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("this->engaged_","external/com_google_absl\\absl/types/optional.h",0x1a3,
                  "operator->");
  }
                    /* try { // try from 00510a40 to 00510a4b has its CatchHandler @ 00510ce0 */
  FUN_0050e590(param_1,&local_80,lVar13 + 0xb8);
  if ((local_80 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_70);
  return;
}


