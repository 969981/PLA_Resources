/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a36a0; name: inet_pton
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inet_pton(int __af,char *__cp,void *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inet_pton_04371218)(__af);
  return iVar1;
}


