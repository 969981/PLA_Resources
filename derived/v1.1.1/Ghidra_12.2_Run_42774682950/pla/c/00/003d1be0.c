/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d1be0; name: FUN_003d1be0
 */


void FUN_003d1be0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *local_70;
  byte *local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined *puStack_50;
  byte local_48;
  char acStack_47 [5];
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char acStack_3f [5];
  char local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  if (param_2 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)param_1 = 8;
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 1) = 0x6c6c756e;
    *(undefined1 *)((long)param_1 + 5) = 0;
    return;
  }
  local_68 = (byte *)0x0;
  uStack_60 = 0;
  local_70 = (byte *)0x0;
  iVar1 = *param_2;
  if (iVar1 == 0) {
    local_48 = 0x1c;
    acStack_47 = s_QUEUE_SHUTDOWN_038be2b2._0_5_;
    cStack_42 = s_QUEUE_SHUTDOWN_038be2b2[5];
    local_38 = 0;
    local_39 = 0;
    cStack_41 = s_QUEUE_SHUTDOWN_038be2b2[6];
    cStack_40 = s_QUEUE_SHUTDOWN_038be2b2[7];
    acStack_3f = s_QUEUE_SHUTDOWN_038be2b2._8_5_;
    local_3a = s_QUEUE_SHUTDOWN_038be2b2[0xd];
                    /* try { // try from 003d1d98 to 003d1da3 has its CatchHandler @ 003d1e78 */
    FUN_003d1f3c(&local_70,&local_48);
  }
  else if (iVar1 == 2) {
    local_39 = 0;
    local_48 = 0x1a;
    acStack_47 = (char  [5])s_OP_COMPLETE__0391005d._0_5_;
    local_38 = 0;
    local_3a = '\0';
    cStack_42 = s_OP_COMPLETE__0391005d[5];
    cStack_41 = s_OP_COMPLETE__0391005d[6];
    cStack_40 = s_OP_COMPLETE__0391005d[7];
    acStack_3f = (char  [5])s_OP_COMPLETE__0391005d._8_5_;
                    /* try { // try from 003d1ca8 to 003d1cb3 has its CatchHandler @ 003d1e88 */
    FUN_003d1f3c(&local_70,&local_48);
    if ((local_48 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
    }
    local_58 = *(char **)(param_2 + 2);
    puStack_50 = PTR_LAB_043737e8;
                    /* try { // try from 003d1cdc to 003d1cf7 has its CatchHandler @ 003d1ec0 */
    FUN_002e6390(&local_48,"tag:%p",6,&local_58,1);
                    /* try { // try from 003d1cf8 to 003d1d03 has its CatchHandler @ 003d1e68 */
    FUN_003d1f3c(&local_70,&local_48);
    if ((local_48 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
    }
    local_58 = "ERROR";
    if (param_2[1] != 0) {
      local_58 = "OK";
    }
    puStack_50 = PTR_LAB_043737d8;
                    /* try { // try from 003d1d44 to 003d1d5f has its CatchHandler @ 003d1ec0 */
    FUN_002e6390(&local_48,&DAT_038b3acb,3,&local_58,1);
                    /* try { // try from 003d1d60 to 003d1d6b has its CatchHandler @ 003d1e58 */
    FUN_003d1f3c(&local_70,&local_48);
  }
  else {
    if (iVar1 != 1) goto LAB_003d1dbc;
    local_39 = 0;
    local_48 = 0x1a;
    acStack_47 = (char  [5])s_QUEUE_TIMEOUT_03896ff5._0_5_;
    local_38 = 0;
    local_3a = '\0';
    cStack_42 = s_QUEUE_TIMEOUT_03896ff5[5];
    cStack_41 = s_QUEUE_TIMEOUT_03896ff5[6];
    cStack_40 = s_QUEUE_TIMEOUT_03896ff5[7];
    acStack_3f = (char  [5])s_QUEUE_TIMEOUT_03896ff5._8_5_;
                    /* try { // try from 003d1c48 to 003d1c53 has its CatchHandler @ 003d1e98 */
    FUN_003d1f3c(&local_70,&local_48);
  }
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
LAB_003d1dbc:
                    /* try { // try from 003d1dc0 to 003d1dd3 has its CatchHandler @ 003d1ec0 */
  FUN_002e5790(param_1,local_70,local_68,&DAT_03996322,0);
  pbVar6 = local_70;
  puVar5 = PTR_LAB_04373088;
  if (local_70 != (byte *)0x0) {
    if (local_68 != local_70) {
      bVar2 = local_68[-0x18];
      pbVar7 = local_68 + -0x18;
      pbVar4 = local_68;
      while( true ) {
        pbVar3 = pbVar7;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(pbVar4 + -8));
        }
        if (pbVar6 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar7 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    local_68 = pbVar6;
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return;
}


