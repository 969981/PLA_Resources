/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303d5ec; name: FUN_0303d5ec
 */


undefined4 FUN_0303d5ec(undefined4 *param_1,uint param_2,ushort param_3,void *param_4,ulong param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *__s1;
  long local_50;
  ushort local_44 [2];
  
  uVar1 = param_1[5];
  local_44[0] = param_3;
  if ((int)uVar1 < 1) {
LAB_0303d74c:
    local_50 = 0;
LAB_0303d750:
    lVar6 = FUN_03002b84(param_5 & 0xffffffff,*param_1,0);
  }
  else {
    uVar3 = ((uint)param_3 * -0x61c8864f & 0xff00ff00) >> 8 |
            ((uint)param_3 * -0x61c8864f & 0xff00ff) << 8;
    uVar8 = (ulong)(uVar1 & (uVar3 >> 0x10 | uVar3 << 0x10));
    lVar7 = *(long *)(param_1 + 2);
    uVar2 = *(ushort *)(lVar7 + uVar8 * 0x10);
    if (uVar2 == 0xffff) goto LAB_0303d74c;
    if (uVar2 != param_3) {
      do {
        uVar8 = (ulong)((int)uVar8 + 1U & uVar1);
        uVar2 = *(ushort *)(lVar7 + uVar8 * 0x10);
        if (uVar2 == 0xffff) goto LAB_0303d74c;
      } while (uVar2 != param_3);
    }
    lVar7 = *(long *)(lVar7 + uVar8 * 0x10 + 8);
    local_50 = lVar7;
    if (lVar7 == 0) goto LAB_0303d750;
    if (param_2 < *(uint *)(lVar7 + 0x18)) goto LAB_0303d678;
    lVar6 = FUN_03002b84(param_5 & 0xffffffff,*param_1,lVar7);
    FUN_03002d40(lVar7);
  }
  local_50 = lVar6;
  FUN_03002894(param_1 + 2,PTR_PTR_0434a080,local_44,&local_50);
LAB_0303d678:
  lVar7 = *(long *)(local_50 + 8);
  uVar3 = 1 << (ulong)(param_2 & 0x1f);
  __s1 = (void *)(*(long *)(local_50 + 0x20) + param_2 * param_5);
  uVar1 = *(uint *)(lVar7 + (long)((int)param_2 >> 5) * 4);
  if (((uVar1 & uVar3) == 0) || (iVar5 = memcmp(__s1,param_4,param_5 & 0xffffffff), iVar5 != 0)) {
    *(uint *)(lVar7 + ((long)((ulong)param_2 << 0x20) >> 0x25) * 4) = uVar1 | uVar3;
    memcpy(__s1,param_4,param_5 & 0xffffffff);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


