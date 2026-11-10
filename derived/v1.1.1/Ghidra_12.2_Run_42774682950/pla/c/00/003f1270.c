/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1270; name: FUN_003f1270
 */


void FUN_003f1270(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 0:
    lVar1 = FUN_003db7f0();
    if (lVar1 != -0x35010ff23f0011ef) {
LAB_003f13a8:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                   "assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = *(long *)PTR_DAT_04373fe0;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xc40);
      uVar4 = *(undefined8 *)(lVar1 + 0xc58);
      uVar3 = *(undefined8 *)(lVar1 + 0xc50);
      param_1[1] = *(undefined8 *)(lVar1 + 0xc48);
      *param_1 = uVar2;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      return;
    }
    break;
  case 1:
    lVar1 = FUN_003db7f0();
    if (lVar1 != -0x35010ff23f0011ef) goto LAB_003f13a8;
    lVar1 = *(long *)PTR_DAT_04373fe0;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x4c0);
      uVar4 = *(undefined8 *)(lVar1 + 0x4d8);
      uVar3 = *(undefined8 *)(lVar1 + 0x4d0);
      param_1[1] = *(undefined8 *)(lVar1 + 0x4c8);
      *param_1 = uVar2;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      return;
    }
    break;
  case 2:
    lVar1 = FUN_003db7f0();
    if (lVar1 != -0x35010ff23f0011ef) goto LAB_003f13a8;
    lVar1 = *(long *)PTR_DAT_04373fe0;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x4e0);
      uVar4 = *(undefined8 *)(lVar1 + 0x4f8);
      uVar3 = *(undefined8 *)(lVar1 + 0x4f0);
      param_1[1] = *(undefined8 *)(lVar1 + 0x4e8);
      *param_1 = uVar2;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      return;
    }
    break;
  case 3:
    lVar1 = FUN_003db7f0();
    if (lVar1 != -0x35010ff23f0011ef) goto LAB_003f13a8;
    lVar1 = *(long *)PTR_DAT_04373fe0;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x500);
      uVar4 = *(undefined8 *)(lVar1 + 0x518);
      uVar3 = *(undefined8 *)(lVar1 + 0x510);
      param_1[1] = *(undefined8 *)(lVar1 + 0x508);
      *param_1 = uVar2;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      return;
    }
    break;
  default:
    FUN_002f2710(param_1);
    return;
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
               "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
  abort();
}


