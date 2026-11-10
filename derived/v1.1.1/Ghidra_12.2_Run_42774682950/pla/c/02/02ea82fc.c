/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea82fc; name: FUN_02ea82fc
 */


void FUN_02ea82fc(undefined4 param_1,long param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined4 local_70 [2];
  long local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  
  local_70[0] = param_1;
  local_68 = param_2;
  local_60 = param_3;
  puVar1 = (undefined8 *)FUN_02ea815c(local_70);
  if (puVar1 == (undefined8 *)0x0) {
    if (param_2 != -1) {
      local_50 = 0xffffffffffffffff;
      local_58[0] = param_1;
      local_48 = param_3;
      puVar1 = (undefined8 *)FUN_02ea815c(local_58);
      if (puVar1 != (undefined8 *)0x0) goto LAB_02ea8340;
    }
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
LAB_02ea8340:
    *param_4 = *puVar1;
    *param_5 = *(undefined4 *)(puVar1 + 1);
  }
  return;
}


