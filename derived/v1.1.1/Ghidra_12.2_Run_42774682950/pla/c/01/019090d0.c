/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019090d0; name: FUN_019090d0
 */


void FUN_019090d0(undefined8 param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = 0x9fa59a6175d99349;
  pcStack_58 = "kSpinYawDegree";
  local_50 = 0xe;
  uStack_48 = 0;
  fVar2 = (float)FUN_01908df0(&local_60);
  local_60 = 0x46fa1fafa73ace70;
  pcStack_58 = "kSpinPitchDegree";
  local_50 = 0x10;
  uStack_48 = 0;
  fVar4 = (fVar2 * 3.1415927) / 180.0;
  fVar2 = (float)FUN_01908df0(&local_60);
  puVar1 = PTR_PTR_0437a4c8;
  fVar5 = (fVar2 * 3.1415927) / 180.0;
  fVar2 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x88))(param_1);
  fVar3 = (float)(**(code **)(puVar1 + 0x88))(param_1);
  FUN_009a7ff4(fVar4 + (0.0 - fVar4) * fVar2,fVar5 + (0.0 - fVar5) * fVar3,0);
  return;
}


