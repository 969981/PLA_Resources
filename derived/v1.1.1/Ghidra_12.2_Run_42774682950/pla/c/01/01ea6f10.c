/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea6f10; name: FUN_01ea6f10
 */


float FUN_01ea6f10(float param_1,float param_2,long param_3,int param_4,int param_5,uint param_6,
                  int param_7,uint param_8)

{
  ushort uVar1;
  int *piVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  
  pcVar3 = *(char **)(param_3 + 0x208);
  if (*pcVar3 == '\0') {
    piVar2 = *(int **)(pcVar3 + 0x10);
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(pcVar3 + 8);
    }
    fVar5 = 0.0;
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2f) goto LAB_01ea6f64;
    uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x17];
  }
  else {
    piVar2 = *(int **)(pcVar3 + 0x18);
    fVar5 = 0.0;
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2b) goto LAB_01ea6f64;
    uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x15];
  }
  fVar5 = 0.0;
  if ((ulong)uVar1 != 0) {
    fVar5 = *(float *)((long)piVar2 + (ulong)uVar1);
  }
LAB_01ea6f64:
  if (param_4 < param_5) {
    fVar4 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)param_6 * 8))
                             ((float)param_4 / (float)param_5);
    fVar5 = (fVar5 - param_1) * fVar4 + param_1;
  }
  else if ((param_4 - param_7 != 0 && param_7 <= param_4) && (0 < param_7)) {
    fVar4 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)param_8 * 8))
                             ((float)(param_4 - param_7) / (float)param_7);
    fVar5 = fVar5 + (param_2 - fVar5) * fVar4;
  }
  return fVar5;
}


