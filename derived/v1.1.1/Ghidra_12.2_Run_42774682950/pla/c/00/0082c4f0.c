/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082c4f0; name: FUN_0082c4f0
 */


void FUN_0082c4f0(long *param_1)

{
  undefined *puVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377d58;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5b70(param_1 + 0xc);
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1 + 0x12,local_28);
  return;
}


