/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a120e4; name: FUN_02a120e4
 */


void FUN_02a120e4(long param_1,undefined4 param_2,byte param_3)

{
  size_t __n;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  ushort uVar7;
  ulong uVar8;
  short *psVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  short sVar13;
  long lVar14;
  uint local_278c;
  undefined1 *local_2788;
  undefined1 auStack_2780 [10016];
  
  local_2788 = (undefined1 *)0x0;
  local_278c = 0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x20);
  uVar1 = *(uint *)(lVar10 + 0xb0);
  uVar8 = (ulong)uVar1;
  if (uVar1 != 0) {
    lVar10 = *(long *)(lVar10 + 0x78);
    psVar9 = (short *)(lVar10 + 8);
    sVar13 = *(short *)(param_1 + 0x78);
    uVar12 = uVar8;
    do {
      if (*psVar9 != 0 && *psVar9 == sVar13) {
        if (psVar9 != (short *)&DAT_00000008) {
          puVar11 = (undefined1 *)(lVar10 + 0x10);
          goto LAB_02a12170;
        }
        break;
      }
      psVar9 = psVar9 + 0x1394;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  goto LAB_02a121a8;
  while( true ) {
    puVar11 = puVar11 + 0x2728;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) break;
LAB_02a12170:
    if (*(short *)(puVar11 + -8) != 0 && *(short *)(puVar11 + -8) == sVar13) {
      if (puVar11 != &DAT_00000010) {
        local_278c = (uint)*(ushort *)(puVar11 + -4);
        local_2788 = puVar11;
        goto LAB_02a121c4;
      }
      break;
    }
  }
LAB_02a121a8:
  FUN_02a12aa4(*(long *)(param_1 + 0x5c0),&local_2788,&local_278c,param_2);
  sVar13 = *(short *)(param_1 + 0x78);
LAB_02a121c4:
  puVar11 = local_2788;
  uVar1 = local_278c;
  bVar3 = *(byte *)(param_1 + 0x54);
  uVar4 = (undefined1)param_2;
  uVar5 = (undefined2)local_278c;
  uVar7 = (ushort)param_2;
  if (param_3 == 5) {
    lVar10 = *(long *)(param_1 + 0x80);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x4e54) == 0)) {
      *(undefined1 *)(lVar10 + 0x4e50) = uVar4;
      *(undefined4 *)(lVar10 + 0x4e54) = 1;
      *(short *)(lVar10 + 8) = sVar13;
      *(ushort *)(lVar10 + 0xe) = (ushort)bVar3;
      *(ushort *)(lVar10 + 10) = uVar7 & 0xff;
      *(undefined2 *)(lVar10 + 0xc) = uVar5;
      memcpy((void *)(lVar10 + 0x10),local_2788,(ulong)local_278c);
      *(undefined2 *)(lVar10 + 0x2736) = 0x2e;
      *(undefined2 *)(lVar10 + 0x2730) = 0;
      *(undefined4 *)(lVar10 + 0x2732) = 0;
      memset((void *)(lVar10 + 0x2738),0,0x2714);
      *(undefined1 *)(lVar10 + 0x4e58) = 0;
    }
    lVar10 = *(long *)(param_1 + 0x90);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x4e54) == 0)) {
      *(undefined1 *)(lVar10 + 0x4e50) = uVar4;
      *(undefined4 *)(lVar10 + 0x4e54) = 1;
      *(short *)(lVar10 + 8) = sVar13;
      *(ushort *)(lVar10 + 0xe) = (ushort)bVar3;
      *(ushort *)(lVar10 + 10) = uVar7 & 0xff;
      *(undefined2 *)(lVar10 + 0xc) = uVar5;
      memcpy((void *)(lVar10 + 0x10),puVar11,(ulong)uVar1);
      *(undefined2 *)(lVar10 + 0x2736) = 0x2e;
      *(undefined2 *)(lVar10 + 0x2730) = 0;
      *(undefined4 *)(lVar10 + 0x2732) = 0;
      memset((void *)(lVar10 + 0x2738),0,0x2714);
      *(undefined1 *)(lVar10 + 0x4e58) = 0;
    }
    lVar10 = *(long *)(param_1 + 0xa0);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x4e54) == 0)) {
      *(undefined1 *)(lVar10 + 0x4e50) = uVar4;
      *(undefined4 *)(lVar10 + 0x4e54) = 1;
      *(short *)(lVar10 + 8) = sVar13;
      *(ushort *)(lVar10 + 0xe) = (ushort)bVar3;
      *(ushort *)(lVar10 + 10) = uVar7 & 0xff;
      *(undefined2 *)(lVar10 + 0xc) = uVar5;
      memcpy((void *)(lVar10 + 0x10),puVar11,(ulong)uVar1);
      *(undefined2 *)(lVar10 + 0x2736) = 0x2e;
      *(undefined2 *)(lVar10 + 0x2730) = 0;
      *(undefined4 *)(lVar10 + 0x2732) = 0;
      memset((void *)(lVar10 + 0x2738),0,0x2714);
      *(undefined1 *)(lVar10 + 0x4e58) = 0;
    }
    lVar10 = *(long *)(param_1 + 0xb0);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x4e54) == 0)) {
      *(undefined1 *)(lVar10 + 0x4e50) = uVar4;
      *(undefined4 *)(lVar10 + 0x4e54) = 1;
      *(short *)(lVar10 + 8) = sVar13;
      *(ushort *)(lVar10 + 0xe) = (ushort)bVar3;
      *(ushort *)(lVar10 + 10) = uVar7 & 0xff;
      *(undefined2 *)(lVar10 + 0xc) = uVar5;
      memcpy((void *)(lVar10 + 0x10),puVar11,(ulong)uVar1);
      *(undefined2 *)(lVar10 + 0x2736) = 0x2e;
      *(undefined2 *)(lVar10 + 0x2730) = 0;
      *(undefined4 *)(lVar10 + 0x2732) = 0;
      memset((void *)(lVar10 + 0x2738),0,0x2714);
      *(undefined1 *)(lVar10 + 0x4e58) = 0;
    }
    lVar10 = *(long *)(param_1 + 0xc0);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x4e54) == 0)) {
      *(undefined1 *)(lVar10 + 0x4e50) = uVar4;
      *(undefined4 *)(lVar10 + 0x4e54) = 1;
      *(short *)(lVar10 + 8) = sVar13;
      *(ushort *)(lVar10 + 0xe) = (ushort)bVar3;
      *(ushort *)(lVar10 + 10) = uVar7 & 0xff;
      *(undefined2 *)(lVar10 + 0xc) = uVar5;
      memcpy((void *)(lVar10 + 0x10),puVar11,(ulong)uVar1);
      *(undefined2 *)(lVar10 + 0x2736) = 0x2e;
      *(undefined2 *)(lVar10 + 0x2730) = 0;
      *(undefined4 *)(lVar10 + 0x2732) = 0;
      memset((void *)(lVar10 + 0x2738),0,0x2714);
      *(undefined1 *)(lVar10 + 0x4e58) = 0;
      sVar13 = *(short *)(param_1 + 0x78);
      goto joined_r0x02a124b0;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + (ulong)param_3 * 0x10 + 0x80);
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x4e54) = 1;
      *(undefined1 *)(lVar10 + 0x4e50) = uVar4;
      *(short *)(lVar10 + 8) = sVar13;
      *(ushort *)(lVar10 + 0xe) = (ushort)bVar3;
      *(ushort *)(lVar10 + 10) = uVar7 & 0xff;
      *(undefined2 *)(lVar10 + 0xc) = uVar5;
      memcpy((void *)(lVar10 + 0x10),local_2788,(ulong)local_278c);
      *(undefined2 *)(lVar10 + 0x2736) = 0x2e;
      *(undefined2 *)(lVar10 + 0x2730) = 0;
      *(undefined4 *)(lVar10 + 0x2732) = 0;
      memset((void *)(lVar10 + 0x2738),0,0x2714);
      *(undefined1 *)(lVar10 + 0x4e58) = 0;
    }
  }
  sVar13 = *(short *)(param_1 + 0x78);
