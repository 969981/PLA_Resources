/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7768; name: FUN_001e7768
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_001e7768(long *param_1,long param_2,uint param_3,int param_4,int *param_5,undefined1 *param_6)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort uVar12;
  long *plVar13;
  uint uVar14;
  undefined1 auStack_d0 [80];
  ulong local_80;
  int local_74 [5];
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((char)param_1[0x3c] != '\0') {
    return 8;
  }
  uVar14 = 0;
  for (plVar13 = (long *)param_1[1]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    uVar4 = FUN_001e7640(plVar13,local_74);
    uVar7 = 0;
    do {
      if ((1 << (ulong)((uint)uVar7 & 0x1f) & uVar4) == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = local_74[uVar7];
        uVar14 = uVar14 + 1;
      }
      if ((0x10000 << (ulong)((uint)uVar7 & 0x1f) & uVar4) != 0) {
        iVar5 = local_74[uVar7];
        uVar14 = uVar14 + 1;
      }
    } while ((iVar5 != -1) && (uVar7 = uVar7 + 1, uVar7 < 5));
  }
  FUN_001e7a9c(param_1,&local_80);
  iVar5 = (int)local_80;
  if ((long)param_4 <= (long)local_80 || 0x7fffffffffffffff < local_80) {
    iVar5 = param_4;
  }
  if (uVar14 + param_3 < 0xb) {
    bVar3 = false;
    puVar6 = auStack_d0;
  }
  else {
    puVar6 = (undefined1 *)FUN_002044c4((ulong)(uVar14 + param_3) << 3);
    if (puVar6 == (undefined1 *)0x0) {
      return 3;
    }
    bVar3 = true;
  }
  if ((uVar14 == 0) || (plVar13 = (long *)param_1[1], plVar13 == (long *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar4 = FUN_001e7640(plVar13,local_74);
      uVar8 = 0;
      do {
        if ((1 << (ulong)((uint)uVar8 & 0x1f) & uVar4) == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = local_74[uVar8];
          lVar1 = uVar7 * 8;
          uVar7 = (ulong)((int)uVar7 + 1);
          *(undefined2 *)((long)(puVar6 + lVar1) + 4) = 1;
          *(int *)(puVar6 + lVar1) = iVar9;
          iVar9 = local_74[uVar8];
        }
        if ((0x10000 << (ulong)((uint)uVar8 & 0x1f) & uVar4) != 0) {
          iVar9 = local_74[uVar8];
          lVar1 = uVar7 * 8;
          uVar7 = (ulong)((int)uVar7 + 1);
          *(undefined2 *)((long)(puVar6 + lVar1) + 4) = 4;
          *(int *)(puVar6 + lVar1) = iVar9;
          iVar9 = local_74[uVar8];
        }
      } while ((iVar9 != -1) && (uVar8 = uVar8 + 1, uVar8 < 5));
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (param_3 == 0) {
    uVar4 = (uint)uVar7;
  }
  else {
    uVar8 = (ulong)param_3;
    puVar10 = (ushort *)(param_2 + 4);
    do {
      *(undefined4 *)(puVar6 + uVar7 * 8) = *(undefined4 *)(puVar10 + -2);
      puVar11 = (ushort *)(puVar6 + uVar7 * 8 + 4);
      *puVar11 = 0;
      uVar12 = *puVar10 & 1;
      *puVar11 = uVar12;
      uVar2 = *puVar10;
      if ((uVar2 >> 1 & 1) != 0) {
        uVar12 = uVar12 | 2;
        *puVar11 = uVar12;
        uVar2 = *puVar10;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        *puVar11 = uVar12 | 4;
      }
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar4;
      puVar10 = puVar10 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((uVar4 == 0) || (iVar5 = FUN_001f378c(puVar6,uVar7,iVar5), iVar5 < 1)) {
    iVar5 = 0;
  }
  else if (param_3 != 0) {
    uVar7 = (ulong)param_3;
    puVar10 = (ushort *)(param_2 + 6);
    uVar4 = uVar14;
    do {
      uVar8 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      uVar7 = uVar7 - 1;
      *puVar10 = *(ushort *)(puVar6 + uVar8 * 8 + 6) & 7;
      puVar10 = puVar10 + 4;
    } while (uVar7 != 0);
  }
  if (bVar3) {
    FUN_002044d4(puVar6);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar5;
  }
  if ((param_6 != (undefined1 *)0x0) && (param_2 != 0 || uVar14 != 0)) {
    *param_6 = 1;
  }
  return 0;
}


