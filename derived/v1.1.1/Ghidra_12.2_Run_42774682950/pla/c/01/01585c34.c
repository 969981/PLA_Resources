/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01585c34; name: FUN_01585c34
 */


void FUN_01585c34(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (*(undefined1 **)(param_1 + 0x7f0) == &DAT_cbf29ce484222645) {
    puVar1 = (undefined8 *)(param_1 + 0x7f0);
  }
  else if (*(undefined1 **)(param_1 + 0x7f8) == &DAT_cbf29ce484222645) {
    puVar1 = (undefined8 *)(param_1 + 0x7f8);
  }
  else if (*(undefined1 **)(param_1 + 0x800) == &DAT_cbf29ce484222645) {
    puVar1 = (undefined8 *)(param_1 + 0x800);
  }
  else if (*(undefined1 **)(param_1 + 0x808) == &DAT_cbf29ce484222645) {
    puVar1 = (undefined8 *)(param_1 + 0x808);
  }
  else {
    if (*(undefined1 **)(param_1 + 0x810) != &DAT_cbf29ce484222645) {
      return;
    }
    puVar1 = (undefined8 *)(param_1 + 0x810);
  }
  *puVar1 = *param_2;
  return;
}


