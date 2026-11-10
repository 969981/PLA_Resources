/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004972b0; name: FUN_004972b0
 */


undefined8 FUN_004972b0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_18;
  
  uVar4 = FUN_00422cf0();
  iVar1 = FUN_00422a60(param_1,0xffffffff,0xf8,0xd,0,&local_18);
  if (((0 < iVar1) && (iVar1 = FUN_00452510(param_1,0x3f8,0x1008,0,&local_28), 0 < iVar1)) &&
     (iVar1 = FUN_00452510(param_1,0x18,0x1007,0,&local_2c), iVar1 != 0)) {
    if (local_2c == 0xffffffff) {
      local_2c = FUN_0041ccc0(local_18);
    }
    else if (local_2c + 3 < 2) {
      iVar1 = FUN_00422d70(uVar4);
      iVar2 = FUN_0041ccc0(local_18);
      local_2c = (iVar1 - iVar2) - 2;
      uVar3 = FUN_00422d30(uVar4);
      if ((uVar3 & 7) == 1) {
        local_2c = local_2c - 1;
      }
      if ((int)local_2c < 0) {
        return 0;
      }
    }
    lVar5 = FUN_00495790(local_18,local_28,local_2c);
    if (lVar5 != 0) {
      uVar4 = FUN_0041eda0(lVar5,PTR_DAT_043742f0,0);
      FUN_00452d20(lVar5);
      return uVar4;
    }
  }
  return 0;
}


