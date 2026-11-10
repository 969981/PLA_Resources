/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005eeb94; name: FUN_005eeb94
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005eeb94(long param_1)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *puVar9;
  undefined8 *******pppppppuVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *******pppppppuVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 ******ppppppuVar27;
  undefined8 ******ppppppuVar28;
  undefined8 ******ppppppuVar29;
  long local_128;
  long *local_108;
  long local_100;
  undefined8 ******local_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******local_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 *local_d8;
  undefined8 *******local_d0;
  ulong local_c8;
  undefined8 *local_70;
  undefined8 local_68;
  
  uVar11 = *(undefined8 *)(param_1 + 0xd8);
  puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x1c8);
  puVar3 = PTR_DAT_04375160;
  if (puVar6 != (undefined8 *)0x0) {
    plVar15 = *(long **)(param_1 + 0x30);
    *(undefined1 *)(puVar6 + 0x38) = 0;
    *puVar6 = &PTR_LAB_0418edb8;
    puVar6[1] = puVar3;
    puVar6[2] = 1;
    puVar6[3] = param_1;
    puVar6[4] = puVar3;
    puVar6[5] = 0;
    puVar1 = (ulong *)(param_1 + 0x38);
    if (puVar3[0x10] == '\0') {
      uVar12 = *puVar1;
      uVar16 = 0;
      uVar20 = uVar12 >> 1;
LAB_005eec1c:
      puVar9 = puVar6 + 6;
      uVar22 = 10;
      if (10 < uVar20) {
LAB_005eec2c:
        if (uVar20 <= uVar22 << 1) {
          uVar20 = uVar22 << 1;
        }
        uVar16 = uVar16 >> 1;
        local_d8 = puVar9;
        uVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar20 * 0x28);
                    /* try { // try from 005eec58 to 005eec63 has its CatchHandler @ 005ef984 */
        FUN_005f0430(uVar7,&local_d8,uVar16);
        if (puVar9 != (undefined8 *)0x0) {
          if (uVar16 != 0) {
            puVar25 = puVar9 + uVar16 * 5;
            uVar12 = uVar16;
            do {
              puVar25 = puVar25 + -5;
              uVar12 = uVar12 - 1;
              (**(code **)*puVar25)(puVar25);
            } while (uVar12 != 0);
          }
          memset(puVar9,0xab,uVar16 * 0x28);
        }
        uVar12 = puVar6[5];
        if ((uVar12 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,puVar6[6]);
          uVar12 = puVar6[5];
        }
        puVar6[5] = uVar12 | 1;
        puVar6[6] = uVar7;
        puVar6[7] = uVar20;
        uVar12 = *puVar1;
      }
    }
    else {
                    /* try { // try from 005ef6cc to 005ef6ef has its CatchHandler @ 005ef8e4 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                   ,0x169,1,"[%s %p] Creating subchannel list %p for %lu subchannels",
                   *(undefined8 *)(puVar3 + 8),param_1,puVar6,*(ulong *)(param_1 + 0x38) >> 1);
      uVar12 = *puVar1;
      uVar20 = uVar12 >> 1;
      uVar16 = puVar6[5];
      if ((uVar16 & 1) == 0) goto LAB_005eec1c;
      puVar9 = (undefined8 *)puVar6[6];
      uVar22 = puVar6[7];
      if (uVar22 < uVar20) goto LAB_005eec2c;
    }
    if (1 < uVar12) {
      uVar20 = 0;
      lVar14 = param_1 + 0x40;
      do {
        local_d8 = (undefined8 *)0x0;
        lVar17 = lVar14;
        if ((uVar12 & 1) != 0) {
          lVar17 = *(long *)(param_1 + 0x40);
        }
                    /* try { // try from 005eed40 to 005eed47 has its CatchHandler @ 005efa64 */
        FUN_005374b0(&local_f8,lVar17 + uVar20 * 0x90);
        bVar4 = ((ulong)local_d8 & 1) != 0;
        pppppppuVar10 = &local_d0;
        if (bVar4) {
          pppppppuVar10 = local_d0;
        }
        uVar12 = 3;
        if (bVar4) {
          uVar12 = local_c8;
        }
        if ((ulong)local_d8 >> 1 == uVar12) {
          pppppppuVar8 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar12 << 6);
          pppppppuVar19 = pppppppuVar8 + uVar12 * 4;
          pppppppuVar19[1] = ppppppuStack_f0;
          *pppppppuVar19 = local_f8;
          pppppppuVar19[3] = ppppppuStack_e0;
          pppppppuVar19[2] = local_e8;
          if (pppppppuVar8 != (undefined8 *******)0x0) {
            if (uVar12 != 0) {
              uVar16 = uVar12 & 3;
              if (uVar12 - 1 < 3) {
                lVar17 = 0;
                pppppppuVar21 = pppppppuVar10;
              }
              else {
                lVar17 = 0;
                pppppppuVar19 = pppppppuVar8 + 8;
                pppppppuVar23 = pppppppuVar10;
                do {
                  pppppppuVar21 = pppppppuVar23 + 0x10;
                  ppppppuVar27 = *pppppppuVar23;
                  ppppppuVar29 = pppppppuVar23[3];
                  ppppppuVar28 = pppppppuVar23[2];
                  pppppppuVar19[-7] = pppppppuVar23[1];
                  pppppppuVar19[-8] = ppppppuVar27;
                  pppppppuVar19[-5] = ppppppuVar29;
                  pppppppuVar19[-6] = ppppppuVar28;
                  lVar17 = lVar17 + 4;
                  ppppppuVar27 = pppppppuVar23[4];
                  ppppppuVar29 = pppppppuVar23[7];
                  ppppppuVar28 = pppppppuVar23[6];
                  pppppppuVar19[-3] = pppppppuVar23[5];
                  pppppppuVar19[-4] = ppppppuVar27;
                  pppppppuVar19[-1] = ppppppuVar29;
                  pppppppuVar19[-2] = ppppppuVar28;
                  ppppppuVar27 = pppppppuVar23[8];
                  ppppppuVar29 = pppppppuVar23[0xb];
                  ppppppuVar28 = pppppppuVar23[10];
                  pppppppuVar19[1] = pppppppuVar23[9];
                  *pppppppuVar19 = ppppppuVar27;
                  pppppppuVar19[3] = ppppppuVar29;
                  pppppppuVar19[2] = ppppppuVar28;
                  ppppppuVar27 = pppppppuVar23[0xc];
                  ppppppuVar29 = pppppppuVar23[0xf];
                  ppppppuVar28 = pppppppuVar23[0xe];
                  pppppppuVar19[5] = pppppppuVar23[0xd];
                  pppppppuVar19[4] = ppppppuVar27;
                  pppppppuVar19[7] = ppppppuVar29;
                  pppppppuVar19[6] = ppppppuVar28;
                  pppppppuVar19 = pppppppuVar19 + 0x10;
                  pppppppuVar23 = pppppppuVar21;
                } while (uVar12 - uVar16 != lVar17);
              }
              if (uVar16 != 0) {
                pppppppuVar19 = pppppppuVar8 + lVar17 * 4;
                do {
                  ppppppuVar27 = *pppppppuVar21;
                  ppppppuVar29 = pppppppuVar21[3];
                  ppppppuVar28 = pppppppuVar21[2];
                  uVar16 = uVar16 - 1;
                  pppppppuVar19[1] = pppppppuVar21[1];
                  *pppppppuVar19 = ppppppuVar27;
                  pppppppuVar19[3] = ppppppuVar29;
                  pppppppuVar19[2] = ppppppuVar28;
                  pppppppuVar19 = pppppppuVar19 + 4;
                  pppppppuVar21 = pppppppuVar21 + 4;
                } while (uVar16 != 0);
              }
            }
            if (pppppppuVar10 != (undefined8 *******)0x0) {
              memset(pppppppuVar10,0xab,uVar12 << 5);
            }
            if (((ulong)local_d8 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_d0);
            }
            local_d8 = (undefined8 *)((ulong)local_d8 | 1);
            local_d0 = pppppppuVar8;
            local_c8 = uVar12 << 1;
          }
        }
        else {
          pppppppuVar10 = pppppppuVar10 + ((ulong)local_d8 >> 1) * 4;
          pppppppuVar10[1] = ppppppuStack_f0;
          *pppppppuVar10 = local_f8;
          pppppppuVar10[3] = ppppppuStack_e0;
          pppppppuVar10[2] = local_e8;
        }
        local_d8 = (undefined8 *)((long)local_d8 + 2);
        if (*puVar1 >> 1 <= uVar20) {
                    /* try { // try from 005ef774 to 005ef793 has its CatchHandler @ 005ef8c4 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x13e,"operator[]");
        }
        lVar17 = lVar14;
        if ((*puVar1 & 1) != 0) {
          lVar17 = *(long *)(param_1 + 0x40);
        }
        puVar18 = *(ulong **)(lVar17 + uVar20 * 0x90 + 0x88);
        if ((puVar18 != (ulong *)0x0) && (*puVar18 != 0)) {
          uVar12 = 0;
          do {
            puVar9 = (undefined8 *)(puVar18[1] + uVar12 * 0x20);
            bVar4 = ((ulong)local_d8 & 1) != 0;
            pppppppuVar10 = &local_d0;
            if (bVar4) {
              pppppppuVar10 = local_d0;
            }
            uVar16 = 3;
            if (bVar4) {
              uVar16 = local_c8;
            }
            if ((ulong)local_d8 >> 1 == uVar16) {
              pppppppuVar8 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar16 << 6);
              ppppppuVar27 = (undefined8 ******)*puVar9;
              ppppppuVar29 = (undefined8 ******)puVar9[3];
              ppppppuVar28 = (undefined8 ******)puVar9[2];
              pppppppuVar19 = pppppppuVar8 + uVar16 * 4;
              pppppppuVar19[1] = (undefined8 ******)puVar9[1];
              *pppppppuVar19 = ppppppuVar27;
              pppppppuVar19[3] = ppppppuVar29;
              pppppppuVar19[2] = ppppppuVar28;
              if (pppppppuVar8 != (undefined8 *******)0x0) {
                if (uVar16 != 0) {
                  uVar22 = uVar16 & 3;
                  if (uVar16 - 1 < 3) {
                    lVar17 = 0;
                    pppppppuVar21 = pppppppuVar10;
                  }
                  else {
                    lVar17 = 0;
                    pppppppuVar19 = pppppppuVar8 + 8;
                    pppppppuVar23 = pppppppuVar10;
                    do {
                      pppppppuVar21 = pppppppuVar23 + 0x10;
                      ppppppuVar27 = *pppppppuVar23;
                      ppppppuVar29 = pppppppuVar23[3];
                      ppppppuVar28 = pppppppuVar23[2];
                      pppppppuVar19[-7] = pppppppuVar23[1];
                      pppppppuVar19[-8] = ppppppuVar27;
                      pppppppuVar19[-5] = ppppppuVar29;
                      pppppppuVar19[-6] = ppppppuVar28;
                      lVar17 = lVar17 + 4;
                      ppppppuVar27 = pppppppuVar23[4];
                      ppppppuVar29 = pppppppuVar23[7];
                      ppppppuVar28 = pppppppuVar23[6];
                      pppppppuVar19[-3] = pppppppuVar23[5];
                      pppppppuVar19[-4] = ppppppuVar27;
                      pppppppuVar19[-1] = ppppppuVar29;
                      pppppppuVar19[-2] = ppppppuVar28;
                      ppppppuVar27 = pppppppuVar23[8];
                      ppppppuVar29 = pppppppuVar23[0xb];
                      ppppppuVar28 = pppppppuVar23[10];
                      pppppppuVar19[1] = pppppppuVar23[9];
                      *pppppppuVar19 = ppppppuVar27;
                      pppppppuVar19[3] = ppppppuVar29;
                      pppppppuVar19[2] = ppppppuVar28;
                      ppppppuVar27 = pppppppuVar23[0xc];
                      ppppppuVar29 = pppppppuVar23[0xf];
                      ppppppuVar28 = pppppppuVar23[0xe];
                      pppppppuVar19[5] = pppppppuVar23[0xd];
                      pppppppuVar19[4] = ppppppuVar27;
                      pppppppuVar19[7] = ppppppuVar29;
                      pppppppuVar19[6] = ppppppuVar28;
                      pppppppuVar19 = pppppppuVar19 + 0x10;
                      pppppppuVar23 = pppppppuVar21;
                    } while (uVar16 - uVar22 != lVar17);
                  }
                  if (uVar22 != 0) {
                    pppppppuVar19 = pppppppuVar8 + lVar17 * 4;
                    do {
                      ppppppuVar27 = *pppppppuVar21;
                      ppppppuVar29 = pppppppuVar21[3];
                      ppppppuVar28 = pppppppuVar21[2];
                      uVar22 = uVar22 - 1;
                      pppppppuVar19[1] = pppppppuVar21[1];
                      *pppppppuVar19 = ppppppuVar27;
                      pppppppuVar19[3] = ppppppuVar29;
                      pppppppuVar19[2] = ppppppuVar28;
                      pppppppuVar19 = pppppppuVar19 + 4;
                      pppppppuVar21 = pppppppuVar21 + 4;
                    } while (uVar22 != 0);
                  }
                }
                if (pppppppuVar10 != (undefined8 *******)0x0) {
                  memset(pppppppuVar10,0xab,uVar16 << 5);
                }
                if (((ulong)local_d8 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_d0);
                }
                local_d8 = (undefined8 *)((ulong)local_d8 | 1);
                local_d0 = pppppppuVar8;
                local_c8 = uVar16 << 1;
              }
            }
            else {
              ppppppuVar27 = (undefined8 ******)*puVar9;
              ppppppuVar29 = (undefined8 ******)puVar9[3];
              ppppppuVar28 = (undefined8 ******)puVar9[2];
              pppppppuVar10 = pppppppuVar10 + ((ulong)local_d8 >> 1) * 4;
              pppppppuVar10[1] = (undefined8 ******)puVar9[1];
              *pppppppuVar10 = ppppppuVar27;
              pppppppuVar10[3] = ppppppuVar29;
              pppppppuVar10[2] = ppppppuVar28;
            }
            local_d8 = (undefined8 *)((long)local_d8 + 2);
            if (*puVar1 >> 1 <= uVar20) {
                    /* try { // try from 005ef754 to 005ef773 has its CatchHandler @ 005ef8d4 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h"
                            ,0x13e,"operator[]");
            }
            lVar17 = lVar14;
            if ((*puVar1 & 1) != 0) {
              lVar17 = *(long *)(param_1 + 0x40);
            }
            puVar18 = *(ulong **)(lVar17 + uVar20 * 0x90 + 0x88);
            uVar12 = uVar12 + 1;
          } while (uVar12 < *puVar18);
        }
        pppppppuVar10 = &local_d0;
        if (((ulong)local_d8 & 1) != 0) {
          pppppppuVar10 = local_d0;
        }
                    /* try { // try from 005ef03c to 005ef073 has its CatchHandler @ 005efa74 */
        uVar7 = FUN_002e4270(uVar11,&PTR_s_grpc_subchannel_address_0418edd0,2,pppppppuVar10,
                             (ulong)local_d8 >> 1);
        if (local_d8 < (undefined8 *)0x2) {
                    /* try { // try from 005ef794 to 005ef7b3 has its CatchHandler @ 005ef8b4 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x136,"operator[]");
        }
        pppppppuVar10 = &local_d0;
        if (((ulong)local_d8 & 1) != 0) {
          pppppppuVar10 = local_d0;
        }
        free(pppppppuVar10[2]);
                    /* try { // try from 005ef080 to 005ef08b has its CatchHandler @ 005efa3c */
        (**(code **)(*plVar15 + 0x10))(&local_100,plVar15,uVar7);
                    /* try { // try from 005ef08c to 005ef093 has its CatchHandler @ 005efa4c */
        FUN_002e4a10(uVar7);
        lVar17 = local_100;
        lVar13 = puVar6[4];
        if (local_100 == 0) {
          if (*(char *)(lVar13 + 0x10) != '\0') {
            if (*puVar1 >> 1 <= uVar20) {
                    /* try { // try from 005ef81c to 005ef83b has its CatchHandler @ 005ef8a8 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h"
                            ,0x13e,"operator[]");
            }
            uVar7 = *(undefined8 *)(lVar13 + 8);
            lVar17 = lVar14;
            if ((*puVar1 & 1) != 0) {
              lVar17 = *(long *)(param_1 + 0x40);
            }
            uVar24 = puVar6[3];
                    /* try { // try from 005ef1a0 to 005ef1a7 has its CatchHandler @ 005ef9b8 */
            FUN_00308b60(&local_f8,lVar17 + uVar20 * 0x90);
            ppppppuVar27 = (undefined8 ******)((ulong)&local_f8 | 1);
            if (((ulong)local_f8 & 1) != 0) {
              ppppppuVar27 = local_e8;
            }
                    /* try { // try from 005ef1bc to 005ef1df has its CatchHandler @ 005ef9a8 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                         ,0x189,1,"[%s %p] could not create subchannel for address uri %s, ignoring"
                         ,uVar7,uVar24,ppppppuVar27);
            if (((ulong)local_f8 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_e8);
            }
          }
        }
        else {
          if (*(char *)(lVar13 + 0x10) != '\0') {
            if (*puVar1 >> 1 <= uVar20) {
                    /* try { // try from 005ef7fc to 005ef81b has its CatchHandler @ 005ef8ac */
                    /* WARNING: Subroutine does not return */
              __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h"
                            ,0x13e,"operator[]");
            }
            uVar7 = *(undefined8 *)(lVar13 + 8);
            lVar13 = lVar14;
            if ((*puVar1 & 1) != 0) {
              lVar13 = *(long *)(param_1 + 0x40);
            }
            uVar24 = puVar6[3];
            uVar12 = puVar6[5];
                    /* try { // try from 005ef0d4 to 005ef0db has its CatchHandler @ 005efa14 */
            FUN_00308b60(&local_f8,lVar13 + uVar20 * 0x90);
            ppppppuVar27 = (undefined8 ******)((ulong)&local_f8 | 1);
            if (((ulong)local_f8 & 1) != 0) {
              ppppppuVar27 = local_e8;
            }
                    /* try { // try from 005ef0f4 to 005ef123 has its CatchHandler @ 005ef9f4 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                         ,0x192,1,
                         "[%s %p] subchannel list %p index %lu: Created subchannel %p for address uri %s"
                         ,uVar7,uVar24,puVar6,uVar12 >> 1,lVar17,ppppppuVar27);
            if (((ulong)local_f8 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_e8);
            }
          }
          if (*puVar1 >> 1 <= uVar20) {
                    /* try { // try from 005ef7dc to 005ef7fb has its CatchHandler @ 005ef8b0 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                          0x13e,"operator[]");
          }
          uVar12 = puVar6[5];
          if ((uVar12 & 1) == 0) {
            uVar16 = 10;
            puVar9 = puVar6 + 6;
            local_70 = puVar6 + 6;
            if (uVar12 >> 1 == 10) goto LAB_005ef214;
LAB_005ef168:
            local_128 = 0;
            puVar25 = puVar9;
            puVar26 = (undefined8 *)0x0;
            local_70 = puVar9;
          }
          else {
            puVar9 = (undefined8 *)puVar6[6];
            uVar16 = puVar6[7];
            local_70 = puVar9;
            if (uVar12 >> 1 != uVar16) goto LAB_005ef168;
LAB_005ef214:
            puVar25 = local_70;
            local_128 = uVar16 << 1;
            puVar9 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,uVar16 * 0x50);
            puVar26 = puVar9;
          }
          lVar17 = local_100;
          uVar12 = uVar12 >> 1;
          puVar9 = puVar9 + uVar12 * 5;
          local_100 = 0;
          local_68 = 0;
          *puVar9 = &PTR_LAB_0418ee40;
          puVar9[1] = puVar6;
          puVar9[2] = lVar17;
          local_f8 = (undefined8 ******)0x0;
          puVar9[3] = 0;
          *(undefined4 *)(puVar9 + 4) = 0;
          FUN_0052f160(&local_f8);
          *puVar9 = &PTR_LAB_0418edf0;
          FUN_0052f160(&local_68);
          if (puVar26 == (undefined8 *)0x0) {
            uVar12 = puVar6[5];
          }
          else {
                    /* try { // try from 005ef28c to 005ef29b has its CatchHandler @ 005ef9bc */
            FUN_005f0430(puVar26,&local_70,uVar12);
            if (puVar25 != (undefined8 *)0x0) {
              if (uVar12 != 0) {
                puVar9 = puVar25 + uVar12 * 5;
                uVar16 = uVar12;
                do {
                  puVar9 = puVar9 + -5;
                  uVar16 = uVar16 - 1;
                  (**(code **)*puVar9)(puVar9);
                } while (uVar16 != 0);
              }
              memset(puVar25,0xab,uVar12 * 0x28);
            }
            uVar12 = puVar6[5];
            if ((uVar12 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,puVar6[6]);
              uVar12 = puVar6[5];
            }
            uVar12 = uVar12 | 1;
            puVar6[5] = uVar12;
            puVar6[6] = puVar26;
            puVar6[7] = local_128;
          }
          puVar6[5] = uVar12 + 2;
        }
        FUN_0052f160(&local_100);
        pppppppuVar10 = &local_d0;
        if (((((ulong)local_d8 & 1) != 0) &&
            (pppppppuVar10 = local_d0, local_d0 == (undefined8 *******)0x0)) ||
           (memset(pppppppuVar10,0xab,((ulong)local_d8 & 0xffffffffffffffe) << 4),
           ((ulong)local_d8 & 1) != 0)) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d0);
        }
        uVar12 = *puVar1;
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar12 >> 1);
    }
    *puVar6 = &PTR_LAB_0418ed48;
    plVar15 = (long *)(param_1 + 0x10);
    *(undefined1 *)((long)puVar6 + 0x1c1) = 0;
    do {
      lVar14 = *plVar15;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar17 = *(long *)(param_1 + 8);
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
                    /* try { // try from 005ef3a8 to 005ef3df has its CatchHandler @ 005ef90c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar17 + 8),(long *)(param_1 + 8)
                   ,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                   ,0x5d,lVar14,lVar14 + 1,"subchannel_list");
    }
    local_d8 = (undefined8 *)0x0;
    FUN_00546ca4(&local_d8);
  }
  uVar20 = puVar6[5];
  if (uVar20 < 2) {
    puVar9 = *(undefined8 **)(param_1 + 0xe0);
    *(undefined8 **)(param_1 + 0xe0) = puVar6;
    if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 005ef40c to 005ef40f has its CatchHandler @ 005ef920 */
      (**(code **)*puVar9)();
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
                    /* try { // try from 005ef414 to 005ef44b has its CatchHandler @ 005ef99c */
    FUN_002f2c60(&local_d8,"Empty update");
    uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                          ,200,&local_d8,0,0);
    lVar14 = FUN_002f0d20(uVar11,3,0xe);
    plVar15 = *(long **)(param_1 + 0x30);
    local_108 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    if (local_108 != (long *)0x0) {
      *local_108 = (long)(PTR_DAT_04374b68 + 0x10);
      local_108[1] = lVar14;
    }
                    /* try { // try from 005ef484 to 005ef493 has its CatchHandler @ 005ef938 */
    (**(code **)(*plVar15 + 0x18))(plVar15,3,&local_108);
    plVar15 = local_108;
    local_108 = (long *)0x0;
    if (plVar15 == (long *)0x0) {
      return;
    }
    (**(code **)*plVar15)(plVar15);
    FUN_002e2ea0(PTR_LAB_04373088,plVar15);
    return;
  }
  lVar14 = 0;
  uVar12 = 0;
  do {
    puVar9 = puVar6 + 6;
    if ((uVar20 & 1) != 0) {
      puVar9 = (undefined8 *)puVar6[6];
    }
    lVar17 = (long)puVar9 + lVar14;
    if (*(long *)(lVar17 + 0x18) != 0) {
                    /* try { // try from 005ef7b4 to 005ef7db has its CatchHandler @ 005ef970 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                   ,99,2,"assertion failed: %s","pending_watcher_ == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 005ef4f4 to 005ef4f7 has its CatchHandler @ 005efa18 */
    iVar5 = (**(code **)(**(long **)(lVar17 + 0x10) + 0x10))();
    *(int *)(lVar17 + 0x20) = iVar5;
    if (iVar5 == 2) {
      puVar9 = *(undefined8 **)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puVar6;
      if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 005ef57c to 005ef57f has its CatchHandler @ 005ef908 */
        (**(code **)*puVar9)();
      }
                    /* try { // try from 005ef580 to 005ef597 has its CatchHandler @ 005ef970 */
      FUN_005efb5c(lVar17);
      FUN_005efd94(lVar17);
      puVar6 = *(undefined8 **)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = 0;
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
                    /* try { // try from 005ef5ac to 005ef5af has its CatchHandler @ 005ef904 */
      (**(code **)*puVar6)();
      return;
    }
    uVar20 = puVar6[5];
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 0x28;
  } while (uVar12 < uVar20 >> 1);
  if (*(long *)(param_1 + 0xf0) == 0) {
    plVar15 = (long *)(param_1 + 0xe0);
    puVar9 = (undefined8 *)*plVar15;
    *plVar15 = (long)puVar6;
    if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 005ef5c8 to 005ef5cb has its CatchHandler @ 005ef8fc */
      (**(code **)*puVar9)();
      puVar6 = (undefined8 *)*plVar15;
    }
    if ((ulong)puVar6[5] < 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
    if ((puVar6[5] & 1) == 0) {
      puVar6 = puVar6 + 6;
    }
    else {
      puVar6 = (undefined8 *)puVar6[6];
    }
    FUN_005efb5c(puVar6);
    lVar14 = *plVar15;
    if (*(ulong *)(lVar14 + 0x28) < 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
    if ((*(ulong *)(lVar14 + 0x28) & 1) == 0) {
      lVar14 = lVar14 + 0x30;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x30);
    }
    (**(code **)(**(long **)(lVar14 + 0x10) + 0x28))();
    return;
  }
  puVar9 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar9 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0xe8) = puVar6;
    uVar20 = puVar6[5];
  }
  else {
    if (PTR_DAT_04375160[0x10] == '\0') {
      *(undefined8 **)(param_1 + 0xe8) = puVar6;
    }
    else {
                    /* try { // try from 005ef710 to 005ef733 has its CatchHandler @ 005ef924 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                   ,0xf2,1,
                   "Pick First %p Shutting down latest pending subchannel list %p, about to be replaced by newer latest %p"
                   ,param_1,puVar9,puVar6);
      puVar9 = *(undefined8 **)(param_1 + 0xe8);
      *(undefined8 **)(param_1 + 0xe8) = puVar6;
      if (puVar9 == (undefined8 *)0x0) {
        uVar20 = puVar6[5];
        goto joined_r0x005ef638;
      }
    }
                    /* try { // try from 005ef544 to 005ef54b has its CatchHandler @ 005ef900 */
    (**(code **)*puVar9)(puVar9);
    puVar6 = *(undefined8 **)(param_1 + 0xe8);
    uVar20 = puVar6[5];
  }
joined_r0x005ef638:
  if (uVar20 < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                  "operator[]");
  }
  if ((uVar20 & 1) == 0) {
    puVar6 = puVar6 + 6;
  }
  else {
    puVar6 = (undefined8 *)puVar6[6];
  }
                    /* try { // try from 005ef5ec to 005ef69f has its CatchHandler @ 005ef924 */
  FUN_005efb5c(puVar6);
  lVar14 = *(long *)(param_1 + 0xe8);
  if (*(ulong *)(lVar14 + 0x28) < 2) {
                    /* try { // try from 005ef83c to 005ef8a7 has its CatchHandler @ 005ef924 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                  "operator[]");
  }
  if ((*(ulong *)(lVar14 + 0x28) & 1) == 0) {
    lVar14 = lVar14 + 0x30;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x30);
  }
  (**(code **)(**(long **)(lVar14 + 0x10) + 0x28))();
  return;
}


