/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01660afc; name: FUN_01660afc
 */


undefined1  [16] FUN_01660afc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  char *__haystack;
  long *plVar7;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined8 extraout_var_01;
  undefined1 auVar8 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_02;
  undefined1 auVar9 [16];
  
  uVar6 = *param_3;
  __haystack = *(char **)(param_2 + 8);
  plVar7 = *(long **)(param_2 + 0x18);
  if (plVar7 == (long *)0x0) {
    if (*__haystack != '[') goto LAB_01660b44;
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    cVar1 = *__haystack;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    if (cVar1 != '[') goto LAB_01660b44;
    __haystack = *(char **)(param_2 + 8);
  }
  pcVar3 = strstr(__haystack,"EvScriptResult");
  if (pcVar3 == (char *)0x0) {
    pbVar4 = (byte *)strstr(__haystack,"Work");
    if ((pbVar4 != (byte *)0x0) && (uVar5 = (uint)*pbVar4, uVar5 != 0)) {
      while( true ) {
        if (uVar5 - 0x30 < 10) {
          iVar2 = atoi((char *)pbVar4);
          FUN_016608c4(param_1,iVar2);
          auVar8._4_4_ = extraout_var;
          auVar8._0_4_ = extraout_s0;
          auVar8._8_8_ = extraout_var_01;
          return auVar8;
        }
        uVar5 = (uint)pbVar4[1];
        if (uVar5 == 0) break;
        pbVar4 = pbVar4 + 1;
      }
    }
    pbVar4 = (byte *)strstr(__haystack,"Preset");
    if ((pbVar4 != (byte *)0x0) && (uVar5 = (uint)*pbVar4, uVar5 != 0)) {
      while( true ) {
        if (uVar5 - 0x30 < 10) {
          iVar2 = atoi((char *)pbVar4);
          FUN_01661cd8(param_1,uVar6,iVar2);
          auVar9._4_4_ = extraout_var_00;
          auVar9._0_4_ = extraout_s0_00;
          auVar9._8_8_ = extraout_var_02;
          return auVar9;
        }
        uVar5 = (uint)pbVar4[1];
        if (uVar5 == 0) break;
        pbVar4 = pbVar4 + 1;
      }
    }
  }
LAB_01660b44:
  return ZEXT816(0);
}


