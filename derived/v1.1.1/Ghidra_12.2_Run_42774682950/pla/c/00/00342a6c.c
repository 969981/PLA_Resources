/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00342a6c; name: FUN_00342a6c
 */


bool FUN_00342a6c(long param_1,long param_2,undefined4 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_108 [176];
  byte *local_58;
  byte *local_28;
  
  if (*(long *)(param_1 + 8) == 0) {
    return false;
  }
  FUN_003a3678(auStack_108,0);
                    /* try { // try from 00342aac to 00342b0b has its CatchHandler @ 00342b34 */
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_2 + 8),param_3,auStack_108);
  if ((uVar2 & 1) != 0) {
    local_28 = *(byte **)(local_58 + 0x10);
    if ((*local_58 & 1) == 0) {
      local_28 = local_58 + 1;
    }
    lVar3 = FUN_00364b6c(*(long *)(param_1 + 0x20) + 0x158,&local_28);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
      lVar3 = FUN_00343b54(param_1,auStack_108);
      bVar1 = lVar3 != 0;
      goto LAB_00342b14;
    }
  }
  bVar1 = false;
LAB_00342b14:
  FUN_003a3a04(auStack_108);
  return bVar1;
}


