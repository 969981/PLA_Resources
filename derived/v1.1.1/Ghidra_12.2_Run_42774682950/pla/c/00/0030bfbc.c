/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030bfbc; name: FUN_0030bfbc
 */


byte * FUN_0030bfbc(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  byte *local_28;
  
  local_28 = param_2;
  uVar2 = FUN_0030c7bc(param_3,&local_28,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar2 & 1) == 0) {
    do {
      pbVar4 = local_28 + 1;
      uVar5 = (uint)*local_28;
      if ((char)*local_28 < '\0') {
        uVar5 = (uVar5 + (uint)*pbVar4 * 0x80) - 0x80;
        if (-1 < (char)*pbVar4) {
          pbVar4 = local_28 + 2;
          goto LAB_0030c03c;
        }
        auVar8 = FUN_00323230();
        if (auVar8._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar5 = (uint)(auVar8._8_8_ >> 3) & 0x1fffffff;
      }
      else {
LAB_0030c03c:
        auVar8._8_4_ = uVar5;
        auVar8._0_8_ = pbVar4;
        auVar8._12_4_ = 0;
        uVar5 = uVar5 >> 3;
      }
      local_28 = auVar8._0_8_;
      uVar3 = auVar8._8_4_;
      if (uVar5 == 2) {
        if ((uVar3 & 0xff) != 0x10) goto LAB_0030c0f0;
        pbVar4 = local_28 + 1;
        uVar5 = (uint)*local_28;
        if ((char)*local_28 < '\0') {
          uVar5 = (uVar5 + (uint)*pbVar4 * 0x80) - 0x80;
          if ((char)*pbVar4 < '\0') {
            auVar7 = FUN_003230f0(local_28);
            local_28 = auVar7._0_8_;
            *(int *)(param_1 + 0x18) = auVar7._8_4_;
            goto joined_r0x0030c0e8;
          }
          pbVar4 = local_28 + 2;
        }
        *(uint *)(param_1 + 0x18) = uVar5;
        local_28 = pbVar4;
      }
      else if ((uVar5 == 1) && ((uVar3 & 0xff) == 8)) {
        bVar1 = *local_28;
        uVar2 = (ulong)bVar1;
        if ((char)bVar1 < '\0') {
          uVar2 = (ulong)(((uint)bVar1 + (uint)local_28[1] * 0x80) - 0x80);
          if ((char)local_28[1] < '\0') {
            auVar8 = FUN_003230f0(local_28);
            local_28 = auVar8._0_8_;
            *(long *)(param_1 + 0x10) = auVar8._8_8_;
            goto joined_r0x0030c0e8;
          }
          lVar6 = 2;
        }
        else {
          lVar6 = 1;
        }
        *(ulong *)(param_1 + 0x10) = uVar2;
        local_28 = local_28 + lVar6;
      }
      else {
LAB_0030c0f0:
        if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
          *(uint *)(param_3 + 0x50) = uVar3 - 1;
          return local_28;
        }
        uVar2 = *(ulong *)(param_1 + 8);
        if ((uVar2 & 1) == 0) {
          lVar6 = FUN_0030c8c0((ulong *)(param_1 + 8));
        }
        else {
          lVar6 = (uVar2 & 0xfffffffffffffffe) + 8;
        }
        local_28 = (byte *)FUN_0030e020(auVar8._8_8_ & 0xffffffff,lVar6,local_28,param_3);
joined_r0x0030c0e8:
        if (local_28 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar2 = FUN_0030c7bc(param_3,&local_28,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar2 & 1) == 0);
  }
  return local_28;
}


