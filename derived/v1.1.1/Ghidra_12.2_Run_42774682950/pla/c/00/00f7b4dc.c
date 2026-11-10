/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f7b4dc; name: FUN_00f7b4dc
 */


void FUN_00f7b4dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00f7ac50();
  uVar1 = DAT_043b5f10;
  if (((byte)DAT_043b5f00 & 1) == 0) {
    uVar1 = 0x43b5f01;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,uVar1);
  return;
}


