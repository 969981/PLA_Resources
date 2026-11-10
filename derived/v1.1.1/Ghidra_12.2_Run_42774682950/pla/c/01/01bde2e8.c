/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bde2e8; name: FUN_01bde2e8
 */


bool FUN_01bde2e8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01a59ec8();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_01a5bd74(param_1,&DAT_03a7cc20,1);
  }
  return bVar1;
}


