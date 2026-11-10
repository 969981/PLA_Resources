/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed2dd0; name: FUN_02ed2dd0
 */


void FUN_02ed2dd0(long param_1,int *param_2,uint param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)((long)&DAT_0440a800 + (ulong)param_3 * 4);
  pbVar1 = *(byte **)(param_1 + 0x98);
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if ((uint)pbVar1[uVar3 + 1] == (param_3 & 0xff)) goto LAB_02ed2e34;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_02ed2e34:
  pbVar1 = (byte *)&local_14;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  *param_2 = *param_2 + *(int *)pbVar1;
  fVar4 = (float)FUN_02ed2e94(param_1,*(undefined4 *)(&DAT_03a9f0d0 + (ulong)param_3 * 4),param_4);
  fVar5 = 0.5;
  if (fVar4 <= 0.0) {
    fVar5 = -0.5;
  }
  *param_2 = *param_2 + (int)(fVar5 + fVar4);
  return;
}


