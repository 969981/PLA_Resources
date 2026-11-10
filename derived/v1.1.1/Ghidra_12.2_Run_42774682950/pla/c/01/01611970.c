/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01611970; name: FUN_01611970
 */


void FUN_01611970(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_0421fca8;
  *(undefined8 *)((long)param_1 + 0xc) = *param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_01611944();
  return;
}


