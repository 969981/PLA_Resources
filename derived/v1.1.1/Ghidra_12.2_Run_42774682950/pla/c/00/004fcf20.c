/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fcf20; name: FUN_004fcf20
 */


void FUN_004fcf20(undefined8 *param_1)

{
  if (PTR_DAT_04373fe8[0x10] == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/metadata_array.cc",0x1d,1,
               "grpc_metadata_array_init(array=%p)",param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


