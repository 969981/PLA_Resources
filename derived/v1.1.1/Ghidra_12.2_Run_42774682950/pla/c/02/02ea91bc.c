/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea91bc; name: FUN_02ea91bc
 */


undefined8 FUN_02ea91bc(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  size_t __n;
  ulong uVar8;
  
  lVar1 = param_2 + (ulong)(uint)(*(int *)(param_2 + 5) * 5);
  uVar2 = *(uint *)(lVar1 + 9);
  *(ushort *)(param_1 + 0x28) = (ushort)*(byte *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar1 + 0xd);
  uVar4 = FUN_02ea8540(param_1 + 0x18,lVar1 + 0xe,(ulong)uVar2);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
  pbVar6 = (byte *)(lVar1 + 0xe + (ulong)uVar2);
  pbVar5 = pbVar6 + 1;
  bVar3 = *pbVar6;
  uVar7 = (ulong)bVar3;
  if (uVar7 == 0) {
    pbVar6 = pbVar6 + 2;
    bVar3 = *pbVar5;
joined_r0x02ea928c:
    uVar7 = (ulong)bVar3;
    if (uVar7 != 0) {
      uVar8 = (ulong)(bVar3 + 4) & 0x1fc;
      pbVar5 = (byte *)FUN_02f59e30(1,uVar8 + uVar7 * 8);
      if (pbVar5 == (byte *)0x0) goto LAB_02ea92d8;
      *pbVar5 = bVar3;
      memcpy(pbVar5 + 1,pbVar6,uVar7);
      memcpy(pbVar5 + uVar8,pbVar6 + uVar7,uVar7 * 8);
      *(byte **)(param_1 + 0x38) = pbVar5;
    }
    uVar4 = 1;
  }
  else {
    uVar8 = (ulong)(bVar3 + 4) & 0x1fc;
    __n = uVar7 * 4;
    pbVar6 = (byte *)FUN_02f59e30(1,uVar8 + __n);
    if (pbVar6 != (byte *)0x0) {
      *pbVar6 = bVar3;
      memcpy(pbVar6 + 1,pbVar5,uVar7);
      pbVar5 = pbVar5 + uVar7;
      memcpy(pbVar6 + uVar8,pbVar5,__n);
      *(byte **)(param_1 + 0x30) = pbVar6;
      pbVar6 = pbVar5 + __n + 1;
      bVar3 = pbVar5[__n];
      goto joined_r0x02ea928c;
    }
LAB_02ea92d8:
    uVar4 = 2;
  }
  return uVar4;
}


