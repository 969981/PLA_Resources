/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d7c98; name: FUN_006d7c98
 */


void FUN_006d7c98(long param_1)

{
  size_t sVar1;
  char *__s;
  
  __s = *(char **)PTR_PTR_04376188;
  sVar1 = strlen(__s);
                    /* try { // try from 006d7cc0 to 006d7ccb has its CatchHandler @ 006d7d08 */
  FUN_02762710(param_1 + 0x60,__s,sVar1);
                    /* try { // try from 006d7ccc to 006d7cdf has its CatchHandler @ 006d7d04 */
  FUN_02762710(param_1,"localhost:30050",0xf);
                    /* try { // try from 006d7ce4 to 006d7cf3 has its CatchHandler @ 006d7d00 */
  FUN_02762710(param_1 + 0x80,"localhost.localdomain",0x15);
  return;
}


