/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e88d04; name: FUN_02e88d04
 */


undefined8 FUN_02e88d04(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_34;
  
  plVar2 = (long *)FUN_02e8766c();
  if (plVar2 == (long *)0x0) {
    uVar3 = 0xf;
  }
  else {
    local_54 = 0;
    local_48 = 0;
    local_50 = 0;
    local_4c = 0;
    local_58 = *(byte *)((long)param_1 + 0x36) & 0x1f;
    local_34 = DAT_0440a840;
    pbVar7 = (byte *)param_1[4];
    pbVar4 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      uVar5 = 0;
      pbVar6 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
      do {
        pbVar4 = pbVar6;
        if (pbVar7[uVar5 + 1] == 0x10) break;
        uVar5 = uVar5 + 1;
        pbVar4 = (byte *)0x0;
        pbVar6 = pbVar6 + 4;
      } while (uVar5 < *pbVar7);
    }
    pbVar6 = (byte *)param_1[5];
    pbVar7 = (byte *)&local_34;
    if (pbVar4 != (byte *)0x0) {
      pbVar7 = pbVar4;
    }
    iVar8 = *(int *)pbVar7;
    local_70[0] = param_2;
    local_68 = param_3;
    local_60 = param_4;
    if (pbVar6 != (byte *)0x0) {
      uVar5 = 0;
      pbVar4 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
      do {
        if (pbVar6[uVar5 + 1] == 0x10) {
          iVar1 = FUN_02e87b38(pbVar4);
          iVar8 = iVar1 + iVar8;
          break;
        }
        uVar5 = uVar5 + 1;
        pbVar4 = pbVar4 + 8;
      } while (uVar5 < *pbVar6);
    }
    local_5c = iVar8;
    (**(code **)(*param_1 + 0x70))(param_1,local_70);
    (**(code **)(*plVar2 + 0x98))(plVar2,local_70);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar3 = 1;
  }
  return uVar3;
}


