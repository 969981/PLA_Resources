/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f166e0; name: FUN_02f166e0
 */


void FUN_02f166e0(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  char local_2c [4];
  float local_28;
  float local_24;
  
  FUN_02f26608();
  *param_1 = &PTR_FUN_042ac6b8;
  param_1[0x15] = &PTR_FUN_042ac808;
  *(undefined4 *)(param_1 + 0x69) = 0x7fffffff;
  param_1[0x6a] = 0xc5800000c5800000;
  param_1[0x6b] = 0xc5800000;
  *(byte *)((long)param_1 + 0x34c) = *(byte *)((long)param_1 + 0x34c) & 0xf8 | 4;
  FUN_02f167d4(param_2,param_1 + 0x6c,&local_24);
  *(float *)((long)param_1 + 0x364) = 1.0 - 1.0 / local_24;
  FUN_02f16864(param_2,&local_28,local_2c);
  *(byte *)((long)param_1 + 0x34c) = *(byte *)((long)param_1 + 0x34c) & 0xf7 | local_2c[0] << 3;
  if (local_28 <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = expf((float)(int)-(uint)DAT_042ab268 / (local_28 * 48000.0));
  }
  *(float *)((long)param_1 + 0x35c) = fVar1;
  return;
}


