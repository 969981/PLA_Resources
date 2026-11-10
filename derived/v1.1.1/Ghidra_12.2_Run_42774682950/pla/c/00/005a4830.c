/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a4830; name: FUN_005a4830
 */


void FUN_005a4830(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                 ,0x1e,2,"assertion failed: %s","initial_capacity > 1");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = FUN_002ebd50(param_2 << 2);
  *param_1 = uVar1;
  uVar1 = FUN_002ebd50(param_2 << 3);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  return;
}


