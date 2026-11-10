/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034b400; name: FUN_0034b400
 */


bool FUN_0034b400(void)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 in_x3;
  byte *pbVar10;
  long lVar11;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  byte *local_78;
  byte *local_70;
  undefined8 uStack_68;
  byte *local_60;
  ulong local_58;
  
  local_70 = (byte *)0x0;
  uStack_68 = 0;
  local_78 = (byte *)0x0;
                    /* try { // try from 0034b41c to 0034b423 has its CatchHandler @ 0034b590 */
  uVar9 = FUN_00365270();
  pbVar6 = local_70;
  if ((uVar9 & 1) != 0) {
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    if (local_78 == local_70) {
      uVar9 = 0;
    }
    else {
      lVar11 = 0;
      pbVar10 = local_78;
      do {
        if (lVar11 != 0) {
                    /* try { // try from 0034b44c to 0034b493 has its CatchHandler @ 0034b5a0 */
          FUN_002e4094(&local_90,&DAT_0398d5c8,2);
        }
        local_60 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          local_60 = pbVar10 + 1;
        }
        local_58 = (ulong)(*pbVar10 >> 1);
        if ((*pbVar10 & 1) != 0) {
          local_58 = *(ulong *)(pbVar10 + 8);
        }
        FUN_003218f0(&local_90,&local_60);
        pbVar10 = pbVar10 + 0x18;
        lVar11 = lVar11 + -0x18;
      } while (pbVar10 != pbVar6);
      uVar9 = local_90 & 0xff;
    }
    uVar1 = (ulong)&local_90 | 1;
    uVar3 = uVar9 >> 1;
    if ((uVar9 & 1) != 0) {
      uVar1 = local_80;
      uVar3 = local_88;
    }
                    /* try { // try from 0034b4d4 to 0034b4db has its CatchHandler @ 0034b580 */
    FUN_002e4094(in_x3,uVar1,uVar3);
    if ((local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
  pbVar6 = local_78;
  puVar5 = PTR_LAB_04373088;
  bVar8 = local_78 != local_70;
  if (local_78 != (byte *)0x0) {
    if (local_78 != local_70) {
      bVar2 = local_70[-0x18];
      pbVar7 = local_70 + -0x18;
      pbVar10 = local_70;
      while( true ) {
        pbVar4 = pbVar7;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(pbVar10 + -8));
        }
        if (pbVar6 == pbVar4) break;
        bVar2 = pbVar4[-0x18];
        pbVar7 = pbVar4 + -0x18;
        pbVar10 = pbVar4;
      }
    }
    local_70 = pbVar6;
    FUN_002e2ea0(PTR_LAB_04373088,local_78);
  }
  return bVar8;
}


