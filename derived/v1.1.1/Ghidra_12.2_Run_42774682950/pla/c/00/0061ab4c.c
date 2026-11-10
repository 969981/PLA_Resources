/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061ab4c; name: FUN_0061ab4c
 */


void FUN_0061ab4c(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)0x0) {
    return;
  }
  pbVar3 = (byte *)param_1[1];
  if (pbVar3 == pbVar4) {
    pbVar3 = pbVar4;
  }
  else {
    bVar1 = pbVar3[-0x20];
    pbVar2 = pbVar3 + -0x20;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        (**(code **)(**(long **)(pbVar3 + -8) + 0x18))
                  (*(long **)(pbVar3 + -8),*(undefined8 *)(pbVar3 + -0x10),
                   *(ulong *)(pbVar3 + -0x20) & 0xfffffffffffffffe,1);
      }
      if (pbVar4 == pbVar2) break;
      bVar1 = pbVar2[-0x20];
      pbVar3 = pbVar2;
      pbVar2 = pbVar2 + -0x20;
    }
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar4;
                    /* WARNING: Could not recover jumptable at 0x0061abec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar3,param_1[2] - (long)pbVar3,8);
  return;
}


