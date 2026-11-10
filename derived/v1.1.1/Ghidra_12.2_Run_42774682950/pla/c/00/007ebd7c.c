/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ebd7c; name: FUN_007ebd7c
 */


void FUN_007ebd7c(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,long param_5,
                 undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_dc;
  undefined4 local_d8 [32];
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  iVar1 = *param_2;
  if (iVar1 < 0) {
    local_d8[0] = 0x10407;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_d8 | 4),(Result *)local_58);
    puVar5 = local_d8;
    goto LAB_007ebf2c;
  }
  FUN_007ec32c(local_d8);
  local_dc = 0x10;
  uVar3 = FUN_007ec3e8(local_d8);
  lVar4 = nn::socket::RecvFrom(iVar1,param_3,(long)param_4,0x80,uVar3,&local_dc);
  if (lVar4 < 0) {
    uVar2 = nn::socket::GetLastError();
    switch(uVar2) {
    default:
      local_58[0] = 0xc485;
      uVar6 = 0x190000;
      if ((char)param_2[2] != '\x1c') {
        uVar6 = 0x180000;
      }
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
      FUN_007ee578(param_1,local_58);
      FUN_007f01d4(param_1,uVar6 | uVar2);
      return;
    case 9:
      if (iVar1 == *param_2) goto switchD_007ebe6c_caseD_16;
    case 4:
    case 0xb:
    case 0xc:
    case 0x10:
switchD_007ebe6c_caseD_4:
      local_58[0] = 0x2c09;
      break;
    case 0x16:
    case 0x58:
    case 0x5a:
    case 0x5f:
    case 0x61:
switchD_007ebe6c_caseD_16:
      local_58[0] = 0x10407;
      break;
    case 100:
    case 0x66:
    case 0x6b:
    case 0x6e:
      local_58[0] = 0xc47f;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
      FUN_007ee578(param_1,local_58);
      FUN_007f01d4(param_1,uVar2);
      return;
    case 0x68:
      local_58[0] = 0x2c18;
    }
  }
  else {
    if (lVar4 == 0) goto switchD_007ebe6c_caseD_4;
    if (param_5 != 0) {
      FUN_007ec3a8(local_d8,param_5);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = (int)lVar4;
    }
    local_58[0] = 0;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  puVar5 = local_58;
LAB_007ebf2c:
  FUN_007ee578(param_1,puVar5);
  return;
}


