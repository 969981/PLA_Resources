/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01136edc; name: FUN_01136edc
 */


void FUN_01136edc(float param_1,float param_2,long param_3,uint *param_4,uint param_5,ulong param_6)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  byte *pbVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  uint local_54;
  
  if (*(char *)((long)param_4 + 0xd) != '\0') {
    return;
  }
  lVar6 = param_3 + 0x6c;
  puVar3 = (uint *)FUN_01136910(lVar6,param_4,param_5 & 1,&local_54);
  if (puVar3 == (uint *)0x0) {
    return;
  }
  if ((param_5 & 1) != 0) goto LAB_01136fe0;
  pbVar4 = (byte *)FUN_011323d0(lVar6,*param_4,(short)param_4[1]);
  if ((pbVar4 == (byte *)0x0) || ((pbVar4[5] & 0x33) == 0)) {
    puVar3[2] = (uint)param_1;
LAB_0113706c:
    puVar3[4] = (uint)param_2;
  }
  else {
    if ((*pbVar4 & 1) == 0) {
      *puVar3 = *puVar3 | 1;
      fVar7 = (float)puVar3[2];
      pfVar5 = (float *)(puVar3 + 3);
      if (param_1 < fVar7) {
        puVar3[3] = (uint)fVar7;
        pfVar5 = (float *)(puVar3 + 2);
      }
      *pfVar5 = param_1;
      fVar7 = (float)puVar3[4];
      if (param_2 < fVar7) {
        puVar3[4] = (uint)param_2;
        puVar3[5] = (uint)fVar7;
        goto LAB_01136fe0;
      }
    }
    else {
      pfVar5 = (float *)(puVar3 + 2);
      if ((param_1 < *pfVar5) || (pfVar5 = (float *)(puVar3 + 3), *pfVar5 < param_1)) {
        *pfVar5 = param_1;
      }
      if (param_2 < (float)puVar3[4]) goto LAB_0113706c;
      if (param_2 <= (float)puVar3[5]) goto LAB_01136fe0;
    }
    puVar3[5] = (uint)param_2;
  }
LAB_01136fe0:
  bVar2 = (byte)(1 << (ulong)(local_54 & 0x1f));
  *(byte *)((long)puVar3 + 5) = *(byte *)((long)puVar3 + 5) | bVar2;
  if ((param_6 & 1) != 0) {
    *(byte *)((long)puVar3 + 6) = *(byte *)((long)puVar3 + 6) | bVar2;
  }
  uVar1 = *param_4;
  if ((((int)uVar1 < 0x3d5) && (lVar6 = lVar6 + (ulong)uVar1 * 0x58, *(short *)(lVar6 + 0x7a) != 0))
     && ((*(uint *)(lVar6 + 0x70) >> 1 & 1) == 0)) {
    FUN_01136b44(param_3,(ulong)uVar1,(short)param_4[1],param_4[2] == 1,(char)param_4[3],param_5 & 1
                );
  }
  return;
}


