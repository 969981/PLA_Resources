/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057a6e0; name: FUN_0057a6e0
 */


void FUN_0057a6e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0x2054454708;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
                    /* try { // try from 0057a71c to 0057a727 has its CatchHandler @ 0057a8ac */
  FUN_0057a940(&local_48,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
                    /* try { // try from 0057a740 to 0057a74f has its CatchHandler @ 0057a89c */
  FUN_0057ab00(param_2,1,&local_48);
  local_58 = 0;
  local_50 = 0;
  local_60 = 0xa0d04;
                    /* try { // try from 0057a76c to 0057a777 has its CatchHandler @ 0057a88c */
  FUN_0057a940(&local_48,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
                    /* try { // try from 0057a794 to 0057a7ab has its CatchHandler @ 0057a87c */
  FUN_002e5790(&local_60,local_48,local_40,&DAT_03996322,0);
  uVar1 = local_60 >> 1 & 0x7f;
  uVar3 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar1 = local_58;
    uVar3 = local_50;
  }
                    /* try { // try from 0057a7c8 to 0057a7cf has its CatchHandler @ 0057a86c */
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


