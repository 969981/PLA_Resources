/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a04228; name: FUN_02a04228
 */


void FUN_02a04228(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined2 uVar5;
  long lVar6;
  undefined2 local_c8;
  undefined2 uStack_c6;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  char local_a0 [8];
  undefined1 local_98;
  undefined1 local_97;
  undefined2 local_96;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined2 local_8d;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar1 = param_3[1];
  uVar2 = *(undefined4 *)*param_3;
  uVar3 = ((undefined4 *)*param_3)[8];
  *(undefined1 *)(param_3[2] + 0x5c) = 0;
  lVar6 = param_3[2];
  bVar4 = *(byte *)(lVar6 + 0x5c);
  if (bVar4 < *(byte *)(lVar6 + 0x5a)) {
    *(byte *)(lVar6 + 0x5c) = bVar4 + 1;
    for (lVar6 = *(long *)(lVar6 + (ulong)bVar4 * 8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + (ulong)bVar4 * 8)) {
      uVar5 = FUN_02993838(*(undefined8 *)(param_1 + 0x38),lVar1,lVar6,uVar2,uVar3);
      local_a8 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c0 = 0;
      local_c8 = 0x82;
      uStack_c6 = 0x82;
      uStack_c4 = (uint)*(byte *)(lVar6 + 0x7d);
      FUN_02985328(*(undefined8 *)(param_1 + 0x38),&local_c8,lVar1,lVar6,uVar2);
      local_98 = 0x1f;
      local_90 = 1;
      local_8e = 0;
      local_97 = *(undefined1 *)(lVar6 + 0x7d);
      local_94 = 0x1000000;
      local_88 = CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
      local_8f = 0;
      local_8d = 1;
      local_68 = local_a8;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      uStack_80 = local_c0;
      local_96 = uVar5;
      FUN_029ef37c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1620),local_a0,&local_98);
      if (local_a0[0] != '\0') {
        lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x1c8) * 0x40 + 0x21) = 1;
      }
      lVar6 = param_3[2];
      bVar4 = *(byte *)(lVar6 + 0x5c);
      if (*(byte *)(lVar6 + 0x5a) <= bVar4) {
        return;
      }
      *(byte *)(lVar6 + 0x5c) = bVar4 + 1;
    }
  }
  return;
}


