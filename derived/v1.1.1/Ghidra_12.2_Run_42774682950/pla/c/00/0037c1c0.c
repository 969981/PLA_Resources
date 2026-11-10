/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037c1c0; name: FUN_0037c1c0
 */


void FUN_0037c1c0(long *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  void *local_60 [6];
  undefined1 auStack_28 [8];
  
  if ((int)param_1[4] != 0) {
    if (*(char *)((long)param_1 + 0x1d) != '\0') {
      FUN_0030f640(local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                   ,0x520);
                    /* try { // try from 0037c1fc to 0037c20f has its CatchHandler @ 0037c2e8 */
      uVar3 = FUN_0030f3ac(local_60,"CHECK failed: !failed_: ");
                    /* try { // try from 0037c210 to 0037c217 has its CatchHandler @ 0037c2e4 */
      FUN_0030f41c(auStack_28,uVar3);
      FUN_0030f658(local_60);
    }
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    iVar4 = (int)param_1[3];
    if (iVar4 < iVar2) {
      do {
        if (0 < iVar4) {
          memset((void *)param_1[2],0x20,(long)iVar4);
          iVar4 = (int)param_1[3];
        }
        bVar1 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],local_60,param_1 + 3);
        *(byte *)((long)param_1 + 0x1d) = ~bVar1 & 1;
        if ((~bVar1 & 1) != 0) {
          return;
        }
        iVar2 = iVar2 - iVar4;
        iVar4 = (int)param_1[3];
        param_1[2] = (long)local_60[0];
      } while (iVar4 < iVar2);
    }
    else {
      local_60[0] = (void *)param_1[2];
    }
    memset(local_60[0],0x20,(long)iVar2);
    param_1[2] = param_1[2] + (long)iVar2;
    *(int *)(param_1 + 3) = (int)param_1[3] - iVar2;
  }
  return;
}


