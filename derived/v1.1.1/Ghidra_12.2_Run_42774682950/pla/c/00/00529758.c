/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00529758; name: FUN_00529758
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529758(long param_1)

{
  undefined8 *******pppppppuVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *******pppppppuVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 *******pppppppuVar30;
  int *piVar31;
  undefined8 *__s;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  undefined8 ******ppppppuVar35;
  long lVar36;
  undefined8 ******ppppppuVar37;
  ulong local_f8;
  undefined8 *******local_f0;
  ulong local_e8;
  
  puVar11 = PTR_DAT_04374b48;
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  if (PTR_DAT_04374b48[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xe87,1,"chand=%p calld=%p: constructing retriable batches",uVar5,lVar6);
  }
  lVar13 = FUN_00536130(*(undefined8 *)(lVar6 + 400));
  local_f8 = 0;
  uVar28 = *(undefined8 *)(param_1 + 8);
  if (((*(char *)(lVar6 + 0x394) == '\0') || ((*(byte *)(lVar13 + 0x5b0) & 1) != 0)) ||
     ((*(byte *)(lVar6 + 0x318) & 1) != 0)) {
    lVar14 = 0;
    uVar19 = *(ulong *)(lVar13 + 0x590);
    if (uVar19 < *(ulong *)(lVar6 + 0x498) >> 1) goto LAB_005297f4;
  }
  else {
    if (puVar11[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xdd1,1,
                   "chand=%p calld=%p: replaying previously completed send_initial_metadata op",
                   uVar28,lVar6);
    }
                    /* try { // try from 005297c0 to 005299a3 has its CatchHandler @ 0052a598 */
    lVar14 = FUN_0052a870(param_1,1,1);
    FUN_0052aa64(lVar6,lVar13,lVar14);
    uVar19 = *(ulong *)(lVar13 + 0x590);
    if (uVar19 < *(ulong *)(lVar6 + 0x498) >> 1) {
LAB_005297f4:
      if ((uVar19 == *(ulong *)(lVar13 + 0x598)) && ((*(byte *)(lVar6 + 0x318) >> 1 & 1) == 0)) {
        if (puVar11[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0xde1,1,"chand=%p calld=%p: replaying previously completed send_message op",
                       uVar28,lVar6);
        }
        if (lVar14 == 0) {
          lVar14 = FUN_0052a870(param_1,1,1);
        }
        FUN_0052ad00(lVar6,param_1,lVar13,lVar14);
      }
    }
  }
  puVar10 = PTR_DAT_04373fd8;
  if (((*(char *)(lVar6 + 0x4b8) == '\0') ||
      (*(ulong *)(lVar13 + 0x590) != *(ulong *)(lVar6 + 0x498) >> 1)) ||
     (((*(byte *)(lVar13 + 0x5b0) >> 2 & 1) != 0 || ((*(byte *)(lVar6 + 0x318) >> 2 & 1) != 0)))) {
    if (lVar14 == 0) goto LAB_005299b8;
  }
  else {
    if (puVar11[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xdf5,1,
                   "chand=%p calld=%p: replaying previously completed send_trailing_metadata op",
                   uVar28,lVar6);
    }
    if (lVar14 == 0) {
      lVar14 = FUN_0052a870(param_1,1,1);
    }
    uVar19 = (ulong)(uint)(*(int *)(lVar6 + 0x4c8) << 5);
    plVar15 = *(long **)(lVar6 + 0x118);
    do {
      lVar20 = *plVar15;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar12) {
        *plVar15 = lVar20 + uVar19;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((ulong)plVar15[1] < uVar19 + lVar20) {
      lVar20 = FUN_003f5a34();
    }
    else {
      lVar20 = (long)plVar15 + lVar20 + 0x20;
    }
    *(long *)(lVar13 + 0x1b8) = lVar20;
                    /* try { // try from 0052a3dc to 0052a3e7 has its CatchHandler @ 0052a598 */
    FUN_003e0190(lVar6 + 0x4c8,lVar13 + 0x1c0);
    *(byte *)(lVar13 + 0x5b0) = *(byte *)(lVar13 + 0x5b0) | 4;
    *(byte *)(lVar14 + 0x28) = *(byte *)(lVar14 + 0x28) | 2;
    *(long *)(*(long *)(lVar14 + 0x20) + 0x18) = lVar13 + 0x1c0;
  }
  FUN_0052a60c(lVar6,param_1,lVar14 + 0x18,&local_f8);
  iVar18 = *(int *)(lVar6 + 0x390);
  if (iVar18 == 0) {
    plVar15 = *(long **)(lVar6 + 0x120);
    if (puVar10[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                   "%s %p:%p REF %s",plVar15[0xb],plVar15,plVar15[4],"subchannel_send_batches");
    }
    plVar2 = plVar15 + 1;
    do {
      lVar14 = *plVar2;
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = lVar14 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    lVar20 = *plVar15;
    if ((lVar20 != 0) && (*(char *)(lVar20 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar20 + 8),plVar15,
                   "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar14,
                   lVar14 + 1,"subchannel_send_batches");
    }
    if (lVar14 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x89,"RefNonZero");
    }
    iVar18 = *(int *)(lVar6 + 0x390);
  }
  *(int *)(lVar6 + 0x390) = iVar18 + 1;
LAB_005299b8:
  lVar34 = lVar13 + _DAT_03888dd0;
  lVar36 = lVar13 + _UNK_03888dd8;
  ppppppuVar3 = (undefined8 ******)(lVar13 + 0x548);
  lVar20 = 0;
  lVar29 = *(long *)(lVar6 + 0x2b8);
  lVar14 = lVar6;
  if (lVar29 != 0) goto LAB_00529a78;
  do {
    while( true ) {
      while( true ) {
        do {
          do {
            lVar20 = lVar20 + 1;
            if (lVar20 == 6) {
              if (PTR_DAT_04374b48[0x10] != '\0') {
                    /* try { // try from 0052a440 to 0052a597 has its CatchHandler @ 0052a598 */
                FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                             ,0xea0,1,
                             "chand=%p calld=%p: starting %lu retriable batches on subchannel_call=%p"
                             ,uVar5,lVar6,local_f8 >> 1,*(undefined8 *)(lVar6 + 400));
              }
                    /* try { // try from 0052a360 to 0052a367 has its CatchHandler @ 0052a598 */
              FUN_003d66f4(&local_f8,*(undefined8 *)(lVar6 + 0x128));
              pppppppuVar30 = &local_f0;
              if ((((local_f8 & 1) != 0) &&
                  (pppppppuVar30 = local_f0, local_f0 == (undefined8 *******)0x0)) ||
                 (memset(pppppppuVar30,0xab,(local_f8 >> 1) * 0x18), (local_f8 & 1) != 0)) {
                FUN_002e2ea0(PTR_LAB_04373088,local_f0);
              }
              return;
            }
            lVar14 = lVar6 + lVar20 * 0x10;
            lVar29 = *(long *)(lVar14 + 0x2b8);
          } while (lVar29 == 0);
LAB_00529a78:
          uVar19 = local_f8;
          bVar7 = *(byte *)(lVar29 + 0x10);
        } while ((((((bVar7 & 1) != 0) && ((*(byte *)(lVar13 + 0x5b0) & 1) != 0)) ||
                  (((bVar7 >> 2 & 1) != 0 &&
                   (*(ulong *)(lVar13 + 0x598) < *(ulong *)(lVar13 + 0x590))))) ||
                 (((bVar7 >> 1 & 1) != 0 &&
                  ((*(long *)(lVar13 + 0x590) + ((ulong)(bVar7 >> 2) & 1) <
                    *(ulong *)(lVar6 + 0x498) >> 1 || ((*(byte *)(lVar13 + 0x5b0) >> 2 & 1) != 0))))
                 )) || ((((bVar7 >> 3 & 1) != 0 && ((*(byte *)(lVar13 + 0x5b0) >> 4 & 1) != 0)) ||
                        (((bVar7 >> 4 & 1) != 0 &&
                         (*(ulong *)(lVar13 + 0x5a8) < *(ulong *)(lVar13 + 0x5a0)))))));
        if (((bVar7 >> 5 & 1) == 0) || (((uint)(int)*(char *)(lVar13 + 0x5b0) >> 6 & 1) == 0))
        break;
        if (*(long *)(lVar13 + 0x5d8) != 0) {
          if (*(char *)(lVar13 + 0x5b0) < 0) {
            bVar12 = (local_f8 & 1) != 0;
            uVar33 = local_f8 >> 1;
            pppppppuVar30 = &local_f0;
            if (bVar12) {
              pppppppuVar30 = local_f0;
            }
            uVar4 = 6;
            if (bVar12) {
              uVar4 = local_e8;
            }
            if (uVar33 == uVar4) {
              uVar32 = uVar4 * 2;
              pppppppuVar17 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar4 * 0x30);
              pppppppuVar22 = pppppppuVar17;
            }
            else {
              pppppppuVar17 = (undefined8 *******)0x0;
              uVar32 = 0;
              pppppppuVar22 = pppppppuVar30;
            }
            pppppppuVar22 = pppppppuVar22 + uVar33 * 3;
            *pppppppuVar22 = ppppppuVar3;
            pppppppuVar22[2] =
                 (undefined8 ******)
                 "re-executing recv_trailing_metadata_ready to propagate internally triggered result"
            ;
            pppppppuVar22[1] = (undefined8 ******)0x0;
            if (pppppppuVar17 != (undefined8 *******)0x0) {
              if (uVar33 != 0) {
                uVar19 = uVar19 >> 1 & 3;
                pppppppuVar22 = pppppppuVar30;
                if (uVar33 - 1 < 3) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = 0;
                  pppppppuVar26 = pppppppuVar17 + 6;
                  do {
                    ppppppuVar37 = pppppppuVar22[1];
                    ppppppuVar35 = *pppppppuVar22;
                    lVar14 = lVar14 + 4;
                    pppppppuVar26[-4] = pppppppuVar22[2];
                    pppppppuVar26[-5] = ppppppuVar37;
                    pppppppuVar26[-6] = ppppppuVar35;
                    ppppppuVar37 = pppppppuVar22[4];
                    ppppppuVar35 = pppppppuVar22[3];
                    pppppppuVar26[-1] = pppppppuVar22[5];
                    pppppppuVar26[-2] = ppppppuVar37;
                    pppppppuVar26[-3] = ppppppuVar35;
                    ppppppuVar37 = pppppppuVar22[7];
                    ppppppuVar35 = pppppppuVar22[6];
                    pppppppuVar26[2] = pppppppuVar22[8];
                    pppppppuVar26[1] = ppppppuVar37;
                    *pppppppuVar26 = ppppppuVar35;
                    ppppppuVar37 = pppppppuVar22[10];
                    ppppppuVar35 = pppppppuVar22[9];
                    pppppppuVar1 = pppppppuVar22 + 0xb;
                    pppppppuVar22 = pppppppuVar22 + 0xc;
                    pppppppuVar26[5] = *pppppppuVar1;
                    pppppppuVar26[4] = ppppppuVar37;
                    pppppppuVar26[3] = ppppppuVar35;
                    pppppppuVar26 = pppppppuVar26 + 0xc;
                  } while (uVar33 - uVar19 != lVar14);
                }
                if (uVar19 != 0) {
                  pppppppuVar26 = pppppppuVar17 + lVar14 * 3;
                  do {
                    ppppppuVar37 = pppppppuVar22[1];
                    ppppppuVar35 = *pppppppuVar22;
                    uVar19 = uVar19 - 1;
                    pppppppuVar26[2] = pppppppuVar22[2];
                    pppppppuVar26[1] = ppppppuVar37;
                    *pppppppuVar26 = ppppppuVar35;
                    pppppppuVar22 = pppppppuVar22 + 3;
                    pppppppuVar26 = pppppppuVar26 + 3;
                  } while (uVar19 != 0);
                }
              }
              if (pppppppuVar30 != (undefined8 *******)0x0) {
                memset(pppppppuVar30,0xab,uVar33 * 0x18);
              }
              if ((local_f8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_f0);
              }
              local_f8 = local_f8 | 1;
              local_f0 = pppppppuVar17;
              local_e8 = uVar32;
            }
            local_f8 = local_f8 + 2;
            *(undefined8 *)(lVar13 + 0x5d8) = 0;
          }
          else {
            FUN_0052b7a8();
            *(undefined8 *)(lVar13 + 0x5d8) = 0;
          }
        }
      }
      plVar15 = (long *)(lVar14 + 0x2b8);
      if (((*(long *)(lVar6 + 0x140) != 0) && (*(long *)(*(long *)(lVar6 + 0x140) + 0x18) != 0)) &&
         ((*(byte *)(lVar6 + 0x318) >> 4 & 1) == 0)) break;
      FUN_0052a60c(lVar6,param_1,lVar29,&local_f8);
      bVar7 = *(byte *)(lVar6 + 0x318);
      if ((bVar7 >> 3 & 1) != 0) {
        bVar8 = *(byte *)(*plVar15 + 0x10);
        if ((bVar8 & 1) != 0) {
          bVar7 = bVar7 & 0xfe;
          *(byte *)(lVar6 + 0x318) = bVar7;
          bVar8 = *(byte *)(*plVar15 + 0x10);
        }
        if ((bVar8 >> 2 & 1) != 0) {
          bVar7 = bVar7 & 0xfd;
          *(byte *)(lVar6 + 0x318) = bVar7;
          bVar8 = *(byte *)(*plVar15 + 0x10);
        }
        if ((bVar8 >> 1 & 1) != 0) {
          *(byte *)(lVar6 + 0x318) = bVar7 & 0xfb;
        }
      }
      *plVar15 = 0;
    }
    bVar12 = (bVar7 & 7) != 0;
    bVar8 = bVar7 >> 3 & 1;
    if (bVar12) {
      bVar8 = bVar8 + 1;
    }
                    /* try { // try from 00529b08 to 00529c77 has its CatchHandler @ 0052a5b0 */
    lVar16 = FUN_0052a870(param_1,bVar8 + (bVar7 >> 4 & 1) + (bVar7 >> 5 & 1),bVar12);
    if (*(char *)(lVar14 + 0x2c0) == '\0') {
      *(undefined1 *)(lVar14 + 0x2c0) = 1;
      lVar14 = *plVar15;
      bVar7 = *(byte *)(lVar14 + 0x10);
      if ((bVar7 & 1) != 0) {
        *(undefined1 *)(lVar6 + 0x394) = 1;
        if (*(long *)(lVar6 + 0x398) != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x8c9,2,"assertion failed: %s","send_initial_metadata_storage_ == nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        piVar31 = (int *)**(undefined8 **)(lVar14 + 8);
        plVar15 = *(long **)(lVar6 + 0x118);
        uVar19 = (ulong)(uint)(*piVar31 << 5);
        do {
          lVar21 = *plVar15;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *plVar15 = lVar21 + uVar19;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((ulong)plVar15[1] < uVar19 + lVar21) {
          lVar21 = FUN_003f5a34();
        }
        else {
          lVar21 = (long)plVar15 + lVar21 + 0x20;
        }
        *(long *)(lVar6 + 0x398) = lVar21;
        FUN_003e0190(piVar31,lVar6 + 0x3a0);
        lVar21 = *(long *)(lVar14 + 8);
        *(undefined4 *)(lVar6 + 0x488) = *(undefined4 *)(lVar21 + 8);
        *(undefined8 *)(lVar6 + 0x490) = *(undefined8 *)(lVar21 + 0x10);
        bVar7 = *(byte *)(lVar14 + 0x10);
      }
      if ((bVar7 >> 2 & 1) != 0) {
        uVar28 = FUN_0052b970(*(undefined8 *)(lVar6 + 0x118),*(long *)(lVar14 + 8) + 0x28);
        uVar19 = *(ulong *)(lVar6 + 0x498);
        if ((uVar19 & 1) == 0) {
          uVar33 = 3;
          __s = (undefined8 *)(lVar6 + 0x4a0);
          if (uVar19 >> 1 != 3) goto LAB_00529c9c;
LAB_00529cb8:
          lVar21 = FUN_002e2e80(PTR_FUN_04373078,uVar33 << 4);
          *(undefined8 *)(lVar21 + uVar33 * 8) = uVar28;
          if (lVar21 == 0) {
            uVar19 = *(ulong *)(lVar6 + 0x498);
          }
          else {
            if (uVar33 != 0) {
              uVar19 = uVar33 & 7;
              if (uVar33 - 1 < 7) {
                lVar23 = 0;
                puVar25 = __s;
              }
              else {
                lVar23 = 0;
                puVar24 = (undefined8 *)(lVar21 + 0x20);
                puVar27 = __s;
                do {
                  puVar25 = puVar27 + 8;
                  puVar24[-4] = *puVar27;
                  puVar24[-3] = puVar27[1];
                  puVar24[-2] = puVar27[2];
                  puVar24[-1] = puVar27[3];
                  *puVar24 = puVar27[4];
                  puVar24[1] = puVar27[5];
                  puVar24[2] = puVar27[6];
                  lVar23 = lVar23 + 8;
                  puVar24[3] = puVar27[7];
                  puVar24 = puVar24 + 8;
                  puVar27 = puVar25;
                } while (uVar33 - uVar19 != lVar23);
              }
              if (uVar19 != 0) {
                puVar24 = (undefined8 *)(lVar21 + lVar23 * 8);
                do {
                  uVar19 = uVar19 - 1;
                  *puVar24 = *puVar25;
                  puVar24 = puVar24 + 1;
                  puVar25 = puVar25 + 1;
                } while (uVar19 != 0);
              }
            }
            if (__s != (undefined8 *)0x0) {
              memset(__s,0xab,uVar33 << 3);
            }
            uVar19 = *(ulong *)(lVar6 + 0x498);
            if ((uVar19 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar6 + 0x4a0));
              uVar19 = *(ulong *)(lVar6 + 0x498);
            }
            uVar19 = uVar19 | 1;
            *(long *)(lVar6 + 0x4a0) = lVar21;
            *(ulong *)(lVar6 + 0x4a8) = uVar33 << 1;
            *(ulong *)(lVar6 + 0x498) = uVar19;
          }
        }
        else {
          __s = *(undefined8 **)(lVar6 + 0x4a0);
          uVar33 = *(ulong *)(lVar6 + 0x4a8);
          if (uVar19 >> 1 == uVar33) goto LAB_00529cb8;
LAB_00529c9c:
          __s[uVar19 >> 1] = uVar28;
        }
        *(ulong *)(lVar6 + 0x498) = uVar19 + 2;
        bVar7 = *(byte *)(lVar14 + 0x10);
      }
      if ((bVar7 >> 1 & 1) != 0) {
        *(undefined1 *)(lVar6 + 0x4b8) = 1;
        if (*(long *)(lVar6 + 0x4c0) != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x8dd,2,"assertion failed: %s","send_trailing_metadata_storage_ == nullptr")
          ;
                    /* WARNING: Subroutine does not return */
          abort();
        }
        piVar31 = *(int **)(*(long *)(lVar14 + 8) + 0x18);
        plVar15 = *(long **)(lVar6 + 0x118);
        uVar19 = (ulong)(uint)(*piVar31 << 5);
        do {
          lVar14 = *plVar15;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *plVar15 = lVar14 + uVar19;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((ulong)plVar15[1] < uVar19 + lVar14) {
                    /* try { // try from 00529e38 to 0052a19f has its CatchHandler @ 0052a5b0 */
          lVar14 = FUN_003f5a34();
        }
        else {
          lVar14 = (long)plVar15 + lVar14 + 0x20;
        }
        *(long *)(lVar6 + 0x4c0) = lVar14;
        FUN_003e0190(piVar31,lVar6 + 0x4c8);
      }
    }
    bVar7 = *(byte *)(lVar29 + 0x10);
    if ((bVar7 & 1) != 0) {
      FUN_0052aa64(lVar6,lVar13,lVar16);
      bVar7 = *(byte *)(lVar29 + 0x10);
    }
    if ((bVar7 >> 2 & 1) != 0) {
      FUN_0052ad00(lVar6,param_1,lVar13,lVar16);
      bVar7 = *(byte *)(lVar29 + 0x10);
    }
    if ((bVar7 >> 1 & 1) != 0) {
      uVar19 = (ulong)(uint)(*(int *)(lVar6 + 0x4c8) << 5);
      plVar15 = *(long **)(lVar6 + 0x118);
      do {
        lVar14 = *plVar15;
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar12) {
          *plVar15 = lVar14 + uVar19;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((ulong)plVar15[1] < uVar19 + lVar14) {
        lVar14 = FUN_003f5a34();
      }
      else {
        lVar14 = (long)plVar15 + lVar14 + 0x20;
      }
      *(long *)(lVar13 + 0x1b8) = lVar14;
      FUN_003e0190(lVar6 + 0x4c8,lVar13 + 0x1c0);
      *(byte *)(lVar13 + 0x5b0) = *(byte *)(lVar13 + 0x5b0) | 4;
      *(byte *)(lVar16 + 0x28) = *(byte *)(lVar16 + 0x28) | 2;
      *(long *)(*(long *)(lVar16 + 0x20) + 0x18) = lVar13 + 0x1c0;
      bVar7 = *(byte *)(lVar29 + 0x10);
    }
    if ((bVar7 >> 3 & 1) != 0) {
      if (*(long *)(*(long *)(lVar29 + 8) + 0x40) != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0xe69,2,"assertion failed: %s",
                     "batch->payload->recv_initial_metadata.recv_flags == nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(byte *)(lVar13 + 0x5b0) = *(byte *)(lVar13 + 0x5b0) | 0x10;
      *(byte *)(lVar16 + 0x28) = *(byte *)(lVar16 + 0x28) | 8;
      FUN_003de320(lVar13 + 0x2a8);
      lVar14 = *(long *)(lVar16 + 0x20);
      *(long *)(lVar14 + 0x38) = lVar13 + 0x2a8;
      *(long *)(lVar14 + 0x50) = lVar13 + 0x3d8;
      *(undefined1 **)(lVar13 + 0x398) = &LAB_0052ba1c;
      *(char **)(lVar13 + 0x3b8) =
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
      *(long *)(lVar13 + 0x3a0) = lVar16;
      *(undefined8 *)(lVar13 + 0x3a8) = 0;
      *(undefined2 *)(lVar13 + 0x3b0) = 0;
      *(undefined8 *)(lVar13 + 0x3c8) = 0;
      *(undefined4 *)(lVar13 + 0x3d0) = 0;
      *(undefined4 *)(lVar13 + 0x3c0) = 0xd89;
      *(long *)(*(long *)(lVar16 + 0x20) + 0x48) = lVar13 + 0x390;
      bVar7 = *(byte *)(lVar29 + 0x10);
    }
    if ((bVar7 >> 4 & 1) != 0) {
      *(long *)(lVar13 + 0x5a0) = *(long *)(lVar13 + 0x5a0) + 1;
      *(byte *)(lVar16 + 0x28) = *(byte *)(lVar16 + 0x28) | 0x10;
      *(long *)(*(long *)(lVar16 + 0x20) + 0x60) = lVar13 + 0x428;
      *(undefined1 **)(lVar13 + 1000) = &LAB_0052bf88;
      *(char **)(lVar13 + 0x408) =
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
      *(long *)(lVar13 + 0x3f0) = lVar16;
      *(undefined8 *)(lVar13 + 0x3f8) = 0;
      *(undefined2 *)(lVar13 + 0x400) = 0;
      *(undefined8 *)(lVar13 + 0x418) = 0;
      *(undefined4 *)(lVar13 + 0x420) = 0;
      *(undefined4 *)(lVar13 + 0x410) = 0xd95;
      *(long *)(*(long *)(lVar16 + 0x20) + 0x68) = lVar13 + 0x3e0;
      bVar7 = *(byte *)(lVar29 + 0x10);
    }
    if ((bVar7 >> 5 & 1) != 0) {
      *(byte *)(lVar13 + 0x5b0) = *(byte *)(lVar13 + 0x5b0) | 0x40;
      *(byte *)(lVar16 + 0x28) = *(byte *)(lVar16 + 0x28) | 0x20;
      FUN_003de320(lVar34);
      lVar14 = *(long *)(lVar16 + 0x20);
      *(long *)(lVar14 + 0x78) = lVar36;
      *(long *)(lVar14 + 0x70) = lVar34;
      *(undefined1 **)(lVar13 + 0x550) = &LAB_0052c3f8;
      *(char **)(lVar13 + 0x570) =
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
      *(long *)(lVar13 + 0x558) = lVar16;
      *(undefined8 *)(lVar13 + 0x560) = 0;
      *(undefined2 *)(lVar13 + 0x568) = 0;
      *(undefined8 *)(lVar13 + 0x580) = 0;
      *(undefined4 *)(lVar13 + 0x588) = 0;
      *(undefined4 *)(lVar13 + 0x578) = 0xda6;
      lVar14 = *(long *)(lVar16 + 0x20);
      *(undefined8 *******)(lVar14 + 0x80) = ppppppuVar3;
      if (*(long *)(lVar6 + 0x200) != 0) {
        *(undefined8 *)(lVar6 + 600) = *(undefined8 *)(lVar14 + 0x70);
        *(undefined8 *******)(lVar6 + 0x2a8) = ppppppuVar3;
        *(undefined1 **)(lVar6 + 0x268) = &LAB_00529110;
        *(char **)(lVar6 + 0x288) =
             "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
        *(long *)(lVar6 + 0x270) = lVar6;
        *(undefined8 *)(lVar6 + 0x278) = 0;
        *(undefined2 *)(lVar6 + 0x280) = 0;
        *(undefined8 *)(lVar6 + 0x298) = 0;
        *(undefined4 *)(lVar6 + 0x2a0) = 0;
        *(undefined4 *)(lVar6 + 0x290) = 0x94e;
        *(long *)(*(long *)(lVar16 + 0x20) + 0x80) = lVar6 + 0x260;
      }
    }
    FUN_0052a60c(lVar6,param_1,lVar16 + 0x18,&local_f8);
    if ((*(byte *)(lVar29 + 0x10) & 7) != 0) {
      iVar18 = *(int *)(lVar6 + 0x390);
      if (iVar18 == 0) {
        plVar15 = *(long **)(lVar6 + 0x120);
        if (PTR_DAT_04373fd8[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                       "%s %p:%p REF %s",plVar15[0xb],plVar15,plVar15[4],"subchannel_send_batches");
        }
        plVar2 = plVar15 + 1;
        do {
          lVar14 = *plVar2;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar14 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        lVar29 = *plVar15;
        if ((lVar29 != 0) && (*(char *)(lVar29 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                       "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar29 + 8),plVar15,
                       "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,
                       lVar14,lVar14 + 1,"subchannel_send_batches");
        }
        if (lVar14 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89,
                        "RefNonZero");
        }
        iVar18 = *(int *)(lVar6 + 0x390);
      }
      *(int *)(lVar6 + 0x390) = iVar18 + 1;
    }
  } while( true );
}


