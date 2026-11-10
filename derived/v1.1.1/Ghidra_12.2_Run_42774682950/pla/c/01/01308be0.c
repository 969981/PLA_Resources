/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01308be0; name: FUN_01308be0
 */


void FUN_01308be0(long param_1,int param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if ((param_3 != 0) && (piVar4 = *(int **)(param_1 + 0x38), piVar4 != (int *)0x0)) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar7 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar4 + uVar7);
      lVar6 = (long)puVar5 + (ulong)*puVar5;
    }
    lVar6 = lVar6 + (ulong)(uint)(param_2 << 4) * 4;
    puVar5 = (uint *)(lVar6 + 4);
    lVar8 = lVar6 + 8;
    lVar9 = 0x100;
    do {
      uVar2 = *puVar5;
      piVar4 = (int *)((long)puVar5 + (ulong)uVar2);
      uVar12 = (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4));
      puVar1 = (uint *)((long)piVar4 + uVar12);
      uVar14 = (ulong)*puVar1;
      piVar4 = (int *)((long)puVar1 + uVar14);
      uVar15 = (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4));
      puVar1 = (uint *)((long)piVar4 + uVar15);
      uVar16 = (ulong)*puVar1;
      uVar7 = (ulong)*(uint *)((long)puVar1 + uVar16);
      lVar10 = uVar7 << 2;
      if (uVar7 != 0) {
        lVar11 = 0;
        do {
          if (lVar9 == lVar11) {
            FUN_01308ce0();
                    /* WARNING: Does not return */
            pcVar3 = (code *)UndefinedInstructionException(0,0x1308cd8);
            (*pcVar3)();
          }
          lVar13 = lVar11 * 4;
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + -4;
          *(undefined4 *)(param_3 + lVar13) =
               *(undefined4 *)(lVar8 + uVar2 + uVar16 + uVar15 + uVar14 + uVar12 + lVar13);
        } while (lVar10 != 0);
      }
      puVar5 = puVar5 + 1;
      lVar9 = lVar9 + -0x10;
      param_3 = param_3 + 0x40;
      lVar8 = lVar8 + 4;
    } while (puVar5 != (uint *)(lVar6 + 0x44));
  }
  return;
}


