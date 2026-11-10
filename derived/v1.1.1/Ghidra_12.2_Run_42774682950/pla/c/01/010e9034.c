/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e9034; name: FUN_010e9034
 */


bool FUN_010e9034(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 local_40;
  uint local_38;
  uint uStack_34;
  
  uVar6 = *(undefined8 *)(param_2 + 2);
  uVar7 = *(undefined8 *)(param_2 + 8);
  local_a0 = PTR_DAT_0437e438 + 0x10;
  uStack_34 = *param_2;
  puVar1 = PTR_DAT_0437e440 + 0x10;
  local_40 = 0;
  local_38 = 0;
  local_48 = puVar1;
  if (uStack_34 != 0) {
    uVar5 = (ulong)uStack_34 - ((ulong)(uStack_34 >> 1) & 0x5555555555555555);
    uStack_34 = uStack_34 ^ uStack_34 << 2;
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uStack_34 = uStack_34 ^ uStack_34 >> 0xf;
    uStack_34 = uStack_34 ^ uStack_34 << 0xd;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar5 != 1) &&
        (uStack_34 = uStack_34 ^ uStack_34 << 2, uStack_34 = uStack_34 ^ uStack_34 >> 0xf,
        uStack_34 = uStack_34 ^ uStack_34 << 0xd, uVar5 != 2)) &&
       (uStack_34 = uStack_34 ^ uStack_34 << 2, uStack_34 = uStack_34 ^ uStack_34 >> 0xf,
       uStack_34 = uStack_34 ^ uStack_34 << 0xd, uVar5 != 3)) {
      (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_48);
      for (lVar2 = uVar5 - 4; lVar2 != 0; lVar2 = lVar2 + -1) {
        (**(code **)(local_48 + 0x10))(&local_48);
      }
    }
  }
  puStack_88 = PTR_DAT_0437e448 + 0x10;
  local_70 = 0;
  local_90 = 0;
  local_58 = CONCAT44(uStack_34,uStack_34);
  uStack_50 = 0;
  local_98 = PTR_DAT_0437e450 + 0x10;
  local_80 = uVar6;
  uStack_78 = uVar7;
  local_68 = puVar1;
  uStack_60 = local_40;
  local_38 = uStack_34;
  uVar5 = FUN_010d1a4c(&local_a0);
  bVar4 = false;
  if (((uint)uVar5 & 0xff) == 5) {
    uVar3 = (uint)(uVar5 >> 8);
    bVar4 = false;
    if (((uVar3 & 0xff) == 8) && ((uVar3 - 8 & 0xff) < 10)) {
      bVar4 = uVar5 >> 0x20 == 0 || (uVar5 & 0xff0000) == 0;
    }
  }
  return bVar4;
}


