/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00301220; name: FUN_00301220
 */


undefined8 * FUN_00301220(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong unaff_x19;
  char *__s1;
  ulong unaff_x21;
  long *plVar13;
  ulong unaff_x23;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_80;
  int local_78;
  undefined8 local_70;
  int local_64;
  
  local_70 = FUN_00306400(0);
  if (param_2 == (ulong *)0x0) {
    local_78 = 0x4000;
    local_80 = 4;
    iVar7 = 0x2000;
    iVar8 = 0x400000;
    local_64 = 0x100;
  }
  else if (*param_2 == 0) {
    local_64 = 0x100;
    local_78 = 0x4000;
    iVar7 = 0x2000;
    iVar8 = 0x400000;
    local_80 = 4;
  }
  else {
    local_80 = 4;
    lVar17 = 0;
    uVar16 = 0;
    local_78 = 0x4000;
    iVar8 = 0x400000;
    local_64 = 0x100;
    uVar15 = 0x2000;
    do {
      lVar12 = param_2[1] + lVar17;
      __s1 = *(char **)(lVar12 + 8);
      iVar7 = strcmp(__s1,"grpc.experimental.tcp_read_chunk_size");
      if (iVar7 == 0) {
        unaff_x23 = unaff_x23 & 0xffffffff00000000 | 0x2000000;
        uVar15 = FUN_002e4c30(lVar12,uVar15 | 0x100000000,unaff_x23);
        uVar15 = uVar15 & 0xffffffff;
      }
      else {
        iVar7 = strcmp(__s1,"grpc.experimental.tcp_min_read_chunk_size");
        if (iVar7 == 0) {
          unaff_x19 = unaff_x19 & 0xffffffff00000000 | 0x2000000;
          local_64 = FUN_002e4c30(lVar12,uVar15 | 0x100000000,unaff_x19);
        }
        else {
          iVar7 = strcmp(__s1,"grpc.experimental.tcp_max_read_chunk_size");
          if (iVar7 == 0) {
            unaff_x21 = unaff_x21 & 0xffffffff00000000 | 0x2000000;
            iVar8 = FUN_002e4c30(lVar12,uVar15 | 0x100000000,unaff_x21);
          }
          else {
            iVar7 = strcmp(__s1,"grpc.resource_quota");
            if (iVar7 == 0) {
              FUN_00306bf0(local_70);
              local_70 = FUN_00306c90(*(undefined8 *)(param_2[1] + lVar17 + 0x10));
            }
            else {
              iVar7 = strcmp(__s1,"grpc.experimental.tcp_tx_zerocopy_enabled");
              if (iVar7 == 0) {
                FUN_002e4ee0(lVar12,0);
              }
              else {
                iVar7 = strcmp(__s1,"grpc.experimental.tcp_tx_zerocopy_send_bytes_threshold");
                if (iVar7 == 0) {
                  local_78 = FUN_002e4c30(lVar12,0x4000);
                }
                else {
                  iVar7 = strcmp(__s1,"grpc.experimental.tcp_tx_zerocopy_max_simultaneous_sends");
                  if (iVar7 == 0) {
                    local_80 = FUN_002e4c30(lVar12,4);
                  }
                }
              }
            }
          }
        }
      }
      iVar7 = (int)uVar15;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 0x20;
    } while (uVar16 < *param_2);
  }
  iVar1 = iVar8;
  if (local_64 <= iVar8) {
    iVar1 = local_64;
  }
  iVar2 = iVar8;
  if (iVar7 <= iVar8) {
    iVar2 = iVar7;
  }
  iVar3 = iVar1;
  if (iVar1 <= iVar7) {
    iVar3 = iVar2;
  }
  puVar10 = (undefined8 *)FUN_002ebd50(0x408);
  *puVar10 = &PTR_LAB_041534f8;
  uVar11 = FUN_002ec2d0(param_3);
  puVar10[0x51] = uVar11;
  uVar9 = FUN_002f9520(param_1);
  puVar10[0x80] = 0;
  puVar10[0x2e] = 0;
  *(int *)(puVar10 + 8) = iVar1;
  *(int *)((long)puVar10 + 0x44) = iVar8;
  puVar10[4] = 0;
  *(undefined2 *)((long)puVar10 + 0x37c) = 0x100;
  puVar10[0x6e] = 0;
  *(undefined4 *)(puVar10 + 2) = uVar9;
  *(undefined1 *)((long)puVar10 + 0x14) = 1;
  *(undefined4 *)(puVar10 + 0x6f) = 0xffffffff;
  puVar10[3] = (double)iVar3;
  puVar10[0x33] = 0;
  puVar10[0x32] = 0;
  puVar10[0x35] = 0;
  puVar10[0x34] = 0;
  FUN_003016b8(puVar10 + 0x71,local_80,(long)local_78);
  plVar13 = puVar10 + 5;
  *plVar13 = (long)PTR_DAT_043739c0;
  plVar14 = puVar10 + 6;
  *plVar14 = 1;
  puVar10[7] = 0;
  puVar10[1] = param_1;
  FUN_00305000(puVar10 + 9);
  uVar11 = FUN_00306d30(local_70,param_3);
  puVar10[0x52] = uVar11;
  FUN_00307e00(puVar10 + 0x53,uVar11,&LAB_00301830,puVar10);
  FUN_00306bf0(local_70);
  FUN_002ef6d0(puVar10 + 0x6a);
  puVar10[0x69] = 0;
  puVar10[0x37] = &LAB_00301910;
  puVar10[0x38] = puVar10;
  puVar10[0x39] = 0;
  *(undefined2 *)(puVar10 + 0x3a) = 0;
  puVar10[0x3d] = 0;
  *(undefined4 *)(puVar10 + 0x3e) = 0;
  puVar10[0x3b] = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc";
  *(undefined4 *)(puVar10 + 0x3c) = 0x708;
  uVar16 = FUN_002f93f0();
  puVar10[0x41] = puVar10;
  puVar10[0x42] = 0;
  bVar6 = (uVar16 & 1) == 0;
  puVar4 = &LAB_00301b30;
  if (bVar6) {
    puVar4 = &LAB_00302310;
  }
  puVar10[0x40] = puVar4;
  *(undefined2 *)(puVar10 + 0x43) = 0;
  uVar9 = 0x70d;
  if (bVar6) {
    uVar9 = 0x711;
  }
  puVar10[0x46] = 0;
  *(undefined4 *)(puVar10 + 0x47) = 0;
  puVar10[0x44] = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc";
  *(undefined4 *)(puVar10 + 0x45) = uVar9;
  *(undefined4 *)(puVar10 + 0x2f) = 1;
  *(undefined1 *)((long)puVar10 + 0x17c) = 0;
  uVar16 = FUN_002f93b0();
  if ((uVar16 & 1) != 0) {
    do {
      lVar17 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = *plVar13;
    if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar12 + 8),plVar13,
                   "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x725,lVar17,
                   lVar17 + 1,"error-tracking");
    }
    puVar10[0x70] = 0;
    puVar10[0x49] = &LAB_00302410;
    puVar10[0x4a] = puVar10;
    puVar10[0x4b] = 0;
    *(undefined2 *)(puVar10 + 0x4c) = 0;
    puVar10[0x4f] = 0;
    *(undefined4 *)(puVar10 + 0x50) = 0;
    puVar10[0x4d] = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc";
    *(undefined4 *)(puVar10 + 0x4e) = 0x728;
    FUN_002f9720(puVar10[1],puVar10 + 0x48);
  }
  return puVar10;
}


