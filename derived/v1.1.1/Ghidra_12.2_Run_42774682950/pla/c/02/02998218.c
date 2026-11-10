/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02998218; name: FUN_02998218
 */


byte FUN_02998218(long param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  char cVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  
  *(undefined8 *)((long)param_4 + 0x56) = 0;
  *param_4 = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  bVar1 = *(byte *)(param_1 + 0x5a);
  if ((ulong)bVar1 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_3 + 0x7d);
  lVar8 = (ulong)(5 < bVar2) << 1;
  lVar9 = (ulong)(bVar2 < 0x1e) << 2;
  if (0xb < bVar2) {
    lVar8 = 1;
  }
  if (bVar2 < 0x18) {
    lVar9 = 3;
  }
  bVar7 = 0;
  uVar6 = 0;
  if (0x11 < bVar2) {
    lVar8 = lVar9;
  }
  do {
    lVar9 = *(long *)(param_1 + uVar6 * 8);
    bVar5 = false;
    if ((bVar2 != 0x1f) && (bVar3 = *(byte *)(lVar9 + 0x7d), bVar3 != 0x1f)) {
      uVar4 = *(uint *)(param_2 + 0x110);
      if (uVar4 < 3) {
        cVar10 = (&PTR_DAT_04276ee0)[(int)uVar4][lVar8];
        if (5 < bVar3) goto LAB_029982f8;
LAB_029982d4:
        lVar13 = 0;
joined_r0x029983d0:
        if (2 < uVar4) goto LAB_0299830c;
LAB_029982e0:
        cVar11 = (&PTR_DAT_04276eb0)[(int)uVar4][lVar13];
      }
      else {
        cVar10 = '\x02';
        if (bVar3 < 6) goto LAB_029982d4;
LAB_029982f8:
        if (bVar3 < 0xc) {
          lVar13 = 2;
          goto joined_r0x029983d0;
        }
        if (bVar3 < 0x12) {
          lVar13 = 1;
          goto joined_r0x029983d0;
        }
        if (bVar3 < 0x18) {
          lVar13 = 3;
          goto joined_r0x029983d0;
        }
        lVar13 = (ulong)(bVar3 < 0x1e) << 2;
        if (uVar4 < 3) goto LAB_029982e0;
LAB_0299830c:
        cVar11 = '\x02';
      }
      bVar5 = cVar10 == cVar11;
    }
    if (((lVar9 != 0) && (!bVar5)) && (bVar7 < 6)) {
      plVar12 = param_4;
      uVar14 = (ulong)bVar7;
      if (bVar7 != 0) {
        do {
          if (*plVar12 == lVar9) goto LAB_02998290;
          uVar14 = uVar14 - 1;
          plVar12 = plVar12 + 1;
        } while (uVar14 != 0);
      }
      param_4[bVar7] = lVar9;
      *(undefined1 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x5a) + 0x48) = 0;
      *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x5a) * 2 + 0x30) = 0;
      *(undefined2 *)((long)param_4 + (ulong)*(byte *)((long)param_4 + 0x5a) * 2 + 0x3c) = 0;
      bVar7 = *(char *)((long)param_4 + 0x5a) + 1;
      *(byte *)((long)param_4 + 0x5a) = bVar7;
      if (*(byte *)((long)param_4 + 0x5b) < bVar7) {
        *(byte *)((long)param_4 + 0x5b) = bVar7;
      }
    }
LAB_02998290:
    uVar6 = uVar6 + 1;
    if (uVar6 == bVar1) {
      return bVar7;
    }
  } while( true );
}


