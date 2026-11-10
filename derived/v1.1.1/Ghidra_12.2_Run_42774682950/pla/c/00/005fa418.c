/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005fa418; name: FUN_005fa418
 */


void FUN_005fa418(long *param_1,int *param_2,long param_3,int *param_4,undefined8 *param_5)

{
  byte *pbVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  __tree_node_base *__src;
  void *pvVar10;
  size_t sVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  __tree_node_base *p_Var17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  ulong uVar23;
  undefined8 uVar24;
  char *local_128;
  undefined8 uStack_120;
  long local_f8;
  ulong local_f0;
  uint local_c8;
  char cStack_c4;
  char cStack_c3;
  char cStack_c2;
  char cStack_c1;
  uint local_c0;
  char cStack_bc;
  char cStack_bb;
  char cStack_ba;
  undefined1 uStack_b9;
  long lStack_b8;
  undefined8 local_b0;
  int *piStack_a8;
  byte local_98 [16];
  ulong local_88;
  undefined1 auStack_80 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 == 5) {
    cStack_c1 = 0;
    local_c8 = 0x6572700c;
    cStack_c4 = 0x66;
    piVar9 = param_2 + 8;
    cStack_c3 = 0x69;
    cStack_c2 = 0x78;
    local_c0 = 0;
    cStack_bc = 0;
    cStack_bb = 0;
    cStack_ba = 0;
    uStack_b9 = 0;
    lStack_b8 = 0;
                    /* try { // try from 005fa480 to 005fa48b has its CatchHandler @ 005fca04 */
    piVar5 = (int *)FUN_00500624(piVar9,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
    }
    param_2 = param_2 + 10;
    if (param_2 == piVar5) {
LAB_005fa648:
      bVar2 = false;
    }
    else {
      if (piVar5[0xe] != 4) {
                    /* try { // try from 005fa55c to 005fa587 has its CatchHandler @ 005fc994 */
        FUN_002f2c60(&local_c8,"field:prefix error: should be string");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x359,&local_c8,0,0);
        puVar16 = (undefined8 *)param_1[1];
        if (puVar16 < (undefined8 *)param_1[2]) {
          *puVar16 = uVar6;
          param_1[1] = param_1[1] + 8;
          goto LAB_005fa648;
        }
        lVar18 = (long)puVar16 - *param_1 >> 3;
        uVar23 = lVar18 + 1;
        if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 005fc860 to 005fc867 has its CatchHandler @ 005fc994 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar19 = param_1[2] - *param_1;
        if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
          uVar12 = lVar19 >> 2;
          if (uVar23 <= uVar12) {
            uVar23 = uVar12;
          }
          if (uVar23 != 0) goto LAB_005fa5f0;
          lVar19 = 0;
        }
        else {
          uVar23 = 0x1fffffffffffffff;
LAB_005fa5f0:
          lVar19 = FUN_002e2e80(PTR_FUN_04373078,uVar23 << 3);
        }
        puVar16 = (undefined8 *)(lVar19 + lVar18 * 8);
        *puVar16 = uVar6;
        pvVar10 = (void *)*param_1;
        sVar11 = param_1[1] - (long)pvVar10;
        if (0 < (long)sVar11) {
          memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
          pvVar10 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar16 - sVar11);
        param_1[1] = (long)(puVar16 + 1);
        param_1[2] = lVar19 + uVar23 * 8;
        if (pvVar10 != (void *)0x0) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
        goto LAB_005fa648;
      }
      bVar2 = true;
      *param_4 = 1;
      if (param_4 != piVar5 + 0xe) {
        uVar23 = *(ulong *)(piVar5 + 0x12);
        lVar18 = *(long *)(piVar5 + 0x14);
        if ((*(byte *)(piVar5 + 0x10) & 1) == 0) {
          lVar18 = (long)piVar5 + 0x41;
          uVar23 = (ulong)(*(byte *)(piVar5 + 0x10) >> 1);
        }
                    /* try { // try from 005fa4f4 to 005fa4f7 has its CatchHandler @ 005fc998 */
        FUN_00291910(param_4 + 2,lVar18,uVar23);
        bVar2 = true;
      }
    }
    cStack_c2 = 0;
    cStack_c1 = 0;
    local_c0 = 0;
    cStack_bc = 0;
    cStack_bb = 0;
    cStack_ba = 0;
    uStack_b9 = 0;
    lStack_b8 = 0;
    local_c8 = 0x74617008;
    cStack_c4 = 0x68;
    cStack_c3 = 0;
                    /* try { // try from 005fa66c to 005fa677 has its CatchHandler @ 005fc9f4 */
    piVar5 = (int *)FUN_00500624(piVar9,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
    }
    if (param_2 != piVar5) {
      if (bVar2) {
                    /* try { // try from 005fa6a0 to 005fa6fb has its CatchHandler @ 005fc990 */
        FUN_002f2c60(&local_c8,"field:path error: other path matcher already specified");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x365,&local_c8,0,0);
        puVar16 = (undefined8 *)param_1[1];
        puVar13 = (undefined8 *)param_1[2];
        if (puVar13 <= puVar16) {
          lVar18 = *param_1;
          lVar19 = (long)puVar16 - lVar18 >> 3;
          uVar23 = lVar19 + 1;
          if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          goto LAB_005fa7a8;
        }
LAB_005fa77c:
        *puVar16 = uVar6;
        param_1[1] = param_1[1] + 8;
      }
      else if (piVar5[0xe] == 4) {
        *param_4 = 0;
        if (param_4 != piVar5 + 0xe) {
          uVar23 = *(ulong *)(piVar5 + 0x12);
          lVar18 = *(long *)(piVar5 + 0x14);
          if ((*(byte *)(piVar5 + 0x10) & 1) == 0) {
            lVar18 = (long)piVar5 + 0x41;
            uVar23 = (ulong)(*(byte *)(piVar5 + 0x10) >> 1);
          }
                    /* try { // try from 005fa738 to 005fa73b has its CatchHandler @ 005fc998 */
          FUN_00291910(param_4 + 2,lVar18,uVar23);
        }
      }
      else {
                    /* try { // try from 005fa740 to 005fa76b has its CatchHandler @ 005fc950 */
        FUN_002f2c60(&local_c8,"field:path error: should be string");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x36a,&local_c8,0,0);
        puVar16 = (undefined8 *)param_1[1];
        puVar13 = (undefined8 *)param_1[2];
        if (puVar16 < puVar13) goto LAB_005fa77c;
        lVar18 = *param_1;
        lVar19 = (long)puVar16 - lVar18 >> 3;
        uVar23 = lVar19 + 1;
        if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 005fc878 to 005fc87f has its CatchHandler @ 005fc950 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_005fa7a8:
        if ((ulong)((long)puVar13 - lVar18 >> 3) < 0xfffffffffffffff) {
          uVar12 = (long)puVar13 - lVar18 >> 2;
          if (uVar23 <= uVar12) {
            uVar23 = uVar12;
          }
          if (uVar23 != 0) goto LAB_005fa7d4;
          lVar18 = 0;
        }
        else {
          uVar23 = 0x1fffffffffffffff;
LAB_005fa7d4:
          lVar18 = FUN_002e2e80(PTR_FUN_04373078,uVar23 << 3);
        }
        puVar16 = (undefined8 *)(lVar18 + lVar19 * 8);
        *puVar16 = uVar6;
        pvVar10 = (void *)*param_1;
        sVar11 = param_1[1] - (long)pvVar10;
        if (0 < (long)sVar11) {
          memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
          pvVar10 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar16 - sVar11);
        param_1[1] = (long)(puVar16 + 1);
        param_1[2] = lVar18 + uVar23 * 8;
        if (pvVar10 != (void *)0x0) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
      bVar2 = true;
    }
    cStack_c1 = 0;
    local_c0 = 0;
    cStack_bc = 0;
    cStack_bb = 0;
    cStack_ba = 0;
    uStack_b9 = 0;
    local_c8 = 0x6765720a;
    cStack_c4 = 0x65;
    lStack_b8 = 0;
    cStack_c3 = 0x78;
    cStack_c2 = 0;
                    /* try { // try from 005fa854 to 005fa85f has its CatchHandler @ 005fc9e4 */
    piVar5 = (int *)FUN_00500624(piVar9,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
    }
    if (param_2 == piVar5) {
      if (!bVar2) {
                    /* try { // try from 005fa8e8 to 005fa943 has its CatchHandler @ 005fc954 */
        FUN_002f2c60(&local_c8,"one path matcher: prefix, path, or regex is required");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x387,&local_c8,0,0);
        puVar16 = (undefined8 *)param_1[1];
        puVar13 = (undefined8 *)param_1[2];
        if (puVar16 < puVar13) goto LAB_005fa9dc;
        lVar18 = *param_1;
        lVar19 = (long)puVar16 - lVar18 >> 3;
        uVar23 = lVar19 + 1;
        if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        goto LAB_005faa08;
      }
    }
    else {
      if (bVar2) {
                    /* try { // try from 005fa888 to 005fa8e3 has its CatchHandler @ 005fc98c */
        FUN_002f2c60(&local_c8,"field:regex error: other path matcher already specified");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x377,&local_c8,0,0);
        puVar16 = (undefined8 *)param_1[1];
        puVar13 = (undefined8 *)param_1[2];
        if (puVar16 < puVar13) {
LAB_005fa9dc:
          *puVar16 = uVar6;
          param_1[1] = param_1[1] + 8;
          goto LAB_005faa8c;
        }
        lVar18 = *param_1;
        lVar19 = (long)puVar16 - lVar18 >> 3;
        uVar23 = lVar19 + 1;
        if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_005faa08:
        if ((ulong)((long)puVar13 - lVar18 >> 3) < 0xfffffffffffffff) {
          uVar12 = (long)puVar13 - lVar18 >> 2;
          if (uVar23 <= uVar12) {
            uVar23 = uVar12;
          }
          if (uVar23 != 0) goto LAB_005faa34;
          lVar18 = 0;
        }
        else {
          uVar23 = 0x1fffffffffffffff;
LAB_005faa34:
          lVar18 = FUN_002e2e80(PTR_FUN_04373078,uVar23 << 3);
        }
        puVar16 = (undefined8 *)(lVar18 + lVar19 * 8);
        *puVar16 = uVar6;
        pvVar10 = (void *)*param_1;
        sVar11 = param_1[1] - (long)pvVar10;
        if (0 < (long)sVar11) {
          memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
          pvVar10 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar16 - sVar11);
        param_1[1] = (long)(puVar16 + 1);
        param_1[2] = lVar18 + uVar23 * 8;
        if (pvVar10 == (void *)0x0) goto LAB_005faa8c;
      }
      else {
        if (piVar5[0xe] != 4) {
                    /* try { // try from 005fa9a0 to 005fa9cb has its CatchHandler @ 005fc94c */
          FUN_002f2c60(&local_c8,"field:regex error: should be string");
          uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                               ,0x37c,&local_c8,0,0);
          puVar16 = (undefined8 *)param_1[1];
          puVar13 = (undefined8 *)param_1[2];
          if (puVar16 < puVar13) goto LAB_005fa9dc;
          lVar18 = *param_1;
          lVar19 = (long)puVar16 - lVar18 >> 3;
          uVar23 = lVar19 + 1;
          if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 005fc880 to 005fc887 has its CatchHandler @ 005fc94c */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          goto LAB_005faa08;
        }
        *param_4 = 2;
        lVar18 = FUN_002e2e80(PTR_FUN_04373078,200);
        if (lVar18 != 0) {
                    /* try { // try from 005fa974 to 005fa97b has its CatchHandler @ 005fc910 */
          FUN_0054ee04(lVar18,piVar5 + 0x10);
        }
        pvVar10 = *(void **)(param_4 + 8);
        *(long *)(param_4 + 8) = lVar18;
        if (pvVar10 == (void *)0x0) goto LAB_005faa8c;
        FUN_0054f474(pvVar10);
      }
      FUN_002e2ea0(PTR_LAB_04373088,pvVar10);
    }
