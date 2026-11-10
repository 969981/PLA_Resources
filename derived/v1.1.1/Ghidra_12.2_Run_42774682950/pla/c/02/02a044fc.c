/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a044fc; name: FUN_02a044fc
 */


void FUN_02a044fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  undefined8 local_88;
  undefined8 local_80;
  long lStack_78;
  uint local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  char local_48 [8];
  
  if (*(char *)(param_3[2] + 0x5a) == '\0') {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    return;
  }
  uVar4 = (ulong)*(uint *)*param_3;
  lVar7 = (&DAT_0428af30)[uVar4 * 6];
  if (lVar7 == 0) {
    plVar5 = &DAT_0428af30;
  }
  else {
    plVar5 = &DAT_0428af30;
    if (*(char *)(lVar7 + 0x1e1) != '\0') {
      plVar5 = &DAT_0428af30 + uVar4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) ||
     (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar6 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)*(ushort *)((long)piVar1 + uVar6);
  }
  uVar3 = FUN_02998dec(uVar4,((uint *)*param_3)[8]);
  *(undefined1 *)(param_3[2] + 0x5c) = 0;
  lVar7 = param_3[2];
  bVar2 = *(byte *)(lVar7 + 0x5c);
  if (bVar2 < *(byte *)(lVar7 + 0x5a)) {
    *(byte *)(lVar7 + 0x5c) = bVar2 + 1;
    lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
    if (lVar7 != 0) {
      bVar9 = false;
      do {
        FUN_0293f1f0(uVar3,param_3[1],&local_88);
        local_80 = param_3[1];
        local_68 = local_88;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0x101;
        local_56 = 0;
        lStack_78 = lVar7;
        local_70 = uVar8;
        FUN_02a0997c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x840),local_48,&local_80);
        if (local_48[0] != '\0') {
          bVar9 = true;
          lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          *(undefined1 *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x1c8) * 0x40 + 0x21) = 1;
        }
        lVar7 = param_3[2];
        bVar2 = *(byte *)(lVar7 + 0x5c);
        if (*(byte *)(lVar7 + 0x5a) <= bVar2) break;
        *(byte *)(lVar7 + 0x5c) = bVar2 + 1;
        lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
      } while (lVar7 != 0);
      if (bVar9) {
        return;
      }
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  if (*(char *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x1c8) * 0x40 + 0x43) == '\0') {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
  }
  return;
}


