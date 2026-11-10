/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00815700; name: FUN_00815700
 */


void FUN_00815700(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377a60;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0x163] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e5b70(param_1 + 0x165);
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  memset((void *)((long)param_1 + 0x6a),0,0x554);
  memset((void *)((long)param_1 + 0x5be),0,0x554);
  memset(param_1 + 0x16d,0,0x10);
  memset(param_1 + 0x16f,0,0x100);
  return;
}


