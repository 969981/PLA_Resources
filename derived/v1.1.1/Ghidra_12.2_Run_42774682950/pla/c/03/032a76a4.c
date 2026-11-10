/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a76a4; name: FUN_032a76a4
 */


void FUN_032a76a4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_3[1];
  fVar3 = (float)FUN_032b5484();
  fVar4 = (float)FUN_032b5484(*(undefined4 *)((long)param_1 + 0xc));
  fVar5 = fVar3 + fVar4;
  uVar1 = param_3[2];
  *(uint *)(param_1 + 2) = uVar1;
  fVar6 = fVar5 + fVar5;
  if ((uVar1 & 1) != 0) {
    fVar6 = fVar5;
  }
  *(float *)((long)param_1 + 0x14) = fVar6;
  uVar2 = FUN_032b555c(*(undefined4 *)(param_1 + 1));
  if ((((uVar2 & 1) == 0) &&
      (uVar2 = FUN_032b555c(*(undefined4 *)((long)param_1 + 0xc)), (uVar2 & 1) == 0)) &&
     ((uVar1 = (int)fVar3 - ((uint)(int)fVar3 >> 1 & 0x55555555),
      uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333),
      (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1 ||
      (uVar1 = (int)fVar4 - ((uint)(int)fVar4 >> 1 & 0x55555555),
      uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333),
      (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 != 1)))) {
    *(float *)((long)param_1 + 0x14) =
         *(float *)((long)param_1 + 0x14) + *(float *)((long)param_1 + 0x14);
  }
  return;
}