LAB_005faa8c:
    local_c0 = 0;
    cStack_bc = 0;
    cStack_bb = 0;
    cStack_ba = 0;
    uStack_b9 = 0;
    local_c8 = 0x6165680e;
    lStack_b8 = 0;
    cStack_c4 = 100;
    cStack_c3 = 0x65;
    cStack_c2 = 0x72;
    cStack_c1 = 0x73;
                    /* try { // try from 005faab4 to 005faac3 has its CatchHandler @ 005fc9d4 */
    piVar5 = (int *)FUN_00500624(piVar9,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
    }
    if (param_2 != piVar5) {
      if (piVar5[0xe] == 6) {
        lVar18 = *(long *)(piVar5 + 0x1c);
        if (*(long *)(piVar5 + 0x1e) != lVar18) {
          plVar3 = param_1 + 1;
          uVar23 = 0;
          pcVar22 = (char *)((ulong)&local_c8 | 1);
          do {
            if (*(int *)(lVar18 + uVar23 * 0x50) == 5) {
              puVar16 = *(undefined8 **)(param_4 + 0xc);
              if (puVar16 < *(undefined8 **)(param_4 + 0xe)) {
                puVar16[10] = 0;
                puVar16[7] = 0;
                puVar16[6] = 0;
                puVar16[9] = 0;
                puVar16[8] = 0;
                puVar16[1] = 0;
                *puVar16 = 0;
                puVar16[3] = 0;
                puVar16[2] = 0;
                puVar16[5] = 0;
                puVar16[4] = 0;
                lVar19 = *(long *)(param_4 + 0xc) + 0x58;
                *(long *)(param_4 + 0xc) = lVar19;
              }
              else {
                lVar8 = *(long *)(param_4 + 10);
                lVar19 = (long)puVar16 - lVar8 >> 3;
                uVar12 = lVar19 * 0x2e8ba2e8ba2e8ba3 + 1;
                if (0x2e8ba2e8ba2e8ba < uVar12) {
                    /* try { // try from 005fc7c8 to 005fc7cf has its CatchHandler @ 005fc904 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar8 = (long)*(undefined8 **)(param_4 + 0xe) - lVar8 >> 3;
                piStack_a8 = param_4 + 0xe;
                if ((ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
                  uVar14 = lVar8 * 0x5d1745d1745d1746;
                  if (uVar12 <= uVar14) {
                    uVar12 = uVar14;
                  }
                  if (uVar12 != 0) goto LAB_005face0;
                  lVar8 = 0;
                }
                else {
                  uVar12 = 0x2e8ba2e8ba2e8ba;
LAB_005face0:
                  local_b0 = 0;
                  lVar8 = FUN_002e2e80(PTR_FUN_04373078,uVar12 * 0x58);
                }
                puVar13 = (undefined8 *)(lVar8 + lVar19 * 8);
                puVar16 = puVar13 + 0xb;
                local_c0 = (uint)puVar13;
                cStack_bc = (char)((ulong)puVar13 >> 0x20);
                cStack_bb = (char)((ulong)puVar13 >> 0x28);
                cStack_ba = (char)((ulong)puVar13 >> 0x30);
                uStack_b9 = (undefined1)((ulong)puVar13 >> 0x38);
                puVar13[10] = 0;
                puVar13[7] = 0;
                puVar13[6] = 0;
                puVar13[9] = 0;
                puVar13[8] = 0;
                puVar13[1] = 0;
                *puVar13 = 0;
                puVar13[3] = 0;
                puVar13[2] = 0;
                puVar13[5] = 0;
                puVar13[4] = 0;
                lVar19 = *(long *)(param_4 + 10);
                lVar7 = *(long *)(param_4 + 0xc);
                if (lVar7 == lVar19) {
                  lStack_b8 = lVar19;
                }
                else {
                  do {
                    uVar24 = *(undefined8 *)(lVar7 + -0x50);
                    uVar6 = *(undefined8 *)(lVar7 + -0x58);
                    puVar13[-9] = *(undefined8 *)(lVar7 + -0x48);
                    puVar13[-10] = uVar24;
                    puVar13[-0xb] = uVar6;
                    uVar24 = *(undefined8 *)(lVar7 + -0x38);
                    uVar6 = *(undefined8 *)(lVar7 + -0x40);
                    *(undefined8 *)(lVar7 + -0x50) = 0;
                    *(undefined8 *)(lVar7 + -0x48) = 0;
                    *(undefined8 *)(lVar7 + -0x58) = 0;
                    puVar13[-6] = *(undefined8 *)(lVar7 + -0x30);
                    puVar13[-7] = uVar24;
                    puVar13[-8] = uVar6;
                    uVar24 = *(undefined8 *)(lVar7 + -0x20);
                    uVar6 = *(undefined8 *)(lVar7 + -0x28);
                    puVar13[-3] = *(undefined8 *)(lVar7 + -0x18);
                    puVar13[-4] = uVar24;
                    puVar13[-5] = uVar6;
                    uVar6 = *(undefined8 *)(lVar7 + -0x10);
                    *(undefined8 *)(lVar7 + -0x20) = 0;
                    *(undefined8 *)(lVar7 + -0x18) = 0;
                    *(undefined8 *)(lVar7 + -0x28) = 0;
                    *(undefined8 *)(lVar7 + -0x10) = 0;
                    puVar13[-2] = uVar6;
                    *(undefined2 *)(puVar13 + -1) = *(undefined2 *)(lVar7 + -8);
                    lVar7 = lVar7 + -0x58;
                    puVar13 = (undefined8 *)
                              (CONCAT17(uStack_b9,
                                        CONCAT16(cStack_ba,
                                                 CONCAT15(cStack_bb,CONCAT14(cStack_bc,local_c0))))
                              + -0x58);
                    local_c0 = (uint)puVar13;
                    cStack_bc = (char)((ulong)puVar13 >> 0x20);
                    cStack_bb = (char)((ulong)puVar13 >> 0x28);
                    cStack_ba = (char)((ulong)puVar13 >> 0x30);
                    uStack_b9 = (undefined1)((ulong)puVar13 >> 0x38);
                  } while (lVar19 != lVar7);
                  lVar19 = *(long *)(param_4 + 10);
                  lStack_b8 = *(long *)(param_4 + 0xc);
                }
                *(undefined8 **)(param_4 + 10) = puVar13;
                *(undefined8 **)(param_4 + 0xc) = puVar16;
                local_c0 = (uint)lVar19;
                cStack_bc = (char)((ulong)lVar19 >> 0x20);
                cStack_bb = (char)((ulong)lVar19 >> 0x28);
                cStack_ba = (char)((ulong)lVar19 >> 0x30);
                uStack_b9 = (undefined1)((ulong)lVar19 >> 0x38);
                local_b0 = *(undefined8 *)(param_4 + 0xe);
                *(ulong *)(param_4 + 0xe) = lVar8 + uVar12 * 0x58;
                local_c8 = local_c0;
                cStack_c4 = cStack_bc;
                cStack_c3 = cStack_bb;
                cStack_c2 = cStack_ba;
                cStack_c1 = uStack_b9;
                FUN_005c46e4(&local_c8);
                lVar19 = *(long *)(param_4 + 0xc);
              }
              cStack_c2 = 0;
              cStack_c1 = 0;
              local_c0 = 0;
              cStack_bc = 0;
              cStack_bb = 0;
              cStack_ba = 0;
              uStack_b9 = 0;
              local_c8 = 0x6d616e08;
              cStack_c4 = 0x65;
              lVar8 = lVar18 + uVar23 * 0x50 + 0x20;
              lStack_b8 = 0;
              cStack_c3 = 0;
                    /* try { // try from 005fae58 to 005fae63 has its CatchHandler @ 005fca7c */
              lVar7 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              lVar18 = lVar18 + uVar23 * 0x50 + 0x28;
              if (lVar18 == lVar7) {
                    /* try { // try from 005faed0 to 005faef7 has its CatchHandler @ 005fca34 */
                FUN_002f2c60(&local_c8,"field:name error:required field missing");
                uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                     ,0x39d,&local_c8,0,0);
                puVar16 = (undefined8 *)param_1[1];
                puVar13 = (undefined8 *)param_1[2];
                if (puVar16 < puVar13) goto LAB_005faf5c;
                lVar7 = *param_1;
                lVar20 = (long)puVar16 - lVar7 >> 3;
                uVar12 = lVar20 + 1;
                if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc7d8 to 005fc7df has its CatchHandler @ 005fc8fc */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
LAB_005faf8c:
                if ((ulong)((long)puVar13 - lVar7 >> 3) < 0xfffffffffffffff) {
                  uVar14 = (long)puVar13 - lVar7 >> 2;
                  if (uVar12 <= uVar14) {
                    uVar12 = uVar14;
                  }
                  if (uVar12 != 0) goto LAB_005fafb8;
                  lVar7 = 0;
                }
                else {
                  uVar12 = 0x1fffffffffffffff;
LAB_005fafb8:
                  lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                }
                puVar16 = (undefined8 *)(lVar7 + lVar20 * 8);
                *puVar16 = uVar6;
                pvVar10 = (void *)*param_1;
                sVar11 = param_1[1] - (long)pvVar10;
                if (0 < (long)sVar11) {
                  memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                  pvVar10 = (void *)*param_1;
                }
                *param_1 = (long)((long)puVar16 - sVar11);
                param_1[1] = (long)(puVar16 + 1);
                param_1[2] = lVar7 + uVar12 * 8;
                if (pvVar10 != (void *)0x0) {
                  FUN_002e2ea0(PTR_LAB_04373088);
                }
              }
              else if (*(int *)(lVar7 + 0x38) == 4) {
                if (lVar19 + -0x58 != lVar7 + 0x40) {
                  uVar12 = *(ulong *)(lVar7 + 0x48);
                  lVar20 = *(long *)(lVar7 + 0x50);
                  if ((*(byte *)(lVar7 + 0x40) & 1) == 0) {
                    lVar20 = lVar7 + 0x41;
                    uVar12 = (ulong)(*(byte *)(lVar7 + 0x40) >> 1);
                  }
                    /* try { // try from 005faec8 to 005faecb has its CatchHandler @ 005fc978 */
                  FUN_00291910(lVar19 + -0x58,lVar20,uVar12);
                }
              }
              else {
                    /* try { // try from 005faf24 to 005faf4b has its CatchHandler @ 005fca18 */
                FUN_002f2c60(&local_c8,"field:name error: should be string");
                uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                     ,0x3a1,&local_c8,0,0);
                puVar16 = (undefined8 *)param_1[1];
                puVar13 = (undefined8 *)param_1[2];
                if (puVar13 <= puVar16) {
                  lVar7 = *param_1;
                  lVar20 = (long)puVar16 - lVar7 >> 3;
                  uVar12 = lVar20 + 1;
                  if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc7d0 to 005fc7d7 has its CatchHandler @ 005fc900 */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  goto LAB_005faf8c;
                }
LAB_005faf5c:
                *puVar16 = uVar6;
                *plVar3 = *plVar3 + 8;
              }
              local_c8 = 0x18;
              cStack_c4 = 0;
              cStack_c3 = 0;
              cStack_c2 = 0;
              cStack_c1 = 0;
              local_c0 = 0;
              cStack_bc = 0;
              cStack_ba = 0;
              uStack_b9 = 0;
              lStack_b8 = 0;
              *(undefined8 *)pcVar22 = s_invert_match_0398631f._0_8_;
              pcVar22[8] = 'a';
              pcVar22[9] = 't';
              pcVar22[10] = 'c';
              pcVar22[0xb] = 'h';
              cStack_bb = 0;
                    /* try { // try from 005fb048 to 005fb053 has its CatchHandler @ 005fca3c */
              lVar7 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              if (lVar18 != lVar7) {
                if (*(int *)(lVar7 + 0x38) == 2) {
                  *(undefined1 *)(lVar19 + -7) = 0;
                }
                else if (*(int *)(lVar7 + 0x38) == 1) {
                  *(undefined1 *)(lVar19 + -7) = 1;
                }
                else {
                    /* try { // try from 005fb09c to 005fb0c3 has its CatchHandler @ 005fca14 */
                  FUN_002f2c60(&local_c8,"field:present_match error: should be boolean");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3ae,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  if (puVar16 < (undefined8 *)param_1[2]) {
                    *puVar16 = uVar6;
                    *plVar3 = *plVar3 + 8;
                  }
                  else {
                    lVar7 = (long)puVar16 - *param_1 >> 3;
                    uVar12 = lVar7 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc7e0 to 005fc7e7 has its CatchHandler @ 005fc8f8 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar20 = param_1[2] - *param_1;
                    if ((ulong)(lVar20 >> 3) < 0xfffffffffffffff) {
                      uVar14 = lVar20 >> 2;
                      if (uVar12 <= uVar14) {
                        uVar12 = uVar14;
                      }
                      if (uVar12 != 0) goto LAB_005fb130;
                      lVar20 = 0;
                    }
                    else {
                      uVar12 = 0x1fffffffffffffff;
LAB_005fb130:
                      lVar20 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                    }
                    puVar16 = (undefined8 *)(lVar20 + lVar7 * 8);
                    *puVar16 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    *param_1 = (long)((long)puVar16 - sVar11);
                    param_1[1] = (long)(puVar16 + 1);
                    param_1[2] = lVar20 + uVar12 * 8;
                    if (pvVar10 != (void *)0x0) {
                      FUN_002e2ea0(PTR_LAB_04373088);
                    }
                  }
                }
              }
              local_c8 = 0x16;
              cStack_c4 = 0;
              cStack_c3 = 0;
              cStack_c2 = 0;
              cStack_c1 = 0;
              local_c0 = 0;
              cStack_bb = 0;
              cStack_ba = 0;
              uStack_b9 = 0;
              lStack_b8 = 0;
              *(undefined8 *)pcVar22 = s_exact_match_0396962b._0_8_;
              pcVar22[7] = 'a';
              pcVar22[8] = 't';
              pcVar22[9] = 'c';
              pcVar22[10] = 'h';
              cStack_bc = 0;
                    /* try { // try from 005fb1c0 to 005fb1cb has its CatchHandler @ 005fca8c */
              lVar7 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              if (lVar18 == lVar7) {
                bVar2 = false;
              }
              else {
                if (*(int *)(lVar7 + 0x38) == 4) {
                  *(undefined4 *)(lVar19 + -0x40) = 0;
                  if (lVar19 + -0x28 != lVar7 + 0x40) {
                    uVar12 = *(ulong *)(lVar7 + 0x48);
                    lVar20 = *(long *)(lVar7 + 0x50);
                    if ((*(byte *)(lVar7 + 0x40) & 1) == 0) {
                      lVar20 = lVar7 + 0x41;
                      uVar12 = (ulong)(*(byte *)(lVar7 + 0x40) >> 1);
                    }
                    /* try { // try from 005fb228 to 005fb22b has its CatchHandler @ 005fc9b0 */
                    FUN_00291910(lVar19 + -0x28,lVar20,uVar12);
                  }
                }
                else {
                    /* try { // try from 005fb238 to 005fb25f has its CatchHandler @ 005fca30 */
                  FUN_002f2c60(&local_c8,"field:exact_match error: should be string");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3b9,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  if (puVar16 < (undefined8 *)param_1[2]) {
                    *puVar16 = uVar6;
                    *plVar3 = *plVar3 + 8;
                  }
                  else {
                    lVar7 = (long)puVar16 - *param_1 >> 3;
                    uVar12 = lVar7 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc7e8 to 005fc7ef has its CatchHandler @ 005fc8f4 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar20 = param_1[2] - *param_1;
                    if ((ulong)(lVar20 >> 3) < 0xfffffffffffffff) {
                      uVar14 = lVar20 >> 2;
                      if (uVar12 <= uVar14) {
                        uVar12 = uVar14;
                      }
                      if (uVar12 != 0) goto LAB_005fb2cc;
                      lVar20 = 0;
                    }
                    else {
                      uVar12 = 0x1fffffffffffffff;
LAB_005fb2cc:
                      lVar20 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                    }
                    puVar16 = (undefined8 *)(lVar20 + lVar7 * 8);
                    *puVar16 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    *param_1 = (long)((long)puVar16 - sVar11);
                    param_1[1] = (long)(puVar16 + 1);
                    param_1[2] = lVar20 + uVar12 * 8;
                    if (pvVar10 != (void *)0x0) {
                      FUN_002e2ea0(PTR_LAB_04373088);
                    }
                  }
                }
                bVar2 = true;
              }
              local_c8 = 0x16;
              cStack_c4 = 0;
              cStack_c3 = 0;
              cStack_c2 = 0;
              cStack_c1 = 0;
              local_c0 = 0;
              cStack_bb = 0;
              cStack_ba = 0;
              uStack_b9 = 0;
              lStack_b8 = 0;
              *(undefined8 *)pcVar22 = s_regex_match_038dcf3f._0_8_;
              pcVar22[7] = 'a';
              pcVar22[8] = 't';
              pcVar22[9] = 'c';
              pcVar22[10] = 'h';
              cStack_bc = 0;
                    /* try { // try from 005fb360 to 005fb36b has its CatchHandler @ 005fcaac */
              lVar7 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              if (lVar18 != lVar7) {
                if (bVar2) {
                    /* try { // try from 005fb394 to 005fb3bb has its CatchHandler @ 005fca20 */
                  FUN_002f2c60(&local_c8,
                               "field:regex_match error: other header matcher already specified");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3c6,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar13 <= puVar16) {
                    lVar7 = *param_1;
                    lVar20 = (long)puVar16 - lVar7 >> 3;
                    uVar12 = lVar20 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc7f8 to 005fc7ff has its CatchHandler @ 005fc8ec */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    goto LAB_005fb4ac;
                  }
LAB_005fb47c:
                  *puVar16 = uVar6;
                  *plVar3 = *plVar3 + 8;
                }
                else {
                  if (*(int *)(lVar7 + 0x38) == 4) {
                    *(undefined4 *)(lVar19 + -0x40) = 1;
                    lVar20 = FUN_002e2e80(PTR_FUN_04373078,200);
                    if (lVar20 != 0) {
                    /* try { // try from 005fb418 to 005fb41f has its CatchHandler @ 005fc93c */
                      FUN_0054ee04(lVar20,lVar7 + 0x40);
                    }
                    pvVar10 = *(void **)(lVar19 + -0x10);
                    *(long *)(lVar19 + -0x10) = lVar20;
                    if (pvVar10 == (void *)0x0) goto LAB_005fb53c;
                    FUN_0054f474(pvVar10);
                  }
                  else {
                    /* try { // try from 005fb444 to 005fb46b has its CatchHandler @ 005fc9ac */
                    FUN_002f2c60(&local_c8,"field:regex_match error: should be string");
                    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3cb,&local_c8,0,0);
                    puVar16 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar16 < puVar13) goto LAB_005fb47c;
                    lVar7 = *param_1;
                    lVar20 = (long)puVar16 - lVar7 >> 3;
                    uVar12 = lVar20 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc7f0 to 005fc7f7 has its CatchHandler @ 005fc8f0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_005fb4ac:
                    if ((ulong)((long)puVar13 - lVar7 >> 3) < 0xfffffffffffffff) {
                      uVar14 = (long)puVar13 - lVar7 >> 2;
                      if (uVar12 <= uVar14) {
                        uVar12 = uVar14;
                      }
                      if (uVar12 != 0) goto LAB_005fb4d8;
                      lVar7 = 0;
                    }
                    else {
                      uVar12 = 0x1fffffffffffffff;
LAB_005fb4d8:
                      lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                    }
                    puVar16 = (undefined8 *)(lVar7 + lVar20 * 8);
                    *puVar16 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    *param_1 = (long)((long)puVar16 - sVar11);
                    param_1[1] = (long)(puVar16 + 1);
                    param_1[2] = lVar7 + uVar12 * 8;
                    if (pvVar10 == (void *)0x0) goto LAB_005fb53c;
                  }
                  FUN_002e2ea0(PTR_LAB_04373088,pvVar10);
                }
LAB_005fb53c:
                bVar2 = true;
              }
              local_c8 = 0x16;
              cStack_c4 = 0;
              cStack_c3 = 0;
              cStack_c2 = 0;
              cStack_c1 = 0;
              local_c0 = 0;
              cStack_bb = 0;
              cStack_ba = 0;
              uStack_b9 = 0;
              lStack_b8 = 0;
              *(undefined8 *)pcVar22 = s_range_match_03906c5b._0_8_;
              pcVar22[7] = 'a';
              pcVar22[8] = 't';
              pcVar22[9] = 'c';
              pcVar22[10] = 'h';
              cStack_bc = 0;
                    /* try { // try from 005fb56c to 005fb577 has its CatchHandler @ 005fca9c */
              lVar7 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              if (lVar18 != lVar7) {
                if (bVar2) {
                    /* try { // try from 005fb5a0 to 005fb5c7 has its CatchHandler @ 005fca24 */
                  FUN_002f2c60(&local_c8,
                               "field:range_match error: other header matcher already specified");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3d9,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar13 <= puVar16) {
                    lVar7 = *param_1;
                    lVar20 = (long)puVar16 - lVar7 >> 3;
                    uVar12 = lVar20 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc828 to 005fc82f has its CatchHandler @ 005fc8d4 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    goto LAB_005fb6e8;
                  }
LAB_005fb6b8:
                  *puVar16 = uVar6;
                  *plVar3 = *plVar3 + 8;
                }
                else if (*(int *)(lVar7 + 0x38) == 5) {
                  local_c8 = 10;
                  cStack_c4 = 0;
                  cStack_c3 = 0;
                  cStack_c1 = 0;
                  local_c0 = 0;
                  cStack_bc = 0;
                  cStack_bb = 0;
                  cStack_ba = 0;
                  uStack_b9 = 0;
                  lStack_b8 = 0;
                  builtin_strncpy(pcVar22,"start",5);
                  cStack_c2 = 0;
                    /* try { // try from 005fb628 to 005fb633 has its CatchHandler @ 005fc968 */
                  lVar20 = FUN_00500624(lVar7 + 0x58,&local_c8);
                  if ((local_c8 & 1) != 0) {
                    FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
                  }
                  if (lVar7 + 0x60 == lVar20) {
                    /* try { // try from 005fb77c to 005fb7a3 has its CatchHandler @ 005fc944 */
                    FUN_002f2c60(&local_c8,"field:start missing");
                    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3ec,&local_c8,0,0);
                    puVar16 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar16 < puVar13) goto LAB_005fb808;
                    lVar20 = *param_1;
                    lVar21 = (long)puVar16 - lVar20 >> 3;
                    uVar12 = lVar21 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc810 to 005fc817 has its CatchHandler @ 005fc8e0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_005fb850:
                    if ((ulong)((long)puVar13 - lVar20 >> 3) < 0xfffffffffffffff) {
                      uVar14 = (long)puVar13 - lVar20 >> 2;
                      if (uVar12 <= uVar14) {
                        uVar12 = uVar14;
                      }
                      if (uVar12 != 0) goto LAB_005fb87c;
                      lVar20 = 0;
                    }
                    else {
                      uVar12 = 0x1fffffffffffffff;
LAB_005fb87c:
                      lVar20 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                    }
                    puVar16 = (undefined8 *)(lVar20 + lVar21 * 8);
                    *puVar16 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    *param_1 = (long)((long)puVar16 - sVar11);
                    param_1[1] = (long)(puVar16 + 1);
                    param_1[2] = lVar20 + uVar12 * 8;
                    if (pvVar10 != (void *)0x0) {
                      FUN_002e2ea0(PTR_LAB_04373088);
                    }
                  }
                  else if (*(int *)(lVar20 + 0x38) == 3) {
                    if ((*(byte *)(lVar20 + 0x40) & 1) == 0) {
                      lVar20 = lVar20 + 0x41;
                    }
                    else {
                      lVar20 = *(long *)(lVar20 + 0x50);
                    }
                    /* try { // try from 005fb828 to 005fb82b has its CatchHandler @ 005fc930 */
                    iVar4 = FUN_002ec930(lVar20);
                    *(long *)(lVar19 + -0x38) = (long)iVar4;
                  }
                  else {
                    /* try { // try from 005fb7d0 to 005fb7f7 has its CatchHandler @ 005fc938 */
                    FUN_002f2c60(&local_c8,"field:start error: should be of number");
                    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3e5,&local_c8,0,0);
                    puVar16 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar13 <= puVar16) {
                      lVar20 = *param_1;
                      lVar21 = (long)puVar16 - lVar20 >> 3;
                      uVar12 = lVar21 + 1;
                      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc808 to 005fc80f has its CatchHandler @ 005fc8e4 */
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      goto LAB_005fb850;
                    }
