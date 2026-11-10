/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058ca10; name: FUN_0058ca10
 */


undefined8 FUN_0058ca10(long param_1,byte param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  size_t __n;
  long lVar11;
  undefined8 *puVar12;
  void *__src;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((param_1 == 0) || (param_3 == (undefined8 *)0x0)) {
    uVar5 = 2;
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                 ,0x102,2,"Invalid arguments to create_handshaker_result()");
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x18);
    lVar7 = *(long *)(puVar10 + 0xe);
    if (lVar7 == 0) {
      pcVar6 = "Invalid identity";
      uVar5 = 0x10a;
    }
    else if ((*(int *)(lVar7 + 0x18) == 1) && (__n = *(size_t *)(lVar7 + 0x10), __n != 0)) {
      if (*(ulong *)(puVar10 + 0xc) < 0x2c) {
        pcVar6 = "Bad key length";
        uVar5 = 0x115;
      }
      else {
        lVar11 = *(long *)(puVar10 + 0x12);
        if (lVar11 == 0) {
          pcVar6 = "Peer does not set RPC protocol versions.";
          uVar5 = 0x11b;
        }
        else {
          lVar13 = *(long *)(puVar10 + 4);
          if (lVar13 == 0) {
            pcVar6 = "Invalid application protocol";
            uVar5 = 0x121;
          }
          else {
            lVar14 = *(long *)(puVar10 + 8);
            if (lVar14 == 0) {
              pcVar6 = "Invalid record protocol";
              uVar5 = 0x127;
            }
            else {
              lVar9 = *(long *)(puVar10 + 0x10);
              if (lVar9 != 0) {
                __src = *(void **)(lVar7 + 8);
                uVar5 = *(undefined8 *)(puVar10 + 2);
                uVar8 = *(undefined8 *)(puVar10 + 6);
                puVar12 = *(undefined8 **)(puVar10 + 10);
                if (*(int *)(lVar9 + 0x18) == 1) {
                  puVar15 = *(undefined1 **)(lVar9 + 8);
                  local_a0 = *(undefined8 *)(lVar9 + 0x10);
                }
                else {
                  local_a0 = 0;
                  puVar15 = &DAT_03996322;
                }
                puVar1 = (undefined8 *)FUN_002ebd80(0x78);
                puVar2 = (undefined8 *)FUN_002ebd80(0x2c);
                puVar1[2] = puVar2;
                uVar17 = *(undefined8 *)((long)puVar12 + 0x24);
                uVar16 = *(undefined8 *)((long)puVar12 + 0x1c);
                uVar18 = *puVar12;
                uVar20 = puVar12[3];
                uVar19 = puVar12[2];
                puVar2[1] = puVar12[1];
                *puVar2 = uVar18;
                puVar2[3] = uVar20;
                puVar2[2] = uVar19;
                *(undefined8 *)((long)puVar2 + 0x24) = uVar17;
                *(undefined8 *)((long)puVar2 + 0x1c) = uVar16;
                __dest = (void *)FUN_002ebd80(__n + 1);
                puVar1[1] = __dest;
                memcpy(__dest,__src,__n);
                puVar1[0xe] = (ulong)*puVar10;
                lVar7 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 0058cc20 to 0058cc2b has its CatchHandler @ 0058cd74 */
                uVar3 = FUN_0058b400(lVar11,lVar7,puVar1 + 5);
                if ((uVar3 & 1) == 0) {
                    /* try { // try from 0058ccd4 to 0058ccef has its CatchHandler @ 0058cd74 */
                  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                               ,0x142,2,"Failed to serialize peer\'s RPC protocol versions.");
                  uVar5 = 5;
                }
                else {
                    /* try { // try from 0058cc30 to 0058cc43 has its CatchHandler @ 0058cd54 */
                  lVar9 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 0058cc48 to 0058cc57 has its CatchHandler @ 0058cd48 */
                  puVar4 = (undefined4 *)FUN_0053ee00(PTR_PTR_04374e78,lVar9);
                  *(undefined8 *)(puVar4 + 2) = uVar5;
                  *(long *)(puVar4 + 4) = lVar13;
                  *(undefined8 *)(puVar4 + 6) = uVar8;
                  *(long *)(puVar4 + 8) = lVar14;
                  *(void **)(puVar4 + 10) = __src;
                  *(size_t *)(puVar4 + 0xc) = __n;
                  *puVar4 = 2;
                  *(long *)(puVar4 + 0x12) = lVar11;
                  *(undefined1 **)(puVar4 + 0xe) = puVar15;
                  *(undefined8 *)(puVar4 + 0x10) = local_a0;
                    /* try { // try from 0058cc80 to 0058cc93 has its CatchHandler @ 0058cd5c */
                  lVar11 = FUN_00542580(puVar4,PTR_PTR_04374e78,lVar9,&local_68);
                  if (lVar11 == 0) {
                    /* try { // try from 0058ccfc to 0058cd17 has its CatchHandler @ 0058cd5c */
                    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                                 ,0x155,2,"Failed to serialize peer\'s ALTS context.");
                    uVar5 = 5;
                  }
                  else {
                    /* try { // try from 0058cc9c to 0058cca3 has its CatchHandler @ 0058cd3c */
                    FUN_002f2f40(&local_88,lVar11,local_68);
                    uVar5 = 0;
                    puVar1[0xb] = uStack_80;
                    puVar1[10] = local_88;
                    puVar1[0xd] = uStack_70;
                    puVar1[0xc] = local_78;
                    *(byte *)(puVar1 + 9) = param_2 & 1;
                    *puVar1 = &PTR_LAB_0418a018;
                    *param_3 = puVar1;
                  }
                  if (lVar9 != 0) {
                    /* try { // try from 0058cd20 to 0058cd27 has its CatchHandler @ 0058cd38 */
                    FUN_0053f5f0(lVar9);
                  }
                }
                if (lVar7 == 0) {
                  return uVar5;
                }
                    /* try { // try from 0058cd2c to 0058cd33 has its CatchHandler @ 0058cd58 */
                FUN_0053f5f0(lVar7);
                return uVar5;
              }
              pcVar6 = "Invalid local identity";
              uVar5 = 0x12d;
            }
          }
        }
      }
    }
    else {
      pcVar6 = "Invalid peer service account";
      uVar5 = 0x110;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                 ,uVar5,2,pcVar6);
    uVar5 = 5;
  }
  return uVar5;
}


