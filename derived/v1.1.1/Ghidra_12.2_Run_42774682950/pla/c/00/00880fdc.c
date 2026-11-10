/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00880fdc; name: FUN_00880fdc
 */


void FUN_00880fdc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_02947d44(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98),
                       *(undefined1 *)(*(long *)(param_1 + 0x58) + 0xf1));
  uVar2 = FUN_02947964(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98));
  uVar1 = FUN_0293f7d0(uVar2,uVar1);
  FUN_00881550(param_1,param_2,uVar1);
  return;
}


