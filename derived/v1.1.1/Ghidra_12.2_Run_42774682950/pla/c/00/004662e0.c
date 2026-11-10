/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004662e0; name: FUN_004662e0
 */


undefined8
FUN_004662e0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
            long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_0040a6f0(*(undefined8 *)(param_5 + 0x10));
    *param_2 = uVar2;
    uVar1 = FUN_0040a6e0(*(undefined8 *)(param_5 + 0x10));
    *param_3 = uVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 8);
  }
  return 1;
}


