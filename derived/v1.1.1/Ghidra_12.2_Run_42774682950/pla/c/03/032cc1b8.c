/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cc1b8; name: FUN_032cc1b8
 */


void FUN_032cc1b8(long param_1,int param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  
  uVar2 = param_2 + 3U >> 2;
  uVar4 = (ulong)uVar2;
  if (uVar2 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x20);
    puVar3 = param_3;
    do {
      uVar4 = uVar4 - 1;
      uVar9 = *(undefined4 *)(puVar7 + -4);
      uVar11 = *(undefined4 *)((long)puVar7 + -0x1c);
      uVar13 = *(undefined4 *)(puVar7 + -3);
      uVar15 = *(undefined4 *)((long)puVar7 + -0x14);
      uVar10 = *(undefined4 *)(puVar7 + -2);
      uVar12 = *(undefined4 *)((long)puVar7 + -0xc);
      uVar14 = *(undefined4 *)(puVar7 + -1);
      uVar16 = *(undefined4 *)((long)puVar7 + -4);
      uVar17 = puVar7[1];
      uVar8 = *puVar7;
      *(int *)(puVar3 + 1) = (int)uVar8;
      *puVar3 = CONCAT44(uVar10,uVar9);
      *(ulong *)((long)puVar3 + 0xc) = CONCAT44(uVar12,uVar11);
      *(int *)((long)puVar3 + 0x14) = (int)((ulong)uVar8 >> 0x20);
      puVar3[3] = CONCAT44(uVar14,uVar13);
      *(int *)(puVar3 + 4) = (int)uVar17;
      puVar1 = (undefined4 *)((long)puVar3 + 0x2c);
      *(ulong *)((long)puVar3 + 0x24) = CONCAT44(uVar16,uVar15);
      puVar3 = puVar3 + 6;
      *puVar1 = (int)((ulong)uVar17 >> 0x20);
      puVar7 = puVar7 + 6;
    } while (uVar4 != 0);
  }
  uVar2 = param_2 + 3U & 0xfffffffc;
  if (param_2 < (int)uVar2) {
    uVar4 = (ulong)param_2;
    uVar6 = ~uVar4;
    puVar3 = (undefined8 *)((long)param_3 + (long)param_2 * 0xc + -0xc);
    if ((uVar4 & 1) != 0) {
      puVar7 = (undefined8 *)((long)param_3 + uVar4 * 0xc);
      uVar8 = *puVar3;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)param_3 + (long)param_2 * 0xc + -4);
      *puVar7 = uVar8;
    }
    if (uVar6 + (long)(int)uVar2 != 0) {
      lVar5 = (long)(int)uVar2 - uVar4;
      puVar7 = (undefined8 *)((long)param_3 + uVar4 * 0xc);
      do {
        uVar8 = *puVar3;
        lVar5 = lVar5 + -2;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)param_3 + (long)param_2 * 0xc + -4);
        *puVar7 = uVar8;
        uVar8 = *puVar3;
        *(undefined4 *)((long)puVar7 + 0x14) =
             *(undefined4 *)((long)param_3 + (long)param_2 * 0xc + -4);
        *(undefined8 *)((long)puVar7 + 0xc) = uVar8;
        puVar7 = puVar7 + 3;
      } while (lVar5 != 0);
    }
  }
  return;
}


