/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01660e64; name: FUN_01660e64
 */


undefined1 * FUN_01660e64(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  char *__haystack;
  long *plVar8;
  undefined1 *local_60 [3];
  long *local_48;
  
  uVar7 = *param_3;
  __haystack = *(char **)(param_2 + 8);
  puVar6 = &DAT_cbf29ce484222645;
  plVar8 = *(long **)(param_2 + 0x18);
  if (plVar8 == (long *)0x0) {
    if (*__haystack != '[') {
      return puVar6;
    }
  }
  else {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    cVar1 = *__haystack;
    (**(code **)(*plVar8 + 0x20))(plVar8);
    if (cVar1 != '[') {
      return puVar6;
    }
    __haystack = *(char **)(param_2 + 8);
  }
  pcVar3 = strstr(__haystack,"EvScriptResult");
  if (pcVar3 == (char *)0x0) {
    pbVar4 = (byte *)strstr(__haystack,"Work");
    if ((pbVar4 == (byte *)0x0) || (uVar5 = (uint)*pbVar4, uVar5 == 0)) {
LAB_01660f80:
      pbVar4 = (byte *)strstr(__haystack,"Preset");
      if ((pbVar4 != (byte *)0x0) && (uVar5 = (uint)*pbVar4, uVar5 != 0)) {
        while( true ) {
          if (uVar5 - 0x30 < 10) {
            iVar2 = atoi((char *)pbVar4);
            puVar6 = (undefined1 *)FUN_01661c48(param_1,uVar7,iVar2);
            return puVar6;
          }
          uVar5 = (uint)pbVar4[1];
          if (uVar5 == 0) break;
          pbVar4 = pbVar4 + 1;
        }
      }
    }
    else {
      while (9 < uVar5 - 0x30) {
        uVar5 = (uint)pbVar4[1];
        if (uVar5 == 0) goto LAB_01660f80;
        pbVar4 = pbVar4 + 1;
      }
      iVar2 = atoi((char *)pbVar4);
      FUN_01660724(local_60,param_1,iVar2);
      puVar6 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  else {
    puVar6 = *(undefined1 **)(param_1 + 0x158);
  }
  return puVar6;
}


