/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00263544; name: FUN_00263544
 */


void FUN_00263544(char *param_1,int param_2,undefined8 param_3,long param_4)

{
  nn::util::SNPrintf(param_1,(long)param_2,"%s_%d",param_3,(ulong)*(uint *)(param_4 + 4));
  return;
}


