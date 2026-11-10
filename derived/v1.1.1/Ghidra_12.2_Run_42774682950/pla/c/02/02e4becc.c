/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4becc; name: FUN_02e4becc
 */


bool FUN_02e4becc(long param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  
  fVar1 = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x1c) -
          *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x20) -
          *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x10) -
          *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x1c);
  FUN_02e4b898(&local_50);
  FUN_02e4b898(&local_60,param_1,param_3);
  return -((local_50 * fVar1 + fVar2 * fStack_4c + fVar3 * local_48) /
          SQRT(local_50 * local_50 + fStack_4c * fStack_4c + local_48 * local_48)) <
         (local_60 * fVar1 + fVar2 * fStack_5c + fVar3 * local_58) /
         SQRT(local_60 * local_60 + fStack_5c * fStack_5c + local_58 * local_58);
}


