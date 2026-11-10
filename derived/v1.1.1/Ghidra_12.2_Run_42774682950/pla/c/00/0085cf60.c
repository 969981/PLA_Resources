/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085cf60; name: FUN_0085cf60
 */


void FUN_0085cf60(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_043773c0;
  lVar2 = FUN_00854f4c(*(undefined8 *)PTR_DAT_043773c0);
  if (lVar2 != 0) {
    FUN_007f0294(lVar2 + 8);
  }
  lVar2 = FUN_00854f34(*(undefined8 *)puVar1);
  if (lVar2 == 0) {
    return;
  }
  FUN_007f0294(lVar2 + 8);
  return;
}


