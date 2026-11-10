/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a1acc; name: FUN_033a1acc
 */


void FUN_033a1acc(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  
  puVar3 = PTR_PTR_0434a080;
  puVar10 = (undefined8 *)*param_2;
  puVar13 = (undefined8 *)param_2[1];
  if (puVar10 != puVar13) {
    puVar12 = (ulong *)puVar10[1];
    do {
      if (puVar12 != (ulong *)0x0) {
        puVar11 = (ulong *)*puVar10;
        uVar5 = FUN_032e225c(puVar12,&DAT_0436f370);
        if ((uVar5 & 1) != 0) {
          uVar5 = 0;
          do {
            uVar8 = (uint)uVar5;
            uVar9 = (uint)*puVar12;
            if ((uVar9 >> 0x15 & 1) != 0) {
              uVar8 = (uVar9 & 0x1fffff) - (uVar9 >> 1 & 0x55555);
              uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
              uVar5 = puVar12[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                      uVar5;
              uVar8 = (uint)uVar5;
            }
            if ((*puVar12 & 1) != 0) break;
            uVar8 = (uint)uVar5;
            puVar12 = (ulong *)puVar12[1];
          } while (puVar12 != (ulong *)0x0);
          if ((puVar11 != (ulong *)0x0) && ((uVar8 >> 3 & 1) == 0)) {
            iVar7 = *(int *)(param_1 + 0x20);
            lVar6 = *(long *)(param_1 + 0x18);
            iVar1 = iVar7 + 1;
            if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) <= iVar7) {
              lVar6 = FUN_0337b0fc(puVar3,iVar1,lVar6,iVar7,param_1 + 0x24);
              iVar7 = *(int *)(param_1 + 0x20);
              *(long *)(param_1 + 0x18) = lVar6;
            }
            puVar4 = (undefined8 *)(lVar6 + (long)iVar7 * 0x28);
            *(int *)(param_1 + 0x20) = iVar1;
            puVar4[2] = 0;
            puVar4[3] = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            FUN_03379058(puVar4,param_3,*puVar11 & 0xfffffffffffffffe,0);
          }
        }
      }
      if (puVar10 + 3 == puVar13) goto LAB_033a1c20;
      puVar12 = (ulong *)puVar10[4];
      puVar10 = puVar10 + 3;
    } while( true );
  }
  puVar13 = puVar10;
LAB_033a1c28:
  iVar1 = *(int *)(param_1 + 0x30);
  iVar7 = iVar1 + (int)((ulong)((long)puVar13 - (long)puVar10) >> 3) * -0x55555555;
  lVar6 = *(long *)(param_1 + 0x28);
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar7) {
    lVar6 = FUN_032b7720(PTR_PTR_0434a080,iVar7,lVar6,iVar1);
    *(long *)(param_1 + 0x28) = lVar6;
  }
  if (puVar10 != puVar13) {
    puVar4 = (undefined8 *)(lVar6 + (long)iVar1 * 0x18);
    do {
      uVar2 = puVar10[1];
      *puVar4 = *puVar10;
      puVar4[1] = uVar2;
      uVar5 = puVar10[2];
      puVar4[2] = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_032e0c28(uVar5 & 0xfffffffffffffffe);
      }
      puVar10 = puVar10 + 3;
      puVar4 = puVar4 + 3;
    } while (puVar10 != puVar13);
  }
  *(int *)(param_1 + 0x30) = iVar7;
  return;
LAB_033a1c20:
  puVar10 = (undefined8 *)*param_2;
  puVar13 = (undefined8 *)param_2[1];
  goto LAB_033a1c28;
}


