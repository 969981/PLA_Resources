/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4ee0; name: FUN_002e4ee0
 */


uint FUN_002e4ee0(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 1) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0x124,2,
                   "%s ignored: it must be an integer",*(undefined8 *)(param_1 + 2));
      return param_2 & 1;
    }
    if (param_1[4] == 0) {
      return 0;
    }
    if (param_1[4] != 1) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0x12d,2,
                   "%s treated as bool but set to %d (assuming true)",*(undefined8 *)(param_1 + 2));
    }
    param_2 = 1;
  }
  return param_2 & 1;
}


