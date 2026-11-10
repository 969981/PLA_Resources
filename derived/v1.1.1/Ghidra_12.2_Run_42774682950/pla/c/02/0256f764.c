/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256f764; name: FUN_0256f764
 */


void FUN_0256f764(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x248) = param_2[1];
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x250) = uVar1;
  *(undefined4 *)(param_1 + 0x234) = 2;
  *(undefined8 *)(param_1 + 0x240) = uVar2;
  FUN_0256c544(param_1,0);
  return;
}


