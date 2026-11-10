/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301f9d0; name: FUN_0301f9d0
 */


void FUN_0301f9d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  puVar1 = (undefined8 *)*param_3;
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = *param_2;
  puVar1[3] = param_2[1];
  puVar1[2] = uVar2;
  *(undefined1 *)puVar1 = 0x14;
  *param_3 = puVar1 + 4;
  return;
}


