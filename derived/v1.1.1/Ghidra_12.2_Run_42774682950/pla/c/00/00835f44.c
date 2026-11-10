/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00835f44; name: FUN_00835f44
 */


void FUN_00835f44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  FUN_007f0fc8(auStack_40,param_2);
  lVar2 = FUN_00827e58(uVar1,auStack_40);
  FUN_007e34a4(auStack_40);
  if (lVar2 != 0) {
    FUN_00835b90(param_1,lVar2);
  }
  return;
}


