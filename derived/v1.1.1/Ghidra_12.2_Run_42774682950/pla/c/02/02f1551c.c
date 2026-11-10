/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1551c; name: FUN_02f1551c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02f1551c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_40;
  undefined8 uStack_38;
  
  uVar3 = _DAT_042ab268;
  local_40 = param_2;
  uStack_38 = param_3;
  lVar4 = FUN_02eca560(&local_40);
  if (lVar4 == 0) {
    uVar5 = 2;
  }
  else {
    puVar1 = (uint *)(param_4 + 0x80);
    if (param_4 == 0) {
      puVar1 = (uint *)(lVar4 + 0x3c);
    }
    uVar2 = *puVar1;
    if ((param_2 != 0) && ((*(uint *)(param_2 + 0xec) & 0xff) != 0)) {
      uVar2 = *(uint *)(param_2 + 0xec);
    }
    if (param_4 == 0) {
      uVar5 = FUN_02f28618(param_1,param_1,uVar2,uVar3,&local_40,0);
    }
    else {
      uVar5 = FUN_02f28618(param_1,param_1,uVar2,uVar3,&local_40,param_4);
      if ((int)uVar5 == 1) {
        FUN_02f25d70(param_1,param_4,0);
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}


