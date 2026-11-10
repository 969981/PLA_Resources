/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185ae98; name: FUN_0185ae98
 */


void FUN_0185ae98(undefined8 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 ulong param_5,undefined8 *param_6)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  size_t sVar6;
  int *piVar7;
  ulong uVar8;
  byte *pbVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a708,param_2), iVar3 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar4 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar4;
  piVar5 = (int *)FUN_010aa96c(uVar4,param_2,param_3,param_4 & 1);
  piVar7 = (int *)*param_6;
  if (piVar7 == (int *)0x0) {
    puVar10 = (ushort *)((long)piVar5 - (long)*piVar5);
    puVar14 = &DAT_cbf29ce484222645;
    if ((param_5 & 1) == 0) {
      if ((*puVar10 < 0xf) || ((ulong)puVar10[7] == 0)) {
        lVar13 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar5 + (ulong)puVar10[7]);
        lVar13 = (long)puVar1 + (ulong)*puVar1;
      }
      pcVar12 = (char *)(lVar13 + 4);
      sVar6 = strlen(pcVar12);
      bVar2 = *(byte *)(lVar13 + 4);
      if (bVar2 != 0) {
        pbVar9 = (byte *)(lVar13 + 5);
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar2 != 0);
      }
    }
    else {
      if ((*puVar10 < 0xb) || ((ulong)puVar10[5] == 0)) {
        lVar13 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar5 + (ulong)puVar10[5]);
        lVar13 = (long)puVar1 + (ulong)*puVar1;
      }
      pcVar12 = (char *)(lVar13 + 4);
      sVar6 = strlen(pcVar12);
      bVar2 = *(byte *)(lVar13 + 4);
      if (bVar2 != 0) {
        pbVar9 = (byte *)(lVar13 + 5);
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar2 != 0);
      }
    }
  }
  else {
    puVar10 = (ushort *)((long)piVar7 - (long)*piVar7);
    if ((param_5 & 1) == 0) {
      if ((*puVar10 < 0x3b) || ((ulong)puVar10[0x1d] == 0)) {
        lVar13 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar7 + (ulong)puVar10[0x1d]);
        lVar13 = (long)puVar1 + (ulong)*puVar1;
      }
      pcVar12 = (char *)(lVar13 + 4);
      puVar14 = &DAT_cbf29ce484222645;
      sVar6 = strlen(pcVar12);
      bVar2 = *(byte *)(lVar13 + 4);
      puVar11 = &DAT_cbf29ce484222645;
      if (bVar2 != 0) {
        puVar11 = &DAT_cbf29ce484222645;
        pbVar9 = (byte *)(lVar13 + 5);
        do {
          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar2 != 0);
      }
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      if (puVar11 != *(undefined1 **)PTR_DAT_0437a0d8) goto LAB_0185b0f8;
      if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0xf) ||
         (uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[7], uVar8 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar5 + uVar8);
        lVar13 = (long)puVar1 + (ulong)*puVar1;
      }
      pcVar12 = (char *)(lVar13 + 4);
      sVar6 = strlen(pcVar12);
      bVar2 = *(byte *)(lVar13 + 4);
      if (bVar2 != 0) {
        pbVar9 = (byte *)(lVar13 + 5);
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar2 != 0);
      }
    }
    else {
      if ((*puVar10 < 0x39) || ((ulong)puVar10[0x1c] == 0)) {
        lVar13 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar7 + (ulong)puVar10[0x1c]);
        lVar13 = (long)puVar1 + (ulong)*puVar1;
      }
      pcVar12 = (char *)(lVar13 + 4);
      puVar14 = &DAT_cbf29ce484222645;
      sVar6 = strlen(pcVar12);
      bVar2 = *(byte *)(lVar13 + 4);
      puVar11 = &DAT_cbf29ce484222645;
      if (bVar2 != 0) {
        puVar11 = &DAT_cbf29ce484222645;
        pbVar9 = (byte *)(lVar13 + 5);
        do {
          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar2 != 0);
      }
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      if (puVar11 != *(undefined1 **)PTR_DAT_0437a0d8) {
LAB_0185b0f8:
        *param_1 = puVar11;
        param_1[1] = pcVar12;
        goto LAB_0185aff8;
      }
      if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0xb) ||
         (uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[5], uVar8 == 0)) {
        lVar13 = 0;
      }
      else {
        puVar1 = (uint *)((long)piVar5 + uVar8);
        lVar13 = (long)puVar1 + (ulong)*puVar1;
      }
      pcVar12 = (char *)(lVar13 + 4);
      sVar6 = strlen(pcVar12);
      bVar2 = *(byte *)(lVar13 + 4);
      if (bVar2 != 0) {
        pbVar9 = (byte *)(lVar13 + 5);
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar2 != 0);
      }
    }
  }
  *param_1 = puVar14;
  param_1[1] = pcVar12;
LAB_0185aff8:
  param_1[2] = sVar6;
  param_1[3] = 0;
  return;
}


