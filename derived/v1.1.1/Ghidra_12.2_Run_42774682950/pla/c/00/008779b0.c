/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008779b0; name: FUN_008779b0
 */


void FUN_008779b0(long param_1,uint param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  puVar2 = &local_90;
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  if (0 < (int)param_2) {
    uVar5 = (ulong)param_2;
    puVar1 = &local_50;
    lVar6 = *param_3;
    while( true ) {
      if (lVar6 != 0) {
        *puVar1 = *(undefined8 *)(lVar6 + 8);
        *puVar2 = *(undefined8 *)(lVar6 + 0x10);
      }
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
      param_3 = param_3 + 1;
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) break;
      lVar6 = *param_3;
    }
  }
  if (param_4 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_4 + 8);
    uVar4 = *(undefined8 *)(param_4 + 0x10);
  }
  (**(code **)PTR_DAT_04378580)
            (*(undefined8 *)(param_1 + 0xb0),param_2,&local_50,&local_90,uVar3,uVar4);
  return;
}


