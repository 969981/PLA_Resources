/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c5690; name: FUN_010c5690
 */


bool FUN_010c5690(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  byte *__s;
  
  __s = (byte *)*param_1;
  iVar2 = isalpha((uint)*__s);
  bVar1 = false;
  if (iVar2 != 0) {
    if ((__s[1] == 0x3a) && (__s[2] == 0x2f)) {
      pcVar3 = strchr((char *)__s,0x5c);
      bVar1 = pcVar3 == (char *)0x0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


