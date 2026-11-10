/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6e818; name: FUN_00d6e818
 */


/* WARNING: Control flow encountered bad instruction data */

int FUN_00d6e818(long param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
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
  uVar7 = (ulong)*(uint *)((long)piVar5 + uVar4);
  puVar1 = (uint *)((long)((long)piVar5 + uVar4) + uVar7);
  puVar3 = (uint *)0x0;
  if (uVar4 != 0) {
    puVar3 = puVar1;
  }
  if (puVar3 == puVar1 + *puVar1) {
    return 0;
  }
  lVar6 = (long)piVar5 + ((uVar7 + (ulong)*puVar1 * 4 + uVar4) - (long)puVar3);
  iVar2 = 0;
  do {
    puVar3 = puVar3 + 1;
    uVar4 = (ulong)*puVar3;
    lVar8 = uVar4 - (long)*(int *)((long)puVar3 + uVar4);
    if (*(ushort *)((long)puVar3 + lVar8) < 5) {
      if (*param_2 == 0) {
        return iVar2;
      }
    }
    else {
      uVar7 = (ulong)*(ushort *)((long)puVar3 + lVar8 + 4);
      lVar9 = 0;
      if (uVar7 != 0) {
        lVar9 = *(long *)((long)puVar3 + uVar4 + uVar7);
      }
      if (lVar9 == *param_2) {
        return iVar2;
      }
    }
    if ((*(ushort *)((long)puVar3 + lVar8) < 5) ||
       (uVar7 = (ulong)*(ushort *)((long)puVar3 + lVar8 + 4), uVar7 == 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)((long)puVar3 + uVar4 + uVar7);
    }
    if (lVar8 != -0x5098ffb379f8bd48) {
      iVar2 = iVar2 + 1;
    }
    lVar6 = lVar6 + -4;
    if (lVar6 == 0) {
      return iVar2;
    }
  } while( true );
}


