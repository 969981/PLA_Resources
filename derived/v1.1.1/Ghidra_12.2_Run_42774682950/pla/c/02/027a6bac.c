/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6bac; name: FUN_027a6bac
 */


undefined8 FUN_027a6bac(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong __n_00;
  
  pcVar2 = strstr(param_1,"\"dataNo\":\"");
  uVar4 = 0;
  if (pcVar2 != (char *)0x0) {
    pcVar2 = pcVar2 + 10;
    pcVar3 = strchr(pcVar2,0x22);
    uVar4 = 0;
    if (pcVar3 != (char *)0x0) {
      if ((uint)((long)pcVar3 - (long)pcVar2) < 6) {
        __n_00 = (long)pcVar3 - (long)pcVar2 & 0xffffffff;
        __n = 0;
        if (__n_00 < 7) {
          __n = 6 - __n_00;
        }
        memset(param_2 + __n_00,0,__n);
        memcpy(param_2,pcVar2,__n_00);
        iVar1 = atoi(param_2);
        snprintf(param_2,6,"%02d/%02d",iVar1 / 100,iVar1 % 100);
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


