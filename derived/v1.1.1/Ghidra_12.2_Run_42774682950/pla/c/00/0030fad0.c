/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030fad0; name: FUN_0030fad0
 */


undefined8 FUN_0030fad0(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_58 [4];
  int local_54;
  undefined1 auStack_50 [48];
  long local_18;
  
  if ((int)param_1[1] != (int)*param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                 ,0x269);
                    /* try { // try from 0030fb08 to 0030fb1b has its CatchHandler @ 0030fcc4 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (0) == (BufferSize()): ");
                    /* try { // try from 0030fb1c to 0030fb23 has its CatchHandler @ 0030fcc0 */
    FUN_0030f41c(&local_18,uVar3);
    FUN_0030f658(auStack_50);
  }
  if (((0 < *(int *)((long)param_1 + 0x2c)) || (0 < *(int *)((long)param_1 + 0x1c))) ||
     ((int)param_1[3] == (int)param_1[5])) {
    if (((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c)) &&
       ((int)param_1[6] != (int)param_1[5])) {
      FUN_0030f95c(param_1);
    }
    return 0;
  }
  plVar6 = (long *)param_1[2];
  do {
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_18,&local_54);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return 0;
    }
  } while (local_54 == 0);
  *param_1 = local_18;
  param_1[1] = local_18 + local_54;
  if (local_54 < 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                 ,0x27e);
                    /* try { // try from 0030fbe4 to 0030fbf7 has its CatchHandler @ 0030fcbc */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (buffer_size) >= (0): ");
                    /* try { // try from 0030fbf8 to 0030fbff has its CatchHandler @ 0030fcb8 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
  }
  iVar1 = (int)param_1[3];
  iVar2 = iVar1 - (0x7fffffff - local_54);
  if (iVar2 == 0 || iVar1 < 0x7fffffff - local_54) {
    local_54 = local_54 + iVar1;
    lVar5 = param_1[1];
  }
  else {
    lVar5 = param_1[1] - (long)iVar2;
    local_54 = 0x7fffffff;
    *(int *)((long)param_1 + 0x1c) = iVar2;
    param_1[1] = lVar5;
  }
  lVar5 = lVar5 + *(int *)((long)param_1 + 0x2c);
  iVar1 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar1 = (int)param_1[5];
  }
  *(int *)(param_1 + 3) = local_54;
  iVar2 = local_54 - iVar1;
  param_1[1] = lVar5;
  if (iVar2 == 0 || local_54 < iVar1) {
    *(int *)((long)param_1 + 0x2c) = 0;
    return 1;
  }
  *(int *)((long)param_1 + 0x2c) = iVar2;
  param_1[1] = lVar5 - iVar2;
  return 1;
}


