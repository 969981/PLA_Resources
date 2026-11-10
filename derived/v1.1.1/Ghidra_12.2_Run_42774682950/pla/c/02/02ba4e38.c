/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba4e38; name: FUN_02ba4e38
 */


void FUN_02ba4e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_80 [2];
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_78 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x1f0);
  local_80[0] = param_8;
  if (lVar3 == 0) {
    FUN_02ba53e0(&local_70,local_78,&local_78);
    lVar3 = local_70;
    local_70 = 0;
    lVar4 = *(long *)(param_1 + 0x1f0);
    *(long *)(param_1 + 0x1f0) = lVar3;
    if (lVar4 == 0) {
      *(undefined8 *)(param_1 + 0x208) = local_58;
      *(undefined8 *)(param_1 + 0x1f8) = local_68;
      *(undefined8 *)(param_1 + 0x200) = local_60;
      local_70 = 0;
    }
    else {
      FUN_02ba5518(param_1 + 0x1f8);
      lVar3 = local_70;
      *(undefined8 *)(param_1 + 0x208) = local_58;
      *(undefined8 *)(param_1 + 0x1f8) = local_68;
      *(undefined8 *)(param_1 + 0x200) = local_60;
      local_70 = 0;
      if (lVar3 != 0) {
        FUN_02ba5518(&local_68);
      }
    }
    lVar3 = *(long *)(param_1 + 0x1f0);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (*(int *)(lVar3 + 0x74) == 2) {
    uVar2 = FUN_02ba57e0(0,lVar3,param_2,lVar3 + 8,param_3,lVar3 + 0x18,param_4,lVar3 + 0x30,param_5
                         ,lVar3 + 0x38,param_6,lVar3 + 0x48,param_7,lVar3 + 0x70,local_80);
    if (((uVar2 & 1) == 0) && (!bVar1)) {
      return;
    }
  }
  else {
    *(undefined4 *)(lVar3 + 0x74) = 2;
    FUN_02ba57e0(1,lVar3,param_2,lVar3 + 8,param_3,lVar3 + 0x18,param_4,lVar3 + 0x30,param_5,
                 lVar3 + 0x38,param_6,lVar3 + 0x48,param_7,lVar3 + 0x70,local_80);
  }
  lVar4 = *(long *)(param_1 + 0x240);
  for (lVar3 = *(long *)(param_1 + 0x238); lVar3 != lVar4; lVar3 = lVar3 + 0x18) {
    *(undefined1 *)(lVar3 + 0x10) = 1;
  }
  return;
}


