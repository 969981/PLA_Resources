/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005adef0; name: FUN_005adef0
 */


undefined8 FUN_005adef0(long param_1,int param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  undefined1 auStack_60 [32];
  
  pbVar2 = (byte *)(param_1 + 0x10a5);
  bVar6 = *(byte *)(param_1 + 0x1215);
  if ((bVar6 >> 2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1218) = *(undefined4 *)(param_1 + 0x1220);
  }
  else {
    *(undefined4 *)(param_1 + 0x1218) = 0;
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x1216) = bVar6 & 1;
  }
  *(undefined8 *)(param_1 + 0xf08) = 0x8000000000000000;
  lVar8 = FUN_005a4a80(param_1 + 0xa8,*(undefined4 *)(param_1 + 0x1220));
  if (lVar8 == 0) {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0xcf0) != '\0') {
        if ((((*(uint *)(param_1 + 0x1220) & 1) == 0) ||
            (*(uint *)(param_1 + 0xeac) <= *(uint *)(param_1 + 0x1220))) &&
           (PTR_DAT_04374f08[0x10] != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                       ,0x260,2,"ignoring new grpc_chttp2_stream creation on client");
        }
        *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fb8;
        *(undefined1 **)(param_1 + 0xfd0) = &LAB_005af170;
        *(undefined8 *)(param_1 + 0xfd8) = 0;
        *(long *)(param_1 + 0x1228) = param_1 + 0xfd0;
        *pbVar2 = *(int *)(param_1 + 0x1218) != 0;
        uVar12 = 0;
        if (*(int *)(param_1 + 0x1218) != 0) {
          uVar12 = *(undefined1 *)(param_1 + 0x1216);
        }
        *(undefined1 *)(param_1 + 0x10a6) = uVar12;
        bVar6 = *(byte *)(param_1 + 0x1215);
        goto joined_r0x005ae054;
      }
      uVar3 = *(uint *)(param_1 + 0x1220);
      if (*(uint *)(param_1 + 0xeb0) < uVar3) {
        if ((uVar3 & 1) == 0) {
          if (PTR_DAT_04374f08[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                         ,0x271,2,"ignoring grpc_chttp2_stream with non-client generated index %d",
                         uVar3);
          }
        }
        else {
          uVar9 = FUN_005a4c80(param_1 + 0xa8);
          if (*(uint *)(param_1 + 0xe98) <= uVar9) {
            FUN_002f2c60(auStack_60,"Max stream count exceeded");
            uVar10 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                                  ,0x279,auStack_60,0,0);
            return uVar10;
          }
          *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(param_1 + 0x1220);
          lVar8 = FUN_005996b0(param_1);
          *(long *)(param_1 + 0x1230) = lVar8;
          if (lVar8 != 0) {
            if (*(long *)(param_1 + 0x15c0) != 0) {
              FUN_003e7840();
            }
            goto LAB_005adf68;
          }
          if (PTR_DAT_04374f08[0x10] != '\0') {
            pcVar11 = "grpc_chttp2_stream not accepted";
            uVar10 = 0x280;
            goto LAB_005ae3b8;
          }
        }
      }
      else if (PTR_DAT_04374f08[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                     ,0x269,2,
                     "ignoring out of order new grpc_chttp2_stream request on server; last grpc_chttp2_stream id=%d, new grpc_chttp2_stream id=%d"
                    );
      }
    }
    else if (PTR_DAT_04374f08[0x10] != '\0') {
      pcVar11 = "grpc_chttp2_stream disbanded before CONTINUATION received";
      uVar10 = 0x256;
LAB_005ae3b8:
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,uVar10,2,pcVar11);
    }
    *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fb8;
    *(undefined1 **)(param_1 + 0xfd0) = &LAB_005af170;
    *(undefined8 *)(param_1 + 0xfd8) = 0;
    *(long *)(param_1 + 0x1228) = param_1 + 0xfd0;
    *pbVar2 = *(int *)(param_1 + 0x1218) != 0;
    if (*(int *)(param_1 + 0x1218) == 0) {
      uVar12 = 0;
      goto LAB_005ae0a8;
    }
  }
  else {
    *(long *)(param_1 + 0x1230) = lVar8;
LAB_005adf68:
    *(long *)(lVar8 + 0x1d0) = *(long *)(lVar8 + 0x1d0) + 9;
    puVar7 = PTR_LAB_04374fb8;
    if (*(char *)(lVar8 + 0x201) == '\0') {
      puVar1 = (undefined8 *)(param_1 + 0xfd0);
      *(undefined8 **)(param_1 + 0x1228) = puVar1;
      *(undefined **)(param_1 + 0x1238) = puVar7;
      cVar4 = *(char *)(param_1 + 0x1216);
      if (cVar4 != '\0') {
        *(undefined1 *)(lVar8 + 0x205) = 1;
      }
      cVar5 = *(char *)(lVar8 + 0x978);
      if (cVar5 != '\x02') {
        if (cVar5 == '\x01') {
          if (PTR_DAT_04374f08[0x10] == '\0') {
LAB_005ae0c4:
            puVar13 = &LAB_005ae3d0;
          }
          else {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                         ,0x2a4,1,"parsing trailing_metadata");
            puVar13 = &LAB_005ae3d0;
          }
LAB_005ae130:
          *puVar1 = puVar13;
        }
        else if (cVar5 == '\0') {
          if ((cVar4 != '\0') && (*(char *)(param_1 + 0xcf0) != '\0')) {
            if (PTR_DAT_04374f08[0x10] == '\0') {
              puVar13 = *(undefined1 **)(lVar8 + 0x1a0);
            }
            else {
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                           ,0x299,1,"parsing Trailers-Only");
              puVar13 = *(undefined1 **)(lVar8 + 0x1a0);
            }
            if (puVar13 != (undefined1 *)0x0) {
              *puVar13 = 1;
            }
            goto LAB_005ae0c4;
          }
          if (PTR_DAT_04374f08[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                         ,0x29f,1,"parsing initial_metadata");
          }
          puVar13 = &LAB_005ae7a0;
          goto LAB_005ae130;
        }
        *(long *)(param_1 + 0xfd8) = param_1;
        *pbVar2 = bVar6 >> 2 & 1;
        if ((bVar6 & 4) == 0) {
          *(undefined1 *)(param_1 + 0x10a6) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x10a6) = *(undefined1 *)(param_1 + 0x1216);
        }
        if (param_2 != 0) {
          return 0;
        }
        bVar6 = *(byte *)(param_1 + 0x1215);
