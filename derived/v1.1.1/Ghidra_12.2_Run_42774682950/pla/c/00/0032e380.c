/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032e380; name: FUN_0032e380
 */


void FUN_0032e380(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 1);
      if (0x11 < (byte)(bVar1 - 1)) {
        FUN_0030f640(auStack_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                     ,0x3c);
                    /* try { // try from 0032e464 to 0032e477 has its CatchHandler @ 0032e544 */
        uVar2 = FUN_0030f3ac(auStack_50,
                             "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032e478 to 0032e47f has its CatchHandler @ 0032e540 */
        FUN_0030f41c(auStack_18,uVar2);
        FUN_0030f658(auStack_50);
      }
      if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) == 10) {
        if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
          pcVar4 = *(code **)(*(long *)*param_1 + 0x28);
        }
        else {
          pcVar4 = *(code **)(*(long *)*param_1 + 0x70);
        }
        (*pcVar4)();
      }
      else if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) == 9) {
        pbVar3 = (byte *)*param_1;
        if ((*pbVar3 & 1) == 0) {
          pbVar3[0] = 0;
          pbVar3[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar3 + 0x10) = 0;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          pbVar3[0xc] = 0;
          pbVar3[0xd] = 0;
          pbVar3[0xe] = 0;
          pbVar3[0xf] = 0;
        }
      }
      *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) & 0xf0 | 1;
      return;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 1);
    if (0x11 < (byte)(bVar1 - 1)) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                   ,0x3c);
                    /* try { // try from 0032e3c4 to 0032e3d7 has its CatchHandler @ 0032e54c */
      uVar2 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 0032e3d8 to 0032e3df has its CatchHandler @ 0032e548 */
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
      *(undefined4 *)*param_1 = 0;
      return;
    case 9:
      FUN_0032b96c(*param_1);
      break;
    case 10:
      FUN_0033b3a8(*param_1);
      return;
    }
  }
  return;
}