LAB_005fb808:
                    *puVar16 = uVar6;
                    *plVar3 = *plVar3 + 8;
                  }
                  local_c8 = 6;
                  cStack_c3 = 0;
                  cStack_c2 = 0;
                  cStack_c1 = 0;
                  local_c0 = 0;
                  cStack_bc = 0;
                  cStack_bb = 0;
                  cStack_ba = 0;
                  uStack_b9 = 0;
                  lStack_b8 = 0;
                  pcVar22[2] = 'd';
                  pcVar22[0] = 'e';
                  pcVar22[1] = 'n';
                  cStack_c4 = 0;
                    /* try { // try from 005fb900 to 005fb90b has its CatchHandler @ 005fc958 */
                  lVar20 = FUN_00500624(lVar7 + 0x58,&local_c8);
                  if ((local_c8 & 1) != 0) {
                    FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
                  }
                  if (lVar7 + 0x60 == lVar20) {
                    /* try { // try from 005fb954 to 005fb97b has its CatchHandler @ 005fc940 */
                    FUN_002f2c60(&local_c8,"field:end missing");
                    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3f9,&local_c8,0,0);
                    puVar16 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar16 < puVar13) goto LAB_005fb9e0;
                    lVar7 = *param_1;
                    lVar20 = (long)puVar16 - lVar7 >> 3;
                    uVar12 = lVar20 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc820 to 005fc827 has its CatchHandler @ 005fc8d8 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_005fba3c:
                    if ((ulong)((long)puVar13 - lVar7 >> 3) < 0xfffffffffffffff) {
                      uVar14 = (long)puVar13 - lVar7 >> 2;
                      if (uVar12 <= uVar14) {
                        uVar12 = uVar14;
                      }
                      if (uVar12 != 0) goto LAB_005fba68;
                      lVar7 = 0;
                    }
                    else {
                      uVar12 = 0x1fffffffffffffff;
LAB_005fba68:
                      lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                    }
                    puVar16 = (undefined8 *)(lVar7 + lVar20 * 8);
                    *puVar16 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    param_1[2] = lVar7 + uVar12 * 8;
                    *param_1 = (long)((long)puVar16 - sVar11);
                    param_1[1] = (long)(puVar16 + 1);
                    if (pvVar10 != (void *)0x0) {
                      FUN_002e2ea0(PTR_LAB_04373088);
                    }
                    if (*(long *)(lVar19 + -0x30) <= *(long *)(lVar19 + -0x38)) goto LAB_005fbadc;
                  }
                  else if (*(int *)(lVar20 + 0x38) == 3) {
                    if ((*(byte *)(lVar20 + 0x40) & 1) == 0) {
                      lVar20 = lVar20 + 0x41;
                    }
                    else {
                      lVar20 = *(long *)(lVar20 + 0x50);
                    }
                    /* try { // try from 005fba08 to 005fba0b has its CatchHandler @ 005fc930 */
                    iVar4 = FUN_002ec930(lVar20);
                    *(long *)(lVar19 + -0x30) = (long)iVar4;
                    if (*(long *)(lVar19 + -0x30) <= *(long *)(lVar19 + -0x38)) goto LAB_005fbadc;
                  }
                  else {
                    /* try { // try from 005fb9a8 to 005fb9cf has its CatchHandler @ 005fc934 */
                    FUN_002f2c60(&local_c8,"field:end error: should be of number");
                    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3f2,&local_c8,0,0);
                    puVar16 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar13 <= puVar16) {
                      lVar7 = *param_1;
                      lVar20 = (long)puVar16 - lVar7 >> 3;
                      uVar12 = lVar20 + 1;
                      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc818 to 005fc81f has its CatchHandler @ 005fc8dc */
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      goto LAB_005fba3c;
                    }
