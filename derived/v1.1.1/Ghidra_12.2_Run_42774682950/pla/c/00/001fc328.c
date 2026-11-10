/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fc328; name: FUN_001fc328
 */


char * FUN_001fc328(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  
  pcVar1 = strstr(param_1,"//");
  pcVar2 = param_1;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1 + 2;
  }
  pcVar1 = strchr(pcVar2,0x3f);
  pcVar2 = strchr(pcVar2,0x2f);
  if (pcVar2 == (char *)0x0) {
    sVar3 = strlen(param_1);
    pcVar2 = param_1 + sVar3;
  }
  if (pcVar1 == (char *)0x0) {
    sVar3 = strlen(param_1);
    pcVar1 = param_1 + sVar3;
  }
  if (pcVar1 <= pcVar2) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


