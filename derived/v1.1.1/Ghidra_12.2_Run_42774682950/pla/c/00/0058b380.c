/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b380; name: FUN_0058b380
 */


void FUN_0058b380(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_0053ee00(PTR_DAT_04374e60,param_2), puVar1 != (undefined4 *)0x0)) {
    *param_1 = puVar1;
  }
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1 = (undefined4 *)param_1[1];
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_0053ee00(PTR_DAT_04374e60,param_2), puVar1 != (undefined4 *)0x0)) {
    param_1[1] = puVar1;
  }
  *puVar1 = param_3[2];
  puVar1[1] = param_3[3];
  return;
}


