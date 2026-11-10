/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004207f0; name: FUN_004207f0
 */


/* WARNING: Removing unreachable block (ram,0x00420898) */

undefined8 FUN_004207f0(ulong *param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == (uint *)0x0) {
    uVar3 = 0xe3;
    uVar4 = 0x43;
    uVar5 = 0x142;
    goto LAB_00420864;
  }
  if ((param_2[1] & 0xfffffeff) != param_3) {
    uVar3 = 0xe3;
    uVar4 = 0xe1;
    uVar5 = 0x146;
    goto LAB_00420864;
  }
  uVar2 = *param_2;
  if (8 < uVar2) {
    uVar3 = 0xe1;
    uVar4 = 0xdf;
    uVar5 = 0xd5;
    goto LAB_00420864;
  }
  lVar7 = *(long *)(param_2 + 2);
  if (lVar7 == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (long)(int)uVar2 & 1;
    if (uVar2 == 1) {
      uVar10 = 0;
      lVar9 = 0;
    }
    else {
      uVar6 = 0;
      lVar9 = 0;
      do {
        pbVar1 = (byte *)(lVar7 + lVar9);
        lVar9 = lVar9 + 2;
        uVar6 = (ulong)pbVar1[1] | ((ulong)*pbVar1 | (uVar6 & 0xffffffffffff) << 8) << 8;
      } while ((long)(int)uVar2 - uVar8 != lVar9);
      uVar10 = uVar6 << 8;
      if (uVar8 == 0) goto joined_r0x004208a0;
    }
    uVar6 = uVar10 | *(byte *)(lVar7 + lVar9);
  }
joined_r0x004208a0:
  if ((param_2[1] >> 8 & 1) == 0) {
    if (-1 < (long)uVar6) {
      *param_1 = uVar6;
      return 1;
    }
    uVar4 = 0xdf;
    uVar5 = 0x110;
    uVar3 = 0xe0;
  }
  else {
    if (-1 < (long)uVar6) {
      *param_1 = -uVar6;
      return 1;
    }
    if (uVar6 == 0x8000000000000000) {
      *param_1 = 0x8000000000000000;
      return 1;
    }
    uVar5 = 0x109;
    uVar3 = 0xe0;
    uVar4 = 0xe0;
  }
LAB_00420864:
  FUN_004014b0(0xd,uVar3,uVar4,"external/openssl/crypto/asn1/a_int.c",uVar5);
  return 0;
}


