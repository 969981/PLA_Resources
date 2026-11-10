/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032e0bc; name: FUN_0032e0bc
 */


undefined4 FUN_0032e0bc(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x6ac);
                    /* try { // try from 0032e0ec to 0032e0ff has its CatchHandler @ 0032e21c */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: is_repeated: ");
                    /* try { // try from 0032e100 to 0032e107 has its CatchHandler @ 0032e218 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  bVar1 = *(byte *)(param_1 + 1);
  if (0x11 < (byte)(bVar1 - 1)) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 0032e13c to 0032e14f has its CatchHandler @ 0032e224 */
    uVar2 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032e150 to 0032e157 has its CatchHandler @ 0032e220 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  switch(*(undefined4 *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    return *(undefined4 *)*param_1;
  case 9:
  case 10:
    return *(undefined4 *)(*param_1 + 8);
  default:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x6bf);
                    /* try { // try from 0032e1d8 to 0032e1eb has its CatchHandler @ 0032e214 */
    uVar2 = FUN_0030f3ac(auStack_50,"Can\'t get here.");
                    /* try { // try from 0032e1ec to 0032e1f3 has its CatchHandler @ 0032e210 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
    return 0;
  }
}


