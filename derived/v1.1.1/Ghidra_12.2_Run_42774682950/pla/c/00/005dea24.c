/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005dea24; name: FUN_005dea24
 */


/* WARNING: Removing unreachable block (ram,0x005df28c) */
/* WARNING: Removing unreachable block (ram,0x005df290) */
/* WARNING: Removing unreachable block (ram,0x005df298) */
/* WARNING: Removing unreachable block (ram,0x005df2a0) */
/* WARNING: Removing unreachable block (ram,0x005df2a4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_005dea24(long param_1)

{
  ulong uVar1;
  long ******pppppplVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  uint16_t uVar6;
  size_t __n;
  undefined8 *******pppppppuVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  ulong uVar13;
  long *******ppppppplVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long *******ppppppplVar20;
  undefined8 *******pppppppuVar21;
  long *******ppppppplVar22;
  long *plVar23;
  long *******ppppppplVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  char *__string;
  int *piVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  undefined8 ******ppppppuVar31;
  long ******pppppplVar32;
  undefined1 auStack_378 [168];
  ulong local_2d0;
  long *******ppppppplStack_2c8;
  long ******pppppplStack_2c0;
  long ******local_2b8;
  long ******pppppplStack_2b0;
  undefined8 local_238 [19];
  undefined8 local_1a0;
  long ******local_198;
  undefined8 ******local_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 ******ppppppuStack_178;
  ulong local_170;
  undefined8 *******local_168;
  ulong local_160;
  undefined1 local_124 [52];
  undefined8 local_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  local_238[0] = 0;
  local_1a0 = 0;
  local_198 = (long ******)0x0;
  if (*(char *)(param_1 + 0x140) == '\0') {
    lVar15 = *(long *)(param_1 + 0x138);
    if (*(long *)(param_1 + 0x70) == 0) {
      lVar16 = 0;
      local_2d0 = 0;
      lVar25 = *(long *)(lVar15 + 0x18);
      lVar12 = *(long *)(lVar15 + 0x20);
      if (lVar12 != lVar25) goto LAB_005deae8;
    }
    else {
      lVar16 = *(long *)(*(long *)(param_1 + 0x70) + 0x170);
      local_2d0 = 0;
      lVar25 = *(long *)(lVar15 + 0x18);
      lVar12 = *(long *)(lVar15 + 0x20);
      if (lVar12 != lVar25) {
LAB_005deae8:
        local_2d0 = 0;
        uVar27 = 0;
        do {
          piVar28 = (int *)(lVar25 + uVar27 * 0x4c);
          if ((*(short *)((long)piVar28 + 0x16) == 0 && *(char *)((long)piVar28 + 0x4a) == '\0') &&
             (*piVar28 == 0x10 || *piVar28 == 4)) {
            uStack_88 = 0;
            local_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_a8 = 0;
            local_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            pppppplStack_e8 = (long ******)0x0;
            local_f0 = (long *******)0x0;
            pppppplStack_d8 = (long ******)0x0;
            pppppplStack_e0 = (long ******)0x0;
            local_70 = 0;
            if (*(char *)((long)piVar28 + 0x4a) == '\0') {
                    /* try { // try from 005deb9c to 005deb9f has its CatchHandler @ 005df67c */
              uVar6 = htons((uint16_t)piVar28[5]);
              if (*piVar28 == 0x10) {
                lVar12 = lVar25 + uVar27 * 0x4c;
                local_70 = 0x1c;
                local_f0._0_2_ = CONCAT11(0x1c,(undefined1)local_f0);
                pppppplStack_e0 = *(long *******)(lVar12 + 0xc);
                pppppplStack_e8 = *(long *******)(lVar12 + 4);
              }
              else {
                if (*piVar28 != 4) goto LAB_005debf4;
                local_70 = 0x10;
                local_f0._0_2_ = CONCAT11(2,(undefined1)local_f0);
                local_f0._0_4_ = (uint)(ushort)local_f0;
                local_f0 = (long *******)
                           CONCAT44(*(undefined4 *)(lVar25 + uVar27 * 0x4c + 4),(uint)local_f0);
              }
              local_f0._0_4_ = CONCAT22(uVar6,(ushort)local_f0);
            }
