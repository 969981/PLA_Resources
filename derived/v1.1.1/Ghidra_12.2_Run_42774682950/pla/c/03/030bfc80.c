/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030bfc80; name: FUN_030bfc80
 */


void FUN_030bfc80(long param_1,ulong param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  
  param_2 = param_2 & 0xffffffff;
  do {
    iVar12 = (int)param_2;
    uVar4 = (int)(iVar12 + param_3) >> 1;
    iVar6 = *(int *)(param_1 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3));
    uVar7 = (ulong)param_3;
    do {
      while( true ) {
        uVar9 = -(param_2 >> 0x1f) & 0xfffffff800000000 | param_2 << 3;
        param_2 = (ulong)((int)param_2 - 1);
        do {
          piVar1 = (int *)(param_1 + uVar9);
          uVar9 = uVar9 + 8;
          iVar13 = (int)param_2;
          uVar4 = iVar13 + 1;
          param_2 = (ulong)uVar4;
        } while (iVar6 < *piVar1);
        piVar10 = (int *)(param_1 + (long)(int)uVar7 * 8);
        uVar7 = (ulong)(int)uVar7;
        iVar5 = *piVar10;
        while (iVar5 < iVar6) {
          piVar10 = piVar10 + -2;
          uVar7 = uVar7 - 1;
          iVar5 = *piVar10;
        }
        uVar8 = (uint)uVar7;
        if ((int)uVar4 <= (int)uVar8) break;
        uVar7 = uVar7 & 0xffffffff;
        if ((int)uVar8 < (int)uVar4) goto LAB_030bfd44;
      }
      if (uVar8 != uVar4) {
        lVar2 = param_1 + uVar9;
        uVar11 = *(undefined8 *)piVar10;
        *piVar10 = *piVar1;
        lVar3 = param_1 + uVar7 * 8;
        *(undefined2 *)(lVar3 + 4) = *(undefined2 *)(lVar2 + -4);
        *(undefined1 *)(lVar3 + 6) = *(undefined1 *)(lVar2 + -2);
        *(int *)(lVar2 + -8) = (int)uVar11;
        *(short *)(lVar2 + -4) = (short)((ulong)uVar11 >> 0x20);
        *(char *)(lVar2 + -2) = (char)((ulong)uVar11 >> 0x30);
      }
      uVar8 = uVar8 - 1;
      uVar7 = (ulong)uVar8;
      uVar4 = iVar13 + 2;
      param_2 = (ulong)uVar4;
    } while ((int)uVar4 <= (int)uVar8);
LAB_030bfd44:
    if (iVar12 < (int)uVar8) {
      FUN_030bfc80(param_1);
    }
    if ((int)param_3 <= (int)param_2) {
      return;
    }
  } while( true );
}


