/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b78c; name: FUN_0082b78c
 */


void FUN_0082b78c(long *param_1)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377d00;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5b70(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0xa4),(Result *)local_18);
  param_1[0x16] = 0;
  return;
}