LAB_005fb9e0:
                    *puVar16 = uVar6;
                    *plVar3 = *plVar3 + 8;
                    if (*(long *)(lVar19 + -0x30) <= *(long *)(lVar19 + -0x38)) goto LAB_005fbadc;
                  }
                  *(undefined4 *)(lVar19 + -0x40) = 2;
                }
                else {
                    /* try { // try from 005fb680 to 005fb6a7 has its CatchHandler @ 005fc9a4 */
                  FUN_002f2c60(&local_c8,"field:range_match error: should be object");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3de,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar16 < puVar13) goto LAB_005fb6b8;
                  lVar7 = *param_1;
                  lVar20 = (long)puVar16 - lVar7 >> 3;
                  uVar12 = lVar20 + 1;
                  if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc800 to 005fc807 has its CatchHandler @ 005fc8e8 */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
LAB_005fb6e8:
                  if ((ulong)((long)puVar13 - lVar7 >> 3) < 0xfffffffffffffff) {
                    uVar14 = (long)puVar13 - lVar7 >> 2;
                    if (uVar12 <= uVar14) {
                      uVar12 = uVar14;
                    }
                    if (uVar12 != 0) goto LAB_005fb714;
                    lVar7 = 0;
                  }
                  else {
                    uVar12 = 0x1fffffffffffffff;
LAB_005fb714:
                    lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                  }
                  puVar16 = (undefined8 *)(lVar7 + lVar20 * 8);
                  *puVar16 = uVar6;
                  pvVar10 = (void *)*param_1;
                  sVar11 = param_1[1] - (long)pvVar10;
                  if (0 < (long)sVar11) {
                    memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                    pvVar10 = (void *)*param_1;
                  }
                  *param_1 = (long)((long)puVar16 - sVar11);
                  param_1[1] = (long)(puVar16 + 1);
                  param_1[2] = lVar7 + uVar12 * 8;
                  if (pvVar10 != (void *)0x0) {
                    FUN_002e2ea0(PTR_LAB_04373088);
                  }
                }
