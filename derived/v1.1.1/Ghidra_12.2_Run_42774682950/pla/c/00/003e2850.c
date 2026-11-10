/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e2850; name: FUN_003e2850
 */


void FUN_003e2850(long param_1)

{
  if (PTR_DAT_04373fe8[0x10] == '\0') {
    FUN_002ec2d0(*(undefined8 *)(param_1 + 0x70));
    return;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x146,1,
               "grpc_channel_get_target(channel=%p)",param_1);
  FUN_002ec2d0(*(undefined8 *)(param_1 + 0x70));
  return;
}


