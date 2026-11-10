/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77820; name: FUN_02e77820
 */


void FUN_02e77820(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [48];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  iVar1 = (**(code **)(*DAT_0440a148 + 0x28))(DAT_0440a148,auStack_a8);
  if (iVar1 == 1) {
    local_78 = 1;
    local_70 = 0;
    local_60 = DAT_0440a2f8;
    local_68 = 0;
    local_50 = 2;
    local_40 = 0;
    uStack_74 = param_1;
    puStack_58 = auStack_a8;
    local_48 = param_2;
    uVar2 = (**(code **)(*DAT_0440a148 + 0x20))(DAT_0440a148,&local_78);
    (**(code **)(*DAT_0440a148 + 0x30))(DAT_0440a148,auStack_a8,uVar2);
  }
  return;
}


