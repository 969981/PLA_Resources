/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03185640; name: FUN_03185640
 */


void FUN_03185640(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float fVar2;
  float local_40 [4];
  ulong local_30;
  ulong local_28;
  
  pfVar1 = local_40;
  local_30 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    fVar2 = *(float *)(param_1 + 0x40);
    local_30 = (ulong)(uint)-fVar2;
  }
  else if (param_2 == 2) {
    fVar2 = *(float *)(param_1 + 0x48);
    pfVar1 = (float *)((ulong)local_40 | 8);
    local_28 = (ulong)(uint)-fVar2;
  }
  else if (param_2 == 1) {
    fVar2 = *(float *)(param_1 + 0x44);
    pfVar1 = (float *)((ulong)local_40 | 4);
    local_30 = (ulong)(uint)-fVar2 << 0x20;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x4c);
    pfVar1 = (float *)((ulong)local_40 | 0xc);
    local_28 = (ulong)(uint)-fVar2 << 0x20;
  }
  local_40[2] = 0.0;
  local_40[3] = 0.0;
  local_40[0] = 0.0;
  local_40[1] = 0.0;
  *pfVar1 = fVar2;
  FUN_032cc3fc(param_3,param_1,&local_30);
  FUN_032cc3fc(param_4,param_1,local_40);
  return;
}


