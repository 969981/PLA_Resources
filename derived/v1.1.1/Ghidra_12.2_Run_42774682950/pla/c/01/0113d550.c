/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113d550; name: FUN_0113d550
 */


int FUN_0113d550(long param_1,long param_2)

{
  int iVar1;
  char *__s;
  
  __s = (char *)(param_1 + 0x78);
  __s[0] = '\0';
  __s[1] = '\0';
  __s[2] = '\0';
  __s[3] = '\0';
  __s[4] = '\0';
  __s[5] = '\0';
  __s[6] = '\0';
  __s[7] = '\0';
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = snprintf(__s,0x40,"%s",*(undefined8 *)(param_2 + 8));
  return iVar1;
}


