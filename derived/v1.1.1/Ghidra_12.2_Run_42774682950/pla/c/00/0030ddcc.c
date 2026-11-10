/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030ddcc; name: FUN_0030ddcc
 */


byte * FUN_0030ddcc(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *__dest;
  byte *pbVar8;
  size_t __n;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (*(int *)(param_1 + 4) != 3) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/unknown_field_set.cc"
                 ,0x110);
                    /* try { // try from 0030de08 to 0030de1b has its CatchHandler @ 0030df14 */
    uVar4 = FUN_0030f3ac(auStack_50,"CHECK failed: (TYPE_LENGTH_DELIMITED) == (type()): ");
                    /* try { // try from 0030de1c to 0030de23 has its CatchHandler @ 0030df10 */
    FUN_0030f41c(auStack_58,uVar4);
    FUN_0030f658(auStack_50);
  }
  pbVar6 = *(byte **)(param_1 + 8);
  if ((*pbVar6 & 1) == 0) {
    bVar1 = *pbVar6 >> 1;
    uVar7 = (uint)bVar1;
    if (bVar1 < 0x80) {
LAB_0030de78:
      __dest = param_2 + 1;
      *param_2 = (byte)uVar7;
      bVar1 = *pbVar6;
      goto joined_r0x0030de80;
    }
  }
  else {
    uVar7 = (uint)*(undefined8 *)(pbVar6 + 8);
    if (uVar7 < 0x80) goto LAB_0030de78;
  }
  *param_2 = (byte)uVar7 | 0x80;
  if (uVar7 >> 0xe == 0) {
    param_2[1] = (byte)(uVar7 >> 7);
    __dest = param_2 + 2;
    bVar1 = *pbVar6;
  }
  else {
    __dest = param_2 + 2;
    uVar7 = uVar7 >> 7;
    do {
      pbVar8 = __dest;
      uVar2 = uVar7 >> 7;
      pbVar8[-1] = (byte)uVar7 | 0x80;
      __dest = pbVar8 + 1;
      uVar3 = uVar7 >> 0xe;
      uVar7 = uVar2;
    } while (uVar3 != 0);
    *pbVar8 = (byte)uVar2;
    bVar1 = *pbVar6;
  }
joined_r0x0030de80:
  if ((bVar1 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(pbVar6 + 8);
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  __n = (size_t)(int)uVar5;
  if (*param_3 - (long)__dest < (long)__n) {
    pbVar6 = (byte *)FUN_00310fe4(param_3,pbVar6,uVar5,__dest);
    return pbVar6;
  }
  memcpy(__dest,pbVar6,__n);
  return __dest + __n;
}


