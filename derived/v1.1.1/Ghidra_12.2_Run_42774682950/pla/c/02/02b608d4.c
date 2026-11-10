/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b608d4; name: FUN_02b608d4
 */


void FUN_02b608d4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  char acStack_b0 [128];
  undefined8 local_28;
  
  pcVar3 = (char *)*param_2;
  sVar2 = strlen(pcVar3);
  lVar1 = 0x80 - (sVar2 + 0x15 & 0xfffffffffffffff0);
  __dest = acStack_b0 + lVar1;
  local_28 = __dest;
  *__dest = '\0';
  pcVar3 = strcat(__dest,pcVar3);
  sVar2 = strlen(pcVar3);
  builtin_strncpy(acStack_b0 + sVar2 + lVar1,".bnsh",6);
  FUN_009313e8(param_1,&local_28);
  return;
}


