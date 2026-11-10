/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081aaec; name: FUN_0081aaec
 */


void FUN_0081aaec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  while (puVar1 != param_1) {
    puVar2 = (undefined8 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}