LAB_005fbadc:
                bVar2 = true;
              }
              local_c8 = 0x1a;
              cStack_c4 = 0;
              cStack_c3 = 0;
              cStack_c2 = 0;
              cStack_c1 = 0;
              uVar6 = CONCAT35(s_present_match_03938ddc._5_3_,s_present_match_03938ddc._0_5_);
              local_c0 = 0;
              cStack_bc = 0;
              cStack_bb = 0;
              uStack_b9 = 0;
              lStack_b8 = 0;
              *(ulong *)(pcVar22 + 5) =
                   CONCAT53(s_present_match_03938ddc._8_5_,s_present_match_03938ddc._5_3_);
              *(undefined8 *)pcVar22 = uVar6;
              cStack_ba = 0;
                    /* try { // try from 005fbb0c to 005fbb17 has its CatchHandler @ 005fca4c */
              lVar7 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              if (lVar18 != lVar7) {
                if (bVar2) {
                    /* try { // try from 005fbb40 to 005fbb67 has its CatchHandler @ 005fca2c */
                  FUN_002f2c60(&local_c8,
                               "field:present_match error: other header matcher already specified");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x407,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  if (puVar16 < (undefined8 *)param_1[2]) {
LAB_005fbc2c:
                    *puVar16 = uVar6;
                    *plVar3 = *plVar3 + 8;
                  }
                  else {
                    lVar7 = (long)puVar16 - *param_1 >> 3;
                    uVar12 = lVar7 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc838 to 005fc83f has its CatchHandler @ 005fc8cc */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar20 = param_1[2] - *param_1;
joined_r0x005fbc68:
                    if ((ulong)(lVar20 >> 3) < 0xfffffffffffffff) {
                      if (uVar12 <= (ulong)(lVar20 >> 2)) {
                        uVar12 = lVar20 >> 2;
                      }
                      if (uVar12 != 0) goto LAB_005fbc70;
                      lVar20 = 0;
                    }
                    else {
                      uVar12 = 0x1fffffffffffffff;
LAB_005fbc70:
                      lVar20 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                    }
                    puVar16 = (undefined8 *)(lVar20 + lVar7 * 8);
                    *puVar16 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    param_1[2] = lVar20 + uVar12 * 8;
                    *param_1 = (long)((long)puVar16 - sVar11);
                    param_1[1] = (long)(puVar16 + 1);
                    if (pvVar10 != (void *)0x0) {
                      FUN_002e2ea0(PTR_LAB_04373088);
                    }
                  }
                  bVar2 = true;
                }
                else if (*(int *)(lVar7 + 0x38) == 2) {
                  bVar2 = true;
                  *(undefined4 *)(lVar19 + -0x40) = 3;
                  *(undefined1 *)(lVar19 + -8) = 0;
                }
                else {
                  if (*(int *)(lVar7 + 0x38) != 1) {
                    /* try { // try from 005fbbf4 to 005fbc1b has its CatchHandler @ 005fc97c */
                    FUN_002f2c60(&local_c8,"field:present_match error: should be boolean");
                    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x414,&local_c8,0,0);
                    puVar16 = (undefined8 *)param_1[1];
                    if (puVar16 < (undefined8 *)param_1[2]) goto LAB_005fbc2c;
                    lVar7 = (long)puVar16 - *param_1 >> 3;
                    uVar12 = lVar7 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc830 to 005fc837 has its CatchHandler @ 005fc8d0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar20 = param_1[2] - *param_1;
                    goto joined_r0x005fbc68;
                  }
                  bVar2 = true;
                  *(undefined4 *)(lVar19 + -0x40) = 3;
                  *(undefined1 *)(lVar19 + -8) = 1;
                }
              }
              local_c8 = 0x18;
              cStack_c4 = 0;
              cStack_c3 = 0;
              cStack_c2 = 0;
              cStack_c1 = 0;
              local_c0 = 0;
              cStack_bc = 0;
              cStack_ba = 0;
              uStack_b9 = 0;
              lStack_b8 = 0;
              *(undefined8 *)pcVar22 = s_prefix_match_038c0263._0_8_;
              pcVar22[8] = 'a';
              pcVar22[9] = 't';
              pcVar22[10] = 'c';
              pcVar22[0xb] = 'h';
              cStack_bb = 0;
                    /* try { // try from 005fbd00 to 005fbd0b has its CatchHandler @ 005fca5c */
              lVar7 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              if (lVar18 != lVar7) {
                if (bVar2) {
                    /* try { // try from 005fbd34 to 005fbd5b has its CatchHandler @ 005fca1c */
                  FUN_002f2c60(&local_c8,
                               "field:prefix_match error: other header matcher already specified");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x41d,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar13 <= puVar16) {
                    lVar7 = *param_1;
                    lVar20 = (long)puVar16 - lVar7 >> 3;
                    uVar12 = lVar20 + 1;
                    if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc848 to 005fc84f has its CatchHandler @ 005fc8c4 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    goto LAB_005fbe30;
                  }
LAB_005fbe00:
                  *puVar16 = uVar6;
                  *plVar3 = *plVar3 + 8;
                }
                else if (*(int *)(lVar7 + 0x38) == 4) {
                  *(undefined4 *)(lVar19 + -0x40) = 4;
                  if (lVar19 + -0x28 != lVar7 + 0x40) {
                    uVar12 = *(ulong *)(lVar7 + 0x48);
                    lVar20 = *(long *)(lVar7 + 0x50);
                    if ((*(byte *)(lVar7 + 0x40) & 1) == 0) {
                      lVar20 = lVar7 + 0x41;
                      uVar12 = (ulong)(*(byte *)(lVar7 + 0x40) >> 1);
                    }
                    /* try { // try from 005fbdc0 to 005fbdc3 has its CatchHandler @ 005fc9b0 */
                    FUN_00291910(lVar19 + -0x28,lVar20,uVar12);
                  }
                }
                else {
                    /* try { // try from 005fbdc8 to 005fbdef has its CatchHandler @ 005fc9a8 */
                  FUN_002f2c60(&local_c8,"field:prefix_match error: should be string");
                  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x422,&local_c8,0,0);
                  puVar16 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar16 < puVar13) goto LAB_005fbe00;
                  lVar7 = *param_1;
                  lVar20 = (long)puVar16 - lVar7 >> 3;
                  uVar12 = lVar20 + 1;
                  if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc840 to 005fc847 has its CatchHandler @ 005fc8c8 */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
