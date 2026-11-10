/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00350da4; name: FUN_00350da4
 */


void FUN_00350da4(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte local_88 [16];
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  
  puVar4 = PTR_LAB_04373088;
  bVar3 = *param_2;
  uVar7 = (ulong)bVar3;
  bVar5 = (bVar3 & 1) == 0;
  uVar8 = *(ulong *)(param_2 + 8);
  uVar10 = (ulong)(bVar3 >> 1);
  if (!bVar5) {
    uVar10 = uVar8;
  }
  if (uVar10 == 0) {
    FUN_0034dc2c(param_1,param_3,param_4,0,"Missing name.");
    return;
  }
  uVar10 = 0;
  do {
    pbVar2 = param_2 + 1;
    if (!bVar5) {
      pbVar2 = *(byte **)(param_2 + 0x10);
    }
    bVar3 = pbVar2[uVar10];
    if (bVar3 < 0x61) {
      uVar9 = (uint)bVar3;
      if (bVar3 < 0x41) {
        if (9 < uVar9 - 0x30) {
LAB_00350e7c:
          FUN_0034b2f0(local_88,&DAT_039042e1,param_2);
                    /* try { // try from 00350e8c to 00350e9b has its CatchHandler @ 00350f80 */
          puVar6 = (ulong *)FUN_002e4094(local_88,"\" is not a valid identifier.",0x1c);
          uStack_68 = puVar6[1];
          local_70 = *puVar6;
          local_60 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
                    /* try { // try from 00350eb4 to 00350ecb has its CatchHandler @ 00350f48 */
          FUN_0034db00(param_1,param_3,param_4,0,&local_70);
          if ((local_70 & 1) != 0) {
            FUN_002e2ea0(puVar4,local_60);
          }
          if ((local_88[0] & 1) != 0) {
            FUN_002e2ea0(puVar4,local_78);
          }
          uVar7 = (ulong)*param_2;
          uVar8 = *(ulong *)(param_2 + 8);
        }
      }
      else if ((0x5a < uVar9) && (uVar9 != 0x5f)) goto LAB_00350e7c;
    }
    else if (0x7a < bVar3) goto LAB_00350e7c;
    bVar5 = (uVar7 & 1) == 0;
    uVar10 = uVar10 + 1;
    uVar1 = uVar7 >> 1;
    if (!bVar5) {
      uVar1 = uVar8;
    }
    if (uVar1 <= uVar10) {
      return;
    }
  } while( true );
}


