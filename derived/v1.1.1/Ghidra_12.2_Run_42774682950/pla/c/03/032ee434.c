/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ee434; name: FUN_032ee434
 */


undefined8 FUN_032ee434(long param_1,long *param_2,ulong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  uint uVar8;
  code *pcVar9;
  
  iVar1 = (int)param_2[1];
  puVar7 = param_3;
  while( true ) {
    uVar8 = (uint)*puVar7;
    if ((uVar8 >> 0x14 & 1) != 0) break;
    if (((*puVar7 & 1) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
    goto LAB_032ee47c;
  }
  if (puVar7 != (ulong *)0x0) {
    uVar8 = (uVar8 & 0xfffff) - (uVar8 >> 1 & 0x55555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = (uint)(ushort)puVar7[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ];
    iVar2 = iVar1 - param_4;
    bVar3 = false;
    if (iVar2 == 0) {
      return 0;
    }
    goto LAB_032ee488;
  }
LAB_032ee47c:
  uVar8 = 0;
  iVar2 = iVar1 - param_4;
  bVar3 = iVar2 == 0;
  if (!bVar3) {
LAB_032ee488:
    if (bVar3 || iVar2 < 0 != SBORROW4(iVar1,param_4)) {
      if (iVar1 < param_4) {
        puVar7 = param_3;
        while( true ) {
          uVar6 = (uint)*puVar7;
          if ((uVar6 >> 6 & 1) != 0) break;
          if ((*puVar7 & 1) != 0) {
            return 0x80040200;
          }
          puVar7 = (ulong *)puVar7[1];
          if (puVar7 == (ulong *)0x0) {
            return 0x80040200;
          }
        }
        if (puVar7 == (ulong *)0x0) {
          return 0x80040200;
        }
        uVar6 = (uVar6 & 0x3f) - (uVar6 >> 1 & 0x15);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        pcVar9 = (code *)puVar7[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
        ;
        if (pcVar9 == (code *)0x0) {
          return 0x80040200;
        }
      }
      else {
        pcVar9 = (code *)0x0;
      }
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < param_4) {
        puVar4 = *(undefined **)(param_1 + 0x10);
        if (*(undefined **)(param_1 + 0x10) == (undefined *)0x0) {
          puVar4 = PTR_PTR_0434a080;
        }
        lVar5 = FUN_032bd1d4(puVar4,param_4,uVar8,*param_2,iVar1);
        *param_2 = lVar5;
      }
      *(int *)(param_2 + 1) = param_4;
      if (iVar1 < param_4) {
        (*pcVar9)(*param_2 + (long)(int)(uVar8 * iVar1),param_3,param_4 - iVar1);
      }
    }
    else {
      *(int *)(param_2 + 1) = param_4;
      puVar7 = param_3;
      while( true ) {
        uVar6 = (uint)*puVar7;
        if ((uVar6 >> 8 & 1) != 0) break;
        if ((*puVar7 & 1) != 0) {
          return 0;
        }
        puVar7 = (ulong *)puVar7[1];
        if (puVar7 == (ulong *)0x0) {
          return 0;
        }
      }
      if (puVar7 != (ulong *)0x0) {
        uVar6 = (uVar6 & 0xff) - (uVar6 >> 1 & 0x55);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        if ((code *)puVar7[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] ==
            (code *)0x0) {
          return 0;
        }
        (*(code *)puVar7[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
                  (*param_2 + (long)(int)(uVar8 * param_4),param_3,iVar2);
      }
    }
  }
  return 0;
}


