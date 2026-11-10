/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003da860; name: FUN_003da860
 */


void FUN_003da860(long *param_1,long *param_2,undefined1 *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = *param_2;
  if (lVar8 == 0) {
    uVar7 = (ulong)*(byte *)(param_2 + 1);
    lVar8 = (long)param_2 + 9;
LAB_003da8c4:
    uVar5 = FUN_003da780(lVar8,uVar7,*(undefined4 *)PTR_DAT_043740a8);
  }
  else {
    if (*(int *)(lVar8 + 8) != 1) {
      if (*(int *)(lVar8 + 8) == 0) {
        lVar11 = param_2[1];
        lVar8 = *param_2;
        lVar13 = param_2[3];
        lVar12 = param_2[2];
        goto LAB_003da9a8;
      }
      uVar7 = param_2[1];
      lVar8 = param_2[2];
      goto LAB_003da8c4;
    }
    uVar5 = *(uint *)(lVar8 + 0x68);
  }
  puVar4 = PTR_DAT_04373fe0;
  uVar10 = 0;
  uVar9 = uVar5;
  do {
    lVar8 = (ulong)(uVar10 + uVar5 + (uVar9 / 0x1b0) * -0x1b0) * 8;
    uVar2 = *(uint *)(&DAT_0439af1c + lVar8);
    uVar3 = *(uint *)(&DAT_0439af20 + lVar8);
    lVar8 = FUN_003db7f0();
    if (lVar8 != -0x35010ff23f0011ef) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                   "assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)puVar4 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                   "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (((uVar2 == uVar5) && (uVar3 < 0x6c)) &&
       ((plVar1 = (long *)(*(long *)puVar4 + (ulong)uVar3 * 0x20), *param_2 == *plVar1 ||
        (iVar6 = FUN_002f3c80(param_2,plVar1), iVar6 == 0)))) {
      *param_3 = 1;
      lVar11 = plVar1[1];
      lVar8 = *plVar1;
      lVar13 = plVar1[3];
      lVar12 = plVar1[2];
      goto LAB_003da9a8;
    }
    uVar10 = uVar10 + 1;
    uVar9 = uVar9 + 1;
  } while (uVar10 <= DAT_0439bca4);
  lVar11 = param_2[1];
  lVar8 = *param_2;
  lVar13 = param_2[3];
  lVar12 = param_2[2];
LAB_003da9a8:
  param_1[1] = lVar11;
  *param_1 = lVar8;
  param_1[3] = lVar13;
  param_1[2] = lVar12;
  return;
}


