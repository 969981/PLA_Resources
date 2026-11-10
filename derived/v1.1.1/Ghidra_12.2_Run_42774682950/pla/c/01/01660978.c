/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01660978; name: FUN_01660978
 */


long FUN_01660978(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  char *__haystack;
  long *plVar7;
  undefined1 auStack_60 [8];
  char *local_58;
  long *local_48;
  
  uVar6 = *param_3;
  __haystack = *(char **)(param_2 + 8);
  plVar7 = *(long **)(param_2 + 0x18);
  if (plVar7 == (long *)0x0) {
    if (*__haystack != '[') {
      return 0;
    }
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    cVar1 = *__haystack;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    if (cVar1 != '[') {
      return 0;
    }
    __haystack = *(char **)(param_2 + 8);
  }
  pcVar3 = strstr(__haystack,"EvScriptResult");
  if (pcVar3 != (char *)0x0) {
    return *(long *)(param_1 + 0x158);
  }
  pbVar4 = (byte *)strstr(__haystack,"Work");
  if ((pbVar4 != (byte *)0x0) && (uVar5 = (uint)*pbVar4, uVar5 != 0)) {
    while( true ) {
      if (uVar5 - 0x30 < 10) {
        iVar2 = atoi((char *)pbVar4);
        FUN_01660724(auStack_60,param_1,iVar2);
        iVar2 = atoi(local_58);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        return (long)iVar2;
      }
      uVar5 = (uint)pbVar4[1];
      if (uVar5 == 0) break;
      pbVar4 = pbVar4 + 1;
    }
  }
  pbVar4 = (byte *)strstr(__haystack,"Preset");
  if (pbVar4 == (byte *)0x0) {
    return 0;
  }
  uVar5 = (uint)*pbVar4;
  if (uVar5 != 0) {
    while( true ) {
      if (uVar5 - 0x30 < 10) {
        iVar2 = atoi((char *)pbVar4);
        iVar2 = FUN_01661c8c(param_1,uVar6,iVar2);
        return (long)iVar2;
      }
      uVar5 = (uint)pbVar4[1];
      if (uVar5 == 0) break;
      pbVar4 = pbVar4 + 1;
    }
  }
  return 0;
}


