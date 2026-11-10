/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cd6c0; name: FUN_003cd6c0
 */


void FUN_003cd6c0(long param_1,undefined4 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  FUN_003f1110(param_2,&local_18);
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x588,2,
               "Compression algorithm (\'%s\') not present in the bitset of accepted encodings (\'0x%x\')"
               ,local_18,*(undefined4 *)(param_1 + 0x610));
  return;
}


