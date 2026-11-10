/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051988c; name: FUN_0051988c
 */


/* WARNING: Removing unreachable block (ram,0x00519c64) */
/* WARNING: Removing unreachable block (ram,0x00519b38) */
/* WARNING: Removing unreachable block (ram,0x00519db4) */

void FUN_0051988c(undefined8 *****param_1,long *param_2,undefined8 ****param_3,void *param_4,
                 undefined8 ****param_5,long *param_6,undefined8 param_7,long *param_8)

{
  undefined8 *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *******pppppppuVar17;
  char *__s;
  undefined *puVar18;
  void *pvVar19;
  undefined8 ****ppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 ******local_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******local_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 *****local_c8;
  undefined8 *******local_c0;
  void *local_b8;
  
  param_1[1] = (undefined8 ****)PTR_DAT_04374a30;
  pppppuVar16 = param_1 + 2;
  *pppppuVar16 = (undefined8 ****)0x1;
  *param_1 = (undefined8 ****)(PTR_DAT_04374aa8 + 0x10);
                    /* try { // try from 005198f0 to 00519907 has its CatchHandler @ 0051a338 */
  iVar4 = FUN_002e4ce0(param_7,"grpc.xds_resource_does_not_exist_timeout_ms",15000,0x7fffffff);
  param_1[3] = (undefined8 ****)(long)iVar4;
  ppppuVar20 = (undefined8 ****)*param_2;
  param_1[5] = (undefined8 ****)param_2[1];
  param_1[4] = ppppuVar20;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[6] = param_3;
  pppppuVar1 = param_1 + 7;
                    /* try { // try from 00519924 to 0051993b has its CatchHandler @ 0051a328 */
  FUN_0056f600(pppppuVar1,param_1,PTR_DAT_04374a30,param_8);
  puVar18 = PTR_DAT_04374a30;
  if (param_1[7] == (undefined8 ****)0x0) {
    pppuVar10 = (undefined8 ***)0x0;
  }
  else {
    pppuVar10 = param_1[7][0x12];
  }
                    /* try { // try from 00519954 to 00519967 has its CatchHandler @ 0051a314 */
  FUN_005b7ffc(param_1 + 8,param_1,PTR_DAT_04374a30,pppuVar10);
  param_1[0x11] = (undefined8 ****)0x0;
  param_1[0x12] = (undefined8 ****)0x0;
  param_1[0x13] = (undefined8 ****)0x0;
  if (param_4 != (void *)0x0) {
    if ((undefined8 ****)0xffffffffffffffef < param_5) {
                    /* try { // try from 0051a1cc to 0051a1d3 has its CatchHandler @ 0051a218 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_5 < (undefined8 ****)0x17) {
      ppppuVar20 = (undefined8 ****)((long)param_1 + 0x89);
      *(char *)(param_1 + 0x11) = (char)((int)param_5 << 1);
      if (param_5 != (undefined8 ****)0x0) goto LAB_005199fc;
    }
    else {
      ppppuVar20 = (undefined8 ****)
                   FUN_002e2e80(PTR_FUN_04373078,(ulong)(param_5 + 2) & 0xfffffffffffffff0);
      param_1[0x13] = ppppuVar20;
      puVar18 = PTR_DAT_04374a30;
      param_1[0x11] = (undefined8 ****)((ulong)(param_5 + 2) & 0xfffffffffffffff0 | 1);
      param_1[0x12] = param_5;
LAB_005199fc:
      memcpy(ppppuVar20,param_4,(size_t)param_5);
    }
    *(undefined1 *)((long)ppppuVar20 + (long)param_5) = 0;
  }
  ppppuVar20 = (undefined8 ****)*param_6;
  *param_6 = 0;
  param_1[0x1f] = (undefined8 ****)0x0;
  param_1[0x20] = (undefined8 ****)0x0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = (undefined8 ****)0x0;
  param_1[0x2a] = (undefined8 ****)0x0;
  param_1[0x14] = ppppuVar20;
  param_1[0x15] = (undefined8 ****)0x0;
  param_1[0x18] = (undefined8 ****)0x0;
  param_1[0x17] = (undefined8 ****)0x0;
  param_1[0x21] = (undefined8 ****)0x0;
  param_1[0x22] = param_1 + 0x23;
  param_1[0x25] = param_1 + 0x26;
  param_1[0x26] = (undefined8 ****)0x0;
  param_1[0x27] = (undefined8 ****)0x0;
  param_1[0x28] = param_1 + 0x29;
  param_1[0x2b] = param_1 + 0x2c;
  param_1[0x1a] = (undefined8 ****)0x0;
  param_1[0x19] = (undefined8 ****)0x0;
  param_1[0x23] = (undefined8 ****)0x0;
  param_1[0x24] = (undefined8 ****)0x0;
  param_1[0x1c] = (undefined8 ****)0x0;
  param_1[0x1b] = (undefined8 ****)0x0;
  param_1[0x2c] = (undefined8 ****)0x0;
  param_1[0x2d] = (undefined8 ****)0x0;
  *(undefined8 *)((long)param_1 + 0xe9) = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  if (puVar18[0x10] != '\0') {
                    /* try { // try from 0051a148 to 0051a1c7 has its CatchHandler @ 0051a340 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x6fb,1,"[xds_client %p] creating xds client",param_1);
  }
  if (*param_8 != 0) {
                    /* try { // try from 00519a78 to 00519a9f has its CatchHandler @ 0051a340 */
    uVar5 = FUN_002f1480();
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x6fe,2,"[xds_client %p] failed to read bootstrap file: %s",param_1,uVar5);
    return;
  }
  if (puVar18[0x10] != '\0') {
    ppppuVar20 = *pppppuVar1;
    if (*ppppuVar20 < (undefined8 ***)0x2) {
                    /* try { // try from 0051a1e4 to 0051a203 has its CatchHandler @ 0051a340 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e,
                    "operator[]");
    }
    if (((ulong)*ppppuVar20 & 1) == 0) {
      ppppuVar20 = ppppuVar20 + 1;
      if (((ulong)*ppppuVar20 & 1) == 0) goto LAB_0051a19c;
LAB_0051a1a4:
      pppuVar10 = ppppuVar20[2];
    }
    else {
      ppppuVar20 = (undefined8 ****)ppppuVar20[1];
      if (((ulong)*ppppuVar20 & 1) != 0) goto LAB_0051a1a4;
LAB_0051a19c:
      pppuVar10 = (undefined8 ***)((long)ppppuVar20 + 1);
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x703,1,"[xds_client %p] creating channel to %s",param_1,pppuVar10);
  }
  local_c8 = (undefined8 *****)0x0;
                    /* try { // try from 00519ab4 to 00519ac7 has its CatchHandler @ 0051a2b0 */
  FUN_002e5140(&local_e8,"grpc.keepalive_time_ms",5000);
  bVar3 = ((ulong)local_c8 & 1) != 0;
  pppppppuVar17 = &local_c0;
  if (bVar3) {
    pppppppuVar17 = local_c0;
  }
  pvVar19 = (void *)3;
  if (bVar3) {
    pvVar19 = local_b8;
  }
  if ((void *)((ulong)local_c8 >> 1) == pvVar19) {
    pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,(long)pvVar19 << 6);
    pppppppuVar14 = pppppppuVar6 + (long)pvVar19 * 4;
    pppppppuVar14[1] = ppppppuStack_e0;
    *pppppppuVar14 = local_e8;
    pppppppuVar14[3] = ppppppuStack_d0;
    pppppppuVar14[2] = local_d8;
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      if (pvVar19 != (void *)0x0) {
        if (pvVar19 == (void *)0x1) {
          lVar11 = 0;
          pppppppuVar13 = pppppppuVar17;
        }
        else {
          lVar11 = 0;
          pppppppuVar14 = pppppppuVar6 + 4;
          pppppppuVar15 = pppppppuVar17;
          do {
            pppppppuVar13 = pppppppuVar15 + 8;
            ppppppuVar9 = *pppppppuVar15;
            ppppppuVar22 = pppppppuVar15[3];
            ppppppuVar21 = pppppppuVar15[2];
            pppppppuVar14[-3] = pppppppuVar15[1];
            pppppppuVar14[-4] = ppppppuVar9;
            pppppppuVar14[-1] = ppppppuVar22;
            pppppppuVar14[-2] = ppppppuVar21;
            lVar11 = lVar11 + 2;
            ppppppuVar9 = pppppppuVar15[4];
            ppppppuVar22 = pppppppuVar15[7];
            ppppppuVar21 = pppppppuVar15[6];
            pppppppuVar14[1] = pppppppuVar15[5];
            *pppppppuVar14 = ppppppuVar9;
            pppppppuVar14[3] = ppppppuVar22;
            pppppppuVar14[2] = ppppppuVar21;
            pppppppuVar14 = pppppppuVar14 + 8;
            pppppppuVar15 = pppppppuVar13;
          } while ((long)pvVar19 - ((ulong)pvVar19 & 1) != lVar11);
          if (((ulong)pvVar19 & 1) == 0) goto LAB_00519b9c;
        }
        ppppppuVar9 = *pppppppuVar13;
        ppppppuVar22 = pppppppuVar13[3];
        ppppppuVar21 = pppppppuVar13[2];
        pppppppuVar14 = pppppppuVar6 + lVar11 * 4;
        pppppppuVar14[1] = pppppppuVar13[1];
        *pppppppuVar14 = ppppppuVar9;
        pppppppuVar14[3] = ppppppuVar22;
        pppppppuVar14[2] = ppppppuVar21;
      }
LAB_00519b9c:
      if (pppppppuVar17 != (undefined8 *******)0x0) {
        memset(pppppppuVar17,0xab,(long)pvVar19 << 5);
      }
      if (((ulong)local_c8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_c0);
      }
      local_c8 = (undefined8 *****)((ulong)local_c8 | 1);
      local_c0 = pppppppuVar6;
      local_b8 = (void *)((long)pvVar19 << 1);
    }
  }
  else {
    pppppppuVar17 = pppppppuVar17 + ((ulong)local_c8 >> 1) * 4;
    pppppppuVar17[1] = ppppppuStack_e0;
    *pppppppuVar17 = local_e8;
    pppppppuVar17[3] = ppppppuStack_d0;
    pppppppuVar17[2] = local_d8;
  }
  local_c8 = (undefined8 *****)((long)local_c8 + 2);
                    /* try { // try from 00519be8 to 00519bfb has its CatchHandler @ 0051a2a0 */
  FUN_002e5140(&local_e8,"grpc.address_is_xds_server",1);
  bVar3 = ((ulong)local_c8 & 1) != 0;
  pppppppuVar17 = &local_c0;
  if (bVar3) {
    pppppppuVar17 = local_c0;
  }
  pvVar19 = (void *)3;
  if (bVar3) {
    pvVar19 = local_b8;
  }
  if ((void *)((ulong)local_c8 >> 1) == pvVar19) {
    pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,(long)pvVar19 << 6);
    pppppppuVar14 = pppppppuVar6 + (long)pvVar19 * 4;
    pppppppuVar14[1] = ppppppuStack_e0;
    *pppppppuVar14 = local_e8;
    pppppppuVar14[3] = ppppppuStack_d0;
    pppppppuVar14[2] = local_d8;
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      if (pvVar19 != (void *)0x0) {
        if (pvVar19 == (void *)0x1) {
          lVar11 = 0;
          pppppppuVar13 = pppppppuVar17;
        }
        else {
          lVar11 = 0;
          pppppppuVar14 = pppppppuVar6 + 4;
          pppppppuVar15 = pppppppuVar17;
          do {
            pppppppuVar13 = pppppppuVar15 + 8;
            ppppppuVar9 = *pppppppuVar15;
            ppppppuVar22 = pppppppuVar15[3];
            ppppppuVar21 = pppppppuVar15[2];
            pppppppuVar14[-3] = pppppppuVar15[1];
            pppppppuVar14[-4] = ppppppuVar9;
            pppppppuVar14[-1] = ppppppuVar22;
            pppppppuVar14[-2] = ppppppuVar21;
            lVar11 = lVar11 + 2;
            ppppppuVar9 = pppppppuVar15[4];
            ppppppuVar22 = pppppppuVar15[7];
            ppppppuVar21 = pppppppuVar15[6];
            pppppppuVar14[1] = pppppppuVar15[5];
            *pppppppuVar14 = ppppppuVar9;
            pppppppuVar14[3] = ppppppuVar22;
            pppppppuVar14[2] = ppppppuVar21;
            pppppppuVar14 = pppppppuVar14 + 8;
            pppppppuVar15 = pppppppuVar13;
          } while ((long)pvVar19 - ((ulong)pvVar19 & 1) != lVar11);
          if (((ulong)pvVar19 & 1) == 0) goto LAB_00519cc8;
        }
        ppppppuVar9 = *pppppppuVar13;
        ppppppuVar22 = pppppppuVar13[3];
        ppppppuVar21 = pppppppuVar13[2];
        pppppppuVar14 = pppppppuVar6 + lVar11 * 4;
        pppppppuVar14[1] = pppppppuVar13[1];
        *pppppppuVar14 = ppppppuVar9;
        pppppppuVar14[3] = ppppppuVar22;
        pppppppuVar14[2] = ppppppuVar21;
      }
LAB_00519cc8:
      if (pppppppuVar17 != (undefined8 *******)0x0) {
        memset(pppppppuVar17,0xab,(long)pvVar19 << 5);
      }
      if (((ulong)local_c8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_c0);
      }
      local_c8 = (undefined8 *****)((ulong)local_c8 | 1);
      local_c0 = pppppppuVar6;
      local_b8 = (void *)((long)pvVar19 << 1);
    }
  }
  else {
    pppppppuVar17 = pppppppuVar17 + ((ulong)local_c8 >> 1) * 4;
    pppppppuVar17[1] = ppppppuStack_e0;
    *pppppppuVar17 = local_e8;
    pppppppuVar17[3] = ppppppuStack_d0;
    pppppppuVar17[2] = local_d8;
  }
  local_c8 = (undefined8 *****)((long)local_c8 + 2);
                    /* try { // try from 00519d14 to 00519d23 has its CatchHandler @ 0051a290 */
  piVar7 = (int *)FUN_002e4780(param_7,"grpc.channelz_channel_node");
  if (((piVar7 != (int *)0x0) && (*piVar7 == 2)) && (*(long *)(piVar7 + 4) != 0)) {
                    /* try { // try from 00519d44 to 00519d4b has its CatchHandler @ 0051a22c */
    FUN_003e4ac0(&local_e8,*(undefined8 *)(*(long *)(piVar7 + 4) + 0x20));
    bVar3 = ((ulong)local_c8 & 1) != 0;
    pppppppuVar17 = &local_c0;
    if (bVar3) {
      pppppppuVar17 = local_c0;
    }
    pvVar19 = (void *)3;
    if (bVar3) {
      pvVar19 = local_b8;
    }
    if ((void *)((ulong)local_c8 >> 1) == pvVar19) {
      pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,(long)pvVar19 << 6);
      pppppppuVar14 = pppppppuVar6 + (long)pvVar19 * 4;
      pppppppuVar14[1] = ppppppuStack_e0;
      *pppppppuVar14 = local_e8;
      pppppppuVar14[3] = ppppppuStack_d0;
      pppppppuVar14[2] = local_d8;
      if (pppppppuVar6 != (undefined8 *******)0x0) {
        if (pvVar19 != (void *)0x0) {
          if (pvVar19 == (void *)0x1) {
            lVar11 = 0;
            pppppppuVar13 = pppppppuVar17;
          }
          else {
            lVar11 = 0;
            pppppppuVar14 = pppppppuVar6 + 4;
            pppppppuVar15 = pppppppuVar17;
            do {
              pppppppuVar13 = pppppppuVar15 + 8;
              ppppppuVar9 = *pppppppuVar15;
              ppppppuVar22 = pppppppuVar15[3];
              ppppppuVar21 = pppppppuVar15[2];
              pppppppuVar14[-3] = pppppppuVar15[1];
              pppppppuVar14[-4] = ppppppuVar9;
              pppppppuVar14[-1] = ppppppuVar22;
              pppppppuVar14[-2] = ppppppuVar21;
              lVar11 = lVar11 + 2;
              ppppppuVar9 = pppppppuVar15[4];
              ppppppuVar22 = pppppppuVar15[7];
              ppppppuVar21 = pppppppuVar15[6];
              pppppppuVar14[1] = pppppppuVar15[5];
              *pppppppuVar14 = ppppppuVar9;
              pppppppuVar14[3] = ppppppuVar22;
              pppppppuVar14[2] = ppppppuVar21;
              pppppppuVar14 = pppppppuVar14 + 8;
              pppppppuVar15 = pppppppuVar13;
            } while ((long)pvVar19 - ((ulong)pvVar19 & 1) != lVar11);
            if (((ulong)pvVar19 & 1) == 0) goto LAB_00519e18;
          }
          ppppppuVar9 = *pppppppuVar13;
          ppppppuVar22 = pppppppuVar13[3];
          ppppppuVar21 = pppppppuVar13[2];
          pppppppuVar14 = pppppppuVar6 + lVar11 * 4;
          pppppppuVar14[1] = pppppppuVar13[1];
          *pppppppuVar14 = ppppppuVar9;
          pppppppuVar14[3] = ppppppuVar22;
          pppppppuVar14[2] = ppppppuVar21;
        }
LAB_00519e18:
        if (pppppppuVar17 != (undefined8 *******)0x0) {
          memset(pppppppuVar17,0xab,(long)pvVar19 << 5);
        }
        if (((ulong)local_c8 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_c0);
        }
        local_c8 = (undefined8 *****)((ulong)local_c8 | 1);
        local_c0 = pppppppuVar6;
        local_b8 = (void *)((long)pvVar19 << 1);
      }
    }
    else {
      pppppppuVar17 = pppppppuVar17 + ((ulong)local_c8 >> 1) * 4;
      pppppppuVar17[1] = ppppppuStack_e0;
      *pppppppuVar17 = local_e8;
      pppppppuVar17[3] = ppppppuStack_d0;
      pppppppuVar17[2] = local_d8;
    }
    local_c8 = (undefined8 *****)((long)local_c8 + 2);
  }
  pppppppuVar17 = &local_c0;
  if (((ulong)local_c8 & 1) != 0) {
    pppppppuVar17 = local_c0;
  }
                    /* try { // try from 00519e78 to 00519e8f has its CatchHandler @ 0051a2c0 */
  FUN_002e4270(param_7,&PTR_s_grpc_lb_policy_name_04184e50,7,pppppppuVar17,(ulong)local_c8 >> 1);
  uVar5 = FUN_00573630();
  pppppppuVar17 = &local_c0;
  if (((((ulong)local_c8 & 1) != 0) &&
      (pppppppuVar17 = local_c0, local_c0 == (undefined8 *******)0x0)) ||
     (memset(pppppppuVar17,0xab,((ulong)local_c8 & 0xffffffffffffffe) << 4),
     ((ulong)local_c8 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_c0);
  }
                    /* try { // try from 00519ed8 to 00519f1f has its CatchHandler @ 0051a33c */
  uVar8 = FUN_00573bd0(*pppppuVar1,uVar5,param_8);
  FUN_002e4a10(uVar5);
  if (*param_8 != 0) {
    uVar5 = FUN_002f1480();
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x70a,2,"[xds_client %p] failed to create xds channel: %s",param_1,uVar5);
    return;
  }
  do {
    ppppuVar20 = *pppppuVar16;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppppuVar16,0x10);
    if (bVar3) {
      *pppppuVar16 = (undefined8 ****)((long)ppppuVar20 + 1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppppuVar12 = param_1[1];
  if ((ppppuVar12 != (undefined8 ****)0x0) && (*(char *)(ppppuVar12 + 2) != '\0')) {
                    /* try { // try from 00519f6c to 00519fa3 has its CatchHandler @ 0051a228 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",ppppuVar12[1],param_1 + 1,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x70f,ppppuVar20,(long)ppppuVar20 + 1,"XdsClient+ChannelState");
  }
  local_e8 = (undefined8 ******)param_1;
  ppppuVar20 = (undefined8 ****)FUN_002e2e80(PTR_FUN_04373078,0x48);
  ppppppuVar9 = local_e8;
  if (ppppuVar20 != (undefined8 ****)0x0) {
    local_e8 = (undefined8 ******)0x0;
    local_c8 = ppppppuVar9;
                    /* try { // try from 00519fcc to 00519fdb has its CatchHandler @ 0051a278 */
    FUN_0050dc78(ppppuVar20,&local_c8,uVar8);
    FUN_0050df34(&local_c8);
  }
  ppppuVar12 = param_1[0x15];
  param_1[0x15] = ppppuVar20;
  if (ppppuVar12 != (undefined8 ****)0x0) {
                    /* try { // try from 00519ff8 to 00519ffb has its CatchHandler @ 0051a274 */
    (*(code *)**ppppuVar12)();
  }
  FUN_0050df34(&local_e8);
  if (param_1[0x14] == (undefined8 ****)0x0) {
    return;
  }
  ppppuVar20 = param_1[0x15];
  local_c8 = (undefined8 *****)0x0;
  local_c0 = (undefined8 *******)0x0;
  local_b8 = (void *)0x0;
  __s = *(char **)PTR_PTR_04374a58;
  ppppppuVar9 = (undefined8 ******)strlen(__s);
  if ((undefined8 ******)0xffffffffffffffef < ppppppuVar9) {
                    /* try { // try from 0051a1d4 to 0051a1db has its CatchHandler @ 0051a214 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (ppppppuVar9 < (undefined8 ******)0x17) {
    local_c8 = (undefined8 *****)CONCAT71(local_c8._1_7_,(char)((int)ppppppuVar9 << 1));
    pvVar19 = (void *)((ulong)&local_c8 | 1);
    if (ppppppuVar9 != (undefined8 ******)0x0) goto LAB_0051a080;
  }
  else {
    pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(ppppppuVar9 + 2) & 0xfffffffffffffff0);
    local_c8 = (undefined8 *****)((ulong)(ppppppuVar9 + 2) & 0xfffffffffffffff0 | 1);
    local_c0 = (undefined8 *******)ppppppuVar9;
    local_b8 = pvVar19;
LAB_0051a080:
    memcpy(pvVar19,__s,(size_t)ppppppuVar9);
  }
  *(undefined1 *)((long)pvVar19 + (long)ppppppuVar9) = 0;
  local_e8 = (undefined8 ******)0x0;
  ppppppuStack_e0 = (undefined8 ******)0x0;
  local_d8 = (void *)0x0;
  if (param_4 == (void *)0x0) goto LAB_0051a104;
  if ((undefined8 ****)0xffffffffffffffef < param_5) {
                    /* try { // try from 0051a1dc to 0051a1e3 has its CatchHandler @ 0051a204 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_5 < (undefined8 ****)0x17) {
    local_e8 = (undefined8 ******)(ulong)(byte)((int)param_5 << 1);
    pvVar19 = (void *)((ulong)&local_e8 | 1);
    if (param_5 != (undefined8 ****)0x0) goto LAB_0051a0f0;
  }
  else {
    pvVar19 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(param_5 + 2) & 0xfffffffffffffff0);
    local_e8 = (undefined8 ******)((ulong)(param_5 + 2) & 0xfffffffffffffff0 | 1);
    ppppppuStack_e0 = (undefined8 ******)param_5;
    local_d8 = pvVar19;
LAB_0051a0f0:
    memcpy(pvVar19,param_4,(size_t)param_5);
  }
  *(undefined1 *)((long)pvVar19 + (long)param_5) = 0;
LAB_0051a104:
                    /* try { // try from 0051a104 to 0051a113 has its CatchHandler @ 0051a23c */
  FUN_0050e470(ppppuVar20,&local_c8,&local_e8);
  if (((ulong)local_e8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d8);
  }
  if (((ulong)local_c8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b8);
  }
  return;
}


