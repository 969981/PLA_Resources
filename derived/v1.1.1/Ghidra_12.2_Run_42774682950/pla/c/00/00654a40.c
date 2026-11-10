/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00654a40; name: FUN_00654a40
 */


void FUN_00654a40(ulong *param_1,undefined8 param_2,long *param_3)

{
  char *__s;
  ulong uVar1;
  size_t sVar2;
  byte *pbVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auStack_a8 [8];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  long *local_88;
  undefined8 local_80;
  ulong uStack_78;
  ulong local_70;
  long *local_68;
  byte local_60;
  undefined7 uStack_5f;
  char *local_50;
  long *plStack_48;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00612290();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = param_1 + 4;
  *puVar4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = FUN_00612290();
  puVar6 = param_1 + 8;
  *puVar6 = 0;
  param_1[7] = uVar1;
  *puVar4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = FUN_00612290();
  param_1[10] = 0;
  param_1[0xb] = uVar1;
  *puVar6 = 0;
  param_1[9] = 0;
  uVar1 = FUN_00612430();
  param_1[0xc] = 0;
  param_1[0xd] = uVar1;
  FUN_006d99d8(param_1 + 0xe);
  FUN_006826f0(&local_60,param_2);
  __s = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    __s = local_50;
  }
  sVar2 = strlen(__s);
                    /* try { // try from 00654aec to 00654af7 has its CatchHandler @ 00654e98 */
  FUN_02762710(puVar6,__s,sVar2);
  if ((*puVar6 & 1) == 0) {
    pbVar3 = (byte *)((long)param_1 + 0x41);
  }
  else {
    pbVar3 = (byte *)param_1[10];
  }
  FUN_0061b920(&local_a0,pbVar3);
  if (((long *)param_1[3] == local_88) ||
     (uVar1 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar1 & 1) != 0)) {
    if ((*param_1 & 1) == 0) {
      *(undefined2 *)param_1 = 0;
    }
    else {
      *(undefined1 *)param_1[2] = 0;
      param_1[1] = 0;
      if ((*param_1 & 1) != 0) {
        (**(code **)(*(long *)param_1[3] + 0x18))
                  ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
        *param_1 = 0;
      }
    }
    param_1[2] = local_90;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    uStack_98 = 0;
    local_90 = 0;
    local_a0 = 0;
  }
  else if (param_1 != &local_a0) {
    uVar1 = local_a0 >> 1 & 0x7f;
    uVar7 = (ulong)&local_a0 | 1;
    if ((local_a0 & 1) != 0) {
      uVar1 = uStack_98;
      uVar7 = local_90;
    }
                    /* try { // try from 00654bbc to 00654bc3 has its CatchHandler @ 00654dc0 */
    FUN_02762710(param_1,uVar7,uVar1);
  }
  if (((long *)param_1[7] == local_68) ||
     (uVar1 = (**(code **)(*(long *)param_1[7] + 0x20))(), (uVar1 & 1) != 0)) {
    if ((*puVar4 & 1) == 0) {
      *(undefined2 *)puVar4 = 0;
    }
    else {
      *(undefined1 *)param_1[6] = 0;
      param_1[5] = 0;
      if ((param_1[4] & 1) != 0) {
        (**(code **)(*(long *)param_1[7] + 0x18))
                  ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
        param_1[4] = 0;
      }
    }
    param_1[6] = local_70;
    param_1[5] = uStack_78;
    *puVar4 = local_80;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
  }
  else if (puVar4 != &local_80) {
    if ((local_80 & 1) == 0) {
      uVar1 = local_80 >> 1 & 0x7f;
      uVar7 = (long)&local_80 + 1;
    }
    else {
      uVar1 = uStack_78;
      uVar7 = local_70;
    }
                    /* try { // try from 00654c6c to 00654c73 has its CatchHandler @ 00654dc0 */
    FUN_02762710(puVar4,uVar7,uVar1);
  }
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  FUN_006528e8(uVar1,param_2);
  uVar7 = param_1[0xc];
  param_1[0xc] = uVar1;
  if (uVar7 != 0) {
    plVar8 = (long *)param_1[0xd];
    FUN_0068d538(uVar7);
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0x38,8);
    uVar1 = param_1[0xc];
  }
  param_1[0xd] = (ulong)param_3;
  if (*(long *)(uVar1 + 0x18) == 0) {
    puVar4 = (ulong *)(*(ulong *)(uVar1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar1 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
                    /* try { // try from 00654ce8 to 00654cef has its CatchHandler @ 00654db0 */
    uVar5 = FUN_002e1a14(puVar4);
    *(undefined8 *)(uVar1 + 0x18) = uVar5;
  }
  FUN_006d9a3c(auStack_a8);
  FUN_006d9e8c(param_1 + 0xe,auStack_a8);
  FUN_006d9cd8(auStack_a8);
  if ((local_80 & 1) != 0) {
    (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*local_88 + 0x18))(local_88,local_90,local_a0 & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  return;
}


