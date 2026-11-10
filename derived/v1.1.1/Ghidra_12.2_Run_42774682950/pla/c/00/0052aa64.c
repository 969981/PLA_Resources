/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052aa64; name: FUN_0052aa64
 */


void FUN_0052aa64(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long alStack_68 [4];
  long local_48;
  
  lVar7 = FUN_003db7f0();
  puVar6 = PTR_DAT_04373fe0;
  if (lVar7 != -0x35010ff23f0011ef) {
LAB_0052ac88:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)PTR_DAT_04373fe0 != 0) {
    alStack_68[1] = *(long *)PTR_DAT_04373fe0 + 800;
    lVar7 = FUN_003db7f0();
    if (lVar7 != -0x35010ff23f0011ef) goto LAB_0052ac88;
    if (*(long *)puVar6 != 0) {
      alStack_68[2] = *(long *)puVar6 + 0x340;
      lVar7 = FUN_003db7f0();
      if (lVar7 != -0x35010ff23f0011ef) goto LAB_0052ac88;
      if (*(long *)puVar6 != 0) {
        alStack_68[3] = *(long *)puVar6 + 0x360;
        lVar7 = FUN_003db7f0();
        if (lVar7 != -0x35010ff23f0011ef) goto LAB_0052ac88;
        if (*(long *)puVar6 != 0) {
          local_48 = *(long *)puVar6 + 0x380;
          iVar3 = *(int *)(param_1 + 0x3a0);
          plVar8 = *(long **)(param_1 + 0x118);
          if (0 < *(int *)(param_1 + 0x31c)) {
            iVar3 = iVar3 + 1;
          }
          do {
            lVar7 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar7 + (ulong)(uint)(iVar3 << 5);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((ulong)plVar8[1] < (ulong)(uint)(iVar3 << 5) + lVar7) {
            lVar7 = FUN_003f5a34();
          }
          else {
            lVar7 = (long)plVar8 + lVar7 + 0x20;
          }
          lVar1 = param_2 + 0xa0;
          *(long *)(param_2 + 0x98) = lVar7;
          FUN_003e0190(param_1 + 0x3a0,lVar1);
          if (*(long *)(param_2 + 0x168) == 0) {
            iVar3 = *(int *)(param_1 + 0x31c);
          }
          else {
            FUN_003df5e0(lVar1,0x15);
            iVar3 = *(int *)(param_1 + 0x31c);
          }
          if (0 < iVar3) {
            lVar7 = FUN_003db7f0();
            if (lVar7 != -0x35010ff23f0011ef) goto LAB_0052ac88;
            if (*(long *)puVar6 == 0) goto LAB_0052acb0;
            uVar9 = FUN_003d92a0(*(long *)puVar6 + 0x2a0,alStack_68[*(int *)(param_1 + 0x31c)],0);
            if (uVar9 < 4) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata_batch.h",
                           0x96,2,"assertion failed: %s",
                           "!(((grpc_mdelem_data*)((elem_to_add).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar2 = (ulong *)(*(long *)(param_2 + 0x98) + *(long *)(param_1 + 0x3a0) * 0x20);
            *puVar2 = uVar9;
            lVar7 = FUN_003dedf0(lVar1,puVar2,0x15);
            if (lVar7 != 0) {
              uVar10 = FUN_002f1480();
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                           ,0xd4b,2,"error adding retry metadata: %s",uVar10);
              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                           ,0xd4d,2,"assertion failed: %s","false");
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          *(byte *)(param_2 + 0x5b0) = *(byte *)(param_2 + 0x5b0) | 1;
          *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
          plVar8 = *(long **)(param_3 + 0x20);
          *plVar8 = lVar1;
          *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(param_1 + 0x488);
          plVar8[2] = *(long *)(param_1 + 0x490);
          return;
        }
      }
    }
  }
LAB_0052acb0:
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
               "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
  abort();
}


