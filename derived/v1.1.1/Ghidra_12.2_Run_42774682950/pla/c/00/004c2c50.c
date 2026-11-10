/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c2c50; name: FUN_004c2c50
 */


bool FUN_004c2c50(undefined4 *param_1,void *param_2,uint param_3)

{
  long lVar1;
  undefined4 local_2d0 [84];
  ulong local_180;
  undefined1 auStack_178 [344];
  
  if (param_3 < 0x21) {
    local_2d0[0] = *param_1;
    local_180 = (ulong)param_3;
    memcpy(auStack_178,param_2,local_180);
    FUN_00400120(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x378));
    lVar1 = FUN_00405c90(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x28),local_2d0);
    FUN_00400160(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x378));
    return lVar1 != 0;
  }
  return false;
}


