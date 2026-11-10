/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031eb24; name: FUN_0031eb24
 */


bool FUN_0031eb24(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined2 local_48;
  byte local_46;
  undefined1 auStack_40 [8];
  byte local_38 [16];
  undefined8 local_28;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if (uVar1 >> 0x1f == 0) {
    local_80 = auStack_70;
    local_48 = 0;
    local_46 = *PTR_DAT_04373a90 & 1;
    puStack_78 = local_80;
    local_50 = param_2;
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,local_80,&local_80);
    FUN_00310e08(&local_80,uVar2);
    return (char)local_48 == '\0';
  }
  FUN_0030f640(&local_80,2,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message_lite.cc"
               ,0x19a);
                    /* try { // try from 0031eb70 to 0031eb7b has its CatchHandler @ 0031ec50 */
  (**(code **)(*param_1 + 0x10))(local_38,param_1);
                    /* try { // try from 0031eb7c to 0031eb9f has its CatchHandler @ 0031ec64 */
  uVar2 = FUN_0030f3e8(&local_80,local_38);
  uVar2 = FUN_0030f3ac(uVar2," exceeded maximum protobuf size of 2GB: ");
  uVar2 = FUN_0030f5e4(uVar2,uVar1);
                    /* try { // try from 0031eba0 to 0031eba7 has its CatchHandler @ 0031ec40 */
  FUN_0030f41c(auStack_40,uVar2);
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_28);
  }
  FUN_0030f658(&local_80);
  return false;
}


