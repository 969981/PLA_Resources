/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00868c1c; name: FUN_00868c1c
 */


void FUN_00868c1c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_0085bb24();
  puVar1 = PTR_DAT_043782d0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x27a] = 0;
  FUN_007f3f10(*(undefined8 *)PTR_DAT_043780f8,param_1);
  puVar1 = PTR_DAT_043773c0;
  lVar2 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
  FUN_007ff698(*(undefined8 *)(lVar2 + 8),param_1);
  lVar2 = FUN_008551bc(*(undefined8 *)puVar1);
  FUN_00808b54(*(undefined8 *)(lVar2 + 0x10),param_1);
  return;
}


