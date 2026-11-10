/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e1608; name: FUN_001e1608
 */


ulong FUN_001e1608(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int local_54;
  long local_48;
  
  local_48 = 0;
  lVar5 = *param_1;
  *param_4 = 0;
  if (*(long *)(lVar5 + 0xe8) != 0) {
    FUN_001f43b0(lVar5,3,2);
  }
  lVar2 = FUN_001e12cc(param_1,param_2,param_3);
  local_48 = lVar2;
  if (lVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    FUN_001f3934(lVar5,"Hostname %s was found in DNS cache\n",param_2);
    uVar4 = 0;
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  if (*(long *)(lVar5 + 0xe8) != 0) {
    FUN_001f43f8(lVar5,3);
  }
  if (lVar2 == 0) {
    local_54 = 0;
    uVar3 = FUN_001e0ffc(param_1);
    if ((uVar3 & 1) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(lVar5 + 0xf00) != 0) {
      FUN_001e95f0(lVar5,1);
      iVar1 = (**(code **)(lVar5 + 0xf00))
                        (*(undefined8 *)(lVar5 + 0x1288),0,*(undefined8 *)(lVar5 + 0xf08));
      FUN_001e95f0(lVar5,0);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    if ((*(byte *)(lVar5 + 0xf47) & 1) == 0) {
      lVar2 = thunk_FUN_001dfc64(param_1,param_2,param_3,&local_54);
    }
    else {
      lVar2 = FUN_001e1d6c(param_1,param_2,param_3,&local_54);
    }
    if (lVar2 == 0) {
      if (local_54 != 0) {
        iVar1 = FUN_001e17f4(param_1,&local_48);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar4 = (ulong)(local_48 == 0);
      }
    }
    else {
      if (*(long *)(lVar5 + 0xe8) != 0) {
        FUN_001f43b0(lVar5,3,2);
      }
      local_48 = FUN_001e13b4(lVar5,lVar2,param_2,param_3);
      if (*(long *)(lVar5 + 0xe8) != 0) {
        FUN_001f43f8(lVar5,3);
      }
      if (local_48 == 0) {
        FUN_001dffa4(lVar2);
      }
      else {
        uVar4 = 0;
      }
    }
    lVar2 = local_48;
  }
  *param_4 = lVar2;
  return uVar4;
}


