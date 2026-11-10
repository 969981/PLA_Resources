/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00864304; name: FUN_00864304
 */


void FUN_00864304(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int local_80 [4];
  int local_70 [5];
  int local_5c;
  int local_58 [4];
  undefined4 local_48 [2];
  
  piVar3 = local_80;
  if (*(long *)(param_2 + 0x18) == 0) {
    local_58[0] = 0;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_70);
    piVar3 = local_58;
    goto LAB_008644b8;
  }
  local_5c = 0;
  local_58[0] = 0;
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_70);
  iVar1 = *(int *)(param_3 + 0x5f8);
  cVar2 = *(char *)(param_3 + 0x620);
  if (cVar2 == '\0') {
    FUN_007ebf54(local_70,*(undefined8 *)(param_2 + 0x18),param_3 + 0x30,iVar1,param_4,&local_5c);
    FUN_007ee660(local_58,local_70);
LAB_00864464:
    if (local_58[0] == 0) {
      if ((local_5c != 0) && (local_5c == iVar1)) goto LAB_0086448c;
      local_70[0] = 0x10408;
    }
    else {
      if (*(char *)(param_2 + 0x10) != '\0') {
        piVar3 = local_58;
        goto LAB_008644b8;
      }
LAB_0086448c:
      local_70[0] = 0;
    }
    local_80[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
  }
  else {
    local_70[0] = 0;
    local_80[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
    FUN_007ebc10(local_80,*(undefined8 *)(param_2 + 0x18),cVar2);
    FUN_007ee660(local_70,local_80);
    if (local_70[0] == 0) {
      FUN_007ebf54(local_70,*(undefined8 *)(param_2 + 0x18),param_3 + 0x30,iVar1,param_4,&local_5c);
      FUN_007ee660(local_58,local_70);
      local_70[0] = 0;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
      FUN_007ebc10(local_80,*(undefined8 *)(param_2 + 0x18),0);
      FUN_007ee660(local_70,local_80);
      if (local_70[0] == 0) goto LAB_00864464;
    }
    if (*(char *)(param_2 + 0x10) == '\0') {
      local_80[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_48);
      goto LAB_008644b8;
    }
  }
  piVar3 = local_70;
LAB_008644b8:
  FUN_007ee578(param_1,piVar3);
  return;
}


