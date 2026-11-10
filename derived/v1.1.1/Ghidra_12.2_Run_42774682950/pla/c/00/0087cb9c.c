/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087cb9c; name: FUN_0087cb9c
 */


void FUN_0087cb9c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_90 [96];
  
  (**(code **)PTR_DAT_04378c98)(auStack_90,*param_2);
  FUN_0087c600(auStack_90,param_3);
  if ((*(byte *)((long)param_2 + 0x300c) & 1) == 0) {
    (**(code **)PTR_DAT_04378cf0)(auStack_90,0);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_04378d60)(param_1 + 0x10,auStack_90);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


