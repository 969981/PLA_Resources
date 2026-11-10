/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed51c8; name: FUN_02ed51c8
 */


void FUN_02ed51c8(undefined4 param_1,undefined4 param_2,long *param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar1 = (**(code **)(*param_3 + 0x1f8))();
  if ((uVar1 & 1) != 0) {
    local_58 = 0;
    local_88 = *param_5;
    uStack_80 = param_5[1];
    local_78 = param_5[2];
    uStack_70 = param_5[3];
    local_68 = param_5[4];
    uStack_60 = param_5[5];
    local_90[0] = param_4;
    local_50 = param_6;
    local_48 = param_2;
    uStack_44 = param_1;
    (**(code **)(*param_3 + 0xc0))(param_3,local_90);
  }
  return;
}


