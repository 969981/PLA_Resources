/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031600b4; name: FUN_031600b4
 */


void FUN_031600b4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong local_28;
  
  FUN_032bcf10(param_2,0x20,&local_28);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar6 != 0) {
      iVar7 = (int)(local_28 >> 5);
      if (0x3ffffffe < iVar7) {
        iVar7 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar8 = 0;
        lVar9 = 0;
        do {
          puVar1 = (undefined8 *)(*param_2 + lVar8);
          puVar2 = (undefined8 *)(lVar6 + lVar8);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          lVar9 = lVar9 + 1;
          uVar5 = puVar1[3];
          lVar8 = lVar8 + 0x20;
          puVar2[2] = puVar1[2];
          puVar2[3] = uVar5;
          *puVar2 = uVar3;
          puVar2[1] = uVar4;
        } while (lVar9 < (int)param_2[1]);
      }
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar7;
    }
  }
  return;
}


