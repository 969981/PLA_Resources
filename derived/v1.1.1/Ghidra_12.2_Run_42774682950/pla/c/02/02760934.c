/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02760934; name: FUN_02760934
 */


undefined8
FUN_02760934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN_02760a00(&local_50,local_28,&local_28,param_1 + 0x68,param_3,param_4,param_5,param_6);
  lVar1 = local_50;
  if (local_50 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_02760b48(local_50,param_2);
    local_50 = 0;
    if ((uVar2 & 1) == 0) {
      FUN_0276aff4(&local_48,lVar1);
      uVar3 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0xb0);
      *(long *)(param_1 + 0xb0) = lVar1;
      if (lVar4 != 0) {
        FUN_02767350(param_1 + 0xb8);
      }
      uVar3 = 1;
      *(undefined8 *)(param_1 + 0xb8) = local_48;
      *(undefined8 *)(param_1 + 0xc0) = uStack_40;
      *(undefined8 *)(param_1 + 200) = local_38;
    }
  }
  return uVar3;
}


