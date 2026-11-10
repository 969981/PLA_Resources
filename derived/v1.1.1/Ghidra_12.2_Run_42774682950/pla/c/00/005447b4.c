/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005447b4; name: FUN_005447b4
 */


void FUN_005447b4(long *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_04374be0;
  *param_1 = (long)(PTR_DAT_04374c70 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = 1;
  auVar2 = FUN_003fda40(PTR_PTR_04374c78);
  *(undefined1 (*) [16])(param_1 + 3) = auVar2;
  return;
}


