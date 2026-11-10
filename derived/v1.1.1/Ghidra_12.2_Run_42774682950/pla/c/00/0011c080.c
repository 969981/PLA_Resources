/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0011c080; name: FUN_0011c080
 */


long FUN_0011c080(int *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  
  if (param_2 < 1) {
    return param_2;
  }
  pbVar7 = (byte *)*param_3;
  pbVar3 = (byte *)param_3[1];
  if (pbVar3 <= pbVar7) {
    return -1;
  }
  pbVar6 = pbVar7 + 1;
  piVar1 = (int *)((long)param_1 + param_2);
  uVar9 = -(uint)param_3[2];
  uVar2 = (uint)*pbVar7 & 0xffU >> (ulong)((uint)param_3[2] & 0x1f);
  uVar8 = (ulong)uVar2;
  if (uVar2 != 0) goto LAB_0011c0e0;
  do {
    uVar9 = uVar9 + 8;
    pbVar7 = pbVar6;
    if (pbVar3 <= pbVar6) {
      return -1;
    }
    while( true ) {
      pbVar6 = pbVar7 + 1;
      uVar8 = (ulong)*pbVar7;
      if (*pbVar7 == 0) break;
LAB_0011c0e0:
      uVar2 = *(uint *)(&DAT_039c33b4 + uVar8 * 4);
      bVar4 = (&DAT_039c37b4)[uVar8];
      *param_1 = (uVar2 & 0xf0f0f0f) + uVar9;
      param_1[1] = uVar2 >> 4 & 0xf0f0f0f;
      param_1 = (int *)((long)param_1 + (ulong)bVar4);
      if (piVar1 <= param_1) {
        for (; uVar9 = (uint)uVar8, piVar1 < param_1; param_1 = (int *)((long)param_1 + -1)) {
          uVar8 = (ulong)(uVar9 - 1 & uVar9);
        }
        uVar9 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        iVar5 = 8 - (int)LZCOUNT((uVar9 >> 4 | (uVar9 & 0xf0f0f0f) << 4) << 0x18);
        pbVar7 = pbVar6 + -1;
        if ((uVar8 & 1) != 0) {
          iVar5 = 0;
          pbVar7 = pbVar6;
        }
        *param_3 = (ulong)pbVar7;
        *(int *)(param_3 + 2) = iVar5;
        return param_2;
      }
      uVar9 = uVar2 >> 0x1c;
      pbVar7 = pbVar6;
      if (pbVar3 <= pbVar6) {
        return -1;
      }
    }
  } while( true );
}


