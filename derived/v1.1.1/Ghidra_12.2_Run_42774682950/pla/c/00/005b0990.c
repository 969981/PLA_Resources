/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b0990; name: FUN_005b0990
 */


void FUN_005b0990(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [32];
  
  FUN_002f2c60(auStack_30,"Invalid HPACK index received");
  uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                       ,0x301,auStack_30,0,0);
  uVar1 = FUN_002f0d20(uVar1,5,*(undefined4 *)(param_1 + 0xb0));
  FUN_002f0d20(uVar1,6,*(undefined4 *)(param_1 + 0xe4));
  return;
}


