/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6ebfc; name: FUN_00d6ebfc
 */


/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_00d6ebfc(long param_1,long *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  piVar6 = *(int **)(param_1 + 0x88);
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2];
  uVar11 = (ulong)*(uint *)((long)piVar6 + uVar9);
  puVar1 = (uint *)((long)((long)piVar6 + uVar9) + uVar11);
  puVar2 = (uint *)0x0;
  if (uVar9 != 0) {
    puVar2 = puVar1;
  }
  if (puVar2 != puVar1 + *puVar1) {
    lVar4 = 0;
    iVar5 = 0;
    bVar7 = false;
    do {
      if (bVar7) {
LAB_00d6ecdc:
        if (iVar5 == param_3) {
          uVar9 = (ulong)*(uint *)((long)puVar2 + lVar4 + 4);
          lVar3 = lVar4 + (uVar9 - (long)*(int *)((long)puVar2 + lVar4 + uVar9 + 4));
          if ((*(ushort *)((long)puVar2 + lVar3 + 4) < 0xb) ||
             (uVar11 = (ulong)*(ushort *)((long)puVar2 + lVar3 + 0xe), uVar11 == 0)) {
            return (undefined1 *)0x0;
          }
          return *(undefined1 **)((long)puVar2 + lVar4 + uVar9 + uVar11 + 4);
        }
        iVar5 = iVar5 + 1;
        bVar7 = true;
      }
      else {
        uVar8 = (ulong)*(uint *)((long)puVar2 + lVar4 + 4);
        lVar3 = lVar4 + (uVar8 - (long)*(int *)((long)puVar2 + lVar4 + uVar8 + 4));
        if ((*(ushort *)((long)puVar2 + lVar3 + 4) < 5) ||
           (uVar10 = (ulong)*(ushort *)((long)puVar2 + lVar3 + 8), uVar10 == 0)) {
          if (*param_2 == 0) goto LAB_00d6ecdc;
        }
        else if (*(long *)((long)puVar2 + lVar4 + uVar8 + uVar10 + 4) == *param_2)
        goto LAB_00d6ecdc;
        bVar7 = false;
      }
      lVar4 = lVar4 + 4;
    } while ((long)piVar6 + ((uVar9 + (ulong)*puVar1 * 4 + uVar11) - (long)puVar2) != lVar4);
  }
  return &DAT_cbf29ce484222645;
}


