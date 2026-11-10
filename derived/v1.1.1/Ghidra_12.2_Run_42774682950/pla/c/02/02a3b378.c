/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3b378; name: FUN_02a3b378
 */


undefined8 FUN_02a3b378(long param_1,byte param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if ((param_2 < 2) && ((int)param_3 < 0x13)) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + (ulong)param_2 * 0x260 +
                      (ulong)param_3 * 0x20 + 8);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x1c);
      if (uVar1 == 0) {
        *(undefined8 *)(lVar3 + 0x18) = 0x100000000;
        *(undefined8 *)(lVar3 + 0x10) = *param_4;
      }
      else {
        if ((0x12 < *(uint *)(lVar3 + 8)) ||
           (*(uint *)(&DAT_03a7f17c +
                     *(long *)(&DAT_03a80d10 + (long)(int)*(uint *)(lVar3 + 8) * 8) * 8) <= uVar1))
        {
          return 0;
        }
        *(uint *)(lVar3 + 0x1c) = uVar1 + 1;
      }
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x47,param_2,(ulong)param_3,
                   *(undefined4 *)((long)param_4 + 4),*(undefined4 *)param_4);
      uVar2 = 1;
    }
  }
  return uVar2;
}


