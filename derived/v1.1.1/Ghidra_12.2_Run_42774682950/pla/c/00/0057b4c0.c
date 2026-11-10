/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057b4c0; name: FUN_0057b4c0
 */


void FUN_0057b4c0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  ulong local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_50 = 0;
  uStack_56 = 0;
  local_60 = 0x10;
  uStack_5f = 0x4f43;
  uStack_5d = 0x4e;
  uStack_5c = 0x5443454e;
  local_58 = 0x20;
  uStack_57 = 0;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
                    /* try { // try from 0057b504 to 0057b50f has its CatchHandler @ 0057b694 */
  FUN_0057a940(&local_48,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
                    /* try { // try from 0057b528 to 0057b537 has its CatchHandler @ 0057b684 */
  FUN_0057ab00(param_2,0,&local_48);
  uStack_5c = 0;
  local_58 = 0;
  uStack_57 = 0;
  uStack_56 = 0;
  local_60 = 4;
  local_50 = 0;
  uStack_5f = 0xa0d;
  uStack_5d = 0;
                    /* try { // try from 0057b554 to 0057b55f has its CatchHandler @ 0057b674 */
  FUN_0057a940(&local_48,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
                    /* try { // try from 0057b57c to 0057b593 has its CatchHandler @ 0057b664 */
  FUN_002e5790(&local_60,local_48,local_40,&DAT_03996322,0);
  uVar1 = (ulong)(local_60 >> 1);
  uVar3 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar1 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
    uVar3 = local_50;
  }
                    /* try { // try from 0057b5b0 to 0057b5b7 has its CatchHandler @ 0057b654 */
  FUN_002f2f40(param_1,uVar3,uVar1);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  pbVar7 = local_48;
  puVar6 = PTR_LAB_04373088;
  if (local_48 != (byte *)0x0) {
    if (local_40 != local_48) {
      bVar2 = local_40[-0x18];
      pbVar8 = local_40 + -0x18;
      pbVar5 = local_40;
      while( true ) {
        pbVar4 = pbVar8;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar5 + -8));
        }
        if (pbVar7 == pbVar4) break;
        bVar2 = pbVar4[-0x18];
        pbVar8 = pbVar4 + -0x18;
        pbVar5 = pbVar4;
      }
    }
    local_40 = pbVar7;
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


