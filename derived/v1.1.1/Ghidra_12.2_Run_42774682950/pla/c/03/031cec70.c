/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cec70; name: FUN_031cec70
 */


undefined8 FUN_031cec70(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_38;
  
  FUN_032bcf10(param_2,0x68,&local_38);
  if ((int)param_2[1] == 0) {
    uVar2 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_38,&local_38);
    if (lVar1 == 0) {
      uVar2 = 0x80040200;
    }
    else {
      iVar3 = (int)(local_38 / 0x68);
      if (0x3ffffffe < iVar3) {
        iVar3 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar5 = 0;
        lVar6 = 0;
        do {
          lVar4 = *param_2;
          *(undefined4 *)(lVar1 + lVar5) = *(undefined4 *)(lVar4 + lVar5);
          FUN_031ced98((undefined4 *)(lVar1 + lVar5) + 2,(undefined4 *)(lVar4 + lVar5) + 2);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0x68;
        } while (lVar6 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar6 = 0;
          lVar5 = 8;
          do {
            FUN_031cd728(*param_2 + lVar5);
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 0x68;
          } while (lVar6 < (int)param_2[1]);
        }
      }
      uVar2 = 0;
      *param_2 = lVar1;
      *(int *)((long)param_2 + 0xc) = iVar3;
    }
  }
  return uVar2;
}


