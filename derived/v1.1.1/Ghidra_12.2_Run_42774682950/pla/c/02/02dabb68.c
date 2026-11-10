/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dabb68; name: FUN_02dabb68
 */


float FUN_02dabb68(long param_1)

{
  int *piVar1;
  ushort *puVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar1 = *(int **)(param_1 + 0x220);
  if (piVar1 == (int *)0x0) {
    fVar7 = 0.0;
  }
  else {
    puVar2 = (ushort *)((long)piVar1 - (long)*piVar1);
    if (*puVar2 < 7) {
      fVar7 = 1.1;
      fVar6 = 0.9;
    }
    else {
      if ((ulong)puVar2[3] == 0) {
        fVar6 = 0.9;
      }
      else {
        fVar6 = *(float *)((long)piVar1 + (ulong)puVar2[3]);
      }
      if ((*puVar2 < 9) || ((ulong)puVar2[4] == 0)) {
        fVar7 = 1.1;
      }
      else {
        fVar7 = *(float *)((long)piVar1 + (ulong)puVar2[4]);
      }
    }
    fVar4 = (float)(**(code **)PTR_PTR_0437a4c8)(0x3f000000);
    piVar1 = *(int **)(param_1 + 0x220);
    fVar5 = 0.0;
    if ((0x1a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar3 != 0)) {
      fVar5 = *(float *)((long)piVar1 + uVar3);
    }
    fVar7 = (fVar5 * *(float *)(param_1 + 0x270)) / (fVar6 + (fVar7 - fVar6) * fVar4);
  }
  return fVar7;
}


