/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005354c0; name: FUN_005354c0
 */


ulong FUN_005354c0(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint local_24;
  
  lVar3 = FUN_003db7f0();
  puVar1 = PTR_DAT_04373ff0;
  if (lVar3 != -0x35010ff23f0011ef) goto LAB_0053563c;
  if (*(long *)PTR_DAT_04373ff0 == 0) goto LAB_00535664;
  uVar4 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + 0x1e8);
  if (uVar4 != param_1) {
    uVar5 = param_1 & 0xfffffffffffffffc;
    plVar6 = (long *)(uVar5 + 0x20);
    if (*plVar6 != *(long *)((uVar4 & 0xfffffffffffffffc) + 0x20)) {
      uVar4 = FUN_002f3c80(plVar6);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      lVar3 = FUN_003db7f0();
      if (lVar3 != -0x35010ff23f0011ef) {
LAB_0053563c:
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13d
                     ,2,"assertion failed: %s",
                     "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)puVar1;
      if (lVar3 != 0) {
        uVar4 = *(ulong *)(lVar3 + 0x1f0);
        if (((uVar4 == param_1) || (*plVar6 == *(long *)((uVar4 & 0xfffffffffffffffc) + 0x20))) ||
           (iVar2 = FUN_002f3c80(plVar6), iVar2 == 0)) {
          return 1;
        }
        lVar3 = FUN_003db7f0();
        if (lVar3 != -0x35010ff23f0011ef) goto LAB_0053563c;
        lVar3 = *(long *)puVar1;
        if (lVar3 != 0) {
          uVar4 = *(ulong *)(lVar3 + 0x1f8);
          if (((uVar4 == param_1) || (*plVar6 == *(long *)((uVar4 & 0xfffffffffffffffc) + 0x20))) ||
             (iVar2 = FUN_002f3c80(plVar6), iVar2 == 0)) {
            return 2;
          }
          lVar3 = FUN_003d9f90(param_1,&LAB_00535690);
          if (lVar3 != 0) {
            return (ulong)((int)lVar3 - 1);
          }
          uStack_48 = *(undefined8 *)(uVar5 + 0x28);
          local_50 = *plVar6;
          uStack_38 = *(undefined8 *)(uVar5 + 0x38);
          uStack_40 = *(undefined8 *)(uVar5 + 0x30);
          uVar4 = FUN_00304fc0(&local_50,&local_24);
          if ((uVar4 & 1) == 0) {
            iVar2 = 3;
            local_24 = 2;
          }
          else {
            iVar2 = local_24 + 1;
          }
          FUN_003da0b0(param_1,&LAB_00535690,iVar2);
          return (ulong)local_24;
        }
      }
LAB_00535664:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13e,2
                   ,"assertion failed: %s","grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return 0;
}


