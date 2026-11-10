/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00521294; name: FUN_00521294
 */


void FUN_00521294(byte *param_1)

{
  if (4 < *(ulong *)(param_1 + 0x30)) {
                    /* try { // try from 005212ac to 005212bb has its CatchHandler @ 0052130c */
    FUN_002f0430(*(ulong *)(param_1 + 0x30),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0xe3);
  }
  FUN_00521338(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  if ((param_1[0x18] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x10));
  return;
}


