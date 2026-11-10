/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b7918; name: FUN_005b7918
 */


void FUN_005b7918(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_70 [16];
  undefined8 local_60;
  byte *local_58;
  byte *local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined *puStack_38;
  
  local_58 = (byte *)0x0;
  local_50 = (byte *)0x0;
  uStack_48 = 0;
                    /* try { // try from 005b7938 to 005b793f has its CatchHandler @ 005b7ad4 */
  FUN_005b75ac(local_70);
                    /* try { // try from 005b7940 to 005b794b has its CatchHandler @ 005b7ac4 */
  FUN_005b7b7c(&local_58,local_70);
  if ((local_70[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  puVar6 = PTR_LAB_04373088;
  lVar2 = *(long *)(param_2 + 0x30);
  for (lVar1 = *(long *)(param_2 + 0x28); lVar1 != lVar2; lVar1 = lVar1 + 0x58) {
                    /* try { // try from 005b7988 to 005b7993 has its CatchHandler @ 005b7ad8 */
    FUN_005b76c8(local_70,lVar1);
                    /* try { // try from 005b7994 to 005b799f has its CatchHandler @ 005b7ae8 */
    FUN_005b7b7c(&local_58,local_70);
    if ((local_70[0] & 1) != 0) {
      FUN_002e2ea0(puVar6,local_60);
    }
  }
  if (*(char *)(param_2 + 0x40) != '\0') {
    local_40 = (ulong)*(uint *)(param_2 + 0x44);
                    /* try { // try from 005b79d0 to 005b79eb has its CatchHandler @ 005b7abc */
    puStack_38 = PTR_FUN_043739e0;
    FUN_002e6390(local_70,"Fraction Per Million %d",0x17,&local_40,1);
                    /* try { // try from 005b79ec to 005b79f7 has its CatchHandler @ 005b7aac */
    FUN_005b7b7c(&local_58,local_70);
    if ((local_70[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_60);
    }
  }
                    /* try { // try from 005b7a14 to 005b7a27 has its CatchHandler @ 005b7ac0 */
  FUN_002e5790(param_1,local_58,local_50,&DAT_0396725e,1);
  pbVar7 = local_58;
  puVar6 = PTR_LAB_04373088;
  if (local_58 != (byte *)0x0) {
    if (local_50 != local_58) {
      bVar3 = local_50[-0x18];
      pbVar8 = local_50 + -0x18;
      pbVar5 = local_50;
      while( true ) {
        pbVar4 = pbVar8;
        if ((bVar3 & 1) != 0) {
          FUN_002e2ea0(puVar6,*(undefined8 *)(pbVar5 + -8));
        }
        if (pbVar7 == pbVar4) break;
        bVar3 = pbVar4[-0x18];
        pbVar8 = pbVar4 + -0x18;
        pbVar5 = pbVar4;
      }
    }
    local_50 = pbVar7;
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return;
}


