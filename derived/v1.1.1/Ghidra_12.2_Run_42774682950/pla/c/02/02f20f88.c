/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f20f88; name: FUN_02f20f88
 */


undefined8 FUN_02f20f88(long *param_1,int param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 == 1) {
    if ((param_3 & 1) != 0) {
      iVar2 = FUN_02f2017c(param_1);
      iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2,param_1 + 5);
      if (iVar3 != 1) {
        return 2;
      }
      lVar6 = param_1[3];
      *(int *)(lVar6 + 0x29c) = iVar2 - (int)param_1[5];
      puVar1 = (uint *)(lVar6 + 0x2a3);
      *puVar1 = *puVar1 & 0xfe3fffff;
      goto LAB_02f20fc8;
    }
    iVar2 = (**(code **)(*param_1 + 0x140))(param_1,(int)param_1[5],param_1 + 5);
    if (iVar2 == 1) goto LAB_02f20fc8;
    pcVar7 = *(code **)(*param_1 + 0x140);
  }
  else {
    if (param_2 != 0) {
      if (param_2 == 2) {
        *(byte *)(param_1 + 4) =
             (byte)(*(uint *)(param_1[3] + 0x2a3) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
      }
      goto LAB_02f20fc8;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_1[3] == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined2 *)(param_1[3] + 0x2a0);
    }
    *(undefined2 *)((long)param_1 + 0x54) = uVar5;
    pcVar7 = *(code **)(*param_1 + 0x140);
  }
  uVar4 = (*pcVar7)(param_1,0,param_1 + 5);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
LAB_02f20fc8:
                    /* WARNING: Could not recover jumptable at 0x02f20fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(long *)param_1[0xb] + 0x68))();
  return uVar4;
}


