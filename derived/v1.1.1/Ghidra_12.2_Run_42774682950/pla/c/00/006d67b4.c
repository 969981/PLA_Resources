/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d67b4; name: FUN_006d67b4
 */


void FUN_006d67b4(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    lVar8 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar8 != 0) {
                    /* try { // try from 006d67e4 to 006d67ef has its CatchHandler @ 006d68ac */
      FUN_002e0468(lVar8,0);
    }
    *param_1 = lVar8;
  }
  puVar1 = (ulong *)(lVar8 + 0x10);
  lVar4 = FUN_006e4d98(param_2);
  uVar6 = *(ulong *)(lVar4 + 8);
  puVar5 = (ulong *)(uVar6 & 0xfffffffffffffffe);
  if ((uVar6 & 1) == 0) {
    if ((ulong *)*puVar1 != puVar5) goto LAB_006d6820;
  }
  else if (*puVar1 != *puVar5) goto LAB_006d6820;
  piVar7 = *(int **)(lVar8 + 0x20);
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
    if (iVar2 < *(int *)(lVar8 + 0x1c)) {
      iVar3 = *(int *)(lVar8 + 0x18);
      if (iVar3 < iVar2) {
        *(undefined8 *)(piVar7 + (long)iVar2 * 2 + 2) =
             *(undefined8 *)(piVar7 + (long)iVar3 * 2 + 2);
      }
      *(long *)(piVar7 + (long)iVar3 * 2 + 2) = lVar4;
      *(int *)(lVar8 + 0x18) = iVar3 + 1;
      **(int **)(lVar8 + 0x20) = **(int **)(lVar8 + 0x20) + 1;
      return;
    }
  }
LAB_006d6820:
  if ((uVar6 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
                    /* try { // try from 006d6824 to 006d682b has its CatchHandler @ 006d68b0 */
  FUN_006d6908(puVar1,lVar4,puVar5);
  return;
}


