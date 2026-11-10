/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00336298; name: FUN_00336298
 */


undefined8 FUN_00336298(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  bVar1 = *(byte *)(param_1 + 1);
  if (0x11 < (byte)(bVar1 - 1)) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x3c);
                    /* try { // try from 003362d4 to 003362e7 has its CatchHandler @ 003363b8 */
    uVar2 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: type > 0 && type <= WireFormatLite::MAX_FIELD_TYPE: ");
                    /* try { // try from 003362e8 to 003362ef has its CatchHandler @ 003363b4 */
    FUN_0030f41c(auStack_18,uVar2);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)(PTR_DAT_04373b08 + (ulong)bVar1 * 4) == 10) {
    if (*(char *)((long)param_1 + 9) == '\0') {
      if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
        if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
          uVar5 = (**(code **)(*(long *)*param_1 + 0x30))();
        }
        else {
          uVar5 = (**(code **)(*(long *)*param_1 + 0x48))();
        }
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
    }
    else {
      lVar3 = *param_1;
      if (0 < *(int *)(lVar3 + 8)) {
        iVar6 = 0;
        do {
          plVar4 = (long *)FUN_0033b104(lVar3,iVar6);
          uVar5 = (**(code **)(*plVar4 + 0x30))();
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          lVar3 = *param_1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar3 + 8));
      }
    }
  }
  return 1;
}


