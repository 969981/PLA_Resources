/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002502f0; name: FUN_002502f0
 */


void FUN_002502f0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04372d88 + 0x10;
  param_1[2] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = -1;
  lVar2 = FUN_00251600(param_2);
  param_1[2] = lVar2;
  return;
}


