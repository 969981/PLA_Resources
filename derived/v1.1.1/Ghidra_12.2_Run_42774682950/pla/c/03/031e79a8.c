/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e79a8; name: FUN_031e79a8
 */


void FUN_031e79a8(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong local_28;
  
  FUN_032bcf10(param_2,8,&local_28);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar1 != 0) {
      iVar2 = (int)(local_28 >> 3);
      if (0x3ffffffe < iVar2) {
        iVar2 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar3 = 0;
        do {
          lVar4 = lVar3 * 8;
          lVar3 = lVar3 + 1;
          *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(*param_2 + lVar4);
        } while (lVar3 < (int)param_2[1]);
      }
      *param_2 = lVar1;
      *(int *)((long)param_2 + 0xc) = iVar2;
    }
  }
  return;
}


