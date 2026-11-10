/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02786b28; name: FUN_02786b28
 */


undefined2 FUN_02786b28(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar9 = &local_70;
  local_28 = 0;
  lVar8 = 0;
  local_70 = 0;
  uVar7 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar5 = 0;
  do {
    puVar1 = (uint *)(param_1 + lVar8);
    uVar2 = *puVar1 & 0xffff;
    uVar6 = uVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 0x6c4;
    lVar8 = lVar8 + 4;
    if (uVar2 < 0xb && uVar2 != 5) {
      uVar2 = uVar7 + 1;
      puVar3 = &local_70;
      uVar5 = uVar7;
    }
    else {
      uVar6 = uVar5 + 1;
      uVar2 = uVar7;
      puVar3 = &local_48;
    }
    uVar7 = uVar2;
    *(short *)((long)puVar3 + (ulong)uVar5 * 2) = (short)*puVar1;
    uVar5 = uVar6;
  } while (lVar8 != 0x50);
  if (uVar6 == 0) {
    if (uVar7 == 0) {
      return 0x65c;
    }
  }
  else {
    puVar9 = &local_48;
    uVar7 = uVar6;
  }
  uVar4 = FUN_02786be0(uVar7 - 1);
  return *(undefined2 *)((long)puVar9 + (uVar4 & 0xffffffff) * 2);
}


