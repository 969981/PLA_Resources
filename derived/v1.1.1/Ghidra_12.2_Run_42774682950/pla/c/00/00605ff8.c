/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00605ff8; name: FUN_00605ff8
 */


void FUN_00605ff8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  lVar2 = param_2 / 1000000000;
  param_2 = param_2 % 1000000000;
  if (0x773593fe < param_2 + 999999999U) {
    lVar2 = param_2 / 1000000000 + lVar2;
    param_2 = param_2 % 1000000000;
  }
  if ((lVar2 < 0) && (0 < param_2)) {
    param_2 = param_2 + -1000000000;
    lVar2 = lVar2 + 1;
  }
  else if ((0 < lVar2) && (param_2 < 0)) {
    param_2 = param_2 + 1000000000;
    lVar2 = lVar2 + -1;
  }
  if (0x92f3973c00 < lVar2 + 0x4979cb9e00U) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/util/time_util.cc"
                 ,0x62);
                    /* try { // try from 006060e4 to 006060f7 has its CatchHandler @ 00606130 */
    uVar1 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: seconds >= TimeUtil::kDurationMinSeconds && seconds <= TimeUtil::kDurationMaxSeconds: "
                        );
                    /* try { // try from 006060f8 to 006060ff has its CatchHandler @ 0060612c */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
  }
  FUN_0030bdd8(param_1,0);
  *(long *)(param_1 + 0x10) = lVar2;
  *(int *)(param_1 + 0x18) = (int)param_2;
  return;
}


