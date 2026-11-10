/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6eb20; name: FUN_00d6eb20
 */


/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_00d6eb20(long param_1,long *param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  piVar5 = *(int **)(param_1 + 0x88);
  if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
  puVar1 = (uint *)((long)piVar5 + uVar4);
  uVar7 = (ulong)*puVar1;
  if (uVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)puVar1 + uVar7;
  }
  lVar6 = (long)piVar5 + ((uVar7 + (ulong)*(uint *)((long)puVar1 + uVar7) * 4 + uVar4) - lVar3);
  do {
    if (lVar6 == 0) {
      return &DAT_cbf29ce484222645;
    }
    uVar4 = (ulong)*(uint *)(lVar3 + 4);
    lVar8 = uVar4 - (long)*(int *)(lVar3 + uVar4 + 4);
    lVar9 = lVar3 + lVar8;
    uVar2 = *(ushort *)(lVar9 + 4);
    if (uVar2 < 5) {
      lVar9 = 0;
    }
    else {
      uVar7 = (ulong)*(ushort *)(lVar9 + 8);
      lVar9 = 0;
      if (uVar7 != 0) {
        lVar9 = *(long *)(lVar3 + uVar4 + uVar7 + 4);
      }
    }
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -4;
  } while (lVar9 != *param_2);
  if ((uVar2 < 9) || (uVar7 = (ulong)*(ushort *)(lVar3 + lVar8 + 8), uVar7 == 0)) {
    return (undefined1 *)0x0;
  }
  return *(undefined1 **)(lVar3 + uVar7 + uVar4);
}


