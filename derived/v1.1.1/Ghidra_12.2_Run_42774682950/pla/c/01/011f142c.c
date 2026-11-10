/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011f142c; name: FUN_011f142c
 */


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_011f142c(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  piVar8 = *(int **)(param_1 + 0x60);
  if (*(ushort *)((long)piVar8 - (long)*piVar8) < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = ((ushort *)((long)piVar8 - (long)*piVar8))[2];
  puVar1 = (uint *)((long)piVar8 + (ulong)uVar3);
  uVar11 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar11);
  puVar2 = (uint *)0x0;
  if (uVar3 != 0) {
    puVar2 = puVar1;
  }
  if (puVar2 == puVar1 + *puVar1) {
    return 0;
  }
  lVar7 = 0;
  uVar9 = 0;
  uVar6 = 0;
  do {
    uVar10 = (ulong)*(uint *)((long)puVar2 + lVar7 + 4);
    lVar5 = lVar7 + (uVar10 - (long)*(int *)((long)puVar2 + lVar7 + uVar10 + 4));
    uVar4 = *(ushort *)((long)puVar2 + lVar5 + 4);
    if (uVar4 < 5) {
      if ((int)uVar9 < 0) goto LAB_011f14e0;
    }
    else {
      uVar13 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 8);
      uVar12 = 0;
      if (((uVar13 == 0) ||
          (uVar12 = *(uint *)((long)puVar2 + lVar7 + uVar10 + uVar13 + 4), uVar12 <= param_2)) &&
         ((int)uVar9 < (int)uVar12)) {
LAB_011f14e0:
        if ((uVar4 < 7) || (uVar9 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 10), uVar9 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((long)puVar2 + lVar7 + uVar10 + uVar9 + 4);
        }
        if (uVar4 < 5) {
          uVar9 = 0;
        }
        else {
          uVar9 = (ulong)*(ushort *)((long)puVar2 + lVar5 + 8);
          if (uVar9 != 0) {
            uVar9 = (ulong)*(uint *)((long)puVar2 + lVar7 + uVar10 + uVar9 + 4);
          }
        }
      }
    }
    lVar7 = lVar7 + 4;
    if ((long)piVar8 + (((ulong)uVar3 + (ulong)*puVar1 * 4 + uVar11) - (long)puVar2) == lVar7) {
      return uVar6;
    }
  } while( true );
}


