/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c57d4; name: FUN_010c57d4
 */


bool FUN_010c57d4(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *__s;
  
  __s = (char *)*param_1;
  pcVar3 = strchr(__s,0x2f);
  bVar1 = false;
  if (pcVar3 != (char *)0x0) {
    iVar2 = strncmp(__s,"aoc",3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


