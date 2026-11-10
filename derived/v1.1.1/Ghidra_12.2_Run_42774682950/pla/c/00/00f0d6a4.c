/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f0d6a4; name: FUN_00f0d6a4
 */


void FUN_00f0d6a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00f0cd50();
  uVar1 = DAT_043b4318;
  if (((byte)DAT_043b4308 & 1) == 0) {
    uVar1 = 0x43b4309;
  }
  FUN_00154110(param_1,
               "sol: cannot call \'__pairs/pairs\' on type \'%s\': it is not recognized as a container"
               ,uVar1);
  return;
}


