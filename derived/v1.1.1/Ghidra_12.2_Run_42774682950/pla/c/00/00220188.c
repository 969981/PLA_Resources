/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00220188; name: FUN_00220188
 */


undefined8 FUN_00220188(long *param_1,int param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 == 9) {
    lVar4 = *param_3;
    iVar1 = *(int *)(lVar4 + 0x4c);
    if (0 < iVar1) {
      if (*(char *)(lVar4 + 0x38) == '\0') {
        fVar5 = (float)FUN_0021bcb0(lVar4);
      }
      else {
        fVar5 = *(float *)(lVar4 + 0x20);
      }
      fVar5 = fVar5 * (float)iVar1;
      *(float *)(lVar4 + 0x14) =
           *(float *)(param_3 + 3) +
           fVar5 * (float)((int)((*(float *)(lVar4 + 0x14) - *(float *)(param_3 + 3)) / fVar5) + 1);
    }
    uVar2 = 1;
  }
  else if (param_2 == 10) {
    lVar3 = *param_3;
    fVar6 = *(float *)(lVar3 + 0x18);
    lVar4 = param_3[3];
    fVar5 = (float)(**(code **)(*param_1 + 0x28))(param_1,lVar3);
    *(int *)(lVar3 + 0x14) = (int)lVar4;
    uVar2 = 3;
    *(float *)(lVar3 + 0x18) = fVar6 + fVar5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


