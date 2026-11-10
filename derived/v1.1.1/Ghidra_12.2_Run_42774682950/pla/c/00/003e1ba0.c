/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e1ba0; name: FUN_003e1ba0
 */


uint * FUN_003e1ba0(undefined8 param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  void *__ptr;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  char *__s1;
  ulong unaff_x26;
  ulong unaff_x27;
  long local_70;
  uint *local_68;
  
  FUN_003e4670();
  __ptr = (void *)FUN_002ec2d0();
  FUN_003e4700(param_1);
  puVar8 = (ulong *)FUN_002e45d0();
  uVar9 = FUN_003e47a0(param_1);
  lVar14 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar16 = tpidr_el0;
  lVar16 = *(long *)(lVar16 + 0x30);
  uVar6 = *(uint *)(lVar16 + 0x30);
  if (uVar6 == 0xffffffff) {
    uVar6 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar16 + 0x30) = uVar6;
  }
  lVar14 = lVar14 + (ulong)uVar6 * 0x1d50;
  plVar1 = (long *)(lVar14 + 0x28);
  if (param_2 != 4) {
    plVar1 = (long *)(lVar14 + 0x18);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar10 = FUN_003e4900(param_1,0x78,1,&LAB_003e2040,0,&local_68);
  if (uVar10 == 0) {
    *(void **)(local_68 + 0x1c) = __ptr;
    *(undefined8 *)(local_68 + 8) = uVar9;
    uVar6 = FUN_003e4590(param_2);
    puVar4 = local_68;
    *local_68 = uVar6 & 1;
    FUN_002ef6d0(local_68 + 10);
    puVar5 = local_68;
    puVar12 = puVar4 + 0x14;
    puVar12[0] = 0;
    puVar12[1] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    *(uint **)(puVar4 + 0x12) = puVar12;
    puVar4[0x18] = 0;
    lVar16 = *(long *)(local_68 + 0x42);
    lVar14 = FUN_003c8c80();
    *(long *)(puVar5 + 6) = lVar14 + lVar16;
    FUN_003f1250(local_68 + 1);
    if (*puVar8 != 0) {
      uVar10 = 0;
LAB_003e1d94:
      do {
        while( true ) {
          uVar13 = puVar8[1];
          lVar14 = uVar13 + uVar10 * 0x20;
          __s1 = *(char **)(lVar14 + 8);
          iVar7 = strcmp(__s1,"grpc.default_compression_level");
          if (iVar7 != 0) break;
          local_68[2] = 1;
          unaff_x27 = unaff_x27 & 0xffffffff00000000 | 3;
          uVar6 = FUN_002e4c30(lVar14,0,unaff_x27);
          local_68[3] = uVar6;
LAB_003e1d84:
          uVar10 = uVar10 + 1;
          if (*puVar8 <= uVar10) goto LAB_003e1fa4;
        }
        iVar7 = strcmp(__s1,"grpc.default_compression_algorithm");
        if (iVar7 == 0) {
          local_68[4] = 1;
          unaff_x26 = unaff_x26 & 0xffffffff00000000 | 3;
          uVar6 = FUN_002e4c30(lVar14,0,unaff_x26);
          local_68[5] = uVar6;
          uVar10 = uVar10 + 1;
          if (*puVar8 <= uVar10) break;
          goto LAB_003e1d94;
        }
        iVar7 = strcmp(__s1,"grpc.compression_enabled_algorithms_bitset");
        if (iVar7 != 0) {
          iVar7 = strcmp(__s1,"grpc.channelz_channel_node");
          if (iVar7 != 0) goto LAB_003e1d84;
          if (*(int *)(uVar13 + uVar10 * 0x20) == 2) {
            lVar14 = *(long *)(lVar14 + 0x10);
            if (lVar14 == 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x77,2,
                           "assertion failed: %s","args->args[i].value.pointer.p != nullptr");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            plVar1 = (long *)(lVar14 + 0x10);
            do {
              lVar16 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar11 = *(long *)(lVar14 + 8);
            if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                           "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),(long *)(lVar14 + 8),
                           lVar16,lVar16 + 1);
            }
            puVar4 = local_68;
            puVar15 = *(undefined8 **)(local_68 + 0x1a);
            if (puVar15 != (undefined8 *)0x0) {
              lVar16 = puVar15[1];
              plVar1 = puVar15 + 2;
              do {
                lVar11 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              local_70 = lVar14;
              if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
                    /* try { // try from 003e1e88 to 003e1ea7 has its CatchHandler @ 003e2024 */
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,
                             1,"%s:%p unref %ld -> %ld",*(undefined8 *)(lVar16 + 8),puVar15 + 1,
                             lVar11);
              }
              if (lVar11 < 1) {
                    /* try { // try from 003e1ff8 to 003e201f has its CatchHandler @ 003e2020 */
                FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,
                             2,"assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (lVar11 == 1) {
                (**(code **)*puVar15)(puVar15);
                FUN_002e2ea0(PTR_LAB_04373088,puVar15);
              }
            }
            *(long *)(puVar4 + 0x1a) = lVar14;
            local_70 = 0;
            FUN_003e21d4(&local_70);
            uVar10 = uVar10 + 1;
            if (*puVar8 <= uVar10) break;
          }
          else {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x7c,0,
                         "grpc.channelz_channel_node should be a pointer");
            uVar10 = uVar10 + 1;
            if (*puVar8 <= uVar10) break;
          }
          goto LAB_003e1d94;
        }
        local_68[1] = *(uint *)(lVar14 + 0x10) | 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *puVar8);
    }
  }
  else {
    uVar9 = FUN_002f1480();
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x4d,2,
                 "channel stack builder failed: %s",uVar9);
    if (4 < uVar10) {
      FUN_002f0430(uVar10,"external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x4f);
    }
    free(__ptr);
  }
LAB_003e1fa4:
  FUN_002e4a10(puVar8);
  return local_68;
}


