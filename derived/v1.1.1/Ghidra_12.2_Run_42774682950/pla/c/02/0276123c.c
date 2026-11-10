/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276123c; name: FUN_0276123c
 */


void FUN_0276123c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_0426b958;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],param_1[0x19],param_1[0x17] & 0xfffffffffffffffe,1);
  }
  FUN_02762c44(param_1 + 0x13,param_1[0x14]);
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],param_1[0x11],param_1[0xf] & 0xfffffffffffffffe,1);
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    param_1[10] = lVar1;
    (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar1,param_1[0xb] - lVar1,4);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))
              ((long *)param_1[8],param_1[7],param_1[5] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02761328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))
            ((long *)param_1[4],param_1[3],param_1[1] & 0xfffffffffffffffe,1);
  return;
}


