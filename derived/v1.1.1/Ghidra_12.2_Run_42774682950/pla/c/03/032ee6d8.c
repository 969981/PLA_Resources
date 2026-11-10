/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ee6d8; name: FUN_032ee6d8
 */


undefined8
FUN_032ee6d8(long param_1,long *param_2,ulong *param_3,int param_4,int param_5,undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  
  iVar5 = (int)param_2[1];
  iVar6 = *(int *)(param_6 + 2);
  iVar3 = iVar5;
  if (-1 < param_4) {
    iVar3 = param_4;
  }
  iVar4 = iVar5;
  if (-1 < param_5) {
    iVar4 = param_5;
  }
  if (iVar6 != 0 || iVar4 != 0) {
    iVar2 = (iVar6 - iVar4) + iVar5;
    puVar9 = param_3;
    while( true ) {
      uVar11 = (uint)*puVar9;
      if ((uVar11 >> 0x14 & 1) != 0) break;
      if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
      goto LAB_032ee75c;
    }
    if (puVar9 != (ulong *)0x0) {
      uVar11 = (uVar11 & 0xfffff) - (uVar11 >> 1 & 0x55555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = (uint)(ushort)puVar9[(ulong)((uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18
                                           ) + 2];
      goto LAB_032ee7a0;
    }
LAB_032ee75c:
    uVar11 = 0;
LAB_032ee7a0:
    if (iVar6 < 1) {
      pcVar12 = (code *)0x0;
    }
    else {
      puVar9 = param_3;
      while( true ) {
        uVar10 = (uint)*puVar9;
        if ((uVar10 >> 7 & 1) != 0) break;
        if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0)) {
          return 0x80040200;
        }
      }
      if (puVar9 == (ulong *)0x0) {
        return 0x80040200;
      }
      uVar10 = (uVar10 & 0x7f) - (uVar10 >> 1 & 0x15);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      pcVar12 = (code *)puVar9[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                              ];
      if (pcVar12 == (code *)0x0) {
        return 0x80040200;
      }
    }
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < iVar2) {
      puVar7 = *(undefined **)(param_1 + 0x10);
      if (*(undefined **)(param_1 + 0x10) == (undefined *)0x0) {
        puVar7 = PTR_PTR_0434a080;
      }
      lVar8 = FUN_032bd1d4(puVar7,iVar2,uVar11,*param_2);
      *param_2 = lVar8;
    }
    else {
      lVar8 = *param_2;
    }
    *(int *)(param_2 + 1) = iVar2;
    lVar1 = lVar8 + (int)(uVar11 * iVar3);
    if (0 < iVar4) {
      puVar9 = param_3;
      while( true ) {
        uVar10 = (uint)*puVar9;
        if ((uVar10 >> 8 & 1) != 0) break;
        if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
        goto LAB_032ee8f0;
      }
      if ((puVar9 != (ulong *)0x0) &&
         (uVar10 = (uVar10 & 0xff) - (uVar10 >> 1 & 0x55),
         uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
         (code *)puVar9[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
         (code *)0x0)) {
        (*(code *)puVar9[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
                  (lVar1,param_3,iVar4);
      }
    }
LAB_032ee8f0:
    FUN_032d59c0(lVar8 + (int)(uVar11 * (iVar6 + iVar3)),lVar8 + (int)(uVar11 * (iVar4 + iVar3)),
                 (long)(int)(uVar11 * (iVar5 - (iVar4 + iVar3))));
    if (0 < iVar6) {
      (*pcVar12)(lVar1,*param_6,param_3,iVar6);
    }
  }
  return 0;
}