LAB_005fbe30:
                  if ((ulong)((long)puVar13 - lVar7 >> 3) < 0xfffffffffffffff) {
                    uVar14 = (long)puVar13 - lVar7 >> 2;
                    if (uVar12 <= uVar14) {
                      uVar12 = uVar14;
                    }
                    if (uVar12 != 0) goto LAB_005fbe5c;
                    lVar7 = 0;
                  }
                  else {
                    uVar12 = 0x1fffffffffffffff;
LAB_005fbe5c:
                    lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                  }
                  puVar16 = (undefined8 *)(lVar7 + lVar20 * 8);
                  *puVar16 = uVar6;
                  pvVar10 = (void *)*param_1;
                  sVar11 = param_1[1] - (long)pvVar10;
                  if (0 < (long)sVar11) {
                    memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                    pvVar10 = (void *)*param_1;
                  }
                  param_1[2] = lVar7 + uVar12 * 8;
                  *param_1 = (long)((long)puVar16 - sVar11);
                  param_1[1] = (long)(puVar16 + 1);
                  if (pvVar10 != (void *)0x0) {
                    FUN_002e2ea0(PTR_LAB_04373088);
                  }
                }
                bVar2 = true;
              }
              local_c8 = 0x18;
              cStack_c4 = 0;
              cStack_c3 = 0;
              cStack_c2 = 0;
              cStack_c1 = 0;
              local_c0 = 0;
              cStack_bc = 0;
              cStack_ba = 0;
              uStack_b9 = 0;
              lStack_b8 = 0;
              *(undefined8 *)pcVar22 = s_suffix_match_03906c67._0_8_;
              pcVar22[8] = 'a';
              pcVar22[9] = 't';
              pcVar22[10] = 'c';
              pcVar22[0xb] = 'h';
              cStack_bb = 0;
                    /* try { // try from 005fbeec to 005fbef7 has its CatchHandler @ 005fca6c */
              lVar8 = FUN_00500624(lVar8,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
              }
              if (lVar18 == lVar8) goto LAB_005fab5c;
              if (bVar2) {
                    /* try { // try from 005fbf20 to 005fbf47 has its CatchHandler @ 005fca28 */
                FUN_002f2c60(&local_c8,
                             "field:suffix_match error: other header matcher already specified");
                uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                     ,0x430,&local_c8,0,0);
                puVar16 = (undefined8 *)param_1[1];
                puVar13 = (undefined8 *)param_1[2];
                if (puVar16 < puVar13) {
LAB_005fbff0:
                  *puVar16 = uVar6;
                  goto LAB_005fab4c;
                }
                lVar18 = *param_1;
                lVar19 = (long)puVar16 - lVar18 >> 3;
                uVar12 = lVar19 + 1;
                if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc858 to 005fc85f has its CatchHandler @ 005fc8bc */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
              }
              else {
                if (*(int *)(lVar8 + 0x38) == 4) {
                  *(undefined4 *)(lVar19 + -0x40) = 5;
                  if (lVar19 + -0x28 != lVar8 + 0x40) {
                    uVar12 = *(ulong *)(lVar8 + 0x48);
                    lVar18 = *(long *)(lVar8 + 0x50);
                    if ((*(byte *)(lVar8 + 0x40) & 1) == 0) {
                      lVar18 = lVar8 + 0x41;
                      uVar12 = (ulong)(*(byte *)(lVar8 + 0x40) >> 1);
                    }
                    /* try { // try from 005fbfb0 to 005fbfb3 has its CatchHandler @ 005fc9b0 */
                    FUN_00291910(lVar19 + -0x28,lVar18,uVar12);
                  }
                  goto LAB_005fab5c;
                }
                    /* try { // try from 005fbfb8 to 005fbfdf has its CatchHandler @ 005fc9a0 */
                FUN_002f2c60(&local_c8,"field:suffix_match error: should be string");
                uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                     ,0x435,&local_c8,0,0);
                puVar16 = (undefined8 *)param_1[1];
                puVar13 = (undefined8 *)param_1[2];
                if (puVar16 < puVar13) goto LAB_005fbff0;
                lVar18 = *param_1;
                lVar19 = (long)puVar16 - lVar18 >> 3;
                uVar12 = lVar19 + 1;
                if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc850 to 005fc857 has its CatchHandler @ 005fc8c0 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
              }
              if ((ulong)((long)puVar13 - lVar18 >> 3) < 0xfffffffffffffff) {
                uVar14 = (long)puVar13 - lVar18 >> 2;
                if (uVar12 <= uVar14) {
                  uVar12 = uVar14;
                }
                if (uVar12 != 0) goto LAB_005fc03c;
                lVar18 = 0;
              }
              else {
                uVar12 = 0x1fffffffffffffff;
LAB_005fc03c:
                lVar18 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
              }
              puVar16 = (undefined8 *)(lVar18 + lVar19 * 8);
              *puVar16 = uVar6;
              pvVar10 = (void *)*param_1;
              sVar11 = param_1[1] - (long)pvVar10;
              if (0 < (long)sVar11) {
                memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                pvVar10 = (void *)*param_1;
              }
              *param_1 = (long)((long)puVar16 - sVar11);
              param_1[1] = (long)(puVar16 + 1);
              param_1[2] = lVar18 + uVar12 * 8;
