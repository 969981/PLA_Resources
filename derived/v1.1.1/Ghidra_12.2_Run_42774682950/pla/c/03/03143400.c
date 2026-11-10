/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03143400; name: FUN_03143400
 */


void FUN_03143400(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_042dadc0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_032c7a54(param_1 + 4,&DAT_03996322);
  *(undefined1 *)(param_1 + 5) = 0x71;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


