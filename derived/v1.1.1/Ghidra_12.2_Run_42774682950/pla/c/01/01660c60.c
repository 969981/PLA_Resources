/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01660c60; name: FUN_01660c60
 */


void FUN_01660c60(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 uVar7;
  char *__haystack;
  long *plVar8;
  
  uVar7 = *param_4;
  __haystack = *(char **)(param_3 + 8);
  plVar8 = *(long **)(param_3 + 0x18);
  if (plVar8 == (long *)0x0) {
    if (*__haystack != '[') goto LAB_01660dcc;
  }
  else {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    cVar1 = *__haystack;
    (**(code **)(*plVar8 + 0x20))(plVar8);
    if (cVar1 != '[') goto LAB_01660dcc;
    __haystack = *(char **)(param_3 + 8);
  }
  pcVar4 = strstr(__haystack,"EvScriptResult");
  if (pcVar4 != (char *)0x0) {
    FUN_01661e40(param_1);
    return;
  }
  pbVar5 = (byte *)strstr(__haystack,"Work");
  if ((pbVar5 != (byte *)0x0) && (uVar6 = (uint)*pbVar5, uVar6 != 0)) {
    while( true ) {
      if (uVar6 - 0x30 < 10) {
        iVar3 = atoi((char *)pbVar5);
        FUN_01660724(param_1,param_2,iVar3);
        return;
      }
      uVar6 = (uint)pbVar5[1];
      if (uVar6 == 0) break;
      pbVar5 = pbVar5 + 1;
    }
  }
  pbVar5 = (byte *)strstr(__haystack,"Preset");
  if ((pbVar5 != (byte *)0x0) && (uVar6 = (uint)*pbVar5, uVar6 != 0)) {
    while( true ) {
      if (uVar6 - 0x30 < 10) {
        iVar3 = atoi((char *)pbVar5);
        FUN_01661b20(param_1,param_2,uVar7,iVar3);
        return;
      }
      uVar6 = (uint)pbVar5[1];
      if (uVar6 == 0) break;
      pbVar5 = pbVar5 + 1;
    }
  }
LAB_01660dcc:
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar2 = PTR_DAT_0437a0d8;
  uVar7 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = uVar7;
  plVar8 = *(long **)(puVar2 + 0x18);
  param_1[2] = *(undefined8 *)(puVar2 + 0x10);
  param_1[3] = plVar8;
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01660e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))();
  return;
}


