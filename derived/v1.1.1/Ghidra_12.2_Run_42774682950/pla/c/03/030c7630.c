/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c7630; name: FUN_030c7630
 */


void FUN_030c7630(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  param_2 = param_2 & 0xffffffff;
  do {
    while( true ) {
      iVar9 = (int)param_2;
      uVar3 = *(undefined8 *)(param_1 + (long)(iVar9 + param_3 >> 1) * 8);
      iVar7 = param_3;
      do {
        iVar10 = (int)param_2;
        lVar5 = 0;
        lVar4 = 0;
        do {
          piVar6 = (int *)(param_1 + (long)iVar10 * 8 + lVar5);
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 8;
          iVar2 = (int)uVar3;
        } while (iVar2 < *piVar6);
        piVar6 = (int *)(param_1 + (long)iVar7 * 8);
        iVar1 = *piVar6;
        while (iVar1 < iVar2) {
          piVar6 = piVar6 + -2;
          iVar7 = iVar7 + -1;
          iVar1 = *piVar6;
        }
        param_2 = (ulong)(iVar10 - 1) + lVar4;
        if ((int)param_2 <= iVar7) {
          if ((iVar10 - iVar7) + (int)lVar4 != 1) {
            uVar8 = *(undefined8 *)piVar6;
            lVar5 = param_1 + (long)iVar10 * 8 + lVar4 * 8;
            *(undefined8 *)piVar6 = *(undefined8 *)(lVar5 + -8);
            *(undefined8 *)(lVar5 + -8) = uVar8;
          }
          iVar7 = iVar7 + -1;
          param_2 = (ulong)(uint)(iVar10 + (int)lVar4);
        }
        iVar10 = (int)param_2;
      } while (iVar10 <= iVar7);
      if (iVar7 <= iVar9) break;
      FUN_030c7630(param_1);
      if (param_3 <= iVar10) {
        return;
      }
    }
  } while (iVar10 < param_3);
  return;
}


