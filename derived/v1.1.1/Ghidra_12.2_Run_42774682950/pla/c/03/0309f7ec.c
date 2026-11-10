/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309f7ec; name: FUN_0309f7ec
 */


void FUN_0309f7ec(long param_1,long param_2,long param_3,long param_4,undefined1 param_5,
                 undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  fVar3 = *(float *)(param_4 + 8);
  fVar4 = *(float *)(param_4 + 0xc);
  cVar1 = *(char *)(param_3 + 2);
  *(float *)(param_1 + 4) = fVar4 * (float)*(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  fVar2 = *(float *)(param_4 + 8);
  *(undefined1 *)(param_1 + 0x1a) = param_5;
  *(undefined2 *)(param_1 + 0x14) = param_6;
  *(undefined2 *)(param_1 + 0x16) = param_7;
  *(undefined2 *)(param_1 + 0x18) = param_8;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 8) = fVar2 * (float)uVar5;
  if (((fVar4 != fVar3 && (-1e+06 < fVar4 || fVar3 < 1e+06)) && (cVar1 == '\x01')) &&
     ((fVar2 = (float)FUN_032c8ef0(*(undefined4 *)(param_4 + 0xc)), -1e+06 < fVar2 ||
      (fVar2 = (float)FUN_032c8ef0(*(undefined4 *)(param_4 + 8)), 1e+06 < fVar2)))) {
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


