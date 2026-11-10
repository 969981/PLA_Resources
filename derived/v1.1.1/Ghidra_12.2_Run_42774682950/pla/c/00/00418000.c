/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00418000; name: FUN_00418000
 */


char * FUN_00418000(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00418030();
  if (iVar1 == 0) {
    pcVar2 = getenv(param_1);
    return pcVar2;
  }
  return (char *)0x0;
}


