/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310590; name: FUN_00310590
 */


ulong FUN_00310590(ulong *param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  pbVar5 = (byte *)*param_1;
  if (((int)(byte *)param_1[1] - (int)pbVar5 < 10) && ((byte *)param_1[1] <= pbVar5)) {
    auVar6 = FUN_00310270(param_1);
    uVar4 = auVar6._0_8_ & 0xffffffff;
    if ((auVar6._8_8_ & 1) == 0) {
      uVar4 = 0xffffffffffffffff;
    }
    return uVar4;
  }
  if (param_2 == 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                 ,0x1ce);
                    /* try { // try from 0031062c to 0031064b has its CatchHandler @ 003107d4 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (first_byte_or_zero) != (0): ");
    uVar2 = FUN_0030f3ac(uVar2,"Caller should provide us with *buffer_ when buffer is non-empty");
                    /* try { // try from 0031064c to 00310653 has its CatchHandler @ 003107c4 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
    pbVar5 = (byte *)*param_1;
    if (*pbVar5 == 0) goto joined_r0x003106a8;
  }
  else if (*pbVar5 == param_2) goto joined_r0x003106a8;
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
               ,0x175);
                    /* try { // try from 00310684 to 00310697 has its CatchHandler @ 003107d0 */
  uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (*buffer) == (first_byte): ");
                    /* try { // try from 00310698 to 0031069f has its CatchHandler @ 003107cc */
  FUN_0030f41c(auStack_58,uVar2);
  FUN_0030f658(auStack_50);
joined_r0x003106a8:
  if ((param_2 >> 7 & 1) == 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                 ,0x176);
                    /* try { // try from 003106c4 to 003106df has its CatchHandler @ 003107d8 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (first_byte & 0x80) == (0x80): ");
    uVar2 = FUN_0030f588(uVar2,param_2);
                    /* try { // try from 003106e0 to 003106e7 has its CatchHandler @ 003107c8 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
    bVar1 = pbVar5[1];
  }
  else {
    bVar1 = pbVar5[1];
  }
  uVar3 = (param_2 + (uint)bVar1 * 0x80) - 0x80;
  if ((char)bVar1 < '\0') {
    uVar3 = (uVar3 + (uint)pbVar5[2] * 0x4000) - 0x4000;
    if ((char)pbVar5[2] < '\0') {
      uVar3 = (uVar3 + (uint)pbVar5[3] * 0x200000) - 0x200000;
      if ((char)pbVar5[3] < '\0') {
        uVar3 = uVar3 + (uint)pbVar5[4] * 0x10000000 + 0xf0000000;
        if ((char)pbVar5[4] < '\0') {
          if ((char)pbVar5[5] < '\0') {
            if ((char)pbVar5[6] < '\0') {
              if ((char)pbVar5[7] < '\0') {
                if ((char)pbVar5[8] < '\0') {
                  if ((char)pbVar5[9] < '\0') {
                    return 0xffffffffffffffff;
                  }
                  pbVar5 = pbVar5 + 10;
                }
                else {
                  pbVar5 = pbVar5 + 9;
                }
              }
              else {
                pbVar5 = pbVar5 + 8;
              }
            }
            else {
              pbVar5 = pbVar5 + 7;
            }
          }
          else {
            pbVar5 = pbVar5 + 6;
          }
        }
        else {
          pbVar5 = pbVar5 + 5;
        }
      }
      else {
        pbVar5 = pbVar5 + 4;
      }
    }
    else {
      pbVar5 = pbVar5 + 3;
    }
  }
  else {
    pbVar5 = pbVar5 + 2;
  }
  *param_1 = (ulong)pbVar5;
  return (ulong)uVar3;
}


