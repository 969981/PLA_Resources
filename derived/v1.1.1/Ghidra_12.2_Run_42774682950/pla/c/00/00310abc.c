/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310abc; name: FUN_00310abc
 */


ulong FUN_00310abc(ulong *param_1,ulong param_2)

{
  void *__dest;
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  undefined1 auStack_80 [48];
  undefined1 auStack_48 [8];
  
  uVar4 = *param_1;
  __dest = (void *)param_1[1];
  do {
    if (__dest == (void *)0x0) {
      uVar4 = (uVar4 - param_2) + 0x10;
      param_1[1] = param_2;
      iVar3 = (int)uVar4;
joined_r0x00310bdc:
      if (iVar3 < 0) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                     ,700);
                    /* try { // try from 00310bf8 to 00310c0b has its CatchHandler @ 00310c48 */
        uVar2 = FUN_0030f3ac(auStack_80,"CHECK failed: s >= 0: ");
                    /* try { // try from 00310c0c to 00310c13 has its CatchHandler @ 00310c44 */
        FUN_0030f41c(auStack_48,uVar2);
        FUN_0030f658(auStack_80);
      }
LAB_00310c24:
      return uVar4 & 0xffffffff;
    }
    if (param_2 < uVar4 || param_2 - uVar4 == 0) {
      __n = param_2 - (long)(param_1 + 2);
      memcpy(__dest,param_1 + 2,__n);
      uVar4 = *param_1 - param_2;
      param_1[1] = param_1[1] + __n;
      iVar3 = (int)uVar4;
      goto joined_r0x00310bdc;
    }
    if ((char)param_1[7] != '\0') {
      FUN_0030f640(auStack_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                   ,0x2ad);
                    /* try { // try from 00310b48 to 00310b57 has its CatchHandler @ 00310c58 */
      uVar2 = FUN_0030f3ac(auStack_80,"CHECK failed: !had_error_: ");
                    /* try { // try from 00310b58 to 00310b5f has its CatchHandler @ 00310c54 */
      FUN_0030f41c(auStack_48,uVar2);
      FUN_0030f658(auStack_80);
    }
    iVar3 = (int)(param_2 - uVar4);
    if (0x10 < iVar3) {
      FUN_0030f640(auStack_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                   ,0x2ae);
                    /* try { // try from 00310b84 to 00310b93 has its CatchHandler @ 00310c50 */
      uVar2 = FUN_0030f3ac(auStack_80,"CHECK failed: overrun <= kSlopBytes: ");
                    /* try { // try from 00310b94 to 00310b9b has its CatchHandler @ 00310c4c */
      FUN_0030f41c(auStack_48,uVar2);
      FUN_0030f658(auStack_80);
    }
    lVar1 = FUN_00310c6c(param_1);
    param_2 = lVar1 + iVar3;
    if ((char)param_1[7] != '\0') {
      uVar4 = 0;
      goto LAB_00310c24;
    }
    uVar4 = *param_1;
    __dest = (void *)param_1[1];
  } while( true );
}


