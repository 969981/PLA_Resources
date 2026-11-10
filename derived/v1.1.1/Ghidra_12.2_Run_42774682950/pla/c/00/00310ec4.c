/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310ec4; name: FUN_00310ec4
 */


ulong * FUN_00310ec4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  
  cVar1 = (char)param_1[7];
  do {
    if (cVar1 != '\0') {
      return param_1 + 2;
    }
    iVar4 = (int)param_2 - (int)*param_1;
    if (iVar4 < 0) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                   ,0x33d);
                    /* try { // try from 00310f88 to 00310f97 has its CatchHandler @ 00310fd0 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: overrun >= 0: ");
                    /* try { // try from 00310f98 to 00310f9f has its CatchHandler @ 00310fcc */
      FUN_0030f41c(auStack_78,uVar3);
LAB_00310f08:
      FUN_0030f658(auStack_70);
    }
    else if (0x10 < iVar4) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                   ,0x33e);
                    /* try { // try from 00310f58 to 00310f67 has its CatchHandler @ 00310fc8 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: overrun <= kSlopBytes: ");
                    /* try { // try from 00310f68 to 00310f6f has its CatchHandler @ 00310fc4 */
      FUN_0030f41c(auStack_78,uVar3);
      goto LAB_00310f08;
    }
    lVar2 = FUN_00310c6c(param_1);
    param_2 = (ulong *)(lVar2 + iVar4);
    if (param_2 < (ulong *)*param_1) {
      return param_2;
    }
    cVar1 = (char)param_1[7];
  } while( true );
}


