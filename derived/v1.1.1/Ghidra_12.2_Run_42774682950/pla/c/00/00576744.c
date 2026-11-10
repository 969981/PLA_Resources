/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00576744; name: FUN_00576744
 */


void FUN_00576744(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (PTR_DAT_04374dd0[0x10] != '\0') {
    uVar1 = (**(code **)(*(long *)*param_2 + 0x20))();
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",99,1,
                 "handshake_manager %p: adding handshaker %s [%p] at index %lu",param_1,uVar1,
                 *param_2,*(ulong *)(param_1 + 0x40) >> 1);
  }
  FUN_002ef750(param_1 + 0x18);
                    /* try { // try from 00576774 to 0057677b has its CatchHandler @ 005767d8 */
  FUN_005773d8(param_1 + 0x40,param_2);
                    /* try { // try from 0057677c to 00576783 has its CatchHandler @ 005767d4 */
  FUN_002ef790(param_1 + 0x18);
  return;
}


