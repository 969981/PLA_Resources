/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067dbfc; name: FUN_0067dbfc
 */


void FUN_0067dbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_18 [8];
  
  FUN_006813dc(auStack_18,param_2,param_3);
                    /* try { // try from 0067dc18 to 0067dc23 has its CatchHandler @ 0067dc38 */
  FUN_0067daa0(param_1 + 0x10,auStack_18);
  FUN_00680b34(auStack_18);
  return;
}


