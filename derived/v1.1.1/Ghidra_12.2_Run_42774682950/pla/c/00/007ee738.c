/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ee738; name: FUN_007ee738
 */


void FUN_007ee738(undefined8 param_1,uint *param_2,ErrorResultVariant *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_48;
  uint uStack_44;
  undefined4 local_38 [2];
  
  if (param_3 == (ErrorResultVariant *)0x0) {
    local_48 = 0x10407;
    goto LAB_007ee838;
  }
  if (*param_2 == 0) {
LAB_007ee7c8:
    local_48 = 0x10408;
  }
  else {
    local_48 = 0xa466;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
    if (*param_2 == local_48) {
      iVar1 = nn::err::ErrorResultVariant::GetState();
      if (iVar1 != 1) goto LAB_007ee7c8;
      uVar2 = *(undefined8 *)(param_2 + 1);
      *(uint *)(param_3 + 8) = param_2[3];
      *(undefined8 *)param_3 = uVar2;
    }
    else {
      local_48 = 0xc47f;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
      uStack_44 = FUN_007ee868(param_2);
      local_48 = uStack_44 / 10000;
      uStack_44 = uStack_44 % 10000;
      nn::err::ErrorResultVariant::operator=(param_3,(ErrorCode *)&local_48);
    }
    local_48 = 0;
  }
LAB_007ee838:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,&local_48);
  return;
}


