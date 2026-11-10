/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e537fc; name: FUN_01e537fc
 */


void FUN_01e537fc(undefined8 *param_1,long param_2)

{
  FUN_00d91038(param_1,param_2,param_2 + 0x38);
  *param_1 = &PTR_FUN_04255a10;
  param_1[9] = &PTR_LAB_04255ac8;
  param_1[10] = &PTR_LAB_04255b10;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 0;
  FUN_01e53864(param_1 + 0x1a,param_1[1]);
  FUN_01e5cd9c(param_1 + 0x1b);
  param_1[0x29] = 0;
  FUN_01e538e0(param_1 + 0x2a);
  FUN_01e539d0(param_1);
  return;
}


