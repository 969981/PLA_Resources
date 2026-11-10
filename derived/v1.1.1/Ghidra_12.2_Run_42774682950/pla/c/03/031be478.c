/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031be478; name: FUN_031be478
 */


uint FUN_031be478(undefined8 param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_031c1688(&local_80);
  uStack_78 = *(undefined8 *)(param_2 + 0x28);
  local_80 = *(undefined8 *)(param_2 + 0x20);
  lVar1 = param_4 + 0x50;
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)param_3 * 0x10);
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  local_60 = *(undefined4 *)(param_2 + 0x40);
  local_5c = *(undefined4 *)(*(long *)(param_2 + 0x48) + (long)param_3 * 4);
  local_58 = *(undefined4 *)(param_2 + 0x58);
  local_54 = *(undefined8 *)(param_2 + 0x5c);
  local_48 = *(undefined8 *)(param_2 + 0x80);
  uStack_40 = *(undefined8 *)(param_2 + 0x88);
  lVar2 = param_4 + 0x18;
  lVar3 = param_4 + 0x58;
  if (param_4 == 0) {
    lVar1 = 0;
    lVar3 = 0;
    lVar2 = 0;
  }
  uVar5 = FUN_031c16a0(param_1,&local_80,lVar2,0,lVar1,lVar3);
  if (param_4 != 0) {
    uVar6 = 1;
    if ((uVar5 & 1) == 0) {
      uVar6 = 2;
    }
    *(undefined1 *)(param_4 + 0x5c) = uVar6;
  }
  return uVar5 & 1;
}


