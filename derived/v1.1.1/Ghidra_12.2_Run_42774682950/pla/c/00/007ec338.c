/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec338; name: FUN_007ec338
 */


void FUN_007ec338(undefined1 *param_1,long param_2,char param_3)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  uint local_18 [2];
  
  if (param_3 == '\x02') {
    local_18[0] = 0;
    FUN_007e3524(auStack_30,param_2,local_18);
    param_1[1] = 2;
    uVar1 = (local_18[0] & 0xff00ff00) >> 8 | (local_18[0] & 0xff00ff) << 8;
    *(uint *)(param_1 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    *param_1 = 0x10;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8;
  }
  return;
}


