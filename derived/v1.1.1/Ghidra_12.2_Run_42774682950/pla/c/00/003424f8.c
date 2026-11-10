/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003424f8; name: FUN_003424f8
 */


undefined8 FUN_003424f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [216];
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar1 = FUN_0036ae4c(*(long *)(param_1 + 0x20) + 0x18), lVar1 != 0)) {
    uVar3 = 0;
  }
  else {
    FUN_003a3678(auStack_f8,0);
                    /* try { // try from 00342544 to 0034257b has its CatchHandler @ 0034259c */
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                      (*(long **)(param_1 + 8),param_2,auStack_f8);
    if (((uVar2 & 1) == 0) || (lVar1 = FUN_00343b54(param_1,auStack_f8), lVar1 == 0)) {
      FUN_00343c28(*(long *)(param_1 + 0x20) + 0x18,param_2);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_003a3a04(auStack_f8);
  }
  return uVar3;
}


