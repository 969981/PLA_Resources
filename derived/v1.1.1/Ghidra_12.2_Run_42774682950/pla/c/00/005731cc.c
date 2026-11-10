/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005731cc; name: FUN_005731cc
 */


void FUN_005731cc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *local_48;
  
  *param_1 = 0;
  if ((*param_2 & 1) == 0) {
    local_48 = param_2 + 1;
                    /* try { // try from 00573204 to 00573213 has its CatchHandler @ 00573254 */
    FUN_005732f0(param_1,param_1 + 1,&local_48,*param_2 >> 1);
    *param_1 = *param_2 & 0xfffffffffffffffe;
  }
  else {
    uVar1 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    *param_1 = *param_2 | 1;
    *param_2 = 0;
  }
  return;
}


