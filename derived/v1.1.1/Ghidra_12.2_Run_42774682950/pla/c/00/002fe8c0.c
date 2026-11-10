/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fe8c0; name: FUN_002fe8c0
 */


void FUN_002fe8c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_30 [32];
  
  *param_2 = 0;
  FUN_002f2c60(auStack_30,"Unix domain sockets are not supported on Windows");
  FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/unix_sockets_posix_noop.cc",0x28,
               auStack_30,0,0);
  return;
}