LAB_005debf4:
            __string = (char *)(lVar25 + uVar27 * 0x4c + 0x18);
            if (*__string == '\0') {
                    /* try { // try from 005dec2c to 005dec37 has its CatchHandler @ 005df66c */
              FUN_00308b60(&local_170,&local_f0);
              uVar1 = (ulong)&local_170 | 1;
              if ((local_170 & 1) != 0) {
                uVar1 = local_160;
              }
                    /* try { // try from 005dec4c to 005dec67 has its CatchHandler @ 005df650 */
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                           ,0x22c,1,
                           "Missing LB token for backend address \'%s\'. The empty token will be used instead"
                           ,uVar1);
              if ((local_170 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_160);
              }
              local_124[0] = 0;
            }
            else {
                    /* try { // try from 005dec00 to 005dec0b has its CatchHandler @ 005df730 */
              __n = strnlen(__string,0x32);
              memcpy(local_124,__string,__n);
              local_124[__n] = 0;
            }
            local_170 = 0;
                    /* try { // try from 005dec88 to 005deca3 has its CatchHandler @ 005df75c */
            FUN_002e5160(&local_190,"grpc.grpclb_address_lb_token",local_124,&PTR_LAB_0418de98);
            bVar5 = (local_170 & 1) != 0;
            pppppppuVar11 = &local_168;
            if (bVar5) {
              pppppppuVar11 = local_168;
            }
            uVar1 = 2;
            if (bVar5) {
              uVar1 = local_160;
            }
            if (local_170 >> 1 == uVar1) {
              pppppppuVar7 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar1 << 6);
              pppppppuVar18 = pppppppuVar7 + uVar1 * 4;
              pppppppuVar18[1] = ppppppuStack_188;
              *pppppppuVar18 = local_190;
              pppppppuVar18[3] = ppppppuStack_178;
              pppppppuVar18[2] = ppppppuStack_180;
              if (pppppppuVar7 != (undefined8 *******)0x0) {
                if (uVar1 != 0) {
                  uVar13 = uVar1 & 3;
                  if (uVar1 - 1 < 3) {
                    lVar25 = 0;
                    pppppppuVar19 = pppppppuVar11;
                  }
                  else {
                    lVar25 = 0;
                    pppppppuVar18 = pppppppuVar7 + 8;
                    pppppppuVar21 = pppppppuVar11;
                    do {
                      pppppppuVar19 = pppppppuVar21 + 0x10;
                      ppppppuVar29 = *pppppppuVar21;
                      ppppppuVar31 = pppppppuVar21[3];
                      ppppppuVar30 = pppppppuVar21[2];
                      pppppppuVar18[-7] = pppppppuVar21[1];
                      pppppppuVar18[-8] = ppppppuVar29;
                      pppppppuVar18[-5] = ppppppuVar31;
                      pppppppuVar18[-6] = ppppppuVar30;
                      lVar25 = lVar25 + 4;
                      ppppppuVar29 = pppppppuVar21[4];
                      ppppppuVar31 = pppppppuVar21[7];
                      ppppppuVar30 = pppppppuVar21[6];
                      pppppppuVar18[-3] = pppppppuVar21[5];
                      pppppppuVar18[-4] = ppppppuVar29;
                      pppppppuVar18[-1] = ppppppuVar31;
                      pppppppuVar18[-2] = ppppppuVar30;
                      ppppppuVar29 = pppppppuVar21[8];
                      ppppppuVar31 = pppppppuVar21[0xb];
                      ppppppuVar30 = pppppppuVar21[10];
                      pppppppuVar18[1] = pppppppuVar21[9];
                      *pppppppuVar18 = ppppppuVar29;
                      pppppppuVar18[3] = ppppppuVar31;
                      pppppppuVar18[2] = ppppppuVar30;
                      ppppppuVar29 = pppppppuVar21[0xc];
                      ppppppuVar31 = pppppppuVar21[0xf];
                      ppppppuVar30 = pppppppuVar21[0xe];
                      pppppppuVar18[5] = pppppppuVar21[0xd];
                      pppppppuVar18[4] = ppppppuVar29;
                      pppppppuVar18[7] = ppppppuVar31;
                      pppppppuVar18[6] = ppppppuVar30;
                      pppppppuVar18 = pppppppuVar18 + 0x10;
                      pppppppuVar21 = pppppppuVar19;
                    } while (uVar1 - uVar13 != lVar25);
                  }
                  if (uVar13 != 0) {
                    pppppppuVar18 = pppppppuVar7 + lVar25 * 4;
                    do {
                      ppppppuVar29 = *pppppppuVar19;
                      ppppppuVar31 = pppppppuVar19[3];
                      ppppppuVar30 = pppppppuVar19[2];
                      uVar13 = uVar13 - 1;
                      pppppppuVar18[1] = pppppppuVar19[1];
                      *pppppppuVar18 = ppppppuVar29;
                      pppppppuVar18[3] = ppppppuVar31;
                      pppppppuVar18[2] = ppppppuVar30;
                      pppppppuVar18 = pppppppuVar18 + 4;
                      pppppppuVar19 = pppppppuVar19 + 4;
                    } while (uVar13 != 0);
                  }
                }
                if (pppppppuVar11 != (undefined8 *******)0x0) {
                  memset(pppppppuVar11,0xab,uVar1 << 5);
                }
                if ((local_170 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_168);
                }
                local_170 = local_170 | 1;
                local_168 = pppppppuVar7;
                local_160 = uVar1 << 1;
              }
            }
            else {
              pppppppuVar11 = pppppppuVar11 + (local_170 >> 1) * 4;
              pppppppuVar11[1] = ppppppuStack_188;
              *pppppppuVar11 = local_190;
              pppppppuVar11[3] = ppppppuStack_178;
              pppppppuVar11[2] = ppppppuStack_180;
            }
            local_170 = local_170 + 2;
            if (lVar16 != 0) {
                    /* try { // try from 005dedf8 to 005dee13 has its CatchHandler @ 005df74c */
              FUN_002e5160(&local_190,"grpc.grpclb_address_client_stats",lVar16,&PTR_LAB_0418deb0);
              bVar5 = (local_170 & 1) != 0;
              pppppppuVar11 = &local_168;
              if (bVar5) {
                pppppppuVar11 = local_168;
              }
              uVar1 = 2;
              if (bVar5) {
                uVar1 = local_160;
              }
              if (local_170 >> 1 == uVar1) {
                pppppppuVar7 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar1 << 6);
                pppppppuVar18 = pppppppuVar7 + uVar1 * 4;
                pppppppuVar18[1] = ppppppuStack_188;
                *pppppppuVar18 = local_190;
                pppppppuVar18[3] = ppppppuStack_178;
                pppppppuVar18[2] = ppppppuStack_180;
                if (pppppppuVar7 != (undefined8 *******)0x0) {
                  if (uVar1 != 0) {
                    uVar13 = uVar1 & 3;
                    if (uVar1 - 1 < 3) {
                      lVar25 = 0;
                      pppppppuVar19 = pppppppuVar11;
                    }
                    else {
                      lVar25 = 0;
                      pppppppuVar18 = pppppppuVar7 + 8;
                      pppppppuVar21 = pppppppuVar11;
                      do {
                        pppppppuVar19 = pppppppuVar21 + 0x10;
                        ppppppuVar29 = *pppppppuVar21;
                        ppppppuVar31 = pppppppuVar21[3];
                        ppppppuVar30 = pppppppuVar21[2];
                        pppppppuVar18[-7] = pppppppuVar21[1];
                        pppppppuVar18[-8] = ppppppuVar29;
                        pppppppuVar18[-5] = ppppppuVar31;
                        pppppppuVar18[-6] = ppppppuVar30;
                        lVar25 = lVar25 + 4;
                        ppppppuVar29 = pppppppuVar21[4];
                        ppppppuVar31 = pppppppuVar21[7];
                        ppppppuVar30 = pppppppuVar21[6];
                        pppppppuVar18[-3] = pppppppuVar21[5];
                        pppppppuVar18[-4] = ppppppuVar29;
                        pppppppuVar18[-1] = ppppppuVar31;
                        pppppppuVar18[-2] = ppppppuVar30;
                        ppppppuVar29 = pppppppuVar21[8];
                        ppppppuVar31 = pppppppuVar21[0xb];
                        ppppppuVar30 = pppppppuVar21[10];
                        pppppppuVar18[1] = pppppppuVar21[9];
                        *pppppppuVar18 = ppppppuVar29;
                        pppppppuVar18[3] = ppppppuVar31;
                        pppppppuVar18[2] = ppppppuVar30;
                        ppppppuVar29 = pppppppuVar21[0xc];
                        ppppppuVar31 = pppppppuVar21[0xf];
                        ppppppuVar30 = pppppppuVar21[0xe];
                        pppppppuVar18[5] = pppppppuVar21[0xd];
                        pppppppuVar18[4] = ppppppuVar29;
                        pppppppuVar18[7] = ppppppuVar31;
                        pppppppuVar18[6] = ppppppuVar30;
                        pppppppuVar18 = pppppppuVar18 + 0x10;
                        pppppppuVar21 = pppppppuVar19;
                      } while (uVar1 - uVar13 != lVar25);
                    }
                    if (uVar13 != 0) {
                      pppppppuVar18 = pppppppuVar7 + lVar25 * 4;
                      do {
                        ppppppuVar29 = *pppppppuVar19;
                        ppppppuVar31 = pppppppuVar19[3];
                        ppppppuVar30 = pppppppuVar19[2];
                        uVar13 = uVar13 - 1;
                        pppppppuVar18[1] = pppppppuVar19[1];
                        *pppppppuVar18 = ppppppuVar29;
                        pppppppuVar18[3] = ppppppuVar31;
                        pppppppuVar18[2] = ppppppuVar30;
                        pppppppuVar18 = pppppppuVar18 + 4;
                        pppppppuVar19 = pppppppuVar19 + 4;
                      } while (uVar13 != 0);
                    }
                  }
                  if (pppppppuVar11 != (undefined8 *******)0x0) {
                    memset(pppppppuVar11,0xab,uVar1 << 5);
                  }
                  if ((local_170 & 1) != 0) {
                    FUN_002e2ea0(PTR_LAB_04373088,local_168);
                  }
                  local_170 = local_170 | 1;
                  local_168 = pppppppuVar7;
                  local_160 = uVar1 << 1;
                }
              }
              else {
                pppppppuVar11 = pppppppuVar11 + (local_170 >> 1) * 4;
                pppppppuVar11[1] = ppppppuStack_188;
                *pppppppuVar11 = local_190;
                pppppppuVar11[3] = ppppppuStack_178;
                pppppppuVar11[2] = ppppppuStack_180;
              }
              local_170 = local_170 + 2;
            }
            pppppppuVar11 = &local_168;
            if ((local_170 & 1) != 0) {
              pppppppuVar11 = local_168;
            }
                    /* try { // try from 005def68 to 005def83 has its CatchHandler @ 005df76c */
            local_190 = (undefined8 ******)FUN_002e4250(0,pppppppuVar11,local_170 >> 1);
            FUN_005dfa80(&local_2d0,&local_f0,&local_190);
            pppppppuVar11 = &local_168;
            if ((((local_170 & 1) != 0) &&
                (pppppppuVar11 = local_168, local_168 == (undefined8 *******)0x0)) ||
               (memset(pppppppuVar11,0xab,(local_170 & 0xffffffffffffffe) << 4),
               (local_170 & 1) != 0)) {
              FUN_002e2ea0(PTR_LAB_04373088,local_168);
            }
            lVar25 = *(long *)(lVar15 + 0x18);
            lVar12 = *(long *)(lVar15 + 0x20);
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 < (ulong)((lVar12 - lVar25 >> 2) * -0x79435e50d79435e5));
      }
    }
                    /* try { // try from 005defbc to 005defc7 has its CatchHandler @ 005df544 */
    FUN_0050d35c(local_238,&local_2d0);
    if ((local_2d0 & 1) == 0) {
      ppppppplVar24 = (long *******)&ppppppplStack_2c8;
LAB_005defe4:
      uVar27 = local_2d0 >> 1;
      ppppppplVar14 = ppppppplVar24 + uVar27 * 0x12 + -1;
      lVar15 = uVar27 + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        pppppplVar9 = *ppppppplVar14;
        ppppppplVar14 = ppppppplVar14 + -0x12;
                    /* try { // try from 005df008 to 005df00b has its CatchHandler @ 005df82c */
        FUN_002e4a10(pppppplVar9);
      }
      memset(ppppppplVar24,0xab,uVar27 * 0x90);
      if ((local_2d0 & 1) != 0) goto LAB_005df03c;
    }
    else {
      ppppppplVar24 = ppppppplStack_2c8;
      if (ppppppplStack_2c8 != (long *******)0x0) goto LAB_005defe4;
      ppppppplStack_2c8 = (long *******)0x0;
LAB_005df03c:
      FUN_002e2ea0(PTR_LAB_04373088,ppppppplStack_2c8);
    }
    iVar26 = 1;
  }
  else {
    if ((undefined8 *)(param_1 + 0x148) != local_238) {
      lVar15 = param_1 + 0x150;
      if ((*(ulong *)(param_1 + 0x148) & 1) != 0) {
        lVar15 = *(long *)(param_1 + 0x150);
      }
                    /* try { // try from 005deaa0 to 005deaa7 has its CatchHandler @ 005df63c */
      FUN_0050d74c(local_238,lVar15,
                   ((long)((*(ulong *)(param_1 + 0x148) >> 1) * 0x90) >> 4) * -0x71c71c71c71c71c7);
    }
    iVar26 = 0;
  }
  local_2d0 = 0;
                    /* try { // try from 005df050 to 005df063 has its CatchHandler @ 005df6dc */
  FUN_002e5140(&local_f0,"grpc.address_is_backend_from_grpclb_load_balancer",iVar26);
  pppppplStack_2b0 = pppppplStack_d8;
  local_2b8 = pppppplStack_e0;
  pppppplStack_2c0 = pppppplStack_e8;
  ppppppplStack_2c8 = local_f0;
  local_2d0 = local_2d0 + 2;
  if (iVar26 == 0) goto LAB_005df168;
                    /* try { // try from 005df088 to 005df09b has its CatchHandler @ 005df62c */
  FUN_002e5140(&local_f0,"grpc.inhibit_health_checking",1);
  pppppplVar10 = pppppplStack_d8;
  pppppplVar9 = pppppplStack_e0;
  ppppppplVar14 = local_f0;
  bVar5 = (local_2d0 & 1) != 0;
  ppppppplVar24 = (long *******)&ppppppplStack_2c8;
  if (bVar5) {
    ppppppplVar24 = ppppppplStack_2c8;
  }
  pppppplVar2 = (long ******)0x2;
  if (bVar5) {
    pppppplVar2 = pppppplStack_2c0;
  }
  if ((long ******)(local_2d0 >> 1) == pppppplVar2) {
    ppppppplVar8 = (long *******)FUN_002e2e80(PTR_FUN_04373078,(long)pppppplVar2 << 6);
    ppppppplVar14 = ppppppplVar8 + (long)pppppplVar2 * 4;
    ppppppplVar14[1] = pppppplStack_e8;
    *ppppppplVar14 = (long ******)local_f0;
    ppppppplVar14[3] = pppppplStack_d8;
    ppppppplVar14[2] = pppppplStack_e0;
    if (ppppppplVar8 != (long *******)0x0) {
      if (pppppplVar2 != (long ******)0x0) {
        if (pppppplVar2 == (long ******)0x1) {
          lVar15 = 0;
          ppppppplVar20 = ppppppplVar24;
        }
        else {
          lVar15 = 0;
          ppppppplVar14 = ppppppplVar8 + 4;
          ppppppplVar22 = ppppppplVar24;
          do {
            ppppppplVar20 = ppppppplVar22 + 8;
            pppppplVar9 = *ppppppplVar22;
            pppppplVar32 = ppppppplVar22[3];
            pppppplVar10 = ppppppplVar22[2];
            ppppppplVar14[-3] = ppppppplVar22[1];
            ppppppplVar14[-4] = pppppplVar9;
            ppppppplVar14[-1] = pppppplVar32;
            ppppppplVar14[-2] = pppppplVar10;
            lVar15 = lVar15 + 2;
            pppppplVar9 = ppppppplVar22[4];
            pppppplVar32 = ppppppplVar22[7];
            pppppplVar10 = ppppppplVar22[6];
            ppppppplVar14[1] = ppppppplVar22[5];
            *ppppppplVar14 = pppppplVar9;
            ppppppplVar14[3] = pppppplVar32;
            ppppppplVar14[2] = pppppplVar10;
            ppppppplVar14 = ppppppplVar14 + 8;
            ppppppplVar22 = ppppppplVar20;
          } while ((long)pppppplVar2 - ((ulong)pppppplVar2 & 1) != lVar15);
          if (((ulong)pppppplVar2 & 1) == 0) goto LAB_005df10c;
        }
        pppppplVar9 = *ppppppplVar20;
        pppppplVar32 = ppppppplVar20[3];
        pppppplVar10 = ppppppplVar20[2];
        ppppppplVar14 = ppppppplVar8 + lVar15 * 4;
        ppppppplVar14[1] = ppppppplVar20[1];
        *ppppppplVar14 = pppppplVar9;
        ppppppplVar14[3] = pppppplVar32;
        ppppppplVar14[2] = pppppplVar10;
      }
LAB_005df10c:
      if (ppppppplVar24 != (long *******)0x0) {
        memset(ppppppplVar24,0xab,(long)pppppplVar2 << 5);
      }
      if ((local_2d0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,ppppppplStack_2c8);
      }
      local_2d0 = local_2d0 | 1;
      ppppppplStack_2c8 = ppppppplVar8;
      pppppplStack_2c0 = (long ******)((long)pppppplVar2 << 1);
    }
  }
  else {
    ppppppplVar24 = ppppppplVar24 + (long)(local_2d0 >> 1) * 4;
    ppppppplVar24[1] = pppppplStack_e8;
    *ppppppplVar24 = (long ******)ppppppplVar14;
    ppppppplVar24[3] = pppppplVar10;
    ppppppplVar24[2] = pppppplVar9;
  }
  local_2d0 = local_2d0 + 2;
