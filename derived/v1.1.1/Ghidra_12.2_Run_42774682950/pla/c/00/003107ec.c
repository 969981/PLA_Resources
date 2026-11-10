/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003107ec; name: FUN_003107ec
 */


ulong FUN_003107ec(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  pbVar7 = (byte *)*param_1;
  pbVar6 = (byte *)param_1[1];
  iVar2 = (int)pbVar6 - (int)pbVar7;
  if ((iVar2 < 10) && (iVar2 < 1)) {
    if ((int)pbVar6 == (int)pbVar7) {
      if (((*(int *)((long)param_1 + 0x2c) < 1) && ((int)param_1[3] != (int)param_1[5])) ||
         ((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c))) goto LAB_0031093c;
LAB_00310a18:
      bVar3 = true;
LAB_00310a3c:
      *(bool *)((long)param_1 + 0x24) = bVar3;
      return 0;
    }
LAB_0031093c:
    if (pbVar7 == pbVar6) {
      uVar5 = FUN_0030fad0(param_1);
      if ((uVar5 & 1) == 0) {
        if ((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c)) {
          bVar3 = (int)param_1[5] == (int)param_1[6];
          goto LAB_00310a3c;
        }
        goto LAB_00310a18;
      }
      pbVar7 = (byte *)*param_1;
      pbVar6 = (byte *)param_1[1];
    }
    if ((pbVar6 <= pbVar7) || ((char)*pbVar7 < '\0')) {
      auVar8 = FUN_00310270(param_1);
      if ((auVar8._8_8_ & 1) == 0) {
        return 0;
      }
      return auVar8._0_8_;
    }
    uVar5 = (ulong)*pbVar7;
  }
  else {
    if (*pbVar7 != param_2) {
      FUN_0030f640(auStack_50,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                   ,0x219);
                    /* try { // try from 00310844 to 00310857 has its CatchHandler @ 00310aa4 */
      uVar4 = FUN_0030f3ac(auStack_50,"CHECK failed: (first_byte_or_zero) == (buffer_[0]): ");
                    /* try { // try from 00310858 to 0031085f has its CatchHandler @ 00310aa0 */
      FUN_0030f41c(auStack_58,uVar4);
      FUN_0030f658(auStack_50);
      pbVar7 = (byte *)*param_1;
    }
    if (param_2 != 0) {
      if (*pbVar7 != param_2) {
        FUN_0030f640(auStack_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                     ,0x175);
                    /* try { // try from 00310894 to 003108a7 has its CatchHandler @ 00310a9c */
        uVar4 = FUN_0030f3ac(auStack_50,"CHECK failed: (*buffer) == (first_byte): ");
                    /* try { // try from 003108a8 to 003108af has its CatchHandler @ 00310a98 */
        FUN_0030f41c(auStack_58,uVar4);
        FUN_0030f658(auStack_50);
      }
      if ((param_2 >> 7 & 1) == 0) {
        FUN_0030f640(auStack_50,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                     ,0x176);
                    /* try { // try from 003108d4 to 003108ef has its CatchHandler @ 00310aa8 */
        uVar4 = FUN_0030f3ac(auStack_50,"CHECK failed: (first_byte & 0x80) == (0x80): ");
        uVar4 = FUN_0030f588(uVar4,param_2);
                    /* try { // try from 003108f0 to 003108f7 has its CatchHandler @ 00310a94 */
        FUN_0030f41c(auStack_58,uVar4);
        FUN_0030f658(auStack_50);
      }
      uVar1 = (param_2 + (uint)pbVar7[1] * 0x80) - 0x80;
      uVar5 = (ulong)uVar1;
      if ((char)pbVar7[1] < '\0') {
        uVar1 = (uVar1 + (uint)pbVar7[2] * 0x4000) - 0x4000;
        uVar5 = (ulong)uVar1;
        if ((char)pbVar7[2] < '\0') {
          uVar1 = (uVar1 + (uint)pbVar7[3] * 0x200000) - 0x200000;
          uVar5 = (ulong)uVar1;
          if ((char)pbVar7[3] < '\0') {
            uVar5 = (ulong)(uVar1 + (uint)pbVar7[4] * 0x10000000 + 0xf0000000);
            if ((char)pbVar7[4] < '\0') {
              if ((char)pbVar7[5] < '\0') {
                if ((char)pbVar7[6] < '\0') {
                  if ((char)pbVar7[7] < '\0') {
                    if ((char)pbVar7[8] < '\0') {
                      if ((char)pbVar7[9] < '\0') {
                        return 0;
                      }
                      pbVar7 = pbVar7 + 10;
                    }
                    else {
                      pbVar7 = pbVar7 + 9;
                    }
                  }
                  else {
                    pbVar7 = pbVar7 + 8;
                  }
                }
                else {
                  pbVar7 = pbVar7 + 7;
                }
              }
              else {
                pbVar7 = pbVar7 + 6;
              }
            }
            else {
              pbVar7 = pbVar7 + 5;
            }
          }
          else {
            pbVar7 = pbVar7 + 4;
          }
        }
        else {
          pbVar7 = pbVar7 + 3;
        }
      }
      else {
        pbVar7 = pbVar7 + 2;
      }
      goto LAB_0031096c;
    }
    uVar5 = 0;
  }
  pbVar7 = pbVar7 + 1;
LAB_0031096c:
  *param_1 = (long)pbVar7;
  return uVar5;
}


