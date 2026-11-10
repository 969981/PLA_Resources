/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067dda8; name: FUN_0067dda8
 */


void FUN_0067dda8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  FUN_0064ef38(auStack_38);
  bVar3 = *(byte *)(param_2 + 0x50);
  lVar4 = *(long *)(param_2 + 0x60);
  FUN_006813bc(auStack_60,param_2);
  local_48 = 0;
  local_40 = (long *)FUN_00612290();
  local_58 = (**(code **)(*local_40 + 0x10))(local_40,8,8);
  lVar1 = local_58 + 8;
  local_48 = lVar1;
  FUN_00680b70(local_58,auStack_60);
  lVar2 = param_2 + 0x51;
  if ((bVar3 & 1) != 0) {
    lVar2 = lVar4;
  }
  local_50 = lVar1;
  FUN_0064efa8(auStack_38,lVar2,&local_58);
  lVar2 = local_58;
  lVar1 = local_50;
  if (local_58 != 0) {
    while (lVar1 != lVar2) {
      FUN_00680b34(lVar1 + -8);
      lVar1 = lVar1 + -8;
    }
    local_50 = lVar2;
    (**(code **)(*local_40 + 0x18))(local_40,local_58,local_48 - local_58,8);
  }
  FUN_00680b34(auStack_60);
                    /* try { // try from 0067de88 to 0067de8f has its CatchHandler @ 0067deac */
  FUN_0067dc4c(param_1 + 0x30,auStack_38);
  FUN_0064ef40(auStack_38);
  return;
}


