/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033f7f4; name: FUN_0033f7f4
 */


undefined8 FUN_0033f7f4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [176];
  byte *local_48;
  byte *local_18;
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar1 = FUN_0036ae4c(*(long *)(param_1 + 0x20) + 0x40), lVar1 != 0)) {
    return 0;
  }
  FUN_003a3678(auStack_f8,0);
                    /* try { // try from 0033f834 to 0033f8bb has its CatchHandler @ 0033f8dc */
  uVar2 = FUN_00344048(param_1,param_2);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x18))
                        (*(long **)(param_1 + 8),param_2,auStack_f8), (uVar2 & 1) != 0)) {
    local_18 = *(byte **)(local_48 + 0x10);
    if ((*local_48 & 1) == 0) {
      local_18 = local_48 + 1;
    }
    lVar1 = FUN_00364b6c(*(long *)(param_1 + 0x20) + 0x158,&local_18);
    if (((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) &&
       (lVar1 = FUN_00343b54(param_1,auStack_f8), lVar1 != 0)) {
      uVar3 = 1;
      goto LAB_0033f8c0;
    }
  }
  FUN_00343c28(*(long *)(param_1 + 0x20) + 0x40,param_2);
  uVar3 = 0;
LAB_0033f8c0:
  FUN_003a3a04(auStack_f8);
  return uVar3;
}


