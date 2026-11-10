/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03278d40; name: FUN_03278d40
 */


void FUN_03278d40(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong local_28;
  
  FUN_032bcf10(param_2,0x10,&local_28);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar2 != 0) {
      iVar3 = (int)(local_28 >> 4);
      if (0x3ffffffe < iVar3) {
        iVar3 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar4 = 0;
        lVar5 = 0;
        do {
          uVar1 = ((undefined8 *)(*param_2 + lVar4))[1];
          lVar5 = lVar5 + 1;
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*param_2 + lVar4);
          ((undefined8 *)(lVar2 + lVar4))[1] = uVar1;
          lVar4 = lVar4 + 0x10;
        } while (lVar5 < (int)param_2[1]);
      }
      *param_2 = lVar2;
      *(int *)((long)param_2 + 0xc) = iVar3;
    }
  }
  return;
}


