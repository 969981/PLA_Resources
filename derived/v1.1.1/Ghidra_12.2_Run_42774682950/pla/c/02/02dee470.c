/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dee470; name: FUN_02dee470
 */


void FUN_02dee470(undefined8 *param_1,ulong *param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  iVar2 = *(int *)(param_1 + 2);
  if ((0 < iVar2) && (*(long *)param_1[4] = param_3, 1 < *(int *)(param_1 + 2))) {
    iVar7 = 0;
    if (iVar2 != 0) {
      iVar7 = param_4 / iVar2;
    }
    lVar10 = 1;
    do {
      param_3 = param_3 + iVar7;
      *(long *)(param_1[4] + lVar10 * 8) = param_3;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 2));
  }
  puVar8 = (uint *)(*param_2 & 0xfffffffffffffffc);
  *param_1 = puVar8;
  uVar9 = *param_2 & 3;
  *(char *)(param_1 + 1) = (char)uVar9;
  iVar2 = (int)param_2[1] + (int)uVar9;
  *(int *)((long)param_1 + 0xc) = iVar2;
  bVar6 = (byte)(uVar9 << 3);
  *(byte *)(param_1 + 1) = bVar6;
  uVar3 = *puVar8;
  *param_1 = puVar8;
  iVar7 = *(int *)((long)param_1 + 0x3c);
  lVar10 = param_1[3];
  *(int *)((long)param_1 + 0xc) = iVar2;
  *(byte *)(param_1 + 1) = bVar6 | 1;
  *(int *)(param_1 + 7) = iVar7;
  uVar9 = (ulong)(uVar3 >> (uVar9 << 3)) & 1;
  *(uint *)((long)param_1 + 0x3c) = (uint)*(byte *)(*(long *)(lVar10 + 0x20) + uVar9 * 2);
  uVar3 = *(uint *)(lVar10 + (long)iVar7 * 4);
  if (*(char *)(param_1 + 9) == '\0') {
    uVar1 = uVar3 + 3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    lVar11 = 0;
    do {
      memcpy(*(void **)(param_1[5] + lVar11 * 8),
             (void *)(*(long *)(param_1[4] + lVar11 * 8) +
                     ((long)((ulong)uVar1 << 0x20) >> 0x22) * 4),(ulong)(uVar1 & 0xfffffffc));
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 2));
    *(undefined1 *)(param_1 + 9) = 1;
  }
  iVar2 = *(int *)(param_1 + 6);
  *(undefined4 *)(param_1 + 6) = 0;
  if (iVar2 == -1) {
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    iVar2 = *(int *)(lVar10 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    if ((uint)(iVar2 >> 1) <= *(uint *)(param_1 + 8)) {
      return;
    }
    goto LAB_02dee598;
  }
  uVar1 = uVar3 + 3;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  iVar7 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(lVar10 + (long)*(int *)((long)param_1 + 0x3c) * 4);
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar2 = (iVar2 >> 2) + ((int)uVar1 >> 2);
  *(int *)((long)param_1 + 0x34) = iVar2;
  if (iVar7 == 0) {
LAB_02dee590:
    cVar5 = (char)param_2[2];
  }
  else {
    uVar3 = iVar7 - iVar2;
    *(int *)(param_1 + 6) = iVar7;
    if (uVar3 != 0 && iVar2 <= iVar7) {
      *(int *)(param_1 + 6) = iVar2;
      *(uint *)(param_1 + 8) = uVar3;
      iVar4 = *(int *)(lVar10 + 4);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar7 = iVar2;
      if ((uint)(iVar4 >> 1) <= uVar3) {
        return;
      }
      goto LAB_02dee590;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    cVar5 = (char)param_2[2];
  }
  if (cVar5 != '\0') {
    iVar2 = iVar2 - *(int *)((long)param_1 + 0x44);
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    *(int *)((long)param_1 + 0x34) = iVar7;
  }
LAB_02dee598:
  FUN_02df5f30(param_1,*(long *)(lVar10 + 0x28) +
                       (ulong)*(byte *)(*(long *)(lVar10 + 0x20) + uVar9 * 2 + 1) * 0x28);
  return;
}