joined_r0x02a124b0:
  if (sVar13 != 0) {
    lVar14 = *(long *)(param_1 + 0x70);
    bVar3 = *(byte *)(param_1 + 0x54);
    uVar2 = *(uint *)(lVar14 + 0xb0);
    uVar8 = (ulong)uVar2;
    lVar10 = *(long *)(lVar14 + 0x78);
    if (uVar2 != 0) {
      psVar9 = (short *)(lVar10 + 8);
      uVar12 = uVar8;
      do {
        if (*psVar9 != 0 && *psVar9 == sVar13) {
          if (psVar9 != (short *)&DAT_00000008) goto LAB_02a125b0;
          break;
        }
        psVar9 = psVar9 + 0x1394;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar12 = (ulong)uVar1;
    __n = 0;
    if (uVar1 >> 2 < 0x9c5) {
      __n = 0x2714 - uVar12;
    }
    memset(auStack_2780 + uVar12,0,__n);
    memcpy(auStack_2780,puVar11,uVar12);
    if (uVar2 != 0) {
      psVar9 = (short *)(lVar10 + 8);
      do {
        if (*psVar9 != 0 && *psVar9 == sVar13) {
          if (psVar9 != (short *)&DAT_00000008) goto LAB_02a125b0;
          break;
        }
        psVar9 = psVar9 + 0x1394;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar10 = lVar10 + (ulong)*(uint *)(lVar14 + 0xb4) * 0x2728;
    *(short *)(lVar10 + 8) = sVar13;
    *(ushort *)(lVar10 + 0xe) = (ushort)bVar3;
    *(ushort *)(lVar10 + 10) = uVar7 & 0xff;
    *(undefined2 *)(lVar10 + 0xc) = uVar5;
    memcpy((void *)(lVar10 + 0x10),auStack_2780,(ulong)(uVar1 & 0xffff));
    uVar2 = *(uint *)(lVar14 + 0xb0);
    uVar1 = *(int *)(lVar14 + 0xb4) + 1;
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = uVar1 / uVar2;
    }
    *(uint *)(lVar14 + 0xb4) = uVar1 - uVar6 * uVar2;
    sVar13 = *(short *)(param_1 + 0x78);
  }
LAB_02a125b0:
  *(short *)(param_1 + 0x78) = sVar13 + 1;
  return;
}


