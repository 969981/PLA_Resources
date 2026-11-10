/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c7730; name: FUN_030c7730
 */


void FUN_030c7730(long param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  
  do {
    uVar3 = *(ushort *)(param_1 + (long)(param_2 + param_3 >> 1) * 2);
    iVar8 = param_2;
    iVar4 = param_3;
    do {
      while( true ) {
        puVar7 = (ushort *)(param_1 + (long)iVar8 * 2);
        iVar1 = iVar8;
        do {
          iVar8 = iVar1;
          puVar6 = puVar7;
          iVar1 = iVar8 + 1;
          puVar7 = puVar6 + 1;
        } while (*puVar6 < uVar3);
        puVar7 = (ushort *)(param_1 + 2 + (long)iVar4 * 2);
        iVar4 = iVar4 + 1;
        do {
          iVar5 = iVar4;
          puVar7 = puVar7 + -1;
          uVar2 = *puVar7;
          iVar4 = iVar5 + -1;
        } while (uVar3 < uVar2);
        if (iVar4 < iVar8) break;
        if (iVar8 != iVar4) {
          *puVar7 = *puVar6;
          *puVar6 = uVar2;
        }
        iVar4 = iVar5 + -2;
        iVar8 = iVar1;
        if (iVar4 < iVar1) goto LAB_030c77bc;
      }
    } while (iVar8 <= iVar4);
LAB_030c77bc:
    if (param_2 < iVar4) {
      FUN_030c7730(param_1);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}


