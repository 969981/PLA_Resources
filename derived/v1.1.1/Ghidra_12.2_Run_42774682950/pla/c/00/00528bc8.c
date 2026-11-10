/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00528bc8; name: FUN_00528bc8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00528bc8(long param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ******ppppppuVar21;
  ulong local_f8;
  undefined8 *******local_f0;
  ulong uStack_e8;
  
  if ((*(byte *)(param_1 + 0x318) >> 3 & 1) != 0) {
    FUN_00529758(param_2,0);
    return;
  }
  if (PTR_DAT_04374b48[0x10] != '\0') {
    cVar9 = *(long *)(param_1 + 0x2c8) != 0;
    cVar5 = '\x02';
    if (!(bool)cVar9) {
      cVar5 = '\x01';
    }
    if (*(long *)(param_1 + 0x2b8) != 0) {
      cVar9 = cVar5;
    }
    if (*(long *)(param_1 + 0x2d8) != 0) {
      cVar9 = cVar9 + '\x01';
    }
    if (*(long *)(param_1 + 0x2e8) != 0) {
      cVar9 = cVar9 + '\x01';
    }
    if (*(long *)(param_1 + 0x2f8) != 0) {
      cVar9 = cVar9 + '\x01';
    }
    if (*(long *)(param_1 + 0x308) != 0) {
      cVar9 = cVar9 + '\x01';
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xa0d,1,"chand=%p calld=%p: starting %lu pending batches on subchannel_call=%p",
                 *(undefined8 *)(param_2 + 8),param_1,cVar9,*(undefined8 *)(param_1 + 400));
  }
  uVar19 = 0;
  lVar18 = 0;
  local_f8 = 0;
  lVar11 = *(long *)(param_1 + 0x2b8);
  lVar3 = param_1;
  while( true ) {
    if (lVar11 != 0) {
      if (((*(byte *)(lVar11 + 0x10) >> 5 & 1) != 0) && (*(long *)(param_1 + 0x200) != 0)) {
        lVar13 = *(long *)(lVar11 + 8);
        *(undefined8 *)(param_1 + 600) = *(undefined8 *)(lVar13 + 0x70);
        *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined1 **)(param_1 + 0x268) = &LAB_00529110;
        *(long *)(param_1 + 0x270) = param_1;
        *(undefined8 *)(param_1 + 0x278) = 0;
        *(undefined2 *)(param_1 + 0x280) = 0;
        *(undefined8 *)(param_1 + 0x298) = 0;
        *(undefined4 *)(param_1 + 0x2a0) = 0;
        *(char **)(param_1 + 0x288) =
             "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
        *(undefined4 *)(param_1 + 0x290) = 0x94e;
        *(long *)(*(long *)(lVar11 + 8) + 0x80) = param_1 + 0x260;
      }
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(param_1 + 400);
      *(undefined1 **)(lVar11 + 0x28) = &LAB_0052a600;
      *(long *)(lVar11 + 0x30) = lVar11;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(undefined2 *)(lVar11 + 0x40) = 0;
      *(undefined8 *)(lVar11 + 0x58) = 0;
      bVar8 = (uVar19 & 1) != 0;
      uVar17 = uVar19 >> 1;
      *(undefined4 *)(lVar11 + 0x60) = 0;
      *(char **)(lVar11 + 0x48) =
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
      *(undefined4 *)(lVar11 + 0x50) = 0xa1d;
      pppppppuVar15 = &local_f0;
      if (bVar8) {
        pppppppuVar15 = local_f0;
      }
      uVar4 = 6;
      if (bVar8) {
        uVar4 = uStack_e8;
      }
      if (uVar17 == uVar4) {
        uVar16 = uVar4 * 2;
        pppppppuVar10 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar4 * 0x30);
        pppppppuVar12 = pppppppuVar10;
      }
      else {
        pppppppuVar10 = (undefined8 *******)0x0;
        uVar16 = 0;
        pppppppuVar12 = pppppppuVar15;
      }
      pppppppuVar12 = pppppppuVar12 + uVar17 * 3;
      *pppppppuVar12 = (undefined8 ******)(lVar11 + 0x20);
      pppppppuVar12[2] = (undefined8 ******)"PendingBatchesResume";
      pppppppuVar12[1] = (undefined8 ******)0x0;
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        if (uVar17 != 0) {
          uVar19 = uVar19 >> 1 & 3;
          pppppppuVar12 = pppppppuVar15;
          if (uVar17 - 1 < 3) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            pppppppuVar14 = pppppppuVar10 + 6;
            do {
              ppppppuVar21 = pppppppuVar12[1];
              ppppppuVar20 = *pppppppuVar12;
              lVar11 = lVar11 + 4;
              pppppppuVar14[-4] = pppppppuVar12[2];
              pppppppuVar14[-5] = ppppppuVar21;
              pppppppuVar14[-6] = ppppppuVar20;
              ppppppuVar21 = pppppppuVar12[4];
              ppppppuVar20 = pppppppuVar12[3];
              pppppppuVar14[-1] = pppppppuVar12[5];
              pppppppuVar14[-2] = ppppppuVar21;
              pppppppuVar14[-3] = ppppppuVar20;
              ppppppuVar21 = pppppppuVar12[7];
              ppppppuVar20 = pppppppuVar12[6];
              pppppppuVar14[2] = pppppppuVar12[8];
              pppppppuVar14[1] = ppppppuVar21;
              *pppppppuVar14 = ppppppuVar20;
              ppppppuVar21 = pppppppuVar12[10];
              ppppppuVar20 = pppppppuVar12[9];
              pppppppuVar1 = pppppppuVar12 + 0xb;
              pppppppuVar12 = pppppppuVar12 + 0xc;
              pppppppuVar14[5] = *pppppppuVar1;
              pppppppuVar14[4] = ppppppuVar21;
              pppppppuVar14[3] = ppppppuVar20;
              pppppppuVar14 = pppppppuVar14 + 0xc;
            } while (uVar17 - uVar19 != lVar11);
          }
          if (uVar19 != 0) {
            pppppppuVar14 = pppppppuVar10 + lVar11 * 3;
            do {
              ppppppuVar21 = pppppppuVar12[1];
              ppppppuVar20 = *pppppppuVar12;
              uVar19 = uVar19 - 1;
              pppppppuVar14[2] = pppppppuVar12[2];
              pppppppuVar14[1] = ppppppuVar21;
              *pppppppuVar14 = ppppppuVar20;
              pppppppuVar12 = pppppppuVar12 + 3;
              pppppppuVar14 = pppppppuVar14 + 3;
            } while (uVar19 != 0);
          }
        }
        if (pppppppuVar15 != (undefined8 *******)0x0) {
          memset(pppppppuVar15,0xab,uVar17 * 0x18);
        }
        if ((local_f8 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_f0);
        }
        local_f8 = local_f8 | 1;
        local_f0 = pppppppuVar10;
        uStack_e8 = uVar16;
      }
      uVar19 = local_f8 + 2;
      bVar6 = *(byte *)(param_1 + 0x318);
      plVar2 = (long *)(lVar3 + 0x2b8);
      if ((bVar6 >> 3 & 1) != 0) {
        bVar7 = *(byte *)(*plVar2 + 0x10);
        if ((bVar7 & 1) != 0) {
          bVar6 = bVar6 & 0xfe;
          *(byte *)(param_1 + 0x318) = bVar6;
          bVar7 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar7 >> 2 & 1) != 0) {
          bVar6 = bVar6 & 0xfd;
          *(byte *)(param_1 + 0x318) = bVar6;
          bVar7 = *(byte *)(*plVar2 + 0x10);
        }
        if ((bVar7 >> 1 & 1) != 0) {
          *(byte *)(param_1 + 0x318) = bVar6 & 0xfb;
        }
      }
      *plVar2 = 0;
      local_f8 = uVar19;
    }
    lVar18 = lVar18 + 1;
    if (lVar18 == 6) break;
    lVar3 = param_1 + lVar18 * 0x10;
    lVar11 = *(long *)(lVar3 + 0x2b8);
  }
                    /* try { // try from 00528ee8 to 00528eef has its CatchHandler @ 00528fd0 */
  FUN_003d66f4(&local_f8,*(undefined8 *)(param_1 + 0x128));
  pppppppuVar15 = &local_f0;
  if ((((local_f8 & 1) != 0) && (pppppppuVar15 = local_f0, local_f0 == (undefined8 *******)0x0)) ||
     (memset(pppppppuVar15,0xab,(local_f8 >> 1) * 0x18), (local_f8 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_f0);
  }
  return;
}


