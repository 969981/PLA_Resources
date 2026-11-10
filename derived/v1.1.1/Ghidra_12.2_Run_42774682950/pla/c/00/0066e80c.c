/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066e80c; name: FUN_0066e80c
 */


void FUN_0066e80c(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  
  if ((param_2[0xf] & 1) == 0) {
    bVar1 = (byte)param_2[9];
  }
  else {
    (**(code **)(*(long *)param_2[0x12] + 0x18))
              ((long *)param_2[0x12],param_2[0x11],param_2[0xf] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_2[9];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)param_2[5];
  }
  else {
    (**(code **)(*(long *)param_2[0xc] + 0x18))
              ((long *)param_2[0xc],param_2[0xb],param_2[9] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_2[5];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)*param_2;
  }
  else {
    (**(code **)(*(long *)param_2[8] + 0x18))
              ((long *)param_2[8],param_2[7],param_2[5] & 0xfffffffffffffffe,1);
    bVar1 = (byte)*param_2;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066e8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[3] + 0x18))
            ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
  return;
}


