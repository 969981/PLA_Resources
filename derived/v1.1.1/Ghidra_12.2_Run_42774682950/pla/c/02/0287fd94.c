/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287fd94; name: FUN_0287fd94
 */


void FUN_0287fd94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_0120ca1c();
  uVar3 = FUN_0288a674(param_1,param_2);
  FUN_0288a408(plVar2,uVar3);
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = *plVar2 + 0x48;
  }
  *(long *)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = lVar1;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  return;
}


