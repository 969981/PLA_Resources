/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bf658; name: FUN_032bf658
 */


void FUN_032bf658(long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  *param_1 = param_2;
  puVar11 = (uint *)*param_3;
  *puVar11 = *puVar11 & 0xffff | (uint)*(ushort *)(param_3 + 1) << 0x10;
  *puVar11 = *puVar11 & 0xffff0000 | *puVar11 - (uint)*(ushort *)((long)param_3 + 10) & 0xffff;
  if (*(long *)(puVar11 + 2) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    lVar7 = *(long *)(puVar11 + 2);
    do {
      while( true ) {
        puVar14 = (undefined8 *)param_1[1];
        lVar13 = *(long *)(lVar7 + 8);
        *(long *)(puVar14[1] + (long)*(int *)(puVar14 + 0xb) * 8) = lVar7;
        iVar3 = *(int *)(puVar14 + 0xb);
        iVar1 = iVar3 + 1;
        *(int *)(puVar14 + 0xb) = iVar1;
        lVar7 = lVar13;
        if (*(int *)((long)puVar14 + 0x5c) <= iVar1) break;
        iVar10 = iVar10 + 1;
        if (lVar13 == 0) goto LAB_032bf6b8;
      }
      iVar3 = iVar3 + -5;
      (**(code **)(*(long *)*puVar14 + 0x28))((long *)*puVar14,puVar14[1] + (long)iVar3 * 8,6);
      *(int *)(puVar14 + 0xb) = iVar3;
      iVar10 = iVar10 + 1;
    } while (lVar13 != 0);
  }
LAB_032bf6b8:
  puVar6 = PTR_PTR_0434a080;
  lVar7 = *param_1;
  uVar4 = *(uint *)(lVar7 + 0x18);
  puVar9 = (uint *)(lVar7 + 0x1c);
  uVar8 = *puVar9;
  uVar5 = uVar4 - iVar10;
  if ((int)(uVar8 & 0x3fffffff) < (int)uVar5) {
    uVar12 = *(undefined8 *)(lVar7 + 0x10);
    if (0x3fffffff < (int)uVar5) {
      FUN_032bd0a8(uVar5);
      uVar8 = *puVar9;
    }
    uVar8 = (uVar8 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar2 = uVar5;
    if ((int)uVar5 <= (int)uVar8) {
      uVar2 = uVar8;
    }
    uVar12 = FUN_032bd1d4(puVar6,uVar2,8,uVar12,uVar4,puVar9);
    *(undefined8 *)(lVar7 + 0x10) = uVar12;
    uVar4 = *(uint *)(lVar7 + 0x18);
  }
  if (uVar4 != uVar5) {
    *(uint *)(lVar7 + 0x18) = uVar5;
  }
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) - *(int *)((long)param_3 + 0xc);
  *(uint *)(param_1 + 3) = (uint)*(ushort *)(param_3 + 1);
  uVar4 = *puVar11;
  *(uint *)((long)param_1 + 0x1c) = uVar4 & 0xffff;
  *(uint *)(*param_1 + 8) = *(int *)(*param_1 + 8) - (uVar4 & 0xffff);
  param_1[2] = (long)puVar11;
  return;
}


