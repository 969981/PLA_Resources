/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3869c; name: FUN_02f3869c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f3869c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_0442c040;
  if (DAT_0442c040 != param_1) {
    puVar1 = param_2;
  }
  *puVar1 = *param_1;
  if (DAT_0442c048 == param_1) {
    DAT_0442c048 = param_2;
  }
  if ((param_1 < DAT_0442c058) || (DAT_0442c058 + (ulong)DAT_0442c060 * 3 <= param_1)) {
    (*DAT_0442d150)(0,param_1);
  }
  else {
    *param_1 = DAT_0442c050;
    DAT_0442c050 = param_1;
  }
  _DAT_0442c064 = _DAT_0442c064 + -1;
  return;
}


