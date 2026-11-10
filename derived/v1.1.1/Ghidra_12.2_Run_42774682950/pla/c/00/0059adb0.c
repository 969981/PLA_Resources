/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059adb0; name: FUN_0059adb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059adb0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long *local_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  ulong local_190;
  ulong uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  ulong local_170;
  ulong uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  ulong local_150;
  ulong uStack_148;
  undefined1 *local_140;
  undefined8 uStack_138;
  long *local_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  uint local_104;
  ulong local_100;
  ulong uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  if (((*(char *)(param_1 + 0xcf0) == '\0') && (*(char *)(param_2 + 0x9b1) == '\0')) &&
     (uVar11 = FUN_003d7f40(param_3), (uVar11 & 1) != 0)) {
    FUN_003d7cb0(param_3,*(undefined8 *)(param_2 + 0x968),&local_104,&local_128,0,0);
    if (99 < local_104) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x8df,2,"assertion failed: %s","grpc_status >= 0 && (int)grpc_status < 100");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(char *)(param_2 + 0x9b0) == '\0') {
      FUN_002f27f0(&local_80,0xd);
      uVar3 = DAT_0388a818;
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      uStack_a8 = uStack_68;
      local_b0 = local_70;
      puVar4 = (undefined8 *)((ulong)&local_c0 | 9);
      if (local_80 != 0) {
        puVar4 = local_70;
      }
      *(undefined4 *)(puVar4 + 1) = 0x30320373;
      *puVar4 = uVar3;
      *(undefined1 *)((long)puVar4 + 0xc) = 0x30;
      puVar14 = local_70;
      if (local_80 == 0) {
        puVar14 = (undefined8 *)((ulong)&local_c0 | 9);
      }
      uVar11 = uStack_78;
      if (local_80 == 0) {
        uVar11 = uStack_78 & 0xff;
      }
      if ((long)puVar4 + 0xd != (long)puVar14 + uVar11) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x8f7,2,"assertion failed: %s","p == GRPC_SLICE_END_PTR(http_status_hdr)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002f27f0(&local_80,0x1f);
      uVar9 = _UNK_03889a28;
      uVar3 = _DAT_03889a20;
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      uStack_c8 = uStack_68;
      local_d0 = local_70;
      puVar4 = (undefined8 *)((ulong)&local_e0 | 9);
      if (local_80 != 0) {
        puVar4 = local_70;
      }
      *(undefined1 *)((long)puVar4 + 0x1e) = 99;
      puVar4[1] = uVar9;
      *puVar4 = uVar3;
      uVar3 = s_pplicati_0388a5d0._0_8_;
      *(undefined4 *)(puVar4 + 3) = 0x672f6e6f;
      *(undefined2 *)((long)puVar4 + 0x1c) = 0x7072;
      puVar4[2] = uVar3;
      puVar14 = local_70;
      if (local_80 == 0) {
        puVar14 = (undefined8 *)((ulong)&local_e0 | 9);
      }
      uVar5 = uStack_78;
      if (local_80 == 0) {
        uVar5 = uStack_78 & 0xff;
      }
      if ((long)puVar4 + 0x1f != (long)puVar14 + uVar5) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x91b,2,"assertion failed: %s","p == GRPC_SLICE_END_PTR(content_type_hdr)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar16 = (int)uVar5 + (int)uVar11;
    }
    else {
      iVar16 = 0;
    }
    uVar3 = 0xf;
    if (9 < (int)local_104) {
      uVar3 = 0x10;
    }
    FUN_002f27f0(&local_80,uVar3);
    uVar3 = DAT_0388a798;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    uStack_88 = uStack_68;
    local_90 = local_70;
    puVar4 = (undefined8 *)((ulong)&local_a0 | 9);
    if (local_80 != 0) {
      puVar4 = local_70;
    }
    *(undefined4 *)(puVar4 + 1) = 0x75746174;
    *(undefined1 *)((long)puVar4 + 0xc) = 0x73;
    *puVar4 = uVar3;
    if ((int)local_104 < 10) {
      *(undefined1 *)((long)puVar4 + 0xd) = 1;
      puVar14 = (undefined8 *)((long)puVar4 + 0xf);
      *(char *)((long)puVar4 + 0xe) = (char)local_104 + '0';
    }
    else {
      *(undefined1 *)((long)puVar4 + 0xd) = 2;
      *(char *)((long)puVar4 + 0xe) = (char)(local_104 / 10) + '0';
      puVar14 = puVar4 + 2;
      *(byte *)((long)puVar4 + 0xf) = (byte)(local_104 % 10) | 0x30;
    }
    puVar4 = local_70;
    if (local_80 == 0) {
      puVar4 = (undefined8 *)((ulong)&local_a0 | 9);
    }
    uVar11 = uStack_78;
    if (local_80 == 0) {
      uVar11 = uStack_78 & 0xff;
    }
    if (puVar14 != (undefined8 *)((long)puVar4 + uVar11)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x936,2,"assertion failed: %s","p == GRPC_SLICE_END_PTR(status_hdr)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = uStack_120 & 0xff;
    if (local_128 != (long *)0x0) {
      uVar5 = uStack_120;
    }
    if (uVar5 >> 0x20 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x93a,2,"assertion failed: %s","msg_len <= UINT32_MAX");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar17 = (uint)uVar5;
    if (uVar17 < 0x7f) {
      uVar10 = 1;
    }
    else {
      uVar10 = FUN_005a7a00(uVar17 - 0x7f);
    }
    FUN_002f27f0(&local_80,uVar10 + 0xe);
    uStack_f8 = uStack_78;
    local_100 = local_80;
    uStack_e8 = uStack_68;
    local_f0 = local_70;
    puVar4 = (undefined8 *)((ulong)&local_100 | 9);
    if (local_80 != 0) {
      puVar4 = local_70;
    }
    *puVar4 = DAT_0388a770;
    *(undefined4 *)(puVar4 + 1) = 0x61737365;
    *(undefined2 *)((long)puVar4 + 0xc) = 0x6567;
    if (uVar10 - 1 == 0) {
      *(undefined1 *)((long)puVar4 + 0xe) = (char)uVar5;
    }
    else {
      *(undefined1 *)((long)puVar4 + 0xe) = 0x7f;
      FUN_005a7a40(uVar17 - 0x7f,(long)puVar4 + 0xf,uVar10 - 1);
    }
    puVar14 = local_f0;
    if (local_100 == 0) {
      puVar14 = (undefined8 *)((ulong)&local_100 | 9);
    }
    uVar5 = uStack_f8;
    if (local_100 == 0) {
      uVar5 = uStack_f8 & 0xff;
    }
    if ((undefined1 *)((long)puVar4 + 0xe) + uVar10 != (undefined1 *)((long)puVar14 + uVar5)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x94e,2,"assertion failed: %s","p == GRPC_SLICE_END_PTR(message_pfx)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar16 = iVar16 + (int)uVar11 + uVar17 + (int)uVar5;
    FUN_002f27f0(&local_150,9);
    uStack_78 = uStack_148;
    local_80 = local_150;
    uStack_68 = uStack_138;
    local_70 = (undefined8 *)local_140;
    puVar6 = (undefined1 *)((ulong)&local_80 | 9);
    if (local_150 != 0) {
      puVar6 = local_140;
    }
    *puVar6 = (char)((uint)iVar16 >> 0x10);
    puVar6[1] = (char)((uint)iVar16 >> 8);
    puVar6[2] = (char)iVar16;
    *(undefined2 *)(puVar6 + 3) = 0x501;
    puVar6[5] = *(undefined1 *)(param_2 + 0xcb);
    puVar6[6] = (char)*(undefined2 *)(param_2 + 0xca);
    puVar6[7] = (char)((uint)*(undefined4 *)(param_2 + 200) >> 8);
    puVar6[8] = (char)*(undefined4 *)(param_2 + 200);
    if (local_150 == 0) {
      local_140 = (undefined1 *)((ulong)&local_80 | 9);
    }
    if (local_150 == 0) {
      uStack_148 = uStack_148 & 0xff;
    }
    if (puVar6 + 9 != local_140 + uStack_148) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x95d,2,"assertion failed: %s","p == GRPC_SLICE_END_PTR(hdr)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = param_1 + 0xcf8;
    FUN_003052c0(lVar1,&local_150);
    if (*(char *)(param_2 + 0x9b0) == '\0') {
      uStack_168 = uStack_b8;
      local_170 = local_c0;
      uStack_158 = uStack_a8;
      puStack_160 = local_b0;
      FUN_003052c0(lVar1,&local_170);
      uStack_188 = uStack_d8;
      local_190 = local_e0;
      uStack_178 = uStack_c8;
      puStack_180 = local_d0;
      FUN_003052c0(lVar1,&local_190);
    }
    uStack_1a8 = uStack_98;
    local_1b0 = local_a0;
    uStack_198 = uStack_88;
    puStack_1a0 = local_90;
    FUN_003052c0(lVar1,&local_1b0);
    uStack_1c8 = uStack_f8;
    local_1d0 = local_100;
    uStack_1b8 = uStack_e8;
    puStack_1c0 = local_f0;
    FUN_003052c0(lVar1,&local_1d0);
    if ((local_128 != (long *)0x0) && (plVar12 = (long *)*local_128, plVar12 != (long *)0x0)) {
      plVar2 = plVar12 + 1;
      do {
        lVar15 = *plVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar13 = *plVar12;
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar12,lVar15,lVar15 + 1);
      }
      if (lVar15 < 1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                      0x7c,"RefNonZero");
      }
    }
    uStack_1e8 = uStack_120;
    local_1f0 = local_128;
    uStack_1d8 = uStack_110;
    uStack_1e0 = uStack_118;
    FUN_003052c0(lVar1,&local_1f0);
    if (*(char *)(param_1 + 0xcf0) == '\0') {
      *(undefined8 *)(param_1 + 0xfc0) = 0x8000000000000000;
      *(undefined4 *)(param_1 + 0xfc8) = 0;
    }
    *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(param_1 + 0xef0);
    FUN_005aba00(param_1,*(undefined4 *)(param_2 + 200),0,param_2 + 0x1e8);
    FUN_0059b4b0(param_1,param_2,1,1,param_3);
    FUN_00598190(param_1,9);
  }
  else {
    if (((*(char *)(param_2 + 0x201) == '\0') || (*(char *)(param_2 + 0x200) == '\0')) &&
       (*(int *)(param_2 + 200) != 0)) {
      FUN_003d7cb0(param_3,*(undefined8 *)(param_2 + 0x968),0,0,&local_80,0);
      FUN_005aba00(param_1,*(undefined4 *)(param_2 + 200),local_80 & 0xffffffff,param_2 + 0x1e8);
      FUN_00598190(param_1,8);
    }
    if ((param_3 != 0) && (*(char *)(param_2 + 0x203) == '\0')) {
      *(undefined1 *)(param_2 + 0x203) = 1;
    }
    FUN_0059b4b0(param_1,param_2,1,1,param_3);
  }
  return;
}


