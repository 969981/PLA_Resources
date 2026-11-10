/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00286090; name: FUN_00286090
 */


int FUN_00286090(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00285e60();
  iVar2 = iVar1;
  if ((*param_5 <= *param_4) && ((*param_5 < *param_4 || ((int)param_5[1] < (int)param_4[1])))) {
    uVar3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar3;
    iVar2 = iVar1 + 1;
    if ((*param_4 <= *param_3) && ((*param_4 < *param_3 || ((int)param_4[1] < (int)param_3[1])))) {
      uVar3 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)param_4 = uVar3;
      iVar2 = iVar1 + 2;
      if ((*param_3 <= *param_2) && ((*param_3 < *param_2 || ((int)param_3[1] < (int)param_2[1]))))
      {
        uVar3 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = uVar3;
        iVar2 = iVar1 + 3;
        if ((*param_2 <= *param_1) && ((*param_2 < *param_1 || ((int)param_2[1] < (int)param_1[1])))
           ) {
          uVar3 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar3;
          iVar2 = iVar1 + 4;
        }
      }
    }
  }
  return iVar2;
}


