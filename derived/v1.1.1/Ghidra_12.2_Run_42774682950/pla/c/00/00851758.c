/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851758; name: FUN_00851758
 */


void FUN_00851758(undefined8 param_1,short param_2,short param_3)

{
  short sVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_043773b8;
  sVar1 = *(short *)(*(long *)PTR_DAT_043773c0 + 0x50);
  *(short *)(PTR_DAT_043773b8 + 0x3d4) = sVar1 * param_2;
  *(short *)(puVar2 + 0x3d6) = sVar1 * param_3;
  FUN_00840f30();
  return;
}