joined_r0x005fadfc:
              if (pvVar10 != (void *)0x0) {
                FUN_002e2ea0(PTR_LAB_04373088);
              }
            }
            else {
                    /* try { // try from 005fabd4 to 005fabfb has its CatchHandler @ 005fcad4 */
              FUN_002f2c60(&local_c8,"value should be of type object");
              uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                   ,0x395,&local_c8,0,0);
              puVar16 = (undefined8 *)param_1[1];
              if ((undefined8 *)param_1[2] <= puVar16) {
                lVar18 = (long)puVar16 - *param_1 >> 3;
                uVar12 = lVar18 + 1;
                if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 005fc7c0 to 005fc7c7 has its CatchHandler @ 005fc908 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar19 = param_1[2] - *param_1;
                if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
                  uVar14 = lVar19 >> 2;
                  if (uVar12 <= uVar14) {
                    uVar12 = uVar14;
                  }
                  if (uVar12 != 0) goto LAB_005fadac;
                  lVar19 = 0;
                }
                else {
                  uVar12 = 0x1fffffffffffffff;
LAB_005fadac:
                  lVar19 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
                }
                puVar16 = (undefined8 *)(lVar19 + lVar18 * 8);
                *puVar16 = uVar6;
                pvVar10 = (void *)*param_1;
                sVar11 = param_1[1] - (long)pvVar10;
                if (0 < (long)sVar11) {
                  memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
                  pvVar10 = (void *)*param_1;
                }
                *param_1 = (long)((long)puVar16 - sVar11);
                param_1[1] = (long)(puVar16 + 1);
                param_1[2] = lVar19 + uVar12 * 8;
                goto joined_r0x005fadfc;
              }
              *puVar16 = uVar6;
LAB_005fab4c:
              *plVar3 = *plVar3 + 8;
            }
