/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00869f38; name: FUN_00869f38
 */


void FUN_00869f38(long *param_1)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_043782f8;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5b70(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0xc4),(Result *)local_18);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}


