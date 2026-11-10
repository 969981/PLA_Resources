/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e8a4; name: FUN_0031e8a4
 */


long FUN_0031e8a4(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [48];
  long local_60 [6];
  undefined8 local_30;
  undefined2 local_28;
  byte local_26;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  local_60[1] = 0;
  local_28 = 0;
  local_26 = *PTR_DAT_04373a90 & 1;
  local_30 = 0;
  local_60[0] = param_2 + iVar1;
  lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,local_60);
  if (param_2 + iVar1 != lVar2) {
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message_lite.cc"
                 ,0x168);
                    /* try { // try from 0031e924 to 0031e937 has its CatchHandler @ 0031e960 */
    uVar3 = FUN_0030f3ac(auStack_90,"CHECK failed: target + size == res: ");
                    /* try { // try from 0031e938 to 0031e93f has its CatchHandler @ 0031e95c */
    FUN_0030f41c(auStack_98,uVar3);
    FUN_0030f658(auStack_90);
  }
  return lVar2;
}


