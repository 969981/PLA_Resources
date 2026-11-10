/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02998038; name: FUN_02998038
 */


byte FUN_02998038(long param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  char cVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  bVar1 = *(byte *)(param_1 + 0x5a);
  bVar2 = *(byte *)(param_3 + 0x7d);
  *(undefined8 *)((long)param_4 + 0x56) = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  *param_4 = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  if ((ulong)bVar1 == 0) {
    return 0;
  }
  lVar7 = (ulong)(5 < bVar2) << 1;
  lVar8 = (ulong)(bVar2 < 0x1e) << 2;
  if (0xb < bVar2) {
    lVar7 = 1;
  }
  if (bVar2 < 0x18) {
    lVar8 = 3;
  }
  bVar6 = 0;
  uVar5 = 0;
  if (0x11 < bVar2) {
    lVar7 = lVar8;
  }
  if (bVar2 != 0x1f) goto LAB_029980c8;
LAB_029980b4:
  do {
    do {
      do {
        uVar5 = uVar5 + 1;
        if (uVar5 == bVar1) {
          return bVar6;
        }
      } while (bVar2 == 0x1f);
LAB_029980c8:
      lVar8 = *(long *)(param_1 + uVar5 * 8);
      bVar3 = *(byte *)(lVar8 + 0x7d);
    } while (bVar3 == 0x1f);
    uVar4 = *(uint *)(param_2 + 0x110);
    if (uVar4 < 3) {
      cVar9 = (&PTR_DAT_04276ec8)[(int)uVar4][lVar7];
      if (bVar3 < 6) goto LAB_029980f4;
LAB_029981a0:
      if (bVar3 < 0xc) {
        lVar12 = 2;
        goto joined_r0x029981f0;
      }
      if (bVar3 < 0x12) {
        lVar12 = 1;
        goto joined_r0x029981f0;
      }
      if (bVar3 < 0x18) {
        lVar12 = 3;
        goto joined_r0x029981f0;
      }
      lVar12 = (ulong)(bVar3 < 0x1e) << 2;
      if (2 < uVar4) goto LAB_029981b4;
LAB_02998100:
      cVar10 = (&PTR_DAT_04276eb0)[(int)uVar4][lVar12];
    }
    else {
      cVar9 = '\x02';
      if (5 < bVar3) goto LAB_029981a0;
LAB_029980f4:
      lVar12 = 0;
joined_r0x029981f0:
      if (uVar4 < 3) goto LAB_02998100;
LAB_029981b4:
      cVar10 = '\x02';
    }
    if (((lVar8 != 0) && (cVar9 == cVar10)) && (bVar6 < 6)) {
      plVar11 = param_4;
      uVar13 = (ulong)bVar6;
      if (bVar6 != 0) {
        do {
          if (*plVar11 == lVar8) goto LAB_029980b4;
          uVar13 = uVar13 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar13 != 0);
      }
      param_4[bVar6] = lVar8;
      *(undefined1 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x5a) + 0x48) = 0;
      *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x5a) * 2 + 0x30) = 0;
      *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x5a) * 2 + 0x3c) = 0;
      bVar6 = *(char *)((long)param_4 + 0x5a) + 1;
      *(byte *)((long)param_4 + 0x5a) = bVar6;
      if (*(byte *)((long)param_4 + 0x5b) < bVar6) {
        *(byte *)((long)param_4 + 0x5b) = bVar6;
      }
    }
  } while( true );
}


