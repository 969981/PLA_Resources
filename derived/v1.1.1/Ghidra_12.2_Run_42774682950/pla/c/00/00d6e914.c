/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6e914; name: FUN_00d6e914
 */


/* WARNING: Control flow encountered bad instruction data */

undefined1 * FUN_00d6e914(long param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  piVar4 = *(int **)(param_1 + 0x88);
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
  uVar7 = (ulong)*(uint *)((long)piVar4 + uVar6);
  puVar1 = (uint *)((long)((long)piVar4 + uVar6) + uVar7);
  puVar2 = (uint *)0x0;
  if (uVar6 != 0) {
    puVar2 = puVar1;
  }
  if (puVar2 != puVar1 + *puVar1) {
    lVar5 = (long)piVar4 + ((uVar7 + (ulong)*puVar1 * 4 + uVar6) - (long)puVar2);
    iVar3 = 0;
    do {
      puVar2 = puVar2 + 1;
      uVar6 = (ulong)*puVar2;
      lVar8 = uVar6 - (long)*(int *)((long)puVar2 + uVar6);
      if (((*(ushort *)((long)puVar2 + lVar8) < 5) ||
          (uVar7 = (ulong)*(ushort *)((long)puVar2 + lVar8 + 4), uVar7 == 0)) ||
         (*(long *)((long)puVar2 + uVar6 + uVar7) != -0x5098ffb379f8bd48)) {
        if (iVar3 == param_2) {
          if ((*(ushort *)((long)puVar2 + lVar8) < 5) ||
             (uVar7 = (ulong)*(ushort *)((long)puVar2 + lVar8 + 4), uVar7 == 0)) {
            return (undefined1 *)0x0;
          }
          return *(undefined1 **)((long)puVar2 + uVar7 + uVar6);
        }
        iVar3 = iVar3 + 1;
      }
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  return &DAT_cbf29ce484222645;
}


