/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7c10; name: FUN_005a7c10
 */


undefined8 FUN_005a7c10(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((uint)param_1[1] <= param_2 - 0x3eU) {
    return 0;
  }
  uVar2 = param_1[6];
  uVar1 = (param_1[1] - param_2) + *param_1 + 0x3d;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
  FUN_003e0280(uVar4,
               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
               ,0x3a);
  return uVar4;
}


