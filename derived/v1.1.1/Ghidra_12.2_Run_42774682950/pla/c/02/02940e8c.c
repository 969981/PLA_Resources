/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02940e8c; name: FUN_02940e8c
 */


undefined8 FUN_02940e8c(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  short sVar9;
  ulong uVar10;
  short *psVar11;
  ulong __n;
  long lVar12;
  undefined1 auStack_2768 [10008];
  
  memset(auStack_2768,0,0x2714);
  uVar2 = *(uint *)(param_1 + 0x4fc);
  __n = (ulong)uVar2;
  sVar5 = *(short *)(param_1 + 0xf6);
  bVar3 = *(byte *)(param_1 + 0xf8);
  bVar4 = *(byte *)(param_1 + 0xf9);
  memcpy(auStack_2768,(void *)(param_1 + 0xfa),__n);
  lVar8 = *(long *)(param_1 + 0x68);
  uVar6 = (undefined2)uVar2;
  sVar9 = sVar5;
  if ((*(char *)(lVar8 + 0x4e59) == '\0') && (*(char *)(lVar8 + 0x4e58) == '\0')) {
    *(short *)(lVar8 + 0x2730) = sVar5;
    *(ushort *)(lVar8 + 0x2736) = (ushort)bVar3;
    *(ushort *)(lVar8 + 0x2732) = (ushort)bVar4;
    *(undefined2 *)(lVar8 + 0x2734) = uVar6;
    memcpy((void *)(lVar8 + 0x2738),auStack_2768,__n & 0xffff);
    *(char *)(lVar8 + 0x4e58) = '\x01';
    sVar9 = *(short *)(param_1 + 0xf6);
  }
  if (sVar9 != 0) {
    lVar12 = *(long *)(param_1 + 0x70);
    uVar2 = *(uint *)(lVar12 + 0xb0);
    lVar8 = *(long *)(lVar12 + 0x78);
    if (uVar2 != 0) {
      psVar11 = (short *)(lVar8 + 8);
      uVar10 = (ulong)uVar2;
      do {
        if (*psVar11 != 0 && *psVar11 == sVar9) {
          if (psVar11 != (short *)&DAT_00000008) {
            return 1;
          }
          break;
        }
        psVar11 = psVar11 + 0x1394;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar10 = 0;
      psVar11 = (short *)(lVar8 + 8);
      do {
        if (*psVar11 != 0 && *psVar11 == sVar5) {
          if (lVar8 + (uVar10 & 0xffffffff) * 0x2728 != 0) {
            return 1;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        psVar11 = psVar11 + 0x1394;
      } while (uVar2 != uVar10);
    }
    lVar8 = lVar8 + (ulong)*(uint *)(lVar12 + 0xb4) * 0x2728;
    *(short *)(lVar8 + 8) = sVar5;
    *(ushort *)(lVar8 + 0xe) = (ushort)bVar3;
    *(ushort *)(lVar8 + 10) = (ushort)bVar4;
    *(undefined2 *)(lVar8 + 0xc) = uVar6;
    memcpy((void *)(lVar8 + 0x10),auStack_2768,__n & 0xffff);
    uVar1 = *(uint *)(lVar12 + 0xb0);
    uVar2 = *(int *)(lVar12 + 0xb4) + 1;
    uVar7 = 0;
    if (uVar1 != 0) {
      uVar7 = uVar2 / uVar1;
    }
    *(uint *)(lVar12 + 0xb4) = uVar2 - uVar7 * uVar1;
  }
  return 1;
}


