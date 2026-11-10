/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01923a98; name: FUN_01923a98
 */


void FUN_01923a98(undefined1 *param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  
  puVar10 = *(uint **)(*(long *)(param_2 + 400) + 0x250);
  piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
  uVar11 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar11);
  uVar12 = (ulong)*puVar2;
  uVar4 = *(uint *)((long)puVar2 + uVar12);
  uVar13 = (ulong)uVar4;
  if (uVar4 != 0) {
    lVar3 = *puVar10 + uVar12 + uVar11;
    uVar16 = 0;
    lVar14 = 0;
    do {
      uVar11 = (ulong)*(uint *)((long)puVar10 + lVar14 + lVar3 + 4);
      lVar6 = lVar14 + (uVar11 - (long)*(int *)((long)puVar10 + lVar14 + uVar11 + lVar3 + 4)) +
                       lVar3;
      uVar5 = *(ushort *)((long)puVar10 + lVar6 + 4);
      if (uVar5 < 7) {
        iVar15 = 0;
LAB_01923bf8:
        iVar7 = FUN_0191d968(0);
        uVar9 = 0;
      }
      else {
        uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar6 + 10);
        if (uVar12 == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)((long)puVar10 + lVar14 + uVar11 + uVar12 + lVar3 + 4);
        }
        if (uVar5 < 9) goto LAB_01923bf8;
        uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar6 + 0xc);
        if (uVar12 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)((long)puVar10 + lVar14 + uVar11 + uVar12 + lVar3 + 4);
        }
        iVar7 = FUN_0191d968(uVar9);
        if ((uVar5 < 0xb) || (uVar12 = (ulong)*(ushort *)((long)puVar10 + lVar6 + 0xe), uVar12 == 0)
           ) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)((long)puVar10 + lVar14 + uVar11 + uVar12 + lVar3 + 4);
        }
      }
      iVar8 = FUN_0191e034(uVar9);
      if (((iVar7 == (int)((ulong)param_3 >> 0x20)) && (iVar15 == (int)param_3)) &&
         (iVar8 == param_4)) {
        if (uVar16 < uVar4) {
          uVar13 = (ulong)*(uint *)((long)puVar10 + lVar14 + lVar3 + 4);
          lVar6 = lVar14 + (uVar13 - (long)*(int *)((long)puVar10 + lVar14 + uVar13 + lVar3 + 4)) +
                           lVar3;
          if ((*(ushort *)((long)puVar10 + lVar6 + 4) < 5) ||
             (uVar11 = (ulong)*(ushort *)((long)puVar10 + lVar6 + 8), uVar11 == 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(ulong *)((long)puVar10 + lVar14 + uVar13 + uVar11 + lVar3 + 4);
          }
        }
        *(ulong *)(param_1 + 8) = uVar13;
        *param_1 = 1;
        return;
      }
      lVar14 = lVar14 + 4;
      uVar16 = uVar16 + 1;
    } while (uVar13 * 4 != lVar14);
  }
  *param_1 = 0;
  return;
}


