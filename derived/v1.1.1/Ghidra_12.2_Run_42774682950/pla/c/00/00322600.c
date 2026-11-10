/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00322600; name: FUN_00322600
 */


undefined1  [16] FUN_00322600(ulong *param_1,ulong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  
  if (param_2 < *param_1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                 ,0x9f);
                    /* try { // try from 00322644 to 00322657 has its CatchHandler @ 0032297c */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: ptr >= limit_end_: ");
                    /* try { // try from 00322658 to 0032265f has its CatchHandler @ 00322978 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
  }
  uVar6 = (int)param_2 - (int)param_1[1];
  if (0x10 < (int)uVar6) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                 ,0xa1);
                    /* try { // try from 00322690 to 003226a3 has its CatchHandler @ 00322974 */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: overrun <= kSlopBytes: ");
                    /* try { // try from 003226a4 to 003226ab has its CatchHandler @ 00322970 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
  }
  uVar3 = *(uint *)((long)param_1 + 0x1c);
  if ((int)uVar3 < (int)uVar6) {
LAB_00322944:
    param_2 = 0;
    uVar1 = 1;
    goto LAB_00322928;
  }
  if (uVar3 == uVar6) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                 ,0xa4);
                    /* try { // try from 003226dc to 003226ef has its CatchHandler @ 0032296c */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: overrun != limit_: ");
                    /* try { // try from 003226f0 to 003226f7 has its CatchHandler @ 00322968 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
    uVar3 = *(uint *)((long)param_1 + 0x1c);
  }
  if ((int)uVar3 <= (int)uVar6) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                 ,0xa5);
                    /* try { // try from 00322724 to 00322737 has its CatchHandler @ 00322964 */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: overrun < limit_: ");
                    /* try { // try from 00322738 to 0032273f has its CatchHandler @ 00322960 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
    uVar3 = *(uint *)((long)param_1 + 0x1c);
  }
  if (*param_1 != param_1[1] + (long)(int)(uVar3 & (int)uVar3 >> 0x1f)) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                 ,0xaa);
                    /* try { // try from 00322778 to 0032278b has its CatchHandler @ 0032298c */
    uVar1 = FUN_0030f3ac(auStack_70,
                         "CHECK failed: limit_end_ == buffer_end_ + (nn::npln::gnp::std::min)(0, limit_): "
                        );
                    /* try { // try from 0032278c to 00322793 has its CatchHandler @ 00322988 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
    uVar3 = *(uint *)((long)param_1 + 0x1c);
  }
  if ((int)uVar3 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                 ,0xac);
                    /* try { // try from 003227d0 to 003227e3 has its CatchHandler @ 0032295c */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: limit_ > 0: ");
                    /* try { // try from 003227e4 to 003227eb has its CatchHandler @ 00322958 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
    if (*param_1 != param_1[1]) goto LAB_00322800;
  }
  else if (*param_1 != param_1[1]) {
LAB_00322800:
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                 ,0xad);
                    /* try { // try from 00322818 to 0032282b has its CatchHandler @ 00322984 */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: limit_end_ == buffer_end_: ");
                    /* try { // try from 0032282c to 00322833 has its CatchHandler @ 00322980 */
    FUN_0030f41c(auStack_78,uVar1);
    FUN_0030f658(auStack_70);
  }
  do {
    if ((int)uVar6 < 0) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                   ,0xb0);
                    /* try { // try from 00322868 to 00322877 has its CatchHandler @ 00322994 */
      uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: overrun >= 0: ");
                    /* try { // try from 00322878 to 0032287f has its CatchHandler @ 00322990 */
      FUN_0030f41c(auStack_78,uVar1);
      FUN_0030f658(auStack_70);
    }
    lVar2 = FUN_003220d4(param_1,uVar6,param_3);
    if (lVar2 == 0) {
      if (uVar6 != 0) goto LAB_00322944;
      if (*(int *)((long)param_1 + 0x1c) < 1) {
        FUN_0030f640(auStack_70,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                     ,0xb5);
                    /* try { // try from 003228f4 to 00322907 has its CatchHandler @ 00322954 */
        uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: limit_ > 0: ");
                    /* try { // try from 00322908 to 0032290f has its CatchHandler @ 00322950 */
        FUN_0030f41c(auStack_78,uVar1);
        FUN_0030f658(auStack_70);
      }
      uVar5 = param_1[1];
      uVar1 = 1;
      *(undefined4 *)(param_1 + 10) = 1;
      goto LAB_00322924;
    }
    param_2 = lVar2 + (int)uVar6;
    iVar4 = (int)param_1[1];
    uVar3 = *(int *)((long)param_1 + 0x1c) + ((int)lVar2 - iVar4);
    uVar6 = (int)param_2 - iVar4;
    *(uint *)((long)param_1 + 0x1c) = uVar3;
  } while (-1 < (int)uVar6);
  uVar1 = 0;
  uVar5 = param_1[1] + (long)(int)(uVar3 & (int)uVar3 >> 0x1f);
LAB_00322924:
  *param_1 = uVar5;
LAB_00322928:
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = param_2;
  return auVar7;
}


