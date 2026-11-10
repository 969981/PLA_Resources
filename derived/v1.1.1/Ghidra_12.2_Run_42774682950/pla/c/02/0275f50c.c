/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275f50c; name: FUN_0275f50c
 */


undefined8 FUN_0275f50c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    local_28 = *(undefined8 *)(param_1 + 8);
    FUN_0275f5e0(&local_50,local_28,&local_28,param_1 + 0x68,param_3,param_4);
    lVar1 = local_50;
    if (local_50 == 0) {
      return 0;
    }
    uVar2 = FUN_0275f710(local_50,param_2);
    local_50 = 0;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x90);
      *(long *)(param_1 + 0x90) = lVar1;
      if (lVar3 != 0) {
        FUN_02767350(param_1 + 0x98);
      }
      *(undefined8 *)(param_1 + 0x98) = local_48;
      *(undefined8 *)(param_1 + 0xa0) = uStack_40;
      *(undefined8 *)(param_1 + 0xa8) = local_38;
      return 1;
    }
    FUN_02767e60(&local_48,lVar1);
  }
  return 0;
}


