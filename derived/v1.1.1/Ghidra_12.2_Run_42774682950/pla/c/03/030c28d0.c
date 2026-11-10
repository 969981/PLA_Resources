/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c28d0; name: FUN_030c28d0
 */


void FUN_030c28d0(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x88) + (param_1 & 0xffffff) * 8);
  if (lVar1 != 0) {
    local_20 = 0;
    uStack_18 = 0;
    FUN_03017e90(param_2,param_4 + (ulong)*(uint *)(*(long *)(param_3 + 0x10) +
                                                    (param_1 & 0xffffff) * 0xc0 + 0x80) * 0x80,lVar1
                 ,param_5,&local_20);
  }
  return;
}


