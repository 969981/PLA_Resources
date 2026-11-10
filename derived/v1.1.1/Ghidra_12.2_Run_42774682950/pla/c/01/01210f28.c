/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01210f28; name: FUN_01210f28
 */


void FUN_01210f28(undefined8 param_1,uint param_2,undefined8 param_3)

{
  if (param_2 < 3) {
    FUN_01210648(param_1,0,*(undefined8 *)(&DAT_03a79fb8 + (long)(int)param_2 * 8),param_3);
    return;
  }
  FUN_01210648(param_1,0,0x78b6ad00ae91a654,param_3);
  return;
}


