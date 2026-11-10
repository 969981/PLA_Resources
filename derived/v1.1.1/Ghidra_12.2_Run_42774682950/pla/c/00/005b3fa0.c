/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b3fa0; name: FUN_005b3fa0
 */


void FUN_005b3fa0(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  int *piVar9;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  lVar7 = *(long *)(param_1 + 0x10);
  pcVar1 = (char *)(lVar7 + 0x48);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar9 = *(int **)(param_1 + 8);
  FUN_002ec790((long)*piVar9,auStack_58);
  lVar5 = FUN_003db7f0();
  puVar4 = PTR_DAT_04373fe0;
  if (lVar5 != -0x35010ff23f0011ef) {
LAB_005b40dc:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)PTR_DAT_04373fe0;
  if (lVar5 != 0) {
    FUN_002f2ea0(auStack_78,auStack_58);
    uVar6 = FUN_002e2e80(PTR_FUN_04373078,0x80);
    if (uVar6 != 0) {
      FUN_003d86a4(uVar6,lVar5 + 0xe0,auStack_78);
    }
    *(ulong *)(lVar7 + 8) = uVar6 | 2;
    lVar5 = FUN_003db7f0();
    if (lVar5 != -0x35010ff23f0011ef) goto LAB_005b40dc;
    lVar5 = *(long *)puVar4;
    if (lVar5 != 0) {
      FUN_002f2ea0(auStack_78,*(undefined8 *)(piVar9 + 2));
      uVar6 = FUN_002e2e80(PTR_FUN_04373078,0x80);
      if (uVar6 != 0) {
        FUN_003d86a4(uVar6,lVar5 + 0xc0,auStack_78);
      }
      puVar8 = (ulong *)(lVar7 + 0x28);
      *puVar8 = uVar6 | 2;
      *(ulong **)(lVar7 + 0x10) = puVar8;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(long *)(lVar7 + 0x38) = lVar7 + 8;
      param_2[2] = lVar7 + 8;
      param_2[3] = puVar8;
      *param_2 = 2;
      param_2[0x1c] = 0x7fffffffffffffff;
      return;
    }
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
               "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
  abort();
}


