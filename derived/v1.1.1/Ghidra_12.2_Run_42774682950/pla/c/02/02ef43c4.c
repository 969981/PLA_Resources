/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef43c4; name: FUN_02ef43c4
 */


void FUN_02ef43c4(undefined8 param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  long *local_60;
  uint local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  pbVar3 = *(byte **)(param_2 + 0x18);
  fVar6 = (float)param_1;
  if (pbVar3 == (byte *)0x0) {
    pfVar5 = (float *)0x0;
  }
  else {
    uVar2 = 0;
    pfVar4 = (float *)(pbVar3 + ((ulong)(*pbVar3 + 4) & 0x1fc));
    do {
      pfVar5 = pfVar4;
      if ((uint)pbVar3[uVar2 + 1] == (param_3 & 0xff)) break;
      uVar2 = uVar2 + 1;
      pfVar5 = (float *)0x0;
      pfVar4 = pfVar4 + 4;
    } while (uVar2 < *pbVar3);
  }
  if (param_3 == 0xb) {
    local_60 = *(long **)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    local_58 = CONCAT31(local_58._1_3_,lVar1 == 0) | 0x2c;
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 0xd0))(param_1,local_60,&local_60,0);
      *pfVar5 = fVar6;
    }
    else {
      (**(code **)(*local_60 + 0xd8))(param_1,local_60,lVar1,&local_60,0);
      *pfVar5 = fVar6;
    }
  }
  else {
    local_60 = *(long **)(param_2 + 0x10);
    local_50 = 0;
    local_58 = 0;
    local_48 = 0xff;
    local_40 = 0xff;
    local_38 = 0;
    FUN_02ee9820(param_1,fVar6 - *pfVar5,*(long *)(param_2 + 8) + 0x48,
                 *(undefined4 *)(&DAT_03a9f0d0 + (ulong)param_3 * 4),&local_60);
    *pfVar5 = fVar6;
  }
  if ((param_4 & 1) != 0) {
    pfVar5[2] = 0.0;
    pfVar5[3] = 0.0;
  }
  return;
}


