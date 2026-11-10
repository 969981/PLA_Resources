/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00518348; name: FUN_00518348
 */


void FUN_00518348(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *local_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *local_80 [4];
  
  puVar3 = PTR_DAT_04374a30;
  param_1[1] = (long)PTR_DAT_04374a30;
  plVar13 = param_1 + 2;
  *plVar13 = 1;
  *param_1 = (long)(PTR_DAT_04374a88 + 0x10);
  plVar5 = param_1 + 3;
  *plVar5 = 0;
  *plVar5 = *param_2;
  *param_2 = 0;
  plVar12 = param_1 + 0x13;
  *plVar12 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = (long)(param_1 + 0x30);
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  lVar6 = *(long *)(*(long *)(*plVar5 + 0x20) + 0x18);
  if (lVar6 == 0) {
                    /* try { // try from 00518798 to 0051885f has its CatchHandler @ 00518950 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x5be,2,"assertion failed: %s","xds_client() != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*(byte *)(lVar6 + 0x88) & 1) == 0) {
    if (*(byte *)(lVar6 + 0x88) >> 1 != 0) {
LAB_005183f4:
      uVar11 = *(undefined8 *)(*(long *)(*plVar5 + 0x20) + 0x20);
      uVar9 = *(undefined8 *)(lVar6 + 0x30);
                    /* try { // try from 005183fc to 0051844b has its CatchHandler @ 00518950 */
      lVar6 = FUN_003db7f0();
      if (lVar6 != -0x35010ff23f0011ef) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,
                     2,"assertion failed: %s",
                     "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)PTR_DAT_04373fe0 == 0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,
                     2,"assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = FUN_003e2f70(uVar11,0,0xffff,uVar9,*(long *)PTR_DAT_04373fe0 + 0x460,0,
                           0x7fffffffffffffff,0);
      param_1[5] = lVar6;
      if (lVar6 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x5c5,2,"assertion failed: %s","call_ != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = *(long *)(*(long *)(param_1[3] + 0x20) + 0x18);
                    /* try { // try from 00518468 to 00518507 has its CatchHandler @ 00518978 */
      FUN_005bcd00(local_80,lVar6 + 0x40,lVar6 + 0x88);
      lVar6 = FUN_003c8370(local_80,1);
      param_1[9] = lVar6;
      if ((local_80[0] != (long *)0x0) && (plVar5 = (long *)*local_80[0], plVar5 != (long *)0x0)) {
        plVar7 = plVar5 + 1;
        lVar6 = *plVar5;
        do {
          lVar10 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar10);
        }
        if (lVar10 < 1) {
                    /* try { // try from 00518900 to 00518927 has its CatchHandler @ 00518978 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar10 == 1) {
          (*(code *)local_80[0][3])(local_80[0][4]);
        }
      }
      plVar5 = param_1 + 6;
      FUN_004fcf20(plVar5);
      FUN_004fcf20(param_1 + 0x1d);
      if (puVar3[0x10] != '\0') {
                    /* try { // try from 00518774 to 00518793 has its CatchHandler @ 00518978 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x5d1,1,"[xds_client %p] Starting LRS call (chand: %p, calld: %p, call: %p)",
                     *(undefined8 *)(*(long *)(param_1[3] + 0x20) + 0x18),
                     *(long *)(param_1[3] + 0x20),param_1,param_1[5]);
      }
      local_158 = (long *)0x0;
      plStack_160 = (long *)0x0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      local_170 = 0xa000000000;
      uStack_168 = 0;
      uStack_108 = 0;
      local_110 = (long *)0x0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      local_130 = 0;
      local_118 = 0;
      local_120 = 0;
      uStack_148 = 0;
      local_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      lVar6 = param_1[9];
      if (lVar6 == 0) {
                    /* try { // try from 00518860 to 005188ff has its CatchHandler @ 00518964 */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x5e3,2,"assertion failed: %s","send_message_payload_ != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar7 = param_1 + 1;
      local_120 = DAT_0388a7a8;
      local_118 = 0;
      do {
        lVar10 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar8 = *plVar7;
      local_110 = (long *)lVar6;
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 00518590 to 005185cb has its CatchHandler @ 0051893c */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),plVar7,
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x5e9,lVar10,lVar10 + 1,"LRS+OnInitialRequestSentLocked");
      }
      local_178 = 0;
      FUN_005189b4(&local_178);
      param_1[0xd] = 0;
      puVar3 = PTR_LAB_04374a90;
      *(undefined2 *)(param_1 + 0xe) = 0;
      param_1[0xb] = (long)puVar3;
      param_1[0xc] = (long)param_1;
      param_1[0x11] = 0;
      *(undefined4 *)(param_1 + 0x12) = 0;
      param_1[0xf] = (long)
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
      ;
      *(undefined4 *)(param_1 + 0x10) = 0x5eb;
                    /* try { // try from 00518608 to 00518613 has its CatchHandler @ 00518964 */
      iVar4 = FUN_003cba10(param_1[5],&local_170,2,param_1 + 10);
      if (iVar4 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x5ee,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uStack_168 = 0;
      local_118 = 0;
      local_170 = DAT_0388a588;
      local_120 = DAT_0388a848;
      do {
        lVar6 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar10 = *plVar7;
      plStack_160 = plVar5;
      local_110 = plVar12;
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 00518660 to 0051869b has its CatchHandler @ 00518928 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                     "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar10 + 8),plVar7,
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x5fd,lVar6,lVar6 + 1,"LRS+OnResponseReceivedLocked");
      }
      local_178 = 0;
      FUN_005189b4(&local_178);
      param_1[0x17] = 0;
      puVar3 = PTR_LAB_04374a98;
      *(undefined2 *)(param_1 + 0x18) = 0;
      param_1[0x15] = (long)puVar3;
      param_1[0x16] = (long)param_1;
      param_1[0x1b] = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      param_1[0x19] =
           (long)
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
      *(undefined4 *)(param_1 + 0x1a) = 0x5ff;
                    /* try { // try from 005186d8 to 0051873f has its CatchHandler @ 00518964 */
      iVar4 = FUN_003cba10(param_1[5],&local_170,2,param_1 + 0x14);
      if (iVar4 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x602,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_158 = param_1 + 0x20;
      local_150 = param_1 + 0x21;
      local_170 = DAT_0388a5c8;
      uStack_168 = 0;
      param_1[0x26] = (long)PTR_LAB_04374aa0;
      param_1[0x27] = (long)param_1;
      param_1[0x28] = 0;
      *(undefined2 *)(param_1 + 0x29) = 0;
      param_1[0x2c] = 0;
      *(undefined4 *)(param_1 + 0x2d) = 0;
      param_1[0x2a] =
           (long)
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
      *(undefined4 *)(param_1 + 0x2b) = 0x610;
      plStack_160 = param_1 + 0x1d;
      iVar4 = FUN_003cba10(param_1[5],&local_170,1,param_1 + 0x25);
      if (iVar4 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x613,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return;
    }
  }
  else if (*(long *)(lVar6 + 0x90) != 0) goto LAB_005183f4;
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
               ,0x5bf,2,"assertion failed: %s","!xds_client()->server_name_.empty()");
                    /* WARNING: Subroutine does not return */
  abort();
}


