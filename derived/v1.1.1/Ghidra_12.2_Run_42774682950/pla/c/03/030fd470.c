/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fd470; name: FUN_030fd470
 */


void FUN_030fd470(long param_1,uint param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  if (param_3 < 1) {
    return;
  }
  pcVar2 = (char *)(param_1 + 0x15dc);
  uVar12 = (ulong)param_2;
  iVar1 = param_3 + param_2;
  if (*(char *)(param_1 + 0x1688) == '\0') {
    lVar6 = (long)(int)param_2;
    uVar8 = -(ulong)(param_2 >> 0x1f) & 0xffffffe000000000 | uVar12 << 5;
    lVar10 = lVar6;
    do {
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar10 * *(int *)(param_1 + 0x74));
      uVar5 = *(undefined4 *)(puVar11 + 1);
      uVar13 = *puVar11;
      lVar10 = lVar10 + 1;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x110) + uVar8);
      puVar11[1] = CONCAT44(uVar5,uVar5);
      *puVar11 = uVar13;
      uVar8 = uVar8 + 0x20;
    } while (iVar1 != lVar10);
    if (*pcVar2 != '\0') {
      do {
        puVar11 = (undefined8 *)(lVar6 * *(int *)(param_1 + 0xa4) + *(long *)(param_1 + 0x98));
        uVar13 = *puVar11;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x120) + lVar6 * 0x10);
        puVar4[1] = puVar11[1];
        *puVar4 = uVar13;
        lVar6 = lVar6 + 1;
      } while (iVar1 != lVar6);
    }
  }
  else {
    lVar6 = (long)(int)param_2;
    lVar10 = lVar6;
    do {
      lVar9 = (long)*(int *)(*(long *)(param_1 + 0x16a8) + lVar10 * 4);
      lVar10 = lVar10 + 1;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x68) + *(int *)(param_1 + 0x74) * lVar9);
      uVar5 = *(undefined4 *)(puVar11 + 1);
      uVar13 = *puVar11;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x110) + lVar9 * 0x20);
      puVar11[1] = CONCAT44(uVar5,uVar5);
      *puVar11 = uVar13;
    } while (iVar1 != lVar10);
    if (*pcVar2 != '\0') {
      do {
        lVar10 = (long)*(int *)(*(long *)(param_1 + 0x16a8) + lVar6 * 4);
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x98) + *(int *)(param_1 + 0xa4) * lVar10);
        uVar13 = *puVar11;
        lVar6 = lVar6 + 1;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x120) + lVar10 * 0x10);
        puVar4[1] = puVar11[1];
        *puVar4 = uVar13;
      } while (iVar1 != lVar6);
    }
  }
  lVar10 = (long)(int)param_2;
  uVar7 = 0x3a;
  if (*pcVar2 != '\0') {
    uVar7 = 0;
  }
  lVar6 = lVar10 * 0x14;
  do {
    lVar10 = lVar10 + 1;
    puVar3 = (undefined2 *)(*(long *)(param_1 + 0x15c0) + lVar6);
    lVar6 = lVar6 + 0x14;
    *puVar3 = 0x7f7f;
    *(undefined1 *)(puVar3 + 1) = 0x7f;
    *(undefined1 *)((long)puVar3 + 3) = uVar7;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
  } while (lVar10 < iVar1);
  if (*(long *)(param_1 + 0x1670) != 0) {
    FUN_030ff698(*(long *)(param_1 + 0x1670),uVar12,param_3);
  }
  FUN_031003b8(*(undefined8 *)(param_1 + 0x1678),uVar12,param_3);
  return;
}


