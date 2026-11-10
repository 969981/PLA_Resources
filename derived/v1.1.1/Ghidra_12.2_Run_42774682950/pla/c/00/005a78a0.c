/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a78a0; name: FUN_005a78a0
 */


undefined8 FUN_005a78a0(long *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  pbVar1 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar1 = (byte *)param_1[2];
  }
  uVar3 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar3 = param_1[1];
  }
  while( true ) {
    if (uVar3 == 0) {
      return 0;
    }
    if ((1 << (ulong)(*pbVar1 & 7) & (uint)*(byte *)(param_2 + (ulong)(*pbVar1 >> 3))) == 0) break;
    pbVar1 = pbVar1 + 1;
    uVar3 = uVar3 - 1;
  }
  FUN_002f2ff0(auStack_40,param_3);
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/validate_metadata.cc",
                       0x2c,auStack_40,0,0);
  pbVar2 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar2 = (byte *)param_1[2];
  }
  uVar4 = FUN_002f0d20(uVar4,4,(long)pbVar1 - (long)pbVar2);
  FUN_00304af0(auStack_60,param_1,3);
  uVar4 = FUN_002f1340(uVar4,6,auStack_60);
  return uVar4;
}


