/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e4de0; name: FUN_002e4de0
 */


undefined8 FUN_002e4de0(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_args.cc",0x115,2,
                   "%s ignored: it must be an string",*(undefined8 *)(param_1 + 2));
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 4);
  }
  return uVar1;
}


