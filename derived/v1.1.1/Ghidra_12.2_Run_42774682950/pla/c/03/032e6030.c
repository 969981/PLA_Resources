/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6030; name: FUN_032e6030
 */


void FUN_032e6030(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  char *__s;
  char *pcVar3;
  long lVar4;
  
  __s = (char *)FUN_032e239c();
  if (__s == (char *)0x0) {
    FUN_032c5d4c(param_2,"<Unnamed",0xffffffff);
    bVar1 = *param_1;
    while ((bVar1 & 1) == 0) {
      param_1 = *(byte **)(param_1 + 8);
      bVar1 = *param_1;
    }
    FUN_032e3540(*(uint *)(param_1 + 0x10) & 0x1f);
    lVar4 = FUN_032e239c();
    if ((lVar4 != 0) && (iVar2 = FUN_032c4900(), 0xf < iVar2)) {
      FUN_032c5d4c(param_2,&DAT_038bdc00,0xffffffff);
      FUN_032c5d4c(param_2,lVar4 + 0xb,iVar2 + -0xf);
    }
    __s = ">";
    iVar2 = -1;
  }
  else {
    pcVar3 = strchr(__s,0x3c);
    if (pcVar3 == (char *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)pcVar3 - (int)__s;
    }
  }
  FUN_032c5d4c(param_2,__s,iVar2);
  return;
}


