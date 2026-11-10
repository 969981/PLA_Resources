/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6efb8; name: FUN_00d6efb8
 */


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00d6efb8(long param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  piVar6 = *(int **)(param_1 + 0x88);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2];
  puVar1 = (uint *)((long)piVar6 + uVar7);
  uVar9 = (ulong)*puVar1;
  if (uVar7 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)puVar1 + uVar9;
  }
  lVar5 = 0;
  do {
    if ((long)piVar6 + ((uVar7 + (ulong)*(uint *)((long)puVar1 + uVar9) * 4 + uVar9) - lVar4) ==
        lVar5) {
      return 0;
    }
    uVar8 = (ulong)*(uint *)(lVar4 + lVar5 + 4);
    lVar2 = lVar4 + (uVar8 - (long)*(int *)(lVar4 + uVar8 + lVar5 + 4));
    lVar11 = lVar2 + lVar5;
    uVar3 = *(ushort *)(lVar11 + 4);
    if (uVar3 < 5) {
      lVar11 = 0;
    }
    else {
      uVar10 = (ulong)*(ushort *)(lVar11 + 8);
      lVar11 = 0;
      if (uVar10 != 0) {
        lVar11 = *(long *)(lVar4 + uVar8 + uVar10 + lVar5 + 4);
      }
    }
    lVar5 = lVar5 + 4;
  } while (lVar11 != *param_2);
  if ((uVar3 < 7) || (uVar7 = (ulong)*(ushort *)(lVar2 + lVar5 + 6), uVar7 == 0)) {
    return 0;
  }
  return *(undefined4 *)(lVar4 + uVar7 + uVar8 + lVar5);
}


