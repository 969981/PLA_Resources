/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f105c; name: FUN_007f105c
 */


void FUN_007f105c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  size_t __n;
  uint local_40 [4];
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = FUN_007e362c(param_2);
  if ((uVar2 & 1) == 0) {
    local_40[0] = 0;
    FUN_007e3524(&local_30,param_2,local_40);
    uVar1 = (local_40[0] & 0xff00ff00) >> 8 | (local_40[0] & 0xff00ff) << 8;
    __n = 4;
    local_30 = CONCAT44(local_30._4_4_,uVar1 >> 0x10 | uVar1 << 0x10);
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    FUN_007e3670(local_40,param_2,&local_30);
    __n = 0x10;
  }
  memcpy((void *)(param_1 + 8),&local_30,__n);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  return;
}


