/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052860c; name: FUN_0052860c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0052860c(long param_1,long param_2,undefined8 ******param_3,code *param_4)

{
  undefined8 *******pppppppuVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  char cVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 uVar13;
  size_t __n;
  long lVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 ******ppppppuVar24;
  ulong local_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  
  if (param_3 == (undefined8 ******)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x9d2,2,"assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_04374b48[0x10] != '\0') {
    cVar10 = *(long *)(param_1 + 0x2c8) != 0;
    cVar6 = '\x02';
    if (!(bool)cVar10) {
      cVar6 = '\x01';
    }
    if (*(long *)(param_1 + 0x2b8) != 0) {
      cVar10 = cVar6;
    }
    if (*(long *)(param_1 + 0x2d8) != 0) {
      cVar10 = cVar10 + '\x01';
    }
    if (*(long *)(param_1 + 0x2e8) != 0) {
      cVar10 = cVar10 + '\x01';
    }
    uVar18 = *(undefined8 *)(param_2 + 8);
    if (*(long *)(param_1 + 0x2f8) != 0) {
      cVar10 = cVar10 + '\x01';
    }
    if (*(long *)(param_1 + 0x308) != 0) {
      cVar10 = cVar10 + '\x01';
    }
    uVar13 = FUN_002f1480(param_3);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x9d8,1,"chand=%p calld=%p: failing %lu pending batches: %s",uVar18,param_1,cVar10
                 ,uVar13);
  }
  uVar22 = 0;
  lVar23 = 0;
  local_f8 = 0;
  lVar19 = *(long *)(param_1 + 0x2b8);
  lVar3 = param_1;
  while( true ) {
    if (lVar19 != 0) {
      if (((*(byte *)(lVar19 + 0x10) >> 5 & 1) != 0) && (*(long *)(param_1 + 0x200) != 0)) {
        lVar14 = *(long *)(lVar19 + 8);
        *(undefined8 *)(param_1 + 600) = *(undefined8 *)(lVar14 + 0x70);
        *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(lVar14 + 0x80);
        *(undefined1 **)(param_1 + 0x268) = &LAB_00529110;
        *(char **)(param_1 + 0x288) =
             "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
        *(long *)(param_1 + 0x270) = param_1;
        *(undefined8 *)(param_1 + 0x278) = 0;
        *(undefined2 *)(param_1 + 0x280) = 0;
        *(undefined8 *)(param_1 + 0x298) = 0;
        *(undefined4 *)(param_1 + 0x2a0) = 0;
        *(undefined4 *)(param_1 + 0x290) = 0x94e;
        *(long *)(*(long *)(lVar19 + 8) + 0x80) = param_1 + 0x260;
      }
      *(long *)(lVar19 + 0x18) = param_1;
      *(undefined1 **)(lVar19 + 0x28) = &LAB_005290c8;
      *(long *)(lVar19 + 0x30) = lVar19;
      *(char **)(lVar19 + 0x48) =
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
      *(undefined8 *)(lVar19 + 0x38) = 0;
      *(undefined2 *)(lVar19 + 0x40) = 0;
      *(undefined8 *)(lVar19 + 0x58) = 0;
      *(undefined4 *)(lVar19 + 0x60) = 0;
      *(undefined4 *)(lVar19 + 0x50) = 0x9e7;
      ppppppuVar11 = param_3;
      if ((undefined8 ******)0x4 < param_3) {
                    /* try { // try from 00528734 to 00528747 has its CatchHandler @ 00528b6c */
        ppppppuVar11 = (undefined8 ******)
                       FUN_002f03c0(param_3,
                                    "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                                    ,0x9e8);
        uVar22 = local_f8;
      }
      bVar9 = (uVar22 & 1) != 0;
      pppppppuVar16 = &local_f0;
      if (bVar9) {
        pppppppuVar16 = local_f0;
      }
      uVar20 = uVar22 >> 1;
      uVar5 = 6;
      if (bVar9) {
        uVar5 = uStack_e8;
      }
      if (uVar20 == uVar5) {
        uVar21 = uVar5 * 2;
        pppppppuVar12 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar5 * 0x30);
        pppppppuVar15 = pppppppuVar12;
      }
      else {
        pppppppuVar12 = (undefined8 *******)0x0;
        uVar21 = 0;
        pppppppuVar15 = pppppppuVar16;
      }
      pppppppuVar15 = pppppppuVar15 + uVar20 * 3;
      *pppppppuVar15 = (undefined8 ******)(lVar19 + 0x20);
      pppppppuVar15[1] = ppppppuVar11;
      pppppppuVar15[2] = (undefined8 ******)"PendingBatchesFail";
      if (pppppppuVar12 != (undefined8 *******)0x0) {
        if (uVar20 != 0) {
          uVar22 = uVar22 >> 1 & 3;
          pppppppuVar15 = pppppppuVar16;
          if (uVar20 - 1 < 3) {
            lVar19 = 0;
          }
          else {
            lVar19 = 0;
            pppppppuVar17 = pppppppuVar12 + 6;
            do {
              ppppppuVar24 = pppppppuVar15[1];
              ppppppuVar11 = *pppppppuVar15;
              lVar19 = lVar19 + 4;
              pppppppuVar17[-4] = pppppppuVar15[2];
              pppppppuVar17[-5] = ppppppuVar24;
              pppppppuVar17[-6] = ppppppuVar11;
              ppppppuVar24 = pppppppuVar15[4];
              ppppppuVar11 = pppppppuVar15[3];
              pppppppuVar17[-1] = pppppppuVar15[5];
              pppppppuVar17[-2] = ppppppuVar24;
              pppppppuVar17[-3] = ppppppuVar11;
              ppppppuVar24 = pppppppuVar15[7];
              ppppppuVar11 = pppppppuVar15[6];
              pppppppuVar17[2] = pppppppuVar15[8];
              pppppppuVar17[1] = ppppppuVar24;
              *pppppppuVar17 = ppppppuVar11;
              ppppppuVar24 = pppppppuVar15[10];
              ppppppuVar11 = pppppppuVar15[9];
              pppppppuVar1 = pppppppuVar15 + 0xb;
              pppppppuVar15 = pppppppuVar15 + 0xc;
              pppppppuVar17[5] = *pppppppuVar1;
              pppppppuVar17[4] = ppppppuVar24;
              pppppppuVar17[3] = ppppppuVar11;
              pppppppuVar17 = pppppppuVar17 + 0xc;
            } while (uVar20 - uVar22 != lVar19);
          }
          if (uVar22 != 0) {
            pppppppuVar17 = pppppppuVar12 + lVar19 * 3;
            do {
              ppppppuVar24 = pppppppuVar15[1];
              ppppppuVar11 = *pppppppuVar15;
              uVar22 = uVar22 - 1;
              pppppppuVar17[2] = pppppppuVar15[2];
              pppppppuVar17[1] = ppppppuVar24;
              *pppppppuVar17 = ppppppuVar11;
              pppppppuVar15 = pppppppuVar15 + 3;
              pppppppuVar17 = pppppppuVar17 + 3;
            } while (uVar22 != 0);
          }
        }
        if (pppppppuVar16 != (undefined8 *******)0x0) {
          memset(pppppppuVar16,0xab,uVar20 * 0x18);
        }
        if ((local_f8 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_f0);
        }
        local_f8 = local_f8 | 1;
        local_f0 = pppppppuVar12;
        uStack_e8 = uVar21;
      }
      uVar22 = local_f8 + 2;
      bVar7 = *(byte *)(param_1 + 0x318);
      plVar2 = (long *)(lVar3 + 0x2b8);
      if ((bVar7 >> 3 & 1) != 0) {
        bVar8 = *(byte *)(*plVar2 + 0x10);
        if ((bVar8 & 1) != 0) {
          bVar7 = bVar7 & 0xfe;
          *(byte *)(param_1 + 0x318) = bVar7;
          bVar8 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar8 >> 2 & 1) != 0) {
          bVar7 = bVar7 & 0xfd;
          *(byte *)(param_1 + 0x318) = bVar7;
          bVar8 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar8 >> 1 & 1) != 0) {
          *(byte *)(param_1 + 0x318) = bVar7 & 0xfb;
        }
      }
      *plVar2 = 0;
      local_f8 = uVar22;
    }
    lVar23 = lVar23 + 1;
    if (lVar23 == 6) break;
    lVar3 = param_1 + lVar23 * 0x10;
    lVar19 = *(long *)(lVar3 + 0x2b8);
  }
                    /* try { // try from 00528928 to 00528947 has its CatchHandler @ 00528b4c */
  uVar22 = (*param_4)(&local_f8);
  uVar18 = *(undefined8 *)(param_1 + 0x128);
  if ((uVar22 & 1) != 0) {
    FUN_003d66f4(&local_f8,uVar18);
    goto joined_r0x00528a1c;
  }
  if (local_f8 < 2) {
    __n = 0;
    if ((local_f8 & 1) != 0) goto LAB_005289e0;
LAB_00528974:
    pppppppuVar16 = &local_f0;
LAB_005289e8:
    memset(pppppppuVar16,0xab,__n);
    if ((local_f8 & 1) != 0) goto LAB_00528a00;
  }
  else {
    lVar23 = 0;
    uVar22 = 0;
    do {
      pppppppuVar16 = &local_f0;
      if ((local_f8 & 1) != 0) {
        pppppppuVar16 = local_f0;
      }
      puVar4 = (undefined8 *)((long)pppppppuVar16 + lVar23);
                    /* try { // try from 005289a4 to 005289b3 has its CatchHandler @ 00528b5c */
      FUN_003d6e50(uVar18,*puVar4,puVar4[1],
                   "external/com_google_grpc_base\\src/core/lib/iomgr/call_combiner.h",0xc0,
                   puVar4[2]);
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 0x18;
    } while (uVar22 < local_f8 >> 1);
    __n = (local_f8 >> 1) * 0x18;
    if ((local_f8 & 1) == 0) goto LAB_00528974;
LAB_005289e0:
    pppppppuVar16 = local_f0;
    if (local_f0 != (undefined8 *******)0x0) goto LAB_005289e8;
LAB_00528a00:
    FUN_002e2ea0(PTR_LAB_04373088,local_f0);
  }
  local_f8 = 0;
joined_r0x00528a1c:
  if (&DAT_00000004 < param_3) {
                    /* try { // try from 00528a20 to 00528a33 has its CatchHandler @ 00528b4c */
    FUN_002f0430(param_3,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0x9f2);
  }
  pppppppuVar16 = &local_f0;
  if ((((local_f8 & 1) != 0) && (pppppppuVar16 = local_f0, local_f0 == (undefined8 *******)0x0)) ||
     (memset(pppppppuVar16,0xab,(local_f8 >> 1) * 0x18), (local_f8 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_f0);
  }
  return;
}


