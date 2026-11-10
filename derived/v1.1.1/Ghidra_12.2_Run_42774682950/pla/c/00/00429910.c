/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00429910; name: FUN_00429910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00429910(void *param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong __n;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [128];
  undefined8 local_40;
  
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_108 = _UNK_038892c8;
  local_110 = _DAT_038892c0;
  uStack_f8 = _UNK_0388a158;
  uStack_100 = _DAT_0388a150;
  lVar1 = 0x439e870;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  local_40 = 0x4000000000;
  uStack_e8 = _UNK_0388a168;
  local_f0 = _DAT_0388a160;
  uStack_d8 = _UNK_03889058;
  uStack_e0 = _DAT_03889050;
  if (param_2 != 0) {
    local_d0 = param_2 << 3;
    uStack_c8 = param_2 >> 0x3d;
    __n = param_2;
    if (0x7f < param_2) {
      FUN_004285d0(&local_110,param_1,param_2 >> 7);
      __n = param_2 & 0x7f;
      if (__n == 0) goto LAB_004299c0;
      param_1 = (void *)((long)param_1 + (param_2 - __n));
    }
    memcpy(auStack_c0,param_1,__n);
    local_40 = CONCAT44(local_40._4_4_,(int)__n);
  }
LAB_004299c0:
  FUN_004283d0(lVar1,&local_110);
  FUN_004006a0(&local_110,0xd8);
  return lVar1;
}


