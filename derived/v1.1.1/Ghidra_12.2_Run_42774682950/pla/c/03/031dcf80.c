/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dcf80; name: FUN_031dcf80
 */


undefined8 FUN_031dcf80(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong local_28;
  
  FUN_032bcf10(param_2,0xc,&local_28);
  if ((int)param_2[1] == 0) {
    uVar6 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar3 == 0) {
      uVar6 = 0x80040200;
    }
    else {
      iVar4 = (int)(local_28 / 0xc);
      if (0x3ffffffe < iVar4) {
        iVar4 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar5 = 0;
        lVar7 = 0;
        do {
          puVar1 = (undefined1 *)(*param_2 + lVar5);
          puVar2 = (undefined1 *)(lVar3 + lVar5);
          lVar5 = lVar5 + 0xc;
          *puVar2 = *puVar1;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
          *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar1 + 8);
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)param_2[1]);
      }
      uVar6 = 0;
      *param_2 = lVar3;
      *(int *)((long)param_2 + 0xc) = iVar4;
    }
  }
  return uVar6;
}


