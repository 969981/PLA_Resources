/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024278c; name: FUN_0024278c
 */


void FUN_0024278c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *__dest;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  void *__src;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_00242038(param_1,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc9) = *(undefined8 *)(param_2 + 0xc9);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xdf | 0x10;
  __src = *(void **)(param_2 + 0xa8);
  if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) {
    *(void **)(param_1 + 0xa8) = __src;
  }
  else {
    __dest = (void *)FUN_00232654(*(undefined4 *)((long)__src + 4));
    memcpy(__dest,__src,(ulong)*(uint *)((long)__src + 4));
    *(void **)(param_1 + 0xa8) = __dest;
    if ((__dest != (void *)0x0) && (*(char *)((long)__dest + 0x16) == '\x03')) {
      puVar10 = (uint *)((long)__dest + 0x10);
      uVar9 = (ulong)*puVar10;
      uVar8 = (ulong)*(ushort *)((long)__dest + uVar9 + 0xe);
      if (uVar8 != 0) {
        piVar1 = (int *)((long)__dest +
                        (ulong)(*(int *)((long)__dest + uVar9 + 0x10) + *puVar10) + 0xc);
        lVar6 = 0;
        while( true ) {
          uVar9 = (ulong)(uint)(*(int *)((long)puVar10 + lVar6 * 4 + uVar9) + (int)uVar9);
          *(uint *)(param_1 + 0x60) =
               *(uint *)(param_1 + 0x60) |
               1 << (ulong)(*(uint *)((long)__dest + uVar9 + 0xc) & 0x1f);
          if (*piVar1 == 0x15) {
            iVar4 = *(int *)((long)__dest + uVar9 + 0xc);
            iVar2 = iVar4 + -9;
            if (iVar4 < 0x10) {
              iVar2 = iVar4;
            }
            *(char *)((long)piVar1 + (long)iVar2 + 4) = (char)lVar6;
          }
          if (uVar8 - 1 == lVar6) break;
          uVar9 = (ulong)*puVar10;
          lVar6 = lVar6 + 1;
        }
      }
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    lVar6 = *(long *)(param_2 + 0xa8) + 0xc;
    uVar3 = *(uint *)(*(long *)(param_2 + 0xa8) + 0x10);
    piVar1 = (int *)(lVar6 + (ulong)(*(int *)(lVar6 + (ulong)uVar3 + 4) + uVar3));
    if ((*piVar1 == 0x15) && (lVar7 = (long)(char)piVar1[3], -1 < lVar7)) {
      uVar5 = *(undefined8 *)
               (lVar6 + (ulong)(*(int *)(lVar6 + (ulong)uVar3 + 4 + lVar7 * 4) + uVar3) + 8);
      lVar6 = FUN_00232654(0x230);
      if (lVar6 != 0) {
        FUN_002458c8(lVar6,uVar5,param_1,param_3,param_4,param_5);
      }
      lVar7 = *(long *)(param_1 + 0xa8) + 0xc;
      uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
      *(long *)(lVar7 + (ulong)(*(int *)(lVar7 + (ulong)uVar3 + 4 +
                                                 (long)*(char *)(lVar7 + (ulong)(*(int *)(lVar7 + (
                                                  ulong)uVar3 + 4) + uVar3) + 0xc) * 4) + uVar3) + 8
               ) = lVar6;
    }
  }
  return;
}


