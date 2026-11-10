/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031b148; name: FUN_0031b148
 */


uint FUN_0031b148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte *__s1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  iVar5 = FUN_0031aab8(param_2);
  iVar6 = FUN_0031aab8(param_3);
  if (iVar5 != iVar6) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x489);
                    /* try { // try from 0031b190 to 0031b1a3 has its CatchHandler @ 0031b360 */
    uVar10 = FUN_0030f3ac(auStack_50,"CHECK failed: a.type() == b.type(): ");
                    /* try { // try from 0031b1a4 to 0031b1ab has its CatchHandler @ 0031b35c */
    FUN_0030f41c(auStack_58,uVar10);
    FUN_0030f658(auStack_50);
  }
  uVar7 = FUN_0031aab8(param_2);
  switch(uVar7) {
  case 1:
    iVar5 = FUN_0031bff4(param_2);
    iVar6 = FUN_0031bff4(param_3);
    bVar3 = SBORROW4(iVar5,iVar6);
    bVar4 = iVar5 - iVar6 < 0;
    goto LAB_0031b2fc;
  case 2:
    lVar13 = FUN_0031bf0c(param_2);
    lVar14 = FUN_0031bf0c(param_3);
    bVar3 = SBORROW8(lVar13,lVar14);
    bVar4 = lVar13 - lVar14 < 0;
LAB_0031b2fc:
    uVar8 = (uint)(bVar4 != bVar3);
    break;
  case 3:
    uVar8 = FUN_0031c1c4(param_2);
    uVar9 = FUN_0031c1c4(param_3);
    uVar8 = (uint)(uVar8 < uVar9);
    break;
  case 4:
    uVar15 = FUN_0031c0dc(param_2);
    uVar16 = FUN_0031c0dc(param_3);
    uVar8 = (uint)(uVar15 < uVar16);
    break;
  default:
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/wire_format.cc"
                 ,0x498);
                    /* try { // try from 0031b234 to 0031b247 has its CatchHandler @ 0031b358 */
    uVar10 = FUN_0030f3ac(auStack_50,"Invalid key for map field.");
                    /* try { // try from 0031b248 to 0031b24f has its CatchHandler @ 0031b354 */
    FUN_0030f41c(auStack_58,uVar10);
    FUN_0030f658(auStack_50);
    uVar8 = 1;
    break;
  case 7:
    uVar9 = FUN_0031c2ac(param_2);
    uVar8 = FUN_0031c2ac(param_3);
    uVar8 = uVar8 & (uVar9 ^ 1);
    break;
  case 9:
    pbVar11 = (byte *)FUN_0031be24(param_2);
    pbVar12 = (byte *)FUN_0031be24(param_3);
    bVar1 = *pbVar12;
    uVar15 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar15 = *(ulong *)(pbVar12 + 8);
    }
    bVar2 = *pbVar11;
    uVar16 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar16 = *(ulong *)(pbVar11 + 8);
    }
    __n = uVar15;
    if (uVar16 <= uVar15) {
      __n = uVar16;
    }
    if (__n == 0) {
LAB_0031b2cc:
      uVar8 = 0;
      if (uVar16 < uVar15) {
        uVar8 = 0xffffffff;
      }
    }
    else {
      __s1 = *(byte **)(pbVar11 + 0x10);
      if ((bVar2 & 1) == 0) {
        __s1 = pbVar11 + 1;
      }
      pbVar11 = *(byte **)(pbVar12 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar11 = pbVar12 + 1;
      }
      uVar8 = memcmp(__s1,pbVar11,__n);
      if (uVar8 == 0) goto LAB_0031b2cc;
    }
    uVar8 = uVar8 >> 0x1f;
  }
  return uVar8 & 1;
}


