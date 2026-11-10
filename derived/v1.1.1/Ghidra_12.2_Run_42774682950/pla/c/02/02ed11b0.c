/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed11b0; name: FUN_02ed11b0
 */


int FUN_02ed11b0(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  
  plVar2 = (long *)(*DAT_0442d138)(0,0x48);
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)(param_2 + 0x10);
    *plVar2 = (long)&PTR_LAB_042a7278;
    *(undefined8 *)((long)plVar2 + 0x1c) = 0;
    *(undefined8 *)((long)plVar2 + 0x24) = 0;
    *(undefined8 *)((long)plVar2 + 0x2c) = 0;
    *(undefined4 *)(plVar2 + 7) = 0;
    plVar2[8] = lVar3;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    }
    iVar1 = FUN_02e8da74(param_4,*param_1,plVar2);
    if ((iVar1 == 1) && (iVar1 = FUN_02e8dc38(param_4,param_1[1],plVar2), iVar1 == 1)) {
      FUN_02e8de18(param_4,param_1[2]);
      iVar1 = (**(code **)(*param_4 + 0x38))(param_4,0xf,*(int *)(param_2 + 0x84) + param_3,0,0);
      if (iVar1 != 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
        (*DAT_0442d150)(0,plVar2);
        return iVar1;
      }
      plVar2[1] = (long)param_4;
      *(undefined4 *)(plVar2 + 6) = *(undefined4 *)(param_2 + 0x34);
      *(undefined8 *)((long)plVar2 + 0x24) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)((long)plVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x30);
      piVar4 = *(int **)(param_2 + 0x20);
      if (*(long *)((long)plVar2 + 0x1c) != 0) {
        FUN_02e771a8();
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
      *(int **)((long)plVar2 + 0x1c) = piVar4;
      FUN_02e813f0(DAT_0440a128,plVar2,0);
      return 1;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
    (*DAT_0442d150)(0,plVar2);
  }
  return 0x34;
}


