/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840e34; name: FUN_00840e34
 */


void FUN_00840e34(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04377fa0;
  puVar2 = (undefined8 *)param_1[0xe];
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_0081a800(puVar2);
    param_1[0xe] = 0;
  }
  FUN_0084939c(param_1);
  return;
}


