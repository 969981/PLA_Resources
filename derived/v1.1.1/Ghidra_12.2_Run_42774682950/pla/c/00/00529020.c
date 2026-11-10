/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00529020; name: FUN_00529020
 */


void FUN_00529020(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8) + 0x58;
  local_28 = param_2;
  FUN_002ef750(lVar1);
                    /* try { // try from 00529044 to 00529053 has its CatchHandler @ 005290b0 */
  uVar4 = FUN_0052d5e4(uVar2,param_1,&local_28);
                    /* try { // try from 00529058 to 0052905f has its CatchHandler @ 005290ac */
  FUN_002ef790(lVar1);
  uVar3 = local_28;
  if ((uVar4 & 1) != 0) {
    FUN_0052e5f4(param_1,local_28);
    if (4 < uVar3) {
      FUN_002f0430(uVar3,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xf82);
      return;
    }
  }
  return;
}


