/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00814ff0; name: FUN_00814ff0
 */


void FUN_00814ff0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_40[0] = 0x2c09;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    goto LAB_008150d4;
  }
  local_40[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  if (*(char *)(*(long *)(param_2 + 0x58) + 0x1190) == '\0') {
LAB_00815090:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    if (*(char *)(param_2 + 0x110) != '\0') {
      FUN_0081516c(local_50,param_2,*(undefined8 *)(param_2 + 0x108),param_3);
      FUN_007ee660(local_40,local_50);
      local_28[0] = 0;
      local_50[0] = 0x2c09;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      if (local_40[0] != local_50[0]) {
        if (local_40[0] == 0) {
          *(undefined1 *)(param_2 + 0x110) = 0;
        }
        goto LAB_008150d4;
      }
      goto LAB_00815090;
    }
    FUN_0081516c(local_50,param_2,*(undefined8 *)(param_2 + 0x18),param_3);
    FUN_007ee660(local_40,local_50);
    local_28[0] = 0;
    local_50[0] = 0x2c09;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    if (local_40[0] != local_50[0]) {
      if (local_40[0] == 0) {
        *(undefined1 *)(param_2 + 0x110) = 1;
      }
      goto LAB_008150d4;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x108);
  }
  FUN_0081516c(local_50,param_2,uVar1,param_3);
  FUN_007ee660(local_40,local_50);
LAB_008150d4:
  FUN_007ee578(param_1,local_40);
  return;
}


