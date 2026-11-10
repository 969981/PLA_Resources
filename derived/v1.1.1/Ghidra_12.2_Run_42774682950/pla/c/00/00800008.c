/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00800008; name: FUN_00800008
 */


void FUN_00800008(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_043776e8;
  *(undefined2 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x84),(Result *)local_18);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_043774e0 + 0x10;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xc;
  param_1[0x16] = 0;
  param_1[0x14] = (long)puVar1;
  param_1[0x15] = 0;
  return;
}


