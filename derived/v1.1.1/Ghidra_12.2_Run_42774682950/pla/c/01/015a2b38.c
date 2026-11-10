/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015a2b38; name: FUN_015a2b38
 */


undefined8 FUN_015a2b38(void)

{
  undefined8 uVar1;
  long local_30 [2];
  
  FUN_0160612c(local_30);
  if (local_30[0] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_015a2b88();
    if (local_30[0] != 0) {
      FUN_02a43934();
    }
  }
  return uVar1;
}