joined_r0x005ae054:
        if ((bVar6 >> 5 & 1) != 0) {
          FUN_005af3e0(param_1 + 0xfd0);
        }
        return 0;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,0x2a8,2,"too many header frames received");
      *(undefined **)(param_1 + 0x1238) = puVar7;
      *(undefined8 **)(param_1 + 0x1228) = puVar1;
      *(undefined1 **)(param_1 + 0xfd0) = &LAB_005af170;
      *(undefined8 *)(param_1 + 0xfd8) = 0;
      *pbVar2 = *(int *)(param_1 + 0x1218) != 0;
      uVar12 = 0;
      if (*(int *)(param_1 + 0x1218) == 0) goto LAB_005ae0a8;
    }
    else {
      if (PTR_DAT_04374f08[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                     ,0x28d,2,"skipping already closed grpc_chttp2_stream header");
      }
      puVar7 = PTR_LAB_04374fb8;
      *(long *)(param_1 + 0x1228) = param_1 + 0xfd0;
      *(undefined **)(param_1 + 0x1238) = puVar7;
      *(undefined1 **)(param_1 + 0xfd0) = &LAB_005af170;
      *(undefined8 *)(param_1 + 0x1230) = 0;
      *(undefined8 *)(param_1 + 0xfd8) = 0;
      *pbVar2 = *(int *)(param_1 + 0x1218) != 0;
      if (*(int *)(param_1 + 0x1218) == 0) {
        uVar12 = 0;
        goto LAB_005ae0a8;
      }
    }
  }
  uVar12 = *(undefined1 *)(param_1 + 0x1216);
LAB_005ae0a8:
  *(undefined1 *)(param_1 + 0x10a6) = uVar12;
  return 0;
}


