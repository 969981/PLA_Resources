/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6b28; name: FUN_027a6b28
 */


undefined8 FUN_027a6b28(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char local_28 [8];
  
  pcVar3 = strstr(param_1,"\"serialcodeStatus\":\"");
  uVar5 = 0;
  if (pcVar3 != (char *)0x0) {
    pcVar3 = pcVar3 + 0x14;
    pcVar4 = strchr(pcVar3,0x22);
    uVar5 = 0;
    if (pcVar4 != (char *)0x0) {
      local_28[0] = '\0';
      local_28[1] = '\0';
      local_28[2] = '\0';
      local_28[3] = '\0';
      local_28[4] = '\0';
      local_28[5] = '\0';
      local_28[6] = '\0';
      local_28[7] = '\0';
      if ((uint)((long)pcVar4 - (long)pcVar3) < 8) {
        memcpy(local_28,pcVar3,(long)pcVar4 - (long)pcVar3 & 0xffffffff);
        iVar1 = atoi(local_28);
        uVar2 = FUN_027a6fe0(iVar1);
        *param_2 = uVar2;
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}


