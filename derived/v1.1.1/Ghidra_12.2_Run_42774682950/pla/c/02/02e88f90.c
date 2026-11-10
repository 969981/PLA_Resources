/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e88f90; name: FUN_02e88f90
 */


void FUN_02e88f90(long *param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined4 local_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  uint uStack_2c;
  undefined8 local_28;
  long *plStack_20;
  undefined4 local_14;
  
  uStack_2f = param_3 == 0;
  local_34 = local_34 & 0xffffff00;
  local_30 = 0;
  uStack_2e = 0;
  uStack_2c = uStack_2c & 0xffffff00;
  local_38 = *(byte *)((long)param_1 + 0x36) & 0x1f;
  plStack_20 = param_1 + 7;
  local_28 = 0;
  local_14 = DAT_0440a840;
  pbVar6 = (byte *)param_1[4];
  pbVar5 = (byte *)0x0;
  if (pbVar6 != (byte *)0x0) {
    uVar4 = 0;
    pbVar7 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      pbVar5 = pbVar7;
      if (pbVar6[uVar4 + 1] == 0x10) break;
      uVar4 = uVar4 + 1;
      pbVar5 = (byte *)0x0;
      pbVar7 = pbVar7 + 4;
    } while (uVar4 < *pbVar6);
  }
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)&local_14;
  }
  iVar3 = *(int *)pbVar5;
  pbVar5 = (byte *)param_1[5];
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  if (pbVar5 != (byte *)0x0) {
    uVar4 = 0;
    pbVar6 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
    do {
      if (pbVar5[uVar4 + 1] == 0x10) {
        iVar1 = FUN_02e87b38(pbVar6);
        iVar3 = iVar1 + iVar3;
        break;
      }
      uVar4 = uVar4 + 1;
      pbVar6 = pbVar6 + 8;
    } while (uVar4 < *pbVar5);
  }
  iStack_3c = iVar3;
  uVar2 = (**(code **)(*param_1 + 0x70))(param_1,&local_50);
  local_70 = CONCAT44(iStack_3c,local_40);
  local_68 = CONCAT44(local_34,local_38);
  uStack_60 = CONCAT44(uStack_2c,CONCAT22(uStack_2e,CONCAT11(uStack_2f,local_30)));
  local_58 = local_28;
  local_80 = CONCAT44(uStack_4c,local_50);
  lStack_78 = local_48;
  FUN_02e88e74(uVar2,&local_80);
  FUN_02e9faa0(&local_50);
  return;
}


