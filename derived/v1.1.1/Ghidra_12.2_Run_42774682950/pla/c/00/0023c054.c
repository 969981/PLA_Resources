/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023c054; name: FUN_0023c054
 */


void FUN_0023c054(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_b8;
  undefined1 auStack_b0 [128];
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0xe0;
  uVar5 = FUN_0023c818();
  if ((((uVar5 & 1) == 0) && (uVar5 = FUN_0023c8e0(param_1,param_2,param_4), (uVar5 & 1) == 0)) &&
     (uVar5 = FUN_0023cb70(param_1,&local_b8,auStack_b0,param_3), (uVar5 & 1) == 0)) {
    lVar6 = FUN_00235844(*(undefined8 *)(param_4 + 0x38),param_2,0x4d524f4e,local_b8,auStack_b0);
    *(long *)(param_1 + 0x20) = lVar6;
    uVar3 = FUN_002506a0(*(undefined8 *)(lVar6 + 0x38),0x4d524f4e,local_b8,auStack_b0);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
    uVar1 = *(uint *)(param_1 + 0x14) & 3;
    *(undefined2 *)(param_1 + 0x4a) = uVar3;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(param_1 + 0x10);
      uVar9 = (ulong)(uVar2 << 4) & 0x30;
      uVar5 = (ulong)(uVar2 >> 2) & 3;
      lVar8 = *(long *)(param_1 + 0x18);
      lVar6 = lVar8 + uVar9 + uVar5 * 0x14;
      if ((*(char *)(lVar6 + 1) == '\a') ||
         ((uVar1 != 1 &&
          ((*(char *)(lVar6 + 0x11) == '\a' || ((uVar1 != 2 && (*(char *)(lVar6 + 0x21) == '\a')))))
          ))) {
        uVar7 = FUN_0022fc40(*(undefined8 *)(param_1 + 0x20),uVar3);
        uVar4 = FUN_0087d8bc(uVar7,4,3,"uConstantBufferForBrickRepeatPixelShader");
        *(undefined4 *)
         (lVar8 + (int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) + (uVar2 >> 0xc & 8) +
                        (uVar2 >> 0xd & 0x60) + (uVar2 >> 0xc & 1) * 0xc +
                        (uVar2 >> 0x10 & 1) * 0x1c + (uVar2 >> 0xc & 0x10) * (uVar2 >> 6 & 7) +
                        (uVar2 >> 0x11 & 1) * 0x74 + ((int)uVar9 + (uVar2 & 0x30) | uVar2 >> 6 & 8)
                       + ((uVar2 >> 0xd & 3) + (int)uVar5) * 0x14) + 8) = uVar4;
      }
    }
  }
  return;
}


