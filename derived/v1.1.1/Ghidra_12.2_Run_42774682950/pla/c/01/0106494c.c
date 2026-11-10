/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0106494c; name: FUN_0106494c
 */


void FUN_0106494c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_010640e0();
  uVar1 = DAT_043b97e0;
  if (((byte)DAT_043b97d0 & 1) == 0) {
    uVar1 = 0x43b97d1;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,uVar1);
  return;
}


