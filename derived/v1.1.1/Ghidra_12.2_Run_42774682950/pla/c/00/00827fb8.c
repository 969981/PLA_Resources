/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00827fb8; name: FUN_00827fb8
 */


long FUN_00827fb8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  int local_40 [4];
  undefined4 local_30 [4];
  long local_18;
  
  puVar6 = *(uint **)(param_1 + 0xf0);
  local_18 = param_2;
  if (*(code **)(puVar6 + 0x10) == (code *)0x0) {
    uVar3 = (uint)param_2;
    uVar5 = (uint)((ulong)param_2 >> 0x20);
    uVar3 = (uVar3 >> 8 & 0xff) + (uVar3 & 0xff) + ((uint)((ulong)param_2 >> 0x10) & 0xff) +
            (uVar3 >> 0x18) + (uVar5 & 0xff) + (uVar5 >> 8 & 0xff) +
            ((ushort)((ulong)param_2 >> 0x30) & 0xff) + (uint)(byte)((ulong)param_2 >> 0x38);
    uVar5 = *puVar6;
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar3 / uVar5;
    }
    uVar2 = (ulong)(uVar3 - uVar1 * uVar5);
  }
  else {
    uVar2 = (**(code **)(puVar6 + 0x10))(&local_18,*puVar6);
  }
  plVar4 = *(long **)(*(long *)(puVar6 + 2) + (uVar2 & 0xffffffff) * 0x18);
  do {
    if (plVar4 == (long *)0x0) {
      local_30[0] = 0x2c0a;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      lVar7 = 0;
LAB_0082808c:
      FUN_007ee578(local_40,local_30);
      if (local_40[0] != 0) {
        lVar7 = 0;
      }
      return lVar7;
    }
    if (*plVar4 == local_18) {
      lVar7 = plVar4[1];
      local_30[0] = 0;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      goto LAB_0082808c;
    }
    plVar4 = (long *)plVar4[6];
  } while( true );
}


