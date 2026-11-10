/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050cbb8; name: FUN_0050cbb8
 */


void FUN_0050cbb8(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined8 local_18;
  
  if (DAT_0439ebd0 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver_registry.cc"
                 ,0xba,2,"assertion failed: %s","g_state != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_18 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
                    /* try { // try from 0050cbe4 to 0050cc5f has its CatchHandler @ 0050cc8c */
  FUN_0050c518(DAT_0439ebd0,param_2,&local_18,&local_38);
  FUN_003ec320(local_18);
  uVar1 = local_38 >> 1 & 0x7f;
  if ((local_38 & 1) != 0) {
    uVar1 = local_30;
  }
  if (uVar1 == 0) {
    uVar2 = FUN_002ec2d0(param_2);
  }
  else {
    uVar1 = (ulong)&local_38 | 1;
    if ((local_38 & 1) != 0) {
      uVar1 = local_28;
    }
    uVar2 = FUN_002ec2d0(uVar1);
  }
  *param_1 = uVar2;
  if ((local_38 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
  return;
}


