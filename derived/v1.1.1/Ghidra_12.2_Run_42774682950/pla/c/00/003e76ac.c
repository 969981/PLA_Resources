/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e76ac; name: FUN_003e76ac
 */


void FUN_003e76ac(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_002ef750(param_1 + 0xe8);
                    /* try { // try from 003e76cc to 003e76d3 has its CatchHandler @ 003e76ec */
  FUN_003eb528(param_1 + 0x108,&local_18);
                    /* try { // try from 003e76d4 to 003e76db has its CatchHandler @ 003e76e8 */
  FUN_002ef790(param_1 + 0xe8);
  return;
}


