/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb93ec; name: FUN_02eb93ec
 */


undefined8 FUN_02eb93ec(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 uStack_50;
  long *local_48;
  
  local_48 = param_3 + 7;
  param_1 = (undefined8 *)*param_1;
  local_58 = &PTR_LAB_042a9e60;
  uStack_50 = param_2;
  if (*(uint *)(param_3 + 0xd) != 0) {
    puVar6 = (undefined8 *)param_3[0xc];
    lVar7 = (ulong)*(uint *)(param_3 + 0xd) << 3;
    do {
      plVar5 = (long *)*puVar6;
      iVar4 = (int)plVar5[9];
      if (iVar4 == 1) {
LAB_02eb9438:
        puVar1 = param_1 + 0x10;
        if (param_1[0xc] != 0) {
          puVar1 = (undefined8 *)(param_1[0xc] + 0xc);
        }
        local_88 = param_1[8];
        local_80 = *(undefined4 *)(param_1 + 0xb);
        local_78 = *(undefined4 *)((long)param_1 + 0x54);
        local_70 = *(undefined1 *)((long)param_1 + 0x51);
        local_68 = *(undefined1 *)(param_1 + 10);
        local_60 = param_1[3];
        FUN_02ee1cfc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)puVar1,plVar5,(int)param_3[2],
                     &local_88,&local_58,0);
      }
      else if ((int)plVar5[1] == 7 || (int)plVar5[1] == 0) {
        uVar2 = (**(code **)(*param_3 + 0x38))(param_3);
        if ((uVar2 & 1) == 0) {
          iVar4 = (int)plVar5[9];
          goto LAB_02eb94dc;
        }
      }
      else {
LAB_02eb94dc:
        if ((iVar4 != 2) ||
           ((*(long *)(*plVar5 + 8) != 0 && (*(int *)(*(long *)(*plVar5 + 8) + 0x18) != 0))))
        goto LAB_02eb9438;
      }
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uVar2 = FUN_02ec1600(param_1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = *(int *)((long)param_1 + 0x74) + -1;
    *(int *)((long)param_1 + 0x74) = iVar4;
    if (iVar4 == 0) {
      (**(code **)*param_1)(param_1);
      (*DAT_0442d150)(0,param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}


