/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033290c0; name: FUN_033290c0
 */


undefined8 FUN_033290c0(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long local_50;
  undefined8 local_48;
  
  puVar2 = PTR_PTR_0434a080;
  local_48 = -0x8000000000000000;
  local_50 = 0;
  lVar6 = *param_1;
  if (lVar6 != 0) {
    uVar5 = 0;
    uVar3 = 0;
    while( true ) {
      if ((uint)uVar5 < (uVar3 & 0x3fffffff)) {
        uVar3 = (uint)uVar5;
      }
      else {
        local_50 = FUN_03329824(puVar2,uVar5 + 1 & 0xffffffff,local_50,uVar5 & 0xffffffff,
                                (long)&local_48 + 4);
        uVar3 = (uint)local_48;
      }
      *(long *)(local_50 + (long)(int)uVar3 * 8) = lVar6;
      local_48 = CONCAT44(local_48._4_4_,(int)(uVar5 + 1));
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      uVar5 = uVar5 + 1;
      uVar3 = local_48._4_4_;
    }
    do {
      lVar6 = *(long *)(local_50 + uVar5 * 8);
      pcVar4 = *(code **)(lVar6 + 0x10);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(*(undefined8 *)(lVar6 + 0x18));
      }
      lVar6 = local_48;
      bVar1 = 0 < (long)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
    uVar3 = local_48._4_4_;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    if ((-1 < lVar6) && (local_50 != 0)) {
      FUN_032cf244(puVar2,local_50,8,uVar3 & 0x3fffffff);
    }
  }
  return 0;
}


