/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe250; name: FUN_02dfe250
 */


undefined1 * FUN_02dfe250(long param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  float fVar4;
  
  if (*param_2 == 0) {
    if (*(float *)(param_1 + 0xb8) == 0.0) {
      bVar3 = *(float *)(param_1 + 0xb4) != 0.0;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  fVar4 = (float)param_2[0xd];
  puVar1 = &LAB_02dfe134;
  if ((float)param_2[0xe] == fVar4 && fVar4 == 50.0) {
    puVar1 = &LAB_02dfe018;
  }
  puVar2 = &LAB_02dfe1c0;
  if ((float)param_2[0xe] == fVar4 && fVar4 == 50.0) {
    puVar2 = &LAB_02dfe0a4;
  }
  if (!bVar3) {
    puVar2 = puVar1;
  }
  return puVar2;
}


