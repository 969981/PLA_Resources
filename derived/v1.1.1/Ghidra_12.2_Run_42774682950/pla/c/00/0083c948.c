/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c948; name: FUN_0083c948
 */


void FUN_0083c948(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377ee8;
  param_1[0xb] = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5b70(param_1 + 0x3d);
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0x45),(Result *)local_18);
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  return;
}


