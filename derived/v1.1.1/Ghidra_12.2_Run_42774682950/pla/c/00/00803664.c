/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00803664; name: FUN_00803664
 */


void FUN_00803664(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377728;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5b70(param_1 + 0xc);
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1 + 0x12,local_38);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  FUN_007f0ce0(param_1 + 0x15);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = param_2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}


