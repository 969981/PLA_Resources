/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043e6e0; name: FUN_0043e6e0
 */


undefined * FUN_0043e6e0(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  char *__s;
  long lVar5;
  
  if (param_3 == -1) {
    sVar3 = strlen(param_2);
    param_3 = (int)sVar3;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
  }
  if (DAT_0439e8b0 == 0) {
    iVar2 = 0x14;
  }
  else {
    iVar2 = FUN_00407950();
    iVar2 = iVar2 + 0x14;
    if (iVar2 < 1) {
      return (undefined *)0x0;
    }
  }
  lVar5 = (long)iVar2;
  if (0x14 < iVar2) goto LAB_0043e78c;
  do {
    puVar4 = (&PTR_DAT_04165d48)[lVar5];
    bVar1 = puVar4[8];
    while( true ) {
      if ((bVar1 & 1) == 0) {
        __s = *(char **)(puVar4 + 0x10);
        sVar3 = strlen(__s);
        if ((param_3 == (int)sVar3) && (iVar2 = strncasecmp(__s,param_2,(long)param_3), iVar2 == 0))
        {
          return puVar4;
        }
      }
      lVar5 = lVar5 + -1;
      if (lVar5 < 1) {
        return (undefined *)0x0;
      }
      if ((int)lVar5 < 0x15) break;
LAB_0043e78c:
      puVar4 = (undefined *)FUN_00407970(DAT_0439e8b0,(int)lVar5 + -0x15);
      bVar1 = puVar4[8];
    }
  } while( true );
}


