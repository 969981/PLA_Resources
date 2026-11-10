/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eddb4c; name: FUN_01eddb4c
 */


void FUN_01eddb4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  FUN_00d894e4();
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_04258c78;
  param_1[0x15] = 0;
  param_1[0x11] = &DAT_cbf29ce484222645;
  param_1[0x17] = 0;
  param_1[9] = &PTR_LAB_04258ce8;
  param_1[10] = &PTR_LAB_04258d30;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_0437a508 + 0x10;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = puVar1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = puVar1;
  param_1[0x20] = 0;
  FUN_01ee392c(param_1 + 0x25);
  FUN_01ee3b3c(param_1 + 0x32);
  param_1[0x3f] = &DAT_cbf29ce484222645;
  param_1[0x11] = *param_2;
  FUN_0195799c(param_1 + 0x12,param_2 + 1);
  FUN_018e22ac(param_1 + 0x14,param_2 + 3);
  FUN_0095e898(param_1 + 0x16,param_2 + 5);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 7);
  return;
}


