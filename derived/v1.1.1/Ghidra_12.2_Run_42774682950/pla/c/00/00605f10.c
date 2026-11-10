/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00605f10; name: FUN_00605f10
 */


void FUN_00605f10(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (0x773593fe < param_3 + 999999999U) {
    param_2 = param_3 / 1000000000 + param_2;
    param_3 = param_3 % 1000000000;
  }
  param_2 = param_2 + (param_3 >> 0x3f);
  lVar1 = param_3 + 1000000000;
  if (-1 < param_3) {
    lVar1 = param_3;
  }
  if (0x497786387f < param_2 + 0xe7791f700U) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/util/time_util.cc"
                 ,0x4b);
                    /* try { // try from 00605f98 to 00605fab has its CatchHandler @ 00605fe4 */
    uVar2 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: seconds >= TimeUtil::kTimestampMinSeconds && seconds <= TimeUtil::kTimestampMaxSeconds: "
                        );
                    /* try { // try from 00605fac to 00605fb3 has its CatchHandler @ 00605fe0 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  FUN_00602278(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return;
}


