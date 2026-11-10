/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a7ee0; name: FUN_030a7ee0
 */


void FUN_030a7ee0(float param_1,float param_2,uint param_3,int param_4,float *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = param_5[1];
  *(undefined1 *)((long)param_5 + 0x1b) = 0;
  fVar4 = fVar3 * (float)(param_4 + 1);
  fVar2 = param_5[2] * (float)(param_4 + 1);
  param_5[3] = fVar4;
  param_5[4] = fVar2;
  fVar5 = 0.1;
  if ((param_3 & 1) == 0) {
    fVar5 = 0.2;
  }
  fVar7 = (1.0 - fVar5) + 1.0;
  fVar6 = fVar5;
  if (0.0 <= fVar4) {
    fVar6 = fVar7;
  }
  if (fVar2 <= 0.0) {
    fVar5 = fVar7;
  }
  *param_5 = 0.0;
  if (*(char *)(param_5 + 7) == '\x01') {
    *(undefined1 *)((long)param_5 + 0x1b) = 1;
    return;
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)((long)param_5 + 0x1d) = 0;
  }
  if ((fVar4 == fVar2) ||
     ((-1e+06 < fVar3 &&
      ((param_2 < fVar4 * fVar6 * param_1 || (*(char *)((long)param_5 + 0x1d) == '\x03')))))) {
    *(undefined1 *)((long)param_5 + 0x1b) = 1;
    cVar1 = *(char *)((long)param_5 + 0x1d);
    if (cVar1 != '\x03') {
      cVar1 = '\x01';
    }
    *param_5 = fVar4 - param_2;
    *(char *)((long)param_5 + 0x1d) = cVar1;
    return;
  }
  if (1e+06 <= fVar3) {
LAB_030a8008:
    *param_5 = param_2;
    return;
  }
  cVar1 = *(char *)((long)param_5 + 0x1d);
  if (param_2 <= fVar2 * fVar5 * param_1) {
    if (cVar1 != '\x04') goto LAB_030a8008;
  }
  else if (cVar1 != '\x04') {
    cVar1 = '\x02';
  }
  *(undefined1 *)((long)param_5 + 0x1b) = 1;
  *(char *)((long)param_5 + 0x1d) = cVar1;
  *param_5 = fVar2 - param_2;
  return;
}


