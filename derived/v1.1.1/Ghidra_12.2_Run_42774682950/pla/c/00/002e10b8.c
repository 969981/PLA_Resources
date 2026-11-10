/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e10b8; name: FUN_002e10b8
 */


byte * FUN_002e10b8(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [12];
  byte *local_28;
  
  local_28 = param_2;
  uVar5 = FUN_0030c7bc(param_3,&local_28,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar5 & 1) == 0) {
    do {
      bVar2 = *local_28;
      auVar7[8] = bVar2;
      auVar7._0_8_ = local_28 + 1;
      auVar7._9_3_ = 0;
      if ((char)bVar2 < '\0') {
        bVar1 = local_28[1];
        iVar3 = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        if ((char)bVar1 < '\0') {
          auVar7 = FUN_00323230(local_28,iVar3);
          if (auVar7._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar7._8_4_ = iVar3;
          auVar7._0_8_ = local_28 + 2;
        }
      }
      uVar4 = auVar7._8_4_;
      local_28 = auVar7._0_8_;
      if (uVar4 == 10) {
        local_28 = local_28 + -1;
        do {
          local_28 = local_28 + 1;
          local_28 = (byte *)FUN_002e120c(param_3,param_1 + 0x10);
          if (local_28 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((local_28 < (byte *)*param_3) && (*local_28 == 10));
      }
      else {
        if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar4 - 1;
          return local_28;
        }
        uVar5 = *(ulong *)(param_1 + 8);
        if ((uVar5 & 1) == 0) {
          lVar6 = FUN_0033aecc((ulong *)(param_1 + 8));
        }
        else {
          lVar6 = (uVar5 & 0xfffffffffffffffe) + 8;
        }
        local_28 = (byte *)FUN_00323c60(uVar4,lVar6,local_28,param_3);
        if (local_28 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar5 = FUN_0030c7bc(param_3,&local_28,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar5 & 1) == 0);
  }
  return local_28;
}


