/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3100; name: FUN_032c3100
 */


void FUN_032c3100(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    bVar1 = iVar2 < param_3 * 2;
    iVar2 = iVar2 << 1;
  } while (bVar1);
  FUN_02fec8dc();
  return;
}


