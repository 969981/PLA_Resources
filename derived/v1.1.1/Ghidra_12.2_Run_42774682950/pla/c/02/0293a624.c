/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a624; name: FUN_0293a624
 */


undefined8 FUN_0293a624(long param_1,byte param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  byte *pbVar8;
  char cVar9;
  long lVar10;
  char cVar11;
  undefined1 *puVar12;
  long *plVar13;
  ulong uVar14;
  
  uVar2 = (uint)param_2;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)uVar2 * 8 + 0x120);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x368);
  if (uVar2 < 6) {
    lVar10 = 0;
  }
  else if (uVar2 < 0xc) {
    lVar10 = 2;
  }
  else if (param_2 < 0x12) {
    lVar10 = 1;
  }
  else if (param_2 < 0x18) {
    lVar10 = 3;
  }
  else {
    lVar10 = (ulong)(param_2 < 0x1e) << 2;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x58) + 0x110);
  bVar4 = *(byte *)(*(long *)(param_1 + 0x80) + 0x59);
  if (iVar3 == 2) {
LAB_0293a67c:
    puVar12 = &DAT_03a7ebe0;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        cVar11 = '\x02';
        cVar9 = '\x02';
        goto joined_r0x0293a81c;
      }
      goto LAB_0293a67c;
    }
    puVar12 = &DAT_03a7ebe5;
  }
  if (bVar4 < 5) {
    cVar11 = puVar12[bVar4];
    cVar9 = puVar12[lVar10];
  }
  else {
    cVar11 = '\x02';
    cVar9 = puVar12[lVar10];
  }
joined_r0x0293a81c:
  if (*(byte *)(lVar6 + 0x368) != 0) {
    if (cVar11 == cVar9) {
      puVar7 = (uint *)(lVar6 + 0x300);
      do {
        lVar6 = (&DAT_0428af30)[(ulong)*puVar7 * 6];
        if (lVar6 == 0) {
          plVar13 = &DAT_0428af30;
        }
        else {
          plVar13 = &DAT_0428af30;
          if (*(char *)(lVar6 + 0x1e1) != '\0') {
            plVar13 = &DAT_0428af30 + (ulong)*puVar7 * 6;
          }
        }
        piVar1 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x29) ||
           (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x14], uVar14 == 0)) {
          if (param_3 == 0) {
            return 1;
          }
        }
        else if (*(ushort *)((long)piVar1 + uVar14) == param_3) {
          return 1;
        }
        puVar7 = puVar7 + 7;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    else {
      pbVar8 = (byte *)(lVar6 + 0x307);
      do {
        if (0xf < *pbVar8) {
          lVar6 = (&DAT_0428af30)[(ulong)*(uint *)(pbVar8 + -7) * 6];
          if (lVar6 == 0) {
            plVar13 = &DAT_0428af30;
          }
          else {
            plVar13 = &DAT_0428af30;
            if (*(char *)(lVar6 + 0x1e1) != '\0') {
              plVar13 = &DAT_0428af30 + (ulong)*(uint *)(pbVar8 + -7) * 6;
            }
          }
          piVar1 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250)
                          );
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x29) ||
             (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x14], uVar14 == 0)) {
            if (param_3 == 0) {
              return 1;
            }
          }
          else if (*(ushort *)((long)piVar1 + uVar14) == param_3) {
            return 1;
          }
        }
        pbVar8 = pbVar8 + 0x1c;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return 0;
}


