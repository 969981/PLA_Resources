/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162710; name: FUN_00162710
 */


byte * FUN_00162710(byte *param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  char *pcVar6;
  size_t sVar7;
  lconv *plVar8;
  byte *pbVar10;
  byte *pbVar9;
  undefined4 uVar11;
  ulong uVar12;
  double dVar13;
  int iVar14;
  byte *local_118 [26];
  byte **local_48;
  
  pbVar9 = param_1;
  do {
    pbVar10 = pbVar9;
    pbVar9 = pbVar10 + 1;
    bVar3 = *pbVar10;
  } while (((byte)(&DAT_039c5d39)[bVar3] >> 3 & 1) != 0);
  pbVar5 = pbVar9;
  if (bVar3 != 0x2d) {
    pbVar5 = pbVar10;
  }
  if (bVar3 != 0x2b) {
    pbVar9 = pbVar5;
  }
  uVar12 = (ulong)*pbVar9;
  uVar2 = 0;
  if (bVar3 != 0x2b) {
    uVar2 = (uint)(bVar3 == 0x2d);
  }
  if ((uVar12 == 0x30) && ((pbVar9[1] | 0x20) == 0x78)) {
    pbVar9 = pbVar9 + 2;
    uVar12 = (ulong)*pbVar9;
    bVar3 = (&DAT_039c5d39)[uVar12];
    if ((bVar3 >> 4 & 1) == 0) goto LAB_001627d8;
    dVar13 = 0.0;
    do {
      iVar14 = ((uint)uVar12 | 0x20) - 0x57;
      if ((bVar3 & 2) != 0) {
        iVar14 = (uint)uVar12 - 0x30;
      }
      dVar13 = (double)((long)dVar13 * 0x10 + (long)iVar14);
      pbVar9 = pbVar9 + 1;
      uVar12 = (ulong)*pbVar9;
      bVar3 = (&DAT_039c5d39)[uVar12];
    } while ((bVar3 >> 4 & 1) != 0);
LAB_00162844:
    bVar4 = false;
LAB_00162850:
    while (((byte)(&DAT_039c5d39)[uVar12] >> 3 & 1) != 0) {
      pbVar9 = pbVar9 + 1;
      uVar12 = (ulong)*pbVar9;
    }
    if ((((int)uVar12 == 0) && (!bVar4)) && (pbVar9 != (byte *)0x0)) {
      dVar1 = (double)-(long)dVar13;
      if (uVar2 == 0) {
        dVar1 = dVar13;
      }
      *param_2 = dVar1;
      uVar11 = 0x13;
      local_118[0] = pbVar9;
      goto LAB_00162988;
    }
  }
  else {
    if (((byte)(&DAT_039c5d39)[uVar12] >> 1 & 1) == 0) {
LAB_001627d8:
      dVar13 = 0.0;
      bVar4 = true;
      goto LAB_00162850;
    }
    dVar13 = 0.0;
    iVar14 = *pbVar9 - 0x30;
    do {
      pbVar9 = pbVar9 + 1;
      uVar12 = (ulong)*pbVar9;
      dVar13 = (double)((long)dVar13 * 10 + (long)iVar14);
      if (((byte)(&DAT_039c5d39)[uVar12] >> 1 & 1) == 0) goto LAB_00162844;
      iVar14 = *pbVar9 - 0x30;
    } while (((ulong)dVar13 < 0xccccccccccccccc) ||
            ((dVar13 == 5.1488004017107686e-247 && (iVar14 <= (int)(uVar2 + 7)))));
  }
  pbVar9 = (byte *)strpbrk((char *)param_1,".xXnN");
  if ((pbVar9 != (byte *)0x0) && ((*pbVar9 | 0x20) == 0x6e)) {
    return (byte *)0x0;
  }
  dVar13 = strtod((char *)param_1,(char **)local_118);
  if (local_118[0] == param_1) {
LAB_001628e0:
    pcVar6 = strchr((char *)param_1,0x2e);
    sVar7 = strlen((char *)param_1);
    if ((pcVar6 == (char *)0x0) || (200 < sVar7)) {
      return (byte *)0x0;
    }
    strcpy((char *)local_118,(char *)param_1);
    plVar8 = localeconv();
    *(char *)((long)local_118 + ((long)pcVar6 - (long)param_1)) = *plVar8->decimal_point;
    dVar13 = strtod((char *)local_118,(char **)&local_48);
    if (local_48 == local_118) {
      return (byte *)0x0;
    }
    uVar12 = (ulong)*(byte *)local_48;
    bVar3 = (&DAT_039c5d39)[uVar12];
    while ((bVar3 >> 3 & 1) != 0) {
      local_48 = (byte **)((long)local_48 + 1);
      uVar12 = (ulong)*(byte *)local_48;
      bVar3 = (&DAT_039c5d39)[uVar12];
    }
    if ((int)uVar12 != 0) {
      local_48 = (byte **)0x0;
    }
    if (local_48 == (byte **)0x0) {
      return (byte *)0x0;
    }
    local_118[0] = param_1 + ((long)local_48 - (long)local_118);
    if (local_118[0] == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  else {
    uVar12 = (ulong)*local_118[0];
    if (((byte)(&DAT_039c5d39)[uVar12] >> 3 & 1) != 0) {
      do {
        local_118[0] = local_118[0] + 1;
        uVar12 = (ulong)*local_118[0];
      } while (((byte)(&DAT_039c5d39)[uVar12] >> 3 & 1) != 0);
    }
    if ((int)uVar12 != 0) goto LAB_001628e0;
  }
  uVar11 = 3;
  *param_2 = dVar13;
LAB_00162988:
  *(undefined4 *)(param_2 + 1) = uVar11;
  return local_118[0] + (1 - (long)param_1);
}


