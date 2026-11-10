/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00345cd0; name: FUN_00345cd0
 */


void FUN_00345cd0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  
  pbVar7 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  pbVar8 = *(byte **)(param_2 + 0x30);
  if (pbVar8 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0x30),puVar6);
    iVar11 = *(int *)(param_1 + 5);
  }
  else {
    if (pbVar8 != pbVar7) {
      uVar1 = *(ulong *)(pbVar7 + 8);
      pbVar2 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar2 = pbVar7 + 1;
        uVar1 = (ulong)(*pbVar7 >> 1);
      }
      FUN_00291910(pbVar8,pbVar2,uVar1);
    }
    iVar11 = *(int *)(param_1 + 5);
  }
  if (iVar11 < 1) {
LAB_00345e28:
    lVar12 = param_1[3];
    lVar5 = FUN_003b9718();
    if (lVar12 == lVar5) {
      return;
    }
    lVar5 = *(long *)(param_2 + 0x38);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    if (lVar5 == 0) {
      puVar6 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar5 = FUN_003c0bc0(puVar6);
      *(long *)(param_2 + 0x38) = lVar5;
    }
    FUN_003b9e38(lVar5,param_1[3]);
    return;
  }
  lVar12 = 0;
  lVar5 = 0;
  lVar9 = param_1[4];
  piVar10 = *(int **)(param_2 + 0x28);
  if (piVar10 != (int *)0x0) goto LAB_00345dc0;
LAB_00345de0:
  iVar11 = *(int *)(param_2 + 0x24);
  do {
    FUN_0032bcac(param_2 + 0x18,iVar11 + 1);
    piVar10 = *(int **)(param_2 + 0x28);
    iVar11 = *piVar10;
    do {
      *piVar10 = iVar11 + 1;
      uVar4 = FUN_003c0424(*(undefined8 *)(param_2 + 0x18));
      iVar11 = *(int *)(param_2 + 0x20);
      *(int *)(param_2 + 0x20) = iVar11 + 1;
      *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)iVar11 * 8 + 8) = uVar4;
      while( true ) {
        FUN_00346d60(lVar9,uVar4);
        lVar5 = lVar5 + 1;
        lVar12 = lVar12 + 0x68;
        if (*(int *)(param_1 + 5) <= lVar5) goto LAB_00345e28;
        lVar9 = param_1[4] + lVar12;
        piVar10 = *(int **)(param_2 + 0x28);
        if (piVar10 == (int *)0x0) goto LAB_00345de0;
LAB_00345dc0:
        iVar3 = *(int *)(param_2 + 0x20);
        iVar11 = *piVar10;
        if (iVar11 <= iVar3) break;
        *(int *)(param_2 + 0x20) = iVar3 + 1;
        uVar4 = *(undefined8 *)(piVar10 + (long)iVar3 * 2 + 2);
      }
    } while (iVar11 != *(int *)(param_2 + 0x24));
  } while( true );
}


