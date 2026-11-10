/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420970; name: FUN_00420970
 */


/* WARNING: Removing unreachable block (ram,0x00420a5c) */

undefined8 FUN_00420970(ulong *param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 == (uint *)0x0) {
    FUN_004014b0(0xd,0xe6,0x43,"external/openssl/crypto/asn1/a_int.c",0x165);
    return 0;
  }
  if ((param_2[1] & 0xfffffeff) != 2) {
    FUN_004014b0(0xd,0xe6,0xe1,"external/openssl/crypto/asn1/a_int.c",0x169);
    return 0;
  }
  if ((param_2[1] >> 8 & 1) != 0) {
    FUN_004014b0(0xd,0xe6,0xe2,"external/openssl/crypto/asn1/a_int.c",0x16d);
    return 0;
  }
  uVar2 = *param_2;
  if (8 < uVar2) {
    FUN_004014b0(0xd,0xe1,0xdf,"external/openssl/crypto/asn1/a_int.c",0xd5);
    return 0;
  }
  lVar3 = *(long *)(param_2 + 2);
  if (lVar3 == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    *param_1 = 0;
    return 1;
  }
  uVar5 = (long)(int)uVar2 & 1;
  if (uVar2 == 1) {
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    lVar6 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + lVar6);
      lVar6 = lVar6 + 2;
      uVar4 = (ulong)pbVar1[1] | ((ulong)*pbVar1 | (uVar4 & 0xffffffffffff) << 8) << 8;
    } while ((long)(int)uVar2 - uVar5 != lVar6);
    uVar7 = uVar4 << 8;
    if (uVar5 == 0) goto LAB_00420abc;
  }
  uVar4 = uVar7 | *(byte *)(lVar3 + lVar6);
LAB_00420abc:
  *param_1 = uVar4;
  return 1;
}


