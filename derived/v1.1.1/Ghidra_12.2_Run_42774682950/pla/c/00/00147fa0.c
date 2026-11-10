/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00147fa0; name: FUN_00147fa0
 */


ulong FUN_00147fa0(long param_1,uint *param_2,uint *param_3,long *param_4,ulong param_5)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  
  uVar4 = (uint)param_5;
  uVar5 = param_5 | 0x100;
  lVar6 = (long)uVar5 >> 7;
  uVar2 = *(ushort *)(param_1 + lVar6 * 2);
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    if ((uVar4 >> 7 & 1) != 0) {
      uVar8 = 2;
      goto LAB_001488d8;
    }
    uVar8 = 4;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    if ((uVar4 >> 7 & 1) == 0) {
      uVar8 = 3;
      goto LAB_001488d8;
    }
    uVar8 = 6;
  }
  lVar6 = (long)uVar5 >> 6;
  uVar2 = *(ushort *)(param_1 + lVar6 * 2);
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    if ((uVar4 >> 6 & 1) != 0) goto LAB_001488d8;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 | 1;
    if ((uVar4 >> 6 & 1) == 0) goto LAB_001488d8;
  }
  lVar6 = (long)uVar5 >> 5;
  uVar2 = *(ushort *)(param_1 + lVar6 * 2);
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1;
    if ((uVar4 >> 5 & 1) != 0) goto LAB_001488d8;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1 | 1;
    if ((uVar4 >> 5 & 1) == 0) goto LAB_001488d8;
  }
  lVar6 = (long)uVar5 >> 4;
  uVar2 = *(ushort *)(param_1 + lVar6 * 2);
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1;
    if ((uVar4 >> 4 & 1) != 0) goto LAB_001488d8;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1 | 1;
    if ((uVar4 >> 4 & 1) == 0) goto LAB_001488d8;
  }
  lVar6 = (long)uVar5 >> 3;
  uVar2 = *(ushort *)(param_1 + lVar6 * 2);
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1;
    if ((uVar4 >> 3 & 1) != 0) goto LAB_001488d8;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1 | 1;
    if ((uVar4 >> 3 & 1) == 0) goto LAB_001488d8;
  }
  lVar6 = (long)uVar5 >> 2;
  uVar2 = *(ushort *)(param_1 + lVar6 * 2);
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1;
    if ((uVar4 >> 2 & 1) != 0) goto LAB_001488d8;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *(ushort *)(param_1 + lVar6 * 2) = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    uVar8 = uVar8 << 1 | 1;
    if ((uVar4 >> 2 & 1) == 0) goto LAB_001488d8;
  }
  uVar2 = *(ushort *)(param_1 + (param_5 & 0xfffffffffffffffe | 0x100));
  uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
  if (*param_2 < uVar3) {
    *param_3 = uVar3;
    *(ushort *)(param_1 + ((long)uVar5 >> 1) * 2) = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    if ((uVar4 >> 1 & 1) == 0) {
LAB_00148aa0:
      return param_5 ^ 1;
    }
    uVar8 = uVar8 << 1;
  }
  else {
    *param_2 = *param_2 - uVar3;
    *param_3 = *param_3 - uVar3;
    *(ushort *)(param_1 + ((long)uVar5 >> 1) * 2) = uVar2 - (uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) == '\0') {
      *param_2 = *param_2 << 8;
      *param_3 = *param_3 << 8;
      pbVar7 = (byte *)*param_4;
      *param_4 = (long)(pbVar7 + 1);
      uVar3 = *param_2 | (uint)*pbVar7;
      *param_2 = uVar3;
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = uVar3 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        *param_2 = *param_2 | (uint)*pbVar7;
      }
    }
    if ((uVar4 >> 1 & 1) != 0) goto LAB_00148aa0;
    uVar8 = uVar8 << 1 | 1;
  }
LAB_001488d8:
  do {
    while( true ) {
      lVar6 = param_1 + uVar8 * 2;
      psVar1 = (short *)(lVar6 + 0x200);
      uVar2 = *(ushort *)(lVar6 + 0x200);
      uVar3 = (*param_3 >> 0xe) * (uint)uVar2;
      if (*param_2 < uVar3) break;
      *param_2 = *param_2 - uVar3;
      *param_3 = *param_3 - uVar3;
      *psVar1 = uVar2 - (uVar2 >> 6);
      if (*(char *)((long)param_3 + 3) == '\0') {
        *param_2 = *param_2 << 8;
        *param_3 = *param_3 << 8;
        pbVar7 = (byte *)*param_4;
        *param_4 = (long)(pbVar7 + 1);
        uVar3 = *param_2 | (uint)*pbVar7;
        *param_2 = uVar3;
        if (*(char *)((long)param_3 + 3) == '\0') {
          *param_2 = uVar3 << 8;
          *param_3 = *param_3 << 8;
          pbVar7 = (byte *)*param_4;
          *param_4 = (long)(pbVar7 + 1);
          *param_2 = *param_2 | (uint)*pbVar7;
        }
        uVar8 = uVar8 << 1 | 1;
      }
      else {
        uVar8 = uVar8 << 1 | 1;
      }
joined_r0x00148a64:
      if (0xff < (long)uVar8) goto LAB_00148a98;
    }
    *param_3 = uVar3;
    *psVar1 = uVar2 + (short)(0x4000 - uVar2 >> 6);
    if (*(char *)((long)param_3 + 3) != '\0') {
joined_r0x00148a4c:
      uVar8 = uVar8 * 2;
      goto joined_r0x00148a64;
    }
    *param_2 = *param_2 << 8;
    *param_3 = *param_3 << 8;
    pbVar7 = (byte *)*param_4;
    *param_4 = (long)(pbVar7 + 1);
    uVar3 = *param_2 | (uint)*pbVar7;
    *param_2 = uVar3;
    if (*(char *)((long)param_3 + 3) != '\0') goto joined_r0x00148a4c;
    *param_2 = uVar3 << 8;
    *param_3 = *param_3 << 8;
    pbVar7 = (byte *)*param_4;
    *param_4 = (long)(pbVar7 + 1);
    *param_2 = *param_2 | (uint)*pbVar7;
    uVar8 = uVar8 * 2;
  } while ((long)uVar8 < 0x100);
LAB_00148a98:
  return uVar8 & 0xff;
}


