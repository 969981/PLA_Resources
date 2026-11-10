/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cd690; name: FUN_004cd690
 */


undefined8 FUN_004cd690(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_2 + 8);
  if (uVar8 < (ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18))) {
LAB_004cd6c8:
    uVar5 = 0x1ae;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x5e0);
    if (uVar6 < 0x454d) {
      uVar6 = 0x454c;
    }
    if (uVar6 < uVar8) goto LAB_004cd6c8;
    if (*(long *)(*(long *)(param_1 + 0xb0) + 0x1a8) == 0) {
      lVar2 = FUN_00417620(*(undefined8 *)(param_1 + 0x88),uVar8 + 0xc);
      if (lVar2 != 0) {
        lVar2 = *(long *)(param_1 + 0xa8);
        *(ulong *)(lVar2 + 0x228) = uVar8;
        lVar7 = *(long *)(param_1 + 0xb0);
        *(ulong *)(lVar7 + 0x198) = uVar8;
        bVar1 = *param_2;
        *(uint *)(lVar2 + 0x230) = (uint)bVar1;
        *(byte *)(lVar7 + 400) = bVar1;
        *(undefined2 *)(lVar7 + 0x1a0) = *(undefined2 *)(param_2 + 0x10);
        return 1;
      }
      uVar3 = 0x50;
      uVar5 = 0x1b9;
      uVar4 = 7;
      goto LAB_004cd6e4;
    }
    if (uVar8 == *(ulong *)(*(long *)(param_1 + 0xb0) + 0x198)) {
      return 1;
    }
    uVar5 = 0x1c8;
  }
  uVar4 = 0x98;
  uVar3 = 0x2f;
LAB_004cd6e4:
  FUN_004c99a0(param_1,uVar3,0x120,uVar4,"external/openssl/ssl/statem/statem_dtls.c",uVar5);
  return 0;
}


