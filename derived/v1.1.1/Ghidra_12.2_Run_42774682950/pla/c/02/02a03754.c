/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a03754; name: FUN_02a03754
 */


void FUN_02a03754(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  char local_a0 [8];
  undefined8 local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined2 local_70;
  char local_6e;
  char local_68;
  undefined7 uStack_67;
  
  *(undefined1 *)(param_3[3] + 0x5c) = 0;
  lVar7 = param_3[3];
  bVar3 = *(byte *)(lVar7 + 0x5c);
  if (bVar3 < *(byte *)(lVar7 + 0x5a)) {
    *(byte *)(lVar7 + 0x5c) = bVar3 + 1;
    for (lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + (ulong)bVar3 * 8)) {
      local_98 = param_3[1];
      lStack_90 = param_3[2];
      uVar6 = (ulong)local_80 >> 0x28;
      local_80._5_3_ = (undefined3)uVar6;
      local_80._0_5_ = CONCAT14(1,*(undefined4 *)*param_3);
      local_88 = lVar7;
      FUN_02a08b94(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c60),&local_68,&local_98);
      cVar4 = local_68;
      puVar2 = (undefined4 *)*param_3;
      uVar6 = (ulong)*(uint *)param_3[1];
      uVar11 = param_3[2];
      lVar9 = (&DAT_0428af30)[uVar6 * 6];
      if (lVar9 == 0) {
        plVar8 = &DAT_0428af30;
      }
      else {
        plVar8 = &DAT_0428af30;
        if (*(char *)(lVar9 + 0x1e1) != '\0') {
          plVar8 = &DAT_0428af30 + uVar6 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar10 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)*(ushort *)((long)piVar1 + uVar10);
      }
      uVar5 = FUN_02998dec(uVar6,((uint *)param_3[1])[8]);
      FUN_0293f1f0(uVar5,uVar11,&local_68);
      local_74 = *puVar2;
      local_70 = 0x100;
      local_6e = cVar4;
      local_80 = CONCAT71(uStack_67,local_68);
      local_88 = CONCAT44(local_88._4_4_,uVar12);
      local_78 = 5;
      local_98 = uVar11;
      lStack_90 = lVar7;
      FUN_02a0997c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x840),local_a0,&local_98);
      if (local_a0[0] != '\0' || cVar4 != '\0') {
        lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x1c8) * 0x40 + 0x21) = 1;
      }
      lVar7 = param_3[3];
      bVar3 = *(byte *)(lVar7 + 0x5c);
      if (*(byte *)(lVar7 + 0x5a) <= bVar3) {
        return;
      }
      *(byte *)(lVar7 + 0x5c) = bVar3 + 1;
    }
  }
  return;
}


