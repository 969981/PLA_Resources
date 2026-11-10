/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327a32c; name: FUN_0327a32c
 */


void FUN_0327a32c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_28;
  
  FUN_032bcf10(param_2,0x30,&local_28);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar3 != 0) {
      iVar4 = (int)(local_28 / 0x30);
      if (0x3ffffffe < iVar4) {
        iVar4 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar5 = 0;
        lVar6 = 0;
        do {
          puVar1 = (undefined8 *)(*param_2 + lVar5);
          uVar7 = puVar1[3];
          puVar2 = (undefined8 *)(lVar3 + lVar5);
          lVar5 = lVar5 + 0x30;
          puVar2[5] = puVar1[5];
          puVar2[3] = uVar7;
          puVar2[1] = puVar1[1];
          *puVar2 = *puVar1;
          uVar7 = puVar1[2];
          puVar2[4] = puVar1[4];
          puVar2[2] = uVar7;
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)param_2[1]);
      }
      *param_2 = lVar3;
      *(int *)((long)param_2 + 0xc) = iVar4;
    }
  }
  return;
}


