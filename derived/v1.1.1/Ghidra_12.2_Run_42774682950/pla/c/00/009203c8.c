/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009203c8; name: FUN_009203c8
 */


undefined8 FUN_009203c8(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ushort local_78 [4];
  undefined1 local_70;
  undefined1 local_6f;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar4 = FUN_009321a8(param_2);
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      lVar6 = *(long *)(param_2 + 0x70);
      if (0xf < *(byte *)(lVar6 + (ulong)(uVar8 & 0xff) * 0x1c + 0x307)) {
        uVar2 = *(undefined1 *)(lVar6 + 0x7d);
        uVar1 = *(undefined4 *)(lVar6 + (ulong)(uVar8 & 0xff) * 0x1c + 0x300);
        uVar3 = *(undefined1 *)(*(long *)(param_3 + 0x70) + 0x7d);
        iVar5 = FUN_029506a8(*(long *)(param_3 + 0x70),0xd);
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x58);
        FUN_0295e190(puVar7[1],*puVar7);
        **(undefined8 **)(puVar7[5] + 0x10) = 0;
        uStack_68 = 0;
        local_64 = 1;
        local_62 = 0;
        local_70 = uVar2;
        local_6f = uVar3;
        local_6c = uVar1;
        FUN_029f66ec(*(undefined8 *)(*(long *)(puVar7[5] + 0x130) + 0x1ce0),local_78,&local_70);
        if (iVar5 <= (int)(uint)local_78[0]) {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
  }
  return 0;
}


