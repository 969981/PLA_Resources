/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b7d3c; name: FUN_005b7d3c
 */


void FUN_005b7d3c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  byte *local_88;
  byte *local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined *puStack_68;
  ulong local_60;
  undefined *puStack_58;
  
  local_88 = (byte *)0x0;
  local_80 = (byte *)0x0;
  uStack_78 = 0;
                    /* try { // try from 005b7d64 to 005b7d6b has its CatchHandler @ 005b7f54 */
  FUN_005b7918(&local_70);
                    /* try { // try from 005b7d6c to 005b7d77 has its CatchHandler @ 005b7f40 */
  FUN_005b7b7c(&local_88,&local_70);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  puVar7 = PTR_LAB_04374a18;
  bVar3 = *(byte *)(param_2 + 0x48);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto LAB_005b7e04;
  }
  else if (*(long *)(param_2 + 0x50) == 0) goto LAB_005b7e04;
                    /* try { // try from 005b7dc4 to 005b7ddf has its CatchHandler @ 005b7f38 */
  local_a0 = (byte *)(param_2 + 0x48);
  puStack_98 = PTR_LAB_04374a18;
  FUN_002e6390(&local_70,"Cluster name: %s",0x10,&local_a0,1);
                    /* try { // try from 005b7de0 to 005b7deb has its CatchHandler @ 005b7f28 */
  FUN_005b7b7c(&local_88,&local_70);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
LAB_005b7e04:
  puVar8 = PTR_FUN_043739e0;
  puVar6 = PTR_LAB_04373088;
  uVar2 = *(ulong *)(param_2 + 0x68);
  for (uVar1 = *(ulong *)(param_2 + 0x60); uVar1 != uVar2; uVar1 = uVar1 + 0x20) {
    puStack_68 = puVar7;
    local_60 = (ulong)*(uint *)(uVar1 + 0x18);
    puStack_58 = puVar8;
                    /* try { // try from 005b7e48 to 005b7e5f has its CatchHandler @ 005b7f58 */
    local_70 = uVar1;
    FUN_002e6390(&local_a0,"{cluster=%s, weight=%d}",0x17,&local_70,2);
                    /* try { // try from 005b7e60 to 005b7e6b has its CatchHandler @ 005b7f68 */
    FUN_005b7b7c(&local_88,&local_a0);
    if (((ulong)local_a0 & 1) != 0) {
      FUN_002e2ea0(puVar6,local_90);
    }
  }
                    /* try { // try from 005b7e88 to 005b7e9b has its CatchHandler @ 005b7f3c */
  FUN_002e5790(param_1,local_88,local_80,&DAT_0396725e,1);
  pbVar9 = local_88;
  puVar7 = PTR_LAB_04373088;
  if (local_88 != (byte *)0x0) {
    if (local_80 != local_88) {
      bVar3 = local_80[-0x18];
      pbVar10 = local_80 + -0x18;
      pbVar5 = local_80;
      while( true ) {
        pbVar4 = pbVar10;
        if ((bVar3 & 1) != 0) {
          FUN_002e2ea0(puVar7,*(undefined8 *)(pbVar5 + -8));
        }
        if (pbVar9 == pbVar4) break;
        bVar3 = pbVar4[-0x18];
        pbVar10 = pbVar4 + -0x18;
        pbVar5 = pbVar4;
      }
    }
    local_80 = pbVar9;
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  return;
}


