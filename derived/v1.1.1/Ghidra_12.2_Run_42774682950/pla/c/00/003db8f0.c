/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003db8f0; name: FUN_003db8f0
 */


ulong FUN_003db8f0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((param_1 != -1) && (param_2 != -1)) {
    uVar1 = (int)param_2 + (int)param_1 * 0x6c;
    uVar2 = uVar1 - 0x2b;
    uVar4 = uVar2 % 0x6a;
    if (uVar2 >> 2 < 0xaf9) {
      uVar4 = uVar4 + (int)(char)(&DAT_039fe28e)[(ulong)(uVar2 >> 1 & 0x7fff) / 0x35];
    }
    if (((0x5d < uVar4) || (*(ushort *)(&DAT_039fe168 + (ulong)uVar4 * 2) != uVar1)) ||
       ((ulong)(byte)(&DAT_039fe224)[uVar4] == 0xff)) {
      return 0;
    }
    if (*DAT_0439c3c8 != -0x35010ff23f0011ef) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x137,2
                   ,"assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)PTR_DAT_043740b0 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x138,2
                   ,"assertion failed: %s","grpc_core::g_static_mdelem_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = *(long *)PTR_DAT_043740b0 + (ulong)(byte)(&DAT_039fe224)[uVar4] * 0x50 | 1;
  }
  return uVar3;
}


