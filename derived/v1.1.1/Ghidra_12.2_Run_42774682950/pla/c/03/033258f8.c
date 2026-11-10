/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033258f8; name: FUN_033258f8
 */


void FUN_033258f8(undefined8 *param_1,undefined8 param_2,int param_3,char param_4)

{
  FUN_03325dbc();
  *param_1 = &PTR_LAB_04350570;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *(uint *)((long)param_1 + 0x2c) = param_3 - (uint)(param_4 != '\0');
  if (param_4 == '\0') {
    return;
  }
  FUN_032c4b00(param_2,0,param_3);
  return;
}


