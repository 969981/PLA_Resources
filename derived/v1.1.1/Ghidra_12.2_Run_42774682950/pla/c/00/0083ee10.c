/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ee10; name: FUN_0083ee10
 */


void FUN_0083ee10(long *param_1,long param_2)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_007ec3f0();
  *param_1 = (long)(PTR_DAT_04377f28 + 0x10);
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  FUN_0083fbc0(param_1 + 0xd);
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578((long)param_1 + 0xb4,local_30);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}


