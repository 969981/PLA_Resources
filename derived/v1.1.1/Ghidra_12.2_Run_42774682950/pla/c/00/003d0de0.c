/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d0de0; name: FUN_003d0de0
 */


void FUN_003d0de0(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte local_70;
  char acStack_6f [5];
  undefined2 uStack_6a;
  char cStack_68;
  char acStack_67 [5];
  undefined1 local_62;
  undefined1 uStack_61;
  ulong local_60;
  byte *local_58;
  byte *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  if (PTR_DAT_04374038[0x10] != '\0') {
    uStack_61 = 0;
    local_70 = 0x1a;
    acStack_6f = (char  [5])s_PENDING_TAGS__038be285._0_5_;
    local_50 = (byte *)0x0;
    uStack_48 = 0;
    uStack_6a = s_PENDING_TAGS__038be285._5_2_;
    cStack_68 = s_PENDING_TAGS__038be285[7];
    acStack_67 = (char  [5])s_PENDING_TAGS__038be285._8_5_;
    local_60 = 0;
    local_58 = (byte *)0x0;
    local_62 = 0;
                    /* try { // try from 003d0e48 to 003d0e53 has its CatchHandler @ 003d0ff4 */
    FUN_003d122c(&local_58,&local_70);
    if ((local_70 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_60);
    }
                    /* try { // try from 003d0e70 to 003d0e73 has its CatchHandler @ 003d1004 */
    FUN_002ef750(*(undefined8 *)(param_1 + 0x10));
    puVar5 = PTR_LAB_043737e8;
    puVar4 = PTR_LAB_04373088;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar8 = 0;
      do {
        local_40 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
        puStack_38 = puVar5;
                    /* try { // try from 003d0eb8 to 003d0ecf has its CatchHandler @ 003d1014 */
        FUN_002e6390(&local_70,&DAT_03904cae,3,&local_40,1);
                    /* try { // try from 003d0ed0 to 003d0edb has its CatchHandler @ 003d1024 */
        FUN_003d122c(&local_58,&local_70);
        if ((local_70 & 1) != 0) {
          FUN_002e2ea0(puVar4,local_60);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ulong *)(param_1 + 0x38));
    }
                    /* try { // try from 003d0ef8 to 003d0efb has its CatchHandler @ 003d1004 */
    FUN_002ef790(*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 003d0f00 to 003d0f17 has its CatchHandler @ 003d0fe4 */
    FUN_002e5790(&local_70,local_58,local_50,&DAT_03996322,0);
    uVar8 = (ulong)&local_70 | 1;
    if ((local_70 & 1) != 0) {
      uVar8 = local_60;
    }
                    /* try { // try from 003d0f2c to 003d0f47 has its CatchHandler @ 003d0fd4 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc",0x498,0,
                 &DAT_038bd9bd,uVar8);
    if ((local_70 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_60);
    }
    pbVar6 = local_58;
    puVar4 = PTR_LAB_04373088;
    if (local_58 != (byte *)0x0) {
      if (local_50 != local_58) {
        bVar1 = local_50[-0x18];
        pbVar7 = local_50 + -0x18;
        pbVar3 = local_50;
        while( true ) {
          pbVar2 = pbVar7;
          if ((bVar1 & 1) != 0) {
            FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar3 + -8));
          }
          if (pbVar6 == pbVar2) break;
          bVar1 = pbVar2[-0x18];
          pbVar7 = pbVar2 + -0x18;
          pbVar3 = pbVar2;
        }
      }
      local_50 = pbVar6;
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
  }
  return;
}


