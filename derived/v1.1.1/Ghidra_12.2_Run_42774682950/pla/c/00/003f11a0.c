/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f11a0; name: FUN_003f11a0
 */


ulong FUN_003f11a0(ulong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_14;
  
  if ((int)param_1 != 0) {
    if (3 < (int)param_1) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/compression.cc",0x6a,2,
                   "Unknown compression level: %d",param_1 & 0xffffffff);
      return 0;
    }
    uVar1 = FUN_003f18b0(param_2);
    uVar1 = FUN_003f1a00(param_1 & 0xffffffff,uVar1);
    iVar2 = FUN_003f1900(&local_14,uVar1,0);
    if (iVar2 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/compression.cc",0x65,2,
                   "Parse compression level error");
      return 0;
    }
    param_1 = (ulong)local_14;
  }
  return param_1;
}


