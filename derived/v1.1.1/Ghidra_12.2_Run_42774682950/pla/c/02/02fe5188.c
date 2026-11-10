/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe5188; name: FUN_02fe5188
 */


void FUN_02fe5188(undefined8 *param_1,long param_2)

{
  FUN_02fe942c();
  *param_1 = &PTR_LAB_042baa28;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  return;
}


