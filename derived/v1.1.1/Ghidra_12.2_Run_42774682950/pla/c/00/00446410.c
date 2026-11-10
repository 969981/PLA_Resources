/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446410; name: FUN_00446410
 */


undefined8 FUN_00446410(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = FUN_00407d80(*param_1);
    iVar1 = FUN_0046f370(uVar2,2,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_00407e60(*param_1);
      uVar2 = FUN_0046f370(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}


