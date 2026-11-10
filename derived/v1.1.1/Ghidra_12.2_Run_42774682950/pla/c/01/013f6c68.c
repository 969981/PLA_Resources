/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f6c68; name: FUN_013f6c68
 */


undefined4 FUN_013f6c68(long param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  piVar7 = *(int **)(param_1 + 0x38);
  if (((piVar7 != (int *)0x0) && (4 < *(ushort *)((long)piVar7 - (long)*piVar7))) &&
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar8 != 0)) {
    uVar9 = (ulong)*(uint *)((long)piVar7 + uVar8);
    uVar5 = (ulong)*(uint *)((long)((long)piVar7 + uVar8) + uVar9);
    if (uVar5 != 0) {
      lVar1 = uVar9 + uVar8;
      lVar6 = 0;
      uVar4 = 0;
      do {
        uVar8 = (ulong)*(uint *)((long)piVar7 + lVar6 + lVar1 + 4);
        lVar3 = lVar6 + (uVar8 - (long)*(int *)((long)piVar7 + lVar6 + uVar8 + lVar1 + 4)) + lVar1;
        uVar2 = *(ushort *)((long)piVar7 + lVar3 + 4);
        if (uVar2 < 5) {
          if (param_2 == 0) goto LAB_013f6d18;
        }
        else {
          uVar9 = (ulong)*(ushort *)((long)piVar7 + lVar3 + 8);
          iVar10 = 0;
          if (uVar9 != 0) {
            iVar10 = *(int *)((long)piVar7 + lVar6 + uVar8 + uVar9 + lVar1 + 4);
          }
          if (iVar10 == param_2) {
LAB_013f6d18:
            if ((uVar2 < 7) || (uVar9 = (ulong)*(ushort *)((long)piVar7 + lVar3 + 10), uVar9 == 0))
            {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined4 *)((long)piVar7 + lVar6 + uVar8 + uVar9 + lVar1 + 4);
            }
          }
        }
        lVar6 = lVar6 + 4;
        if (uVar5 * 4 == lVar6) {
          return uVar4;
        }
      } while( true );
    }
  }
  return 0;
}


