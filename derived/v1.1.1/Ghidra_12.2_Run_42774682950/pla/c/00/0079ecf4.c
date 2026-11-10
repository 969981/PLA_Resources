/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079ecf4; name: FUN_0079ecf4
 */


/* WARNING: Removing unreachable block (ram,0x0079ef70) */
/* WARNING: Removing unreachable block (ram,0x0079ef74) */
/* WARNING: Removing unreachable block (ram,0x0079ef90) */

byte * FUN_0079ecf4(uint param_1,uint *param_2,uint *param_3,byte *param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_4 < (byte *)*param_5) {
    uVar5 = param_1 << 3 | 2;
    if (uVar5 < 0x80) goto LAB_0079ed2c;
LAB_0079eed0:
    *param_4 = (byte)uVar5 | 0x80;
    if (uVar5 >> 0xe == 0) {
      param_4[1] = (byte)(param_1 >> 4);
      pbVar3 = param_4 + 2;
      uVar5 = *param_2;
      goto joined_r0x0079ed34;
    }
    pbVar3 = param_4 + 2;
    uVar5 = param_1 >> 4 & 0x1ffffff;
    do {
      pbVar4 = pbVar3;
      uVar1 = uVar5 >> 7;
      pbVar4[-1] = (byte)uVar5 | 0x80;
      pbVar3 = pbVar4 + 1;
      uVar2 = uVar5 >> 0xe;
      uVar5 = uVar1;
    } while (uVar2 != 0);
    *pbVar4 = (byte)uVar1;
    uVar5 = *param_2;
    if (-1 < (int)uVar5) goto LAB_0079ed38;
LAB_0079eef4:
    iVar6 = 0xc;
    uVar5 = *param_3;
    if ((int)uVar5 < 0) goto LAB_0079ef00;
LAB_0079ed5c:
    uVar5 = (((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + iVar6;
    bVar8 = (byte)uVar5;
    if (uVar5 < 0x80) goto LAB_0079ed80;
LAB_0079ef10:
    *pbVar3 = bVar8 | 0x80;
    pbVar3[1] = 0;
    pbVar4 = pbVar3 + 2;
    if ((byte *)*param_5 <= pbVar4) {
LAB_0079efa0:
      pbVar4 = (byte *)FUN_00310ec4(param_5,pbVar4);
    }
  }
  else {
    param_4 = (byte *)FUN_00310ec4(param_5,param_4);
    uVar5 = param_1 << 3 | 2;
    if (0x7f < uVar5) goto LAB_0079eed0;
LAB_0079ed2c:
    pbVar3 = param_4 + 1;
    *param_4 = (byte)uVar5;
    uVar5 = *param_2;
joined_r0x0079ed34:
    if ((int)uVar5 < 0) goto LAB_0079eef4;
LAB_0079ed38:
    iVar6 = (((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
    uVar5 = *param_3;
    if (-1 < (int)uVar5) goto LAB_0079ed5c;
LAB_0079ef00:
    bVar8 = (byte)(iVar6 + 10U);
    if (0x7f < iVar6 + 10U) goto LAB_0079ef10;
LAB_0079ed80:
    pbVar4 = pbVar3 + 1;
    *pbVar3 = bVar8;
    if ((byte *)*param_5 <= pbVar4) goto LAB_0079efa0;
  }
  uVar5 = *param_2;
  *pbVar4 = 8;
  if (uVar5 < 0x80) {
    pbVar4[1] = (byte)uVar5;
    pbVar4 = pbVar4 + 2;
    if (pbVar4 < (byte *)*param_5) goto LAB_0079edb8;
  }
  else {
    pbVar4[1] = (byte)uVar5 | 0x80;
    uVar7 = (ulong)(long)(int)uVar5 >> 7;
    if (((ulong)(long)(int)uVar5 >> 0xe & 0x3ffff) == 0) {
      pbVar4[2] = (byte)uVar7;
      pbVar4 = pbVar4 + 3;
      if (pbVar4 < (byte *)*param_5) goto LAB_0079edb8;
    }
    else {
      pbVar4 = pbVar4 + 3;
      do {
        pbVar3 = pbVar4;
        uVar9 = uVar7 >> 7;
        pbVar3[-1] = (byte)uVar7 | 0x80;
        pbVar4 = pbVar3 + 1;
        uVar10 = uVar7 >> 0xe;
        uVar7 = uVar9;
      } while (uVar10 != 0);
      *pbVar3 = (byte)uVar9;
      if (pbVar4 < (byte *)*param_5) goto LAB_0079edb8;
    }
  }
  pbVar4 = (byte *)FUN_00310ec4(param_5);
LAB_0079edb8:
  uVar5 = *param_3;
  *pbVar4 = 0x10;
  if (uVar5 < 0x80) {
    pbVar4[1] = (byte)uVar5;
    return pbVar4 + 2;
  }
  pbVar4[1] = (byte)uVar5 | 0x80;
  uVar7 = (ulong)(long)(int)uVar5 >> 7;
  if (((ulong)(long)(int)uVar5 >> 0xe & 0x3ffff) == 0) {
    pbVar4[2] = (byte)uVar7;
    return pbVar4 + 3;
  }
  pbVar3 = pbVar4 + 3;
  do {
    pbVar4 = pbVar3;
    uVar9 = uVar7 >> 7;
    pbVar4[-1] = (byte)uVar7 | 0x80;
    uVar10 = uVar7 >> 0xe;
    pbVar3 = pbVar4 + 1;
    uVar7 = uVar9;
  } while (uVar10 != 0);
  *pbVar4 = (byte)uVar9;
  return pbVar4 + 1;
}


