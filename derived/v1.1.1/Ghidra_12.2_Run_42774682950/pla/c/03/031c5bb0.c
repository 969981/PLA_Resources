/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c5bb0; name: FUN_031c5bb0
 */


void FUN_031c5bb0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_38;
  
  FUN_032bcf10(param_2,0x38,&local_38);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_38,&local_38);
    if (lVar3 != 0) {
      iVar4 = (int)(local_38 / 0x38);
      if (0x3ffffffe < iVar4) {
        iVar4 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar5 = 0;
        lVar6 = 0x28;
        do {
          lVar7 = *param_2;
          puVar1 = (undefined8 *)(lVar3 + lVar6);
          puVar1[-3] = 1;
          puVar1[-5] = &PTR_LAB_0430a810;
          puVar1[-4] = 0xffffffff;
          puVar2 = (undefined8 *)(lVar7 + lVar6);
          lVar6 = lVar6 + 0x38;
          puVar1[-2] = puVar2[-2];
          puVar2[-2] = 0;
          puVar1[-1] = puVar2[-1];
          puVar2[-1] = 0;
          uVar8 = *puVar2;
          *(undefined8 *)((long)puVar1 + 6) = *(undefined8 *)((long)puVar2 + 6);
          *puVar1 = uVar8;
          lVar5 = lVar5 + 1;
        } while (lVar5 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar5 = 0;
          lVar6 = 0;
          do {
            (**(code **)(*(long *)(*param_2 + lVar5) + 8))();
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 0x38;
          } while (lVar6 < (int)param_2[1]);
        }
      }
      *param_2 = lVar3;
      *(int *)((long)param_2 + 0xc) = iVar4;
    }
  }
  return;
}


