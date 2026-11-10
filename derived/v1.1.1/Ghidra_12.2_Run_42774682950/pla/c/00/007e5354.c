/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5354; name: FUN_007e5354
 */


void FUN_007e5354(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 uVar4;
  ulong local_48;
  undefined4 local_40;
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  local_48 = local_48 & 0xffffffff00000000;
  local_38[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
  FUN_007ee578(local_38,&local_48);
  if (*PTR_DAT_04377430 == '\0') {
LAB_007e5444:
    puVar3 = local_38;
    goto LAB_007e5448;
  }
  if (param_2[0xb6] == 0) {
    uVar4 = 0x10408;
  }
  else {
    uVar2 = FUN_007e5f0c(param_2 + 0x17);
    if ((uVar2 & 1) == 0) {
      puVar1 = param_2 + 0xb1;
      uVar2 = FUN_007e3604(puVar1);
      if ((uVar2 & 1) == 0) {
        uVar4 = 0x6486;
        goto LAB_007e53e0;
      }
      if (*(char *)(param_2 + 0xb5) == '\0') {
        (*(code *)param_2[0xb6])(&local_48,puVar1,*param_2,*(undefined4 *)(param_2 + 3));
        FUN_007ee660(local_38,&local_48);
        if ((int)local_38[0] == 0) {
          local_48 = 0x2000000000000000;
          local_40 = 0;
          FUN_007e45fc(puVar1,&local_48);
        }
        goto LAB_007e5444;
      }
    }
    uVar4 = 0x4c11;
  }
LAB_007e53e0:
  local_48 = CONCAT44(local_48._4_4_,uVar4);
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_28);
  puVar3 = &local_48;
LAB_007e5448:
  FUN_007ee578(param_1,puVar3);
  return;
}


