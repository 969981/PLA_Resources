/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d5fa0; name: FUN_003d5fa0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003d5fa0(undefined8 *param_1,undefined8 ******param_2,undefined8 param_3)

{
  undefined8 *******pppppppuVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *******pppppppuVar6;
  uint uVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 ******ppppppuVar15;
  ulong local_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    puVar4 = *(undefined8 **)(param_1[1] + 0x28);
    *(undefined8 *)(param_1[1] + 0x28) = 0;
    if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 003d5fe8 to 003d5feb has its CatchHandler @ 003d6694 */
      (**(code **)*puVar4)();
    }
  }
  uVar7 = (uint)*(byte *)(param_1 + 2);
  if (((*(byte *)(param_1 + 2) >> 6 & 1) != 0) && (4 < *(ulong *)(param_1[1] + 0x88))) {
    FUN_002f0430(*(ulong *)(param_1[1] + 0x88),
                 "external/com_google_grpc_base/src/core/lib/transport/transport.cc",0xb8);
    uVar7 = (uint)*(byte *)(param_1 + 2);
  }
  local_f8 = 0;
  if ((uVar7 >> 3 & 1) != 0) {
    ppppppuVar15 = *(undefined8 *******)(param_1[1] + 0x48);
    if (param_2 < (undefined8 ******)0x5) {
      ppppppuVar5 = param_2;
    }
    else {
                    /* try { // try from 003d6034 to 003d6047 has its CatchHandler @ 003d6698 */
      ppppppuVar5 = (undefined8 ******)
                    FUN_002f03c0(param_2,
                                 "external/com_google_grpc_base/src/core/lib/transport/transport.cc"
                                 ,0xbf);
    }
    uVar11 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppppppuVar10 = &local_f0;
    if (bVar3) {
      pppppppuVar10 = local_f0;
    }
    uVar2 = 6;
    if (bVar3) {
      uVar2 = uStack_e8;
    }
    uVar14 = local_f8 >> 1;
    if (uVar14 == uVar2) {
      uVar13 = uVar2 * 2;
      pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar2 * 0x30);
      pppppppuVar9 = pppppppuVar6;
    }
    else {
      pppppppuVar6 = (undefined8 *******)0x0;
      uVar13 = 0;
      pppppppuVar9 = pppppppuVar10;
    }
    pppppppuVar9 = pppppppuVar9 + uVar14 * 3;
    *pppppppuVar9 = ppppppuVar15;
    pppppppuVar9[1] = ppppppuVar5;
    pppppppuVar9[2] = (undefined8 ******)"failing recv_initial_metadata_ready";
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      if (uVar14 != 0) {
        uVar11 = uVar11 >> 1 & 1;
        pppppppuVar9 = pppppppuVar10;
        if (uVar14 == 1) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          pppppppuVar12 = pppppppuVar6;
          do {
            ppppppuVar5 = pppppppuVar9[1];
            ppppppuVar15 = *pppppppuVar9;
            lVar8 = lVar8 + 2;
            pppppppuVar12[2] = pppppppuVar9[2];
            pppppppuVar12[1] = ppppppuVar5;
            *pppppppuVar12 = ppppppuVar15;
            ppppppuVar5 = pppppppuVar9[4];
            ppppppuVar15 = pppppppuVar9[3];
            pppppppuVar1 = pppppppuVar9 + 5;
            pppppppuVar9 = pppppppuVar9 + 6;
            pppppppuVar12[5] = *pppppppuVar1;
            pppppppuVar12[4] = ppppppuVar5;
            pppppppuVar12[3] = ppppppuVar15;
            pppppppuVar12 = pppppppuVar12 + 6;
          } while (uVar14 - uVar11 != lVar8);
        }
        if (uVar11 != 0) {
          ppppppuVar5 = pppppppuVar9[1];
          ppppppuVar15 = *pppppppuVar9;
          pppppppuVar12 = pppppppuVar6 + lVar8 * 3;
          pppppppuVar12[2] = pppppppuVar9[2];
          pppppppuVar12[1] = ppppppuVar5;
          *pppppppuVar12 = ppppppuVar15;
        }
      }
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        memset(pppppppuVar10,0xab,uVar14 * 0x18);
      }
      if ((local_f8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppppppuVar6;
      uStack_e8 = uVar13;
    }
    local_f8 = local_f8 + 2;
    uVar7 = (uint)*(byte *)(param_1 + 2);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    ppppppuVar5 = *(undefined8 *******)(param_1[1] + 0x68);
    ppppppuVar15 = param_2;
    if ((undefined8 ******)0x4 < param_2) {
                    /* try { // try from 003d61b8 to 003d61cb has its CatchHandler @ 003d6698 */
      ppppppuVar15 = (undefined8 ******)
                     FUN_002f03c0(param_2,
                                  "external/com_google_grpc_base/src/core/lib/transport/transport.cc"
                                  ,0xc3);
    }
    uVar11 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppppppuVar10 = &local_f0;
    if (bVar3) {
      pppppppuVar10 = local_f0;
    }
    uVar2 = 6;
    if (bVar3) {
      uVar2 = uStack_e8;
    }
    uVar14 = local_f8 >> 1;
    if (uVar14 == uVar2) {
      uVar13 = uVar2 * 2;
      pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar2 * 0x30);
      pppppppuVar9 = pppppppuVar6;
    }
    else {
      pppppppuVar6 = (undefined8 *******)0x0;
      uVar13 = 0;
      pppppppuVar9 = pppppppuVar10;
    }
    pppppppuVar9 = pppppppuVar9 + uVar14 * 3;
    *pppppppuVar9 = ppppppuVar5;
    pppppppuVar9[1] = ppppppuVar15;
    pppppppuVar9[2] = (undefined8 ******)"failing recv_message_ready";
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      if (uVar14 != 0) {
        uVar11 = uVar11 >> 1 & 1;
        pppppppuVar9 = pppppppuVar10;
        if (uVar14 == 1) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          pppppppuVar12 = pppppppuVar6;
          do {
            ppppppuVar5 = pppppppuVar9[1];
            ppppppuVar15 = *pppppppuVar9;
            lVar8 = lVar8 + 2;
            pppppppuVar12[2] = pppppppuVar9[2];
            pppppppuVar12[1] = ppppppuVar5;
            *pppppppuVar12 = ppppppuVar15;
            ppppppuVar5 = pppppppuVar9[4];
            ppppppuVar15 = pppppppuVar9[3];
            pppppppuVar1 = pppppppuVar9 + 5;
            pppppppuVar9 = pppppppuVar9 + 6;
            pppppppuVar12[5] = *pppppppuVar1;
            pppppppuVar12[4] = ppppppuVar5;
            pppppppuVar12[3] = ppppppuVar15;
            pppppppuVar12 = pppppppuVar12 + 6;
          } while (uVar14 - uVar11 != lVar8);
        }
        if (uVar11 != 0) {
          ppppppuVar5 = pppppppuVar9[1];
          ppppppuVar15 = *pppppppuVar9;
          pppppppuVar12 = pppppppuVar6 + lVar8 * 3;
          pppppppuVar12[2] = pppppppuVar9[2];
          pppppppuVar12[1] = ppppppuVar5;
          *pppppppuVar12 = ppppppuVar15;
        }
      }
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        memset(pppppppuVar10,0xab,uVar14 * 0x18);
      }
      if ((local_f8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppppppuVar6;
      uStack_e8 = uVar13;
    }
    local_f8 = local_f8 + 2;
    uVar7 = (uint)*(byte *)(param_1 + 2);
  }
  if ((uVar7 >> 5 & 1) != 0) {
    ppppppuVar5 = *(undefined8 *******)(param_1[1] + 0x80);
    ppppppuVar15 = param_2;
    if ((undefined8 ******)0x4 < param_2) {
                    /* try { // try from 003d6330 to 003d6343 has its CatchHandler @ 003d6698 */
      ppppppuVar15 = (undefined8 ******)
                     FUN_002f03c0(param_2,
                                  "external/com_google_grpc_base/src/core/lib/transport/transport.cc"
                                  ,200);
    }
    uVar11 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppppppuVar10 = &local_f0;
    if (bVar3) {
      pppppppuVar10 = local_f0;
    }
    uVar2 = 6;
    if (bVar3) {
      uVar2 = uStack_e8;
    }
    uVar14 = local_f8 >> 1;
    if (uVar14 == uVar2) {
      uVar13 = uVar2 * 2;
      pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar2 * 0x30);
      pppppppuVar9 = pppppppuVar6;
    }
    else {
      pppppppuVar6 = (undefined8 *******)0x0;
      uVar13 = 0;
      pppppppuVar9 = pppppppuVar10;
    }
    pppppppuVar9 = pppppppuVar9 + uVar14 * 3;
    *pppppppuVar9 = ppppppuVar5;
    pppppppuVar9[1] = ppppppuVar15;
    pppppppuVar9[2] = (undefined8 ******)"failing recv_trailing_metadata_ready";
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      if (uVar14 != 0) {
        uVar11 = uVar11 >> 1 & 1;
        pppppppuVar9 = pppppppuVar10;
        if (uVar14 == 1) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          pppppppuVar12 = pppppppuVar6;
          do {
            ppppppuVar5 = pppppppuVar9[1];
            ppppppuVar15 = *pppppppuVar9;
            lVar8 = lVar8 + 2;
            pppppppuVar12[2] = pppppppuVar9[2];
            pppppppuVar12[1] = ppppppuVar5;
            *pppppppuVar12 = ppppppuVar15;
            ppppppuVar5 = pppppppuVar9[4];
            ppppppuVar15 = pppppppuVar9[3];
            pppppppuVar1 = pppppppuVar9 + 5;
            pppppppuVar9 = pppppppuVar9 + 6;
            pppppppuVar12[5] = *pppppppuVar1;
            pppppppuVar12[4] = ppppppuVar5;
            pppppppuVar12[3] = ppppppuVar15;
            pppppppuVar12 = pppppppuVar12 + 6;
          } while (uVar14 - uVar11 != lVar8);
        }
        if (uVar11 != 0) {
          ppppppuVar5 = pppppppuVar9[1];
          ppppppuVar15 = *pppppppuVar9;
          pppppppuVar12 = pppppppuVar6 + lVar8 * 3;
          pppppppuVar12[2] = pppppppuVar9[2];
          pppppppuVar12[1] = ppppppuVar5;
          *pppppppuVar12 = ppppppuVar15;
        }
      }
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        memset(pppppppuVar10,0xab,uVar14 * 0x18);
      }
      if ((local_f8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppppppuVar6;
      uStack_e8 = uVar13;
    }
    local_f8 = local_f8 + 2;
  }
  ppppppuVar15 = (undefined8 ******)*param_1;
  if (ppppppuVar15 != (undefined8 ******)0x0) {
    ppppppuVar5 = param_2;
    if ((undefined8 ******)0x4 < param_2) {
                    /* try { // try from 003d64a0 to 003d64b3 has its CatchHandler @ 003d6698 */
      ppppppuVar5 = (undefined8 ******)
                    FUN_002f03c0(param_2,
                                 "external/com_google_grpc_base/src/core/lib/transport/transport.cc"
                                 ,0xcb);
    }
    uVar11 = local_f8;
    bVar3 = (local_f8 & 1) != 0;
    pppppppuVar10 = &local_f0;
    if (bVar3) {
      pppppppuVar10 = local_f0;
    }
    uVar2 = 6;
    if (bVar3) {
      uVar2 = uStack_e8;
    }
    uVar14 = local_f8 >> 1;
    if (uVar14 == uVar2) {
      uVar13 = uVar2 * 2;
      pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar2 * 0x30);
      pppppppuVar9 = pppppppuVar6;
    }
    else {
      pppppppuVar6 = (undefined8 *******)0x0;
      uVar13 = 0;
      pppppppuVar9 = pppppppuVar10;
    }
    pppppppuVar9 = pppppppuVar9 + uVar14 * 3;
    *pppppppuVar9 = ppppppuVar15;
    pppppppuVar9[1] = ppppppuVar5;
    pppppppuVar9[2] = (undefined8 ******)"failing on_complete";
    if (pppppppuVar6 != (undefined8 *******)0x0) {
      if (uVar14 != 0) {
        uVar11 = uVar11 >> 1 & 1;
        pppppppuVar9 = pppppppuVar10;
        if (uVar14 == 1) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          pppppppuVar12 = pppppppuVar6;
          do {
            ppppppuVar5 = pppppppuVar9[1];
            ppppppuVar15 = *pppppppuVar9;
            lVar8 = lVar8 + 2;
            pppppppuVar12[2] = pppppppuVar9[2];
            pppppppuVar12[1] = ppppppuVar5;
            *pppppppuVar12 = ppppppuVar15;
            ppppppuVar5 = pppppppuVar9[4];
            ppppppuVar15 = pppppppuVar9[3];
            pppppppuVar1 = pppppppuVar9 + 5;
            pppppppuVar9 = pppppppuVar9 + 6;
            pppppppuVar12[5] = *pppppppuVar1;
            pppppppuVar12[4] = ppppppuVar5;
            pppppppuVar12[3] = ppppppuVar15;
            pppppppuVar12 = pppppppuVar12 + 6;
          } while (uVar14 - uVar11 != lVar8);
        }
        if (uVar11 != 0) {
          ppppppuVar5 = pppppppuVar9[1];
          ppppppuVar15 = *pppppppuVar9;
          pppppppuVar12 = pppppppuVar6 + lVar8 * 3;
          pppppppuVar12[2] = pppppppuVar9[2];
          pppppppuVar12[1] = ppppppuVar5;
          *pppppppuVar12 = ppppppuVar15;
        }
      }
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        memset(pppppppuVar10,0xab,uVar14 * 0x18);
      }
      if ((local_f8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f0);
      }
      local_f8 = local_f8 | 1;
      local_f0 = pppppppuVar6;
      uStack_e8 = uVar13;
    }
    local_f8 = local_f8 + 2;
  }
                    /* try { // try from 003d65fc to 003d6623 has its CatchHandler @ 003d6698 */
  FUN_003d66f4(&local_f8,param_3);
  if ((undefined8 ******)0x4 < param_2) {
    FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/transport/transport.cc",0xd0);
  }
  if ((local_f8 & 1) == 0) {
    pppppppuVar10 = &local_f0;
  }
  else {
    pppppppuVar10 = local_f0;
    if (local_f0 == (undefined8 *******)0x0) goto LAB_003d6664;
  }
  memset(pppppppuVar10,0xab,(local_f8 >> 1) * 0x18);
  if ((local_f8 & 1) == 0) {
    return;
  }
LAB_003d6664:
  FUN_002e2ea0(PTR_LAB_04373088,local_f0);
  return;
}


