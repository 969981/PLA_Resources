/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01053d0c; name: FUN_01053d0c
 */


void FUN_01053d0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_010534a0();
  uVar1 = DAT_043b91f0;
  if (((byte)DAT_043b91e0 & 1) == 0) {
    uVar1 = 0x43b91e1;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,uVar1);
  return;
}


