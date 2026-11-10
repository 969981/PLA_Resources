/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081e948; name: FUN_0081e948
 */


void FUN_0081e948(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_20;
  char *pcStack_18;
  
  *(undefined8 **)PTR_DAT_04377bc0 = param_1;
  puVar3 = PTR_DAT_04377bc8;
  *(undefined8 *)(PTR_DAT_04377bc8 + 8) = 0;
  local_20 = PTR_DAT_043773d0 + 0x10;
  pcStack_18 = "RootHeap";
  uVar4 = FUN_0081aeb8(*param_1,param_1[1],&local_20,0);
  puVar2 = PTR_DAT_043773f0;
  iVar1 = *(int *)PTR_DAT_043773f0;
  if (iVar1 < *(int *)(PTR_DAT_043773f0 + 4)) {
    *(undefined8 *)(*(long *)(PTR_DAT_043773f0 + 8) + (long)iVar1 * 8) = uVar4;
    *(int *)puVar2 = iVar1 + 1;
  }
  *(undefined **)PTR_DAT_04377b08 = puVar3;
  return;
}


