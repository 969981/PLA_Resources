/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0296f140; name: FUN_0296f140
 */


uint FUN_0296f140(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  
  if ((param_4 & 0xff) == 0x12) {
    return 7;
  }
  bVar3 = (*(byte *)(param_3 + 0x168) & 7) != 0;
  bVar8 = *(byte *)(param_3 + 0x2dc);
  bVar9 = *(byte *)(param_3 + 0x2dd);
  bVar4 = bVar9 != 0x12;
  bVar5 = bVar9 != 2;
  if (*(char *)(param_3 + 0x389) < '\0') {
    if (bVar8 != 0x12 && (bVar8 != 2 || !bVar3)) goto joined_r0x0296f2d8;
    bVar8 = bVar9;
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_0296f1f0;
    bVar8 = 0x12;
  }
  else {
    if (bVar8 == 0x12 || bVar8 == 2 && bVar3) {
      bVar8 = 0;
      if (bVar4 && (!bVar3 || bVar5)) {
        bVar8 = bVar9;
      }
LAB_0296f1f0:
      bVar9 = bVar8;
      goto LAB_0296f200;
    }
joined_r0x0296f2d8:
    if (bVar4 && (!bVar3 || bVar5)) goto LAB_0296f200;
  }
  bVar9 = bVar8;
LAB_0296f200:
  bVar8 = bVar8 & 0x1f;
  bVar9 = bVar9 & 0x1f;
  bVar1 = *(byte *)(param_3 + 0x2de) & 0x1f;
  uVar6 = FUN_0296f398(param_1,param_2,param_3,param_4,bVar8,param_5 & 1);
  if ((bVar9 != bVar8) || (bVar1 != 0x12)) {
    if ((bVar9 != 0x12) && (bVar9 != bVar8)) {
      iVar7 = FUN_0296f398(param_1,param_2,param_3,param_4,bVar9,param_5 & 1);
      uVar10 = (uint)((&DAT_03a84a4c)[iVar7] * (&DAT_03a84a4c)[(int)uVar6]) >> 6;
      if (0xfff < uVar10) {
        uVar10 = 0x1000;
      }
      bVar3 = uVar6 != 0;
      uVar6 = 0;
      if ((uVar10 == 0 && bVar3) && iVar7 != 0) {
        uVar10 = 1;
      }
      do {
        if (uVar6 == 0x20) {
          uVar6 = 0;
          goto joined_r0x0296f2e8;
        }
        uVar2 = uVar6 & 0x1f;
        uVar6 = uVar6 + 1;
      } while ((1 << (ulong)uVar2 & uVar10) == 0);
      if (0xc < uVar6) {
        uVar6 = 0xd;
      }
    }
joined_r0x0296f2e8:
    if (((bVar1 != bVar9) && (bVar1 != 0x12)) && (bVar1 != bVar8)) {
      iVar7 = FUN_0296f398(param_1,param_2,param_3,param_4,bVar1,param_5 & 1);
      uVar10 = (uint)((&DAT_03a84a4c)[iVar7] * (&DAT_03a84a4c)[(int)uVar6]) >> 6;
      if (0xfff < uVar10) {
        uVar10 = 0x1000;
      }
      bVar3 = uVar6 != 0;
      uVar6 = 0;
      if ((uVar10 == 0 && bVar3) && iVar7 != 0) {
        uVar10 = 1;
      }
      do {
        if (uVar6 == 0x20) {
          return 0;
        }
        uVar2 = uVar6 & 0x1f;
        uVar6 = uVar6 + 1;
      } while ((1 << (ulong)uVar2 & uVar10) == 0);
      if (0xc < uVar6) {
        uVar6 = 0xd;
      }
    }
  }
  return uVar6;
}


