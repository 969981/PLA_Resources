/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003363cc; name: FUN_003363cc
 */


bool FUN_003363cc(undefined8 param_1,uint param_2,undefined4 param_3,long *param_4,byte *param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  uVar4 = (**(code **)(*param_4 + 0x10))(param_4,param_3,param_5);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar2 = *param_5;
    if (0x11 < (byte)(bVar2 - 1)) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 00336430 to 00336443 has its CatchHandler @ 00336500 */
      uVar5 = FUN_0030f3ac(auStack_60,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 00336444 to 0033644b has its CatchHandler @ 003364fc */
      FUN_0030f41c(auStack_28,uVar5);
      FUN_0030f658(auStack_60);
    }
    uVar1 = *(uint *)(PTR_DAT_04373aa8 + (ulong)bVar2 * 4);
    *param_6 = 0;
    if ((param_2 == 2) && (param_5[1] != 0)) {
      if (uVar1 < 6) {
        if ((1 << (ulong)(uVar1 & 0x1f) & 0x1cU) == 0) {
          *param_6 = 1;
          return true;
        }
      }
      else {
        FUN_0030f640(auStack_60,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x52);
                    /* try { // try from 003364b4 to 003364c7 has its CatchHandler @ 003364f8 */
        uVar5 = FUN_0030f3ac(auStack_60,"can\'t reach here.");
                    /* try { // try from 003364c8 to 003364cf has its CatchHandler @ 003364f4 */
        FUN_0030f41c(auStack_28,uVar5);
        FUN_0030f658(auStack_60);
      }
    }
    bVar3 = uVar1 == param_2;
  }
  return bVar3;
}


