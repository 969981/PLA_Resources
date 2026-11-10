/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00656100; name: FUN_00656100
 */


void FUN_00656100(ulong *param_1)

{
  byte bVar1;
  
  if ((param_1[0x10] & 1) == 0) {
    bVar1 = (byte)param_1[0xc];
  }
  else {
    (**(code **)(*(long *)param_1[0x13] + 0x18))
              ((long *)param_1[0x13],param_1[0x12],param_1[0x10] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_1[0xc];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)param_1[8];
  }
  else {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_1[8];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)param_1[4];
  }
  else {
    (**(code **)(*(long *)param_1[0xb] + 0x18))
              ((long *)param_1[0xb],param_1[10],param_1[8] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_1[4];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)*param_1;
  }
  else {
    (**(code **)(*(long *)param_1[7] + 0x18))
              ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
    bVar1 = (byte)*param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006561e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


