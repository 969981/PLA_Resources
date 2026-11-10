/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e3b60; name: FUN_003e3b60
 */


void FUN_003e3b60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_40 [32];
  
  lVar1 = FUN_003d6900(0);
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x213,1,
                 "grpc_channel_destroy(channel=%p)",param_1);
  }
  FUN_002f2c60(auStack_40,"Channel Destroyed");
  uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x215,
                       auStack_40,0,0);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  plVar3 = (long *)FUN_003d7710(param_1 + 0x78,0);
  (**(code **)(*plVar3 + 8))(plVar3,lVar1);
  FUN_003c9ce0(param_1 + 0x78,"channel");
  return;
}


