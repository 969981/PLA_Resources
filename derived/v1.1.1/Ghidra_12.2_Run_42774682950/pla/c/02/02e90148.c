/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e90148; name: FUN_02e90148
 */


undefined4 FUN_02e90148(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = 1;
  if (param_2[0xc] != 1) {
    uVar4 = 2;
  }
  local_78 = *(undefined8 *)param_2;
  local_70 = *(undefined8 *)(param_2 + 2);
  uStack_68 = *(undefined8 *)(param_2 + 4);
  local_60 = *(undefined8 *)(param_2 + 6);
  uStack_58 = *(undefined8 *)(param_2 + 8);
  local_50 = *(undefined8 *)(param_2 + 10);
  uStack_48 = *(undefined8 *)(param_2 + 0xc);
  local_40 = *(undefined8 *)(param_2 + 0xe);
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = FUN_02e94ae4(param_1,&local_78,uVar4,1,(char)param_2[0xd]);
  uVar5 = *param_2;
  if (1 < uVar5) {
    if (uVar5 - 2 < 2) {
      uVar5 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar5 = 0;
      }
      goto LAB_02e901c0;
    }
    if (1 < uVar5 - 6) {
      uVar5 = 0;
      goto LAB_02e901c0;
    }
  }
  uVar5 = param_2[1];
LAB_02e901c0:
  uVar3 = param_2[10];
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xf4) = uVar4;
  if (uVar3 != 2) {
    uVar6 = 0;
  }
  FUN_02e9823c(param_1 + 0xf8,uVar1,uVar5,uVar6,uVar4,uVar2);
  return uVar4;
}


