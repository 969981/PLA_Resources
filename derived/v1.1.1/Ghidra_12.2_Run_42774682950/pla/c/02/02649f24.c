/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02649f24; name: FUN_02649f24
 */


void FUN_02649f24(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1 + -0x48;
  FUN_026189d8(lVar2);
  if ((*(char *)(param_1 + 0xd28) == '\0') ||
     (FUN_02648bf8(lVar2,0,param_1 + 0xd2c), *(char *)(param_1 + 0xd28) == '\0')) {
    cVar1 = *(char *)(param_1 + 0xd34);
  }
  else {
    *(undefined1 *)(param_1 + 0xd28) = 0;
    cVar1 = *(char *)(param_1 + 0xd34);
  }
  if ((cVar1 != '\0') && (FUN_02648bf8(lVar2,1,param_1 + 0xd38), *(char *)(param_1 + 0xd34) != '\0')
     ) {
    *(undefined1 *)(param_1 + 0xd34) = 0;
  }
  return;
}


