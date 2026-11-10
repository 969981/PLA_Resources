/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d56c0; name: FUN_029d56c0
 */


undefined8 FUN_029d56c0(long param_1,uint *param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_a0;
  char local_98 [8];
  undefined8 local_90;
  long lStack_88;
  uint local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  
  *(undefined1 *)((long)param_4 + 0x5c) = 0;
  if (*(char *)((long)param_4 + 0x5a) != '\0') {
    lVar10 = *param_4;
    *(undefined1 *)((long)param_4 + 0x5c) = 1;
    if (lVar10 != 0) {
      uVar8 = 0;
LAB_029d5728:
      lVar5 = (&DAT_0428af30)[(ulong)*param_2 * 6];
      if (lVar5 == 0) {
        plVar4 = &DAT_0428af30;
      }
      else {
        plVar4 = &DAT_0428af30;
        if (*(char *)(lVar5 + 0x1e1) != '\0') {
          plVar4 = &DAT_0428af30 + (ulong)*param_2 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) ||
         (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar6 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)*(ushort *)((long)piVar1 + uVar6);
      }
      uVar3 = FUN_02998dec((ulong)*param_2,param_2[8]);
      FUN_0293f1f0(uVar3,param_3,&local_a0);
      local_6c = 0x1010000000000;
      local_70 = 0;
      local_78 = local_a0;
      local_90 = param_3;
      lStack_88 = lVar10;
      local_80 = uVar9;
      FUN_029cecb4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),local_98,&local_90);
      uVar6 = (ulong)*(byte *)((long)param_4 + 0x5a);
      if (local_98[0] == '\0') {
        uVar8 = 1;
      }
      else {
        if (*(byte *)((long)param_4 + 0x5a) == 0) {
          return uVar8;
        }
        uVar7 = 0;
        do {
          if (param_4[uVar7] == lVar10) goto LAB_029d5808;
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      goto LAB_029d5830;
    }
  }
  return 0;
LAB_029d5808:
  for (; (int)uVar7 + 1U < (uint)uVar6; uVar7 = uVar7 + 1) {
    param_4[uVar7] = (param_4 + uVar7)[1];
    uVar6 = (ulong)*(byte *)((long)param_4 + 0x5a);
  }
  uVar9 = (uint)uVar6 - 1;
  uVar6 = (ulong)uVar9;
  *(char *)((long)param_4 + 0x5a) = (char)uVar9;
  *(char *)((long)param_4 + 0x5c) = *(char *)((long)param_4 + 0x5c) + -1;
LAB_029d5830:
  bVar2 = *(byte *)((long)param_4 + 0x5c);
  if (((uint)uVar6 & 0xff) <= (uint)bVar2) {
    return uVar8;
  }
  *(byte *)((long)param_4 + 0x5c) = bVar2 + 1;
  lVar10 = param_4[bVar2];
  if (lVar10 == 0) {
    return uVar8;
  }
  goto LAB_029d5728;
}


