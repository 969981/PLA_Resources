/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050cac8; name: FUN_0050cac8
 */


void FUN_0050cac8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong local_38 [3];
  undefined8 local_18;
  
  if (DAT_0439ebd0 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver_registry.cc"
                 ,0xad,2,"assertion failed: %s","g_state != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_18 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
                    /* try { // try from 0050caf4 to 0050cb17 has its CatchHandler @ 0050cb94 */
  plVar1 = (long *)FUN_0050c518(DAT_0439ebd0,param_2,&local_18,local_38);
  if (plVar1 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(param_1,plVar1,local_18);
  }
                    /* try { // try from 0050cb24 to 0050cb27 has its CatchHandler @ 0050cb78 */
  FUN_003ec320(local_18);
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38[2]);
  }
  return;
}