LAB_005fab5c:
            lVar18 = *(long *)(piVar5 + 0x1c);
            uVar23 = uVar23 + 1;
          } while (uVar23 < (ulong)((*(long *)(piVar5 + 0x1e) - lVar18 >> 4) * -0x3333333333333333))
          ;
        }
      }
      else {
                    /* try { // try from 005fc098 to 005fc0c3 has its CatchHandler @ 005fc988 */
        FUN_002f2c60(&local_c8,"field:headers error: should be array");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x38e,&local_c8,0,0);
        puVar16 = (undefined8 *)param_1[1];
        if (puVar16 < (undefined8 *)param_1[2]) {
          *puVar16 = uVar6;
          param_1[1] = param_1[1] + 8;
        }
        else {
          lVar18 = (long)puVar16 - *param_1 >> 3;
          uVar23 = lVar18 + 1;
          if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 005fc868 to 005fc86f has its CatchHandler @ 005fc988 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar19 = param_1[2] - *param_1;
          if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
            uVar12 = lVar19 >> 2;
            if (uVar23 <= uVar12) {
              uVar23 = uVar12;
            }
            if (uVar23 != 0) goto LAB_005fc12c;
            lVar19 = 0;
          }
          else {
            uVar23 = 0x1fffffffffffffff;
LAB_005fc12c:
            lVar19 = FUN_002e2e80(PTR_FUN_04373078,uVar23 << 3);
          }
          puVar16 = (undefined8 *)(lVar19 + lVar18 * 8);
          *puVar16 = uVar6;
          pvVar10 = (void *)*param_1;
          sVar11 = param_1[1] - (long)pvVar10;
          if (0 < (long)sVar11) {
            memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
            pvVar10 = (void *)*param_1;
          }
          *param_1 = (long)((long)puVar16 - sVar11);
          param_1[1] = (long)(puVar16 + 1);
          param_1[2] = lVar19 + uVar23 * 8;
          if (pvVar10 != (void *)0x0) {
            FUN_002e2ea0(PTR_LAB_04373088);
          }
        }
      }
    }
    local_c8 = CONCAT31(s_match_fraction_03998db6._0_3_,0x1c);
    cStack_c4 = s_match_fraction_03998db6[3];
    cStack_c3 = s_match_fraction_03998db6[4];
    cStack_c2 = s_match_fraction_03998db6[5];
    lStack_b8 = 0;
    uStack_b9 = 0;
    cStack_c1 = s_match_fraction_03998db6[6];
    local_c0 = (uint)(CONCAT62(s_match_fraction_03998db6._8_6_,s_match_fraction_03998db6._6_2_) >> 8
                     );
    cStack_bc = s_match_fraction_03998db6[0xb];
    cStack_bb = s_match_fraction_03998db6[0xc];
    cStack_ba = s_match_fraction_03998db6[0xd];
                    /* try { // try from 005fc1ac to 005fc1bb has its CatchHandler @ 005fc9c4 */
    piVar5 = (int *)FUN_00500624(piVar9,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
    }
    if (param_2 != piVar5) {
      if (piVar5[0xe] == 3) {
        if ((*(byte *)(piVar5 + 0x10) & 1) == 0) {
          lVar18 = (long)piVar5 + 0x41;
        }
        else {
          lVar18 = *(long *)(piVar5 + 0x14);
        }
                    /* try { // try from 005fc258 to 005fc25b has its CatchHandler @ 005fc948 */
        iVar4 = FUN_002ec930(lVar18);
        if ((char)param_4[0x10] == '\0') {
          *(undefined1 *)(param_4 + 0x10) = 1;
        }
        param_4[0x11] = iVar4;
      }
      else {
                    /* try { // try from 005fc204 to 005fc22f has its CatchHandler @ 005fc984 */
        FUN_002f2c60(&local_c8,"field:match_fraction error:must be of type number");
        uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x447,&local_c8,0,0);
        puVar16 = (undefined8 *)param_1[1];
        if (puVar16 < (undefined8 *)param_1[2]) {
          *puVar16 = uVar6;
          param_1[1] = param_1[1] + 8;
        }
        else {
          lVar18 = (long)puVar16 - *param_1 >> 3;
          uVar23 = lVar18 + 1;
          if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 005fc870 to 005fc877 has its CatchHandler @ 005fc984 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar19 = param_1[2] - *param_1;
          if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
            uVar12 = lVar19 >> 2;
            if (uVar23 <= uVar12) {
              uVar23 = uVar12;
            }
            if (uVar23 != 0) goto LAB_005fc2b8;
            lVar19 = 0;
          }
          else {
            uVar23 = 0x1fffffffffffffff;
LAB_005fc2b8:
            lVar19 = FUN_002e2e80(PTR_FUN_04373078,uVar23 << 3);
          }
          puVar16 = (undefined8 *)(lVar19 + lVar18 * 8);
          *puVar16 = uVar6;
          pvVar10 = (void *)*param_1;
          sVar11 = param_1[1] - (long)pvVar10;
          if (0 < (long)sVar11) {
            memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
            pvVar10 = (void *)*param_1;
          }
          *param_1 = (long)((long)puVar16 - sVar11);
          param_1[1] = (long)(puVar16 + 1);
          param_1[2] = lVar19 + uVar23 * 8;
          if (pvVar10 != (void *)0x0) {
            FUN_002e2ea0(PTR_LAB_04373088);
          }
        }
      }
    }
    local_c8 = 0x7463610c;
    cStack_c4 = 0x69;
    local_c0 = 0;
    cStack_bc = 0;
    cStack_bb = 0;
    cStack_ba = 0;
    uStack_b9 = 0;
    lStack_b8 = 0;
    cStack_c3 = 0x6f;
    cStack_c2 = 0x6e;
    cStack_c1 = 0;
                    /* try { // try from 005fc334 to 005fc33f has its CatchHandler @ 005fc9b4 */
    piVar9 = (int *)FUN_00500624(piVar9,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,lStack_b8);
    }
    if (param_2 == piVar9) {
                    /* try { // try from 005fc3f4 to 005fc44f has its CatchHandler @ 005fc99c */
      FUN_002f2c60(&local_c8,"field:action error:required field missing");
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                           ,0x451,&local_c8,0,0);
      puVar16 = (undefined8 *)param_1[1];
      puVar13 = (undefined8 *)param_1[2];
      if (puVar16 < puVar13) goto LAB_005fc4f0;
      lVar18 = *param_1;
      lVar19 = (long)puVar16 - lVar18 >> 3;
      uVar23 = lVar19 + 1;
      if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_005fc51c;
    }
    if (piVar9[0xe] != 4) {
                    /* try { // try from 005fc450 to 005fc4ab has its CatchHandler @ 005fc980 */
      FUN_002f2c60(&local_c8,"field:action error:should be of type string");
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                           ,0x454,&local_c8,0,0);
      puVar16 = (undefined8 *)param_1[1];
      puVar13 = (undefined8 *)param_1[2];
      if (puVar16 < puVar13) goto LAB_005fc4f0;
      lVar18 = *param_1;
      lVar19 = (long)puVar16 - lVar18 >> 3;
      uVar23 = lVar19 + 1;
      if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_005fc51c;
    }
    pbVar1 = (byte *)(param_4 + 0x12);
    if (pbVar1 != (byte *)(piVar9 + 0x10)) {
      uVar23 = *(ulong *)(piVar9 + 0x12);
      lVar18 = *(long *)(piVar9 + 0x14);
      if ((*(byte *)(piVar9 + 0x10) & 1) == 0) {
        lVar18 = (long)piVar9 + 0x41;
        uVar23 = (ulong)(*(byte *)(piVar9 + 0x10) >> 1);
      }
                    /* try { // try from 005fc398 to 005fc39f has its CatchHandler @ 005fc998 */
      FUN_00291910(pbVar1,lVar18,uVar23);
    }
    if ((*pbVar1 & 1) == 0) {
      if (*pbVar1 >> 1 == 0) goto LAB_005fc4b4;
    }
    else if (*(long *)(param_4 + 0x14) == 0) {
LAB_005fc4b4:
                    /* try { // try from 005fc4b4 to 005fc4df has its CatchHandler @ 005fc92c */
      FUN_002f2c60(&local_c8,"field:action error:cannot be empty");
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                           ,0x459,&local_c8,0,0);
      puVar16 = (undefined8 *)param_1[1];
      puVar13 = (undefined8 *)param_1[2];
      if (puVar16 < puVar13) goto LAB_005fc4f0;
      lVar18 = *param_1;
      lVar19 = (long)puVar16 - lVar18 >> 3;
      uVar23 = lVar19 + 1;
      if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 005fc888 to 005fc88f has its CatchHandler @ 005fc92c */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_005fc51c;
    }
                    /* try { // try from 005fc3b0 to 005fc3bf has its CatchHandler @ 005fc928 */
    lVar18 = FUN_005eaf20(param_3,pbVar1);
    if (param_3 + 8 == lVar18) {
      local_c8 = 0x38990b4;
      cStack_c4 = 0;
      cStack_c3 = 0;
      cStack_c2 = 0;
      cStack_c1 = 0;
      local_c0 = 0x13;
      cStack_bc = 0;
      cStack_bb = 0;
      cStack_ba = 0;
      uStack_b9 = 0;
      if ((*pbVar1 & 1) == 0) {
        local_f8 = (long)param_4 + 0x49;
        local_f0 = (ulong)(*pbVar1 >> 1);
      }
      else {
        local_f0 = *(ulong *)(param_4 + 0x14);
        local_f8 = *(long *)(param_4 + 0x16);
        if ((long)local_f0 < 0) {
                    /* try { // try from 005fc890 to 005fc8af has its CatchHandler @ 005fc8b8 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
      }
      local_128 = " does not exist";
      uStack_120 = 0xf;
                    /* try { // try from 005fc5e0 to 005fc5f7 has its CatchHandler @ 005fc90c */
      FUN_002ecfd0(local_98,&local_c8,&local_f8,&local_128);
      uVar23 = (ulong)local_98 | 1;
      if ((local_98[0] & 1) != 0) {
        uVar23 = local_88;
      }
                    /* try { // try from 005fc60c to 005fc62f has its CatchHandler @ 005fc914 */
      FUN_002f2c60(auStack_80,uVar23);
      uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                           ,0x460,auStack_80,0,0);
      puVar16 = (undefined8 *)param_1[1];
      if (puVar16 < (undefined8 *)param_1[2]) {
        *puVar16 = uVar6;
        param_1[1] = param_1[1] + 8;
      }
      else {
        lVar18 = (long)puVar16 - *param_1 >> 3;
        uVar23 = lVar18 + 1;
        if (uVar23 >> 0x3d != 0) {
                    /* try { // try from 005fc8b0 to 005fc8b7 has its CatchHandler @ 005fc914 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar19 = param_1[2] - *param_1;
        if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
          uVar12 = lVar19 >> 2;
          if (uVar23 <= uVar12) {
            uVar23 = uVar12;
          }
          if (uVar23 != 0) goto LAB_005fc6a0;
          lVar19 = 0;
        }
        else {
          uVar23 = 0x1fffffffffffffff;
LAB_005fc6a0:
          lVar19 = FUN_002e2e80(PTR_FUN_04373078,uVar23 << 3);
        }
        puVar16 = (undefined8 *)(lVar19 + lVar18 * 8);
        *puVar16 = uVar6;
        pvVar10 = (void *)*param_1;
        sVar11 = param_1[1] - (long)pvVar10;
        if (0 < (long)sVar11) {
          memcpy((void *)((long)puVar16 - sVar11),pvVar10,sVar11);
          pvVar10 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar16 - sVar11);
        param_1[1] = (long)(puVar16 + 1);
        param_1[2] = lVar19 + uVar23 * 8;
        if (pvVar10 != (void *)0x0) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
      if ((local_98[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_88);
      }
    }
                    /* try { // try from 005fc710 to 005fc71b has its CatchHandler @ 005fc998 */
    __src = (__tree_node_base *)FUN_003668d8(param_5,pbVar1);
    if ((__tree_node_base *)(param_5 + 1) == __src) {
      return;
    }
    plVar3 = *(long **)(__src + 8);
    if (*(long **)(__src + 8) == (long *)0x0) {
      p_Var17 = __src + 0x10;
      plVar15 = *(long **)p_Var17;
      if ((__tree_node_base *)*plVar15 != __src) {
        do {
          lVar18 = *(long *)p_Var17;
          p_Var17 = (__tree_node_base *)(lVar18 + 0x10);
          plVar15 = *(long **)p_Var17;
        } while (*plVar15 != lVar18);
      }
    }
    else {
      do {
        plVar15 = plVar3;
        plVar3 = (long *)*plVar15;
      } while ((long *)*plVar15 != (long *)0x0);
    }
    if ((__tree_node_base *)*param_5 == __src) {
      *param_5 = plVar15;
    }
    param_5[2] = param_5[2] + -1;
    std::__tree_remove<std::__tree_node_base<void*>*>((__tree_node_base *)param_5[1],__src);
    if (((byte)__src[0x20] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(__src + 0x30));
    }
  }
  else {
                    /* try { // try from 005fa500 to 005fa55b has its CatchHandler @ 005fca38 */
    FUN_002f2c60(&local_c8,"value should be of type object");
    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                         ,0x34f,&local_c8,0,0);
    puVar16 = (undefined8 *)param_1[1];
    puVar13 = (undefined8 *)param_1[2];
    if (puVar16 < puVar13) {
LAB_005fc4f0:
      *puVar16 = uVar6;
      param_1[1] = param_1[1] + 8;
      goto LAB_005fc5a0;
    }
    lVar18 = *param_1;
    lVar19 = (long)puVar16 - lVar18 >> 3;
    uVar23 = lVar19 + 1;
    if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
LAB_005fc51c:
    if ((ulong)((long)puVar13 - lVar18 >> 3) < 0xfffffffffffffff) {
      uVar12 = (long)puVar13 - lVar18 >> 2;
      if (uVar23 <= uVar12) {
        uVar23 = uVar12;
      }
      if (uVar23 != 0) goto LAB_005fc548;
      lVar18 = 0;
    }
    else {
      uVar23 = 0x1fffffffffffffff;
LAB_005fc548:
      lVar18 = FUN_002e2e80(PTR_FUN_04373078,uVar23 << 3);
    }
    puVar16 = (undefined8 *)(lVar18 + lVar19 * 8);
    *puVar16 = uVar6;
    __src = (__tree_node_base *)*param_1;
    sVar11 = param_1[1] - (long)__src;
    if (0 < (long)sVar11) {
      memcpy((void *)((long)puVar16 - sVar11),__src,sVar11);
      __src = (__tree_node_base *)*param_1;
    }
    *param_1 = (long)((long)puVar16 - sVar11);
    param_1[1] = (long)(puVar16 + 1);
    param_1[2] = lVar18 + uVar23 * 8;
    if (__src == (__tree_node_base *)0x0) {
      return;
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,__src);
LAB_005fc5a0:
  return;
}


