/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3e6b8; name: FUN_02a3e6b8
 */


void FUN_02a3e6b8(undefined8 param_1,ushort param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_280 [128];
  undefined4 *puVar7;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_2 < 0xaa) {
    bVar2 = (&DAT_03a80f80)[param_2];
    uVar3 = 9;
    if ((bVar2 != 0x10) && (bVar2 != 0x20)) {
      uVar3 = (ulong)(bVar2 & 0xf);
    }
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    if ((int)uVar3 != 0) {
      local_68 = -0x30;
      puVar5 = &local_60;
      puVar7 = (undefined4 *)register0x00000008;
      do {
        iVar1 = local_68 + 8;
        puVar6 = puVar7;
        if (0 < iVar1) goto LAB_02a3e760;
        puVar6 = (undefined4 *)((long)auStack_280 + (long)local_68 + 0x200);
        puVar4 = puVar5;
        while( true ) {
          uVar3 = uVar3 - 1;
          puVar5 = (undefined8 *)((long)puVar4 + 4);
          *(undefined4 *)puVar4 = *puVar6;
          if (uVar3 == 0) goto LAB_02a3e7a0;
          local_68 = iVar1;
          if (iVar1 < 0) break;
          puVar6 = puVar7;
LAB_02a3e760:
          puVar7 = puVar6 + 2;
          puVar4 = puVar5;
        }
      } while( true );
    }
LAB_02a3e7a0:
    FUN_02a3e7b8();
  }
  return;
}


