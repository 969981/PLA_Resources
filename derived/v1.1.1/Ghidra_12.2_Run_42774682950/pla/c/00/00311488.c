/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00311488; name: FUN_00311488
 */


byte * FUN_00311488(long *param_1,uint param_2,byte *param_3,byte *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  size_t __n;
  uint uVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  pbVar7 = (byte *)*param_1;
  if (pbVar7 <= param_4) {
    param_4 = (byte *)FUN_00310ec4(param_1,param_4);
    pbVar7 = (byte *)*param_1;
  }
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (pbVar7 <= param_4) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x35a);
                    /* try { // try from 003114e8 to 003114fb has its CatchHandler @ 0031162c */
    uVar5 = FUN_0030f3ac(auStack_60,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003114fc to 00311503 has its CatchHandler @ 00311628 */
    FUN_0030f41c(auStack_68,uVar5);
    FUN_0030f658(auStack_60);
  }
  uVar6 = param_2 << 3 | 2;
  uVar10 = (uint)uVar1;
  if (uVar6 < 0x80) {
    pbVar7 = param_4 + 1;
    *param_4 = (byte)uVar6;
  }
  else {
    *param_4 = (byte)(param_2 << 3) | 0x82;
    if ((param_2 & 0x1fffffff) >> 0xb == 0) {
      param_4[1] = (byte)(param_2 >> 4);
      pbVar7 = param_4 + 2;
    }
    else {
      pbVar7 = param_4 + 2;
      uVar6 = param_2 >> 4 & 0x1ffffff;
      do {
        pbVar9 = pbVar7;
        uVar2 = uVar6 >> 7;
        pbVar9[-1] = (byte)uVar6 | 0x80;
        pbVar7 = pbVar9 + 1;
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar2;
      } while (uVar3 != 0);
      *pbVar9 = (byte)uVar2;
    }
  }
  uVar6 = uVar10;
  if (0x7f < uVar10) {
    uVar8 = uVar1 & 0xffffffff;
    pbVar9 = pbVar7;
    do {
      uVar4 = uVar8 >> 0xe;
      uVar6 = (uint)(uVar8 >> 7);
      pbVar7 = pbVar9 + 1;
      *pbVar9 = (byte)uVar8 | 0x80;
      uVar8 = uVar8 >> 7;
      pbVar9 = pbVar7;
    } while (uVar4 != 0);
  }
  pbVar9 = pbVar7 + 1;
  *pbVar7 = (byte)uVar6;
  pbVar7 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar7 = param_3 + 1;
  }
  __n = (size_t)(int)uVar10;
  if (*param_1 - (long)pbVar9 < (long)__n) {
    pbVar9 = (byte *)FUN_00310fe4(param_1,pbVar7,uVar1 & 0xffffffff,pbVar9);
  }
  else {
    memcpy(pbVar9,pbVar7,__n);
    pbVar9 = pbVar9 + __n;
  }
  return pbVar9;
}


