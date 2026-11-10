/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dc0e0; name: FUN_032dc0e0
 */


long FUN_032dc0e0(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_032e07d8();
  if ((int)param_1[1] == iVar1) {
    lVar2 = *param_1;
    iVar3 = iVar1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
      lVar2 = FUN_032e08c4(PTR_PTR_0434a080,iVar1 + 1);
      iVar3 = (int)param_1[1];
      *param_1 = lVar2;
    }
    puVar4 = (undefined4 *)(lVar2 + (long)iVar3 * 0x18);
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)(puVar4 + 4) = 0x8000000000000000;
    *(int *)(param_1 + 1) = iVar1 + 1;
  }
  return *param_1 + (long)iVar1 * 0x18 + 8;
}


