/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338cbf4; name: FUN_0338cbf4
 */


undefined8 FUN_0338cbf4(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_28;
  
  FUN_032bcf10(param_2,0x10,&local_28);
  if ((int)param_2[1] == 0) {
    uVar4 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar1 == 0) {
      uVar4 = 0x80040200;
    }
    else {
      iVar2 = (int)(local_28 >> 4);
      if (0x3ffffffe < iVar2) {
        iVar2 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar3 = 0;
        lVar5 = 0;
        do {
          uVar4 = ((undefined8 *)(*param_2 + lVar3))[1];
          lVar5 = lVar5 + 1;
          *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(*param_2 + lVar3);
          ((undefined8 *)(lVar1 + lVar3))[1] = uVar4;
          lVar3 = lVar3 + 0x10;
        } while (lVar5 < (int)param_2[1]);
      }
      uVar4 = 0;
      *param_2 = lVar1;
      *(int *)((long)param_2 + 0xc) = iVar2;
    }
  }
  return uVar4;
}


