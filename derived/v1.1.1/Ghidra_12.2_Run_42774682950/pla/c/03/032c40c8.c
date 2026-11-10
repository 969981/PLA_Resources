/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c40c8; name: FUN_032c40c8
 */


char * FUN_032c40c8(long *param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)param_1[1];
  do {
    if ((char *)*param_1 == pcVar1) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + -1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}


