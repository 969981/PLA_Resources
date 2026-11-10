/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fce57c; name: FUN_02fce57c
 */


void FUN_02fce57c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = (undefined4)*param_2;
  uStack_68 = CONCAT44(uVar1,uVar1);
  local_70 = CONCAT44(uVar1,uVar1);
  uVar1 = (undefined4)((ulong)*param_2 >> 0x20);
  uVar2 = (undefined4)param_2[1];
  local_30 = CONCAT44(uVar2,uVar2);
  uStack_28 = CONCAT44(uVar2,uVar2);
  uStack_48 = CONCAT44(uVar1,uVar1);
  local_50 = CONCAT44(uVar1,uVar1);
  uVar1 = (undefined4)param_2[2];
  uStack_58 = CONCAT44(uVar1,uVar1);
  local_60 = CONCAT44(uVar1,uVar1);
  uVar1 = (undefined4)((ulong)param_2[2] >> 0x20);
  uVar2 = (undefined4)param_2[3];
  local_20 = CONCAT44(uVar2,uVar2);
  uStack_18 = CONCAT44(uVar2,uVar2);
  uStack_38 = CONCAT44(uVar1,uVar1);
  local_40 = CONCAT44(uVar1,uVar1);
  FUN_02fd4ba0(param_1,&local_70);
  return;
}


