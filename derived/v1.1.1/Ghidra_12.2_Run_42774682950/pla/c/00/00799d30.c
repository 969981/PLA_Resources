/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00799d30; name: FUN_00799d30
 */


void FUN_00799d30(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
                    /* try { // try from 00799d50 to 00799d57 has its CatchHandler @ 00799d60 */
  FUN_0079d260(*(undefined8 *)PTR_PTR_04373338,pbVar1);
  return;
}


