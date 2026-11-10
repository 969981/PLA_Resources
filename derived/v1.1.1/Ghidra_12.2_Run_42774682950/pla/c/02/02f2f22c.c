/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2f22c; name: FUN_02f2f22c
 */


void FUN_02f2f22c(long *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*param_1 + 0x70))();
  FUN_02eb02d4(param_1 + 4);
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (*DAT_0442d150)(5,puVar1);
    param_1[3] = 0;
  }
  return;
}


