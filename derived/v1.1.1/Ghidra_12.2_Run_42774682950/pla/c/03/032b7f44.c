/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b7f44; name: FUN_032b7f44
 */


void FUN_032b7f44(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_032e2120(param_1[1]);
  if (iVar1 == 8) {
    FUN_032c53d8(param_2,"%#018llx",*(undefined8 *)*param_1);
  }
  else {
    FUN_032c53d8(param_2,"%#010x",*(undefined4 *)*param_1);
  }
  return;
}


