/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed2774; name: FUN_02ed2774
 */


undefined8 FUN_02ed2774(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (param_1[0x17] == 0) {
    puVar1 = (undefined8 *)(*DAT_0442d138)(2,0x10);
    if (puVar1 == (undefined8 *)0x0) goto LAB_02ed280c;
    *puVar1 = 0;
    puVar1[1] = 0;
    param_1[0x17] = (long)puVar1;
  }
  puVar1 = (undefined8 *)FUN_02eb5454();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    (**(code **)(*param_1 + 0x188))(param_1,0,0);
    return 1;
  }
  if ((param_1[0x17] == 0) || (*(int *)(param_1[0x17] + 8) != 0)) {
    return 0x34;
  }
  (*DAT_0442d150)(2);
LAB_02ed280c:
  param_1[0x17] = 0;
  return 0x34;
}


