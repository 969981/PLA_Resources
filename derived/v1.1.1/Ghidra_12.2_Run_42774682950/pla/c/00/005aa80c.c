/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa80c; name: FUN_005aa80c
 */


undefined8 FUN_005aa80c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  long local_30;
  undefined *puStack_28;
  long local_20;
  undefined *puStack_18;
  
  local_20 = *(long *)(param_1 + 0x18);
  if (param_2 <= local_20) {
    return 0;
  }
  puStack_28 = PTR_FUN_04373818;
  puStack_18 = PTR_FUN_04373818;
  local_30 = param_2;
  FUN_002e6390(local_68,"frame of size %ld overflows local window of %ld",0x2f,&local_30,2);
  uVar1 = (ulong)local_68 | 1;
  if ((local_68[0] & 1) != 0) {
    uVar1 = local_58;
  }
                    /* try { // try from 005aa864 to 005aa887 has its CatchHandler @ 005aa8c8 */
  FUN_002f2ff0(auStack_50,uVar1);
  uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/flow_control.cc"
                       ,0xd2,auStack_50,0,0);
  if ((local_68[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return uVar2;
}


