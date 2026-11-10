/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a4724; name: FUN_031a4724
 */


void FUN_031a4724(undefined8 *param_1)

{
  long lVar1;
  long local_28;
  
  *param_1 = &PTR_LAB_042ffe18;
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  lVar1 = FUN_032cf5b0(0xa0);
  FUN_031a4da0();
  local_28 = lVar1;
  FUN_031a47ac(param_1 + 4,&local_28);
  if (lVar1 != 0) {
    FUN_032d647c(lVar1);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


