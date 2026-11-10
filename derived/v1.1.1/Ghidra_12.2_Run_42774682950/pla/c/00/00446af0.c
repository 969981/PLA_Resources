/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446af0; name: FUN_00446af0
 */


void FUN_00446af0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_4;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_4[1];
    if (puVar1 == (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
      return;
    }
    *param_2 = *puVar1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(puVar1 + 2);
    }
  }
  return;
}


