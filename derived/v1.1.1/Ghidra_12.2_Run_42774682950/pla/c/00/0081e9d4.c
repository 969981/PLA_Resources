/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081e9d4; name: FUN_0081e9d4
 */


void FUN_0081e9d4(void)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  FUN_0082481c(PTR_DAT_04377bb0);
  *(undefined8 *)(PTR_DAT_04377bc8 + 8) = 0;
  puVar4 = PTR_DAT_04377bd0;
  iVar1 = *(int *)PTR_DAT_04377bd0;
  piVar2 = (int *)PTR_DAT_043773f0;
  while (PTR_DAT_043773f0 = (undefined *)piVar2, iVar1 != 0) {
    (**(code **)(**(long **)(*(long *)(puVar4 + 8) + (long)(iVar1 + -1) * 8) + 0x20))();
    iVar1 = *(int *)puVar4;
    piVar2 = (int *)PTR_DAT_043773f0;
    if (0 < iVar1) {
      *(int *)puVar4 = iVar1 + -1;
      iVar1 = iVar1 + -1;
      piVar2 = (int *)PTR_DAT_043773f0;
    }
  }
  iVar1 = *piVar2;
  puVar3 = (undefined8 *)PTR_DAT_04377bc0;
  while (PTR_DAT_04377bc0 = (undefined *)puVar3, iVar1 != 0) {
    (**(code **)(**(long **)(*(long *)(piVar2 + 2) + (long)(iVar1 + -1) * 8) + 0x20))();
    iVar1 = *piVar2;
    puVar3 = (undefined8 *)PTR_DAT_04377bc0;
    if (0 < iVar1) {
      *piVar2 = iVar1 + -1;
      iVar1 = iVar1 + -1;
      puVar3 = (undefined8 *)PTR_DAT_04377bc0;
    }
  }
  *(undefined8 *)PTR_DAT_04377b08 = 0;
  puVar5 = (undefined8 *)*puVar3;
  *puVar5 = 0;
  puVar5[1] = 0;
  *puVar3 = 0;
  FUN_00824824(PTR_DAT_04377bb0);
  return;
}


