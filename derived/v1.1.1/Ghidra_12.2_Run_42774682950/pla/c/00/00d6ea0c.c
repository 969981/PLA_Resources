/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6ea0c; name: FUN_00d6ea0c
 */


/* WARNING: Control flow encountered bad instruction data */

int FUN_00d6ea0c(long param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  piVar5 = *(int **)(param_1 + 0x88);
  if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
  uVar10 = (ulong)*(uint *)((long)piVar5 + uVar7);
  puVar1 = (uint *)((long)((long)piVar5 + uVar7) + uVar10);
  puVar3 = (uint *)0x0;
  if (uVar7 != 0) {
    puVar3 = puVar1;
  }
  if (puVar3 == puVar1 + *puVar1) {
    return 0;
  }
  lVar4 = *param_2;
  lVar6 = (long)piVar5 + ((uVar10 + (ulong)*puVar1 * 4 + uVar7) - (long)puVar3);
  iVar2 = 0;
  bVar8 = false;
  do {
    puVar3 = puVar3 + 1;
    uVar7 = (ulong)*puVar3;
    lVar11 = uVar7 - (long)*(int *)((long)puVar3 + uVar7);
    if (*(ushort *)((long)puVar3 + lVar11) < 5) {
      lVar12 = 0;
    }
    else {
      uVar10 = (ulong)*(ushort *)((long)puVar3 + lVar11 + 4);
      lVar12 = 0;
      if (uVar10 != 0) {
        lVar12 = *(long *)((long)puVar3 + uVar7 + uVar10);
      }
    }
    if (bVar8) {
      if (lVar12 != lVar4) {
        if (*(ushort *)((long)puVar3 + lVar11) < 5) {
          return iVar2;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar3 + lVar11 + 4);
        if (uVar10 == 0) {
          return iVar2;
        }
        if (*(long *)((long)puVar3 + uVar7 + uVar10) != -0x5098ffb379f8bd48) {
          return iVar2;
        }
      }
      uVar9 = 1;
      bVar8 = true;
    }
    else {
      uVar9 = (uint)(lVar12 == lVar4);
      bVar8 = lVar12 == lVar4;
    }
    iVar2 = iVar2 + uVar9;
    lVar6 = lVar6 + -4;
    if (lVar6 == 0) {
      return iVar2;
    }
  } while( true );
}


