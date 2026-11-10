/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e05960; name: FUN_02e05960
 */


void FUN_02e05960(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*param_1 == 0x400) {
    *(undefined8 **)(param_1 + 0x14) = &local_80;
    puVar1 = *(undefined8 **)(param_1 + 0x12);
    local_80 = *puVar1;
    local_78 = puVar1[0x40];
    local_70 = *puVar1;
    local_68 = puVar1[0x80];
    local_60 = *puVar1;
    local_58 = puVar1[0xc0];
    uStack_40 = puVar1[0x100];
    local_38 = puVar1[0x180];
    local_28 = puVar1[0x240];
    uStack_50 = local_68;
    local_48 = local_58;
    uStack_30 = local_38;
  }
  FUN_02e04f70(param_3,param_2,1,param_1 + 2);
  return;
}


