/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a99684; name: FUN_02a99684
 */


void FUN_02a99684(undefined8 param_1,long *param_2,byte param_3,undefined8 *param_4,byte param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long *local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long *local_190;
  undefined4 local_188;
  byte local_180;
  byte local_17f;
  undefined8 local_170;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  
  local_1b0 = (long *)*param_2;
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x18))();
  }
  local_1a8 = param_2[1];
  local_1a0 = param_2[2];
  local_198 = param_2[3];
  local_190 = (long *)param_2[4];
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x18))();
  }
  local_188 = (undefined4)param_2[5];
  local_170 = *param_4;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_180 = param_3 & 1;
  local_17f = param_5 & 1;
  if ((code *)param_4[4] != (code *)0x0) {
    (*(code *)param_4[4])(param_4 + 6,auStack_140);
    local_160 = param_4[2];
    local_158 = (code *)param_4[3];
    local_150 = param_4[4];
    uStack_148 = param_4[5];
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  if ((code *)param_4[0x14] != (code *)0x0) {
    (*(code *)param_4[0x14])(param_4 + 0x16,auStack_c0);
    local_e0 = param_4[0x12];
    local_d8 = (code *)param_4[0x13];
    local_d0 = param_4[0x14];
    uStack_c8 = param_4[0x15];
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = (long *)0x0;
  FUN_02a988b4(param_1,&local_1b0);
  pcVar5 = local_d8;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_50 + 0x10))();
      pcVar5 = local_d8;
    }
  }
  if (pcVar5 == (code *)0x0) {
    local_d8 = (code *)0x0;
    pcVar5 = local_158;
  }
  else {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
    pcVar5 = local_158;
  }
  if (pcVar5 == (code *)0x0) {
    local_158 = (code *)0x0;
  }
  else {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  return;
}