LAB_005df168:
  ppppppplVar24 = (long *******)&ppppppplStack_2c8;
  if ((local_2d0 & 1) != 0) {
    ppppppplVar24 = ppppppplStack_2c8;
  }
                    /* try { // try from 005df17c to 005df17f has its CatchHandler @ 005df6c4 */
  pppppplVar9 = (long ******)
                FUN_002e4250(*(undefined8 *)(param_1 + 0x48),ppppppplVar24,local_2d0 >> 1);
  ppppppplVar24 = (long *******)&ppppppplStack_2c8;
  if ((((local_2d0 & 1) != 0) &&
      (ppppppplVar24 = ppppppplStack_2c8, ppppppplStack_2c8 == (long *******)0x0)) ||
     (memset(ppppppplVar24,0xab,(local_2d0 & 0xffffffffffffffe) << 4), (local_2d0 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,ppppppplStack_2c8);
  }
  local_198 = pppppplVar9;
  if (pppppplVar9 == (long ******)0x0) {
                    /* try { // try from 005df504 to 005df52b has its CatchHandler @ 005df63c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x674,2,"assertion failed: %s","update_args.args != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar25 = *(long *)(param_1 + 0x40);
  local_2d0 = 0;
  lVar15 = *(long *)(lVar25 + 0x18);
  if (lVar15 != 0) {
    plVar23 = (long *)(lVar15 + 0x10);
    do {
      lVar12 = *plVar23;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar16 = *(long *)(lVar15 + 8);
    if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
                    /* try { // try from 005df20c to 005df227 has its CatchHandler @ 005df540 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar16 + 8),(long *)(lVar15 + 8),lVar12,
                   lVar12 + 1);
    }
  }
  local_2d0 = *(ulong *)(lVar25 + 0x18);
                    /* try { // try from 005df238 to 005df23f has its CatchHandler @ 005df6a8 */
  FUN_0054ce24(&local_1a0,&local_2d0);
  FUN_00532768(&local_2d0);
  puVar4 = PTR_DAT_043750e8;
  if (*(long *)(param_1 + 0x268) == 0) {
    pppppplStack_2c0 = (long ******)0x0;
    local_2d0 = *(ulong *)(param_1 + 0x18);
    ppppppplStack_2c8 = *(long ********)(param_1 + 0x20);
    if (ppppppplStack_2c8 != (long *******)0x0) {
      ppppppplVar24 = ppppppplStack_2c8 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
        if (bVar5) {
          *ppppppplVar24 = (long ******)((long)*ppppppplVar24 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar23 = (long *)(param_1 + 0x10);
    local_2b8 = local_198;
    do {
      lVar15 = *plVar23;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar25 = *(long *)(param_1 + 8);
    if ((lVar25 != 0) && (*(char *)(lVar25 + 0x10) != '\0')) {
                    /* try { // try from 005df2f8 to 005df313 has its CatchHandler @ 005df538 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar25 + 8),(long *)(param_1 + 8),lVar15,
                   lVar15 + 1);
    }
    local_f0 = (long *******)param_1;
    pppppplVar10 = (long ******)FUN_002e2e80(PTR_FUN_04373078,0x10);
    pppppplVar9 = pppppplStack_2c0;
    if (pppppplVar10 != (long ******)0x0) {
      local_f0 = (long *******)0x0;
      *pppppplVar10 = (long *****)&PTR_FUN_0418ded8;
      pppppplVar10[1] = (long *****)param_1;
    }
    if (pppppplStack_2c0 != (long ******)0x0) {
      puVar17 = *pppppplStack_2c0;
      pppppplStack_2c0 = pppppplVar10;
      (*(code *)*puVar17)(pppppplVar9);
      FUN_002e2ea0(PTR_LAB_04373088,pppppplVar9);
      pppppplVar10 = pppppplStack_2c0;
    }
    pppppplStack_2c0 = pppppplVar10;
    FUN_00546ca4(&local_f0);
    local_f0 = (long *******)puVar4;
                    /* try { // try from 005df374 to 005df37f has its CatchHandler @ 005df5b4 */
    lVar15 = FUN_005d745c(&local_2d0,&local_f0);
    if (puVar4[0x10] != '\0') {
                    /* try { // try from 005df4dc to 005df4ff has its CatchHandler @ 005df52c */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                   ,0x656,1,"[grpclb %p] Created new child policy handler (%p)",param_1,lVar15);
    }
                    /* try { // try from 005df394 to 005df397 has its CatchHandler @ 005df598 */
    FUN_002fe0c0(*(undefined8 *)(lVar15 + 0x28),*(undefined8 *)(param_1 + 0x28));
    pppppplVar9 = pppppplStack_2c0;
    pppppplStack_2c0 = (long ******)0x0;
    if (pppppplVar9 != (long ******)0x0) {
      (*(code *)**pppppplVar9)(pppppplVar9);
      FUN_002e2ea0(PTR_LAB_04373088,pppppplVar9);
    }
    if (ppppppplStack_2c8 != (long *******)0x0) {
      ppppppplVar24 = ppppppplStack_2c8 + 1;
      do {
        pppppplVar9 = *ppppppplVar24;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
        if (bVar5) {
          *ppppppplVar24 = (long ******)((long)pppppplVar9 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppplVar9 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_2c8)[2])(ppppppplStack_2c8);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar17 = *(undefined8 **)(param_1 + 0x268);
    *(long *)(param_1 + 0x268) = lVar15;
    if (puVar17 != (undefined8 *)0x0) {
                    /* try { // try from 005df410 to 005df413 has its CatchHandler @ 005df53c */
      (**(code **)*puVar17)();
    }
  }
  if (puVar4[0x10] != '\0') {
                    /* try { // try from 005df4b8 to 005df4d7 has its CatchHandler @ 005df63c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x67c,1,"[grpclb %p] Updating child policy handler %p",param_1,
                 *(undefined8 *)(param_1 + 0x268));
  }
  plVar23 = *(long **)(param_1 + 0x268);
  FUN_005490f0(auStack_378,local_238);
                    /* try { // try from 005df434 to 005df43f has its CatchHandler @ 005df68c */
  (**(code **)(*plVar23 + 0x20))(plVar23,auStack_378);
  FUN_00547658(auStack_378);
  FUN_00547658(local_238);
  return;
}


