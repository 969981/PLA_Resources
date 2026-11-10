/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00472ad0; name: FUN_00472ad0
 */


void FUN_00472ad0(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 code *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_60;
  ulong local_58;
  
  if (param_3 == 0) {
    return;
  }
  if (param_1 == param_2) {
    if (param_3 < 0x10) {
      param_2 = param_1;
      goto LAB_00472c04;
    }
    uVar10 = param_3;
    do {
      (*param_6)(param_1,&local_60,param_4);
      uVar10 = uVar10 - 0x10;
      uVar7 = *param_1;
      *param_1 = *param_5 ^ local_60;
      *param_5 = uVar7;
      uVar7 = param_1[1];
      param_1[1] = param_5[1] ^ local_58;
      param_1 = param_1 + 2;
      param_5[1] = uVar7;
    } while (0xf < uVar10);
    param_3 = param_3 & 0xf;
    param_2 = param_1;
  }
  else if (param_3 < 0x10) {
    param_5[1] = param_5[1];
    *param_5 = *param_5;
  }
  else {
    uVar10 = param_3;
    puVar8 = param_5;
    do {
      puVar9 = param_1;
      (*param_6)(puVar9,param_2,param_4);
      uVar10 = uVar10 - 0x10;
      param_1 = puVar9 + 2;
      *param_2 = *param_2 ^ *puVar8;
      param_2[1] = param_2[1] ^ puVar8[1];
      param_2 = param_2 + 2;
      puVar8 = puVar9;
    } while (0xf < uVar10);
    param_3 = param_3 & 0xf;
    uVar10 = *puVar9;
    param_5[1] = puVar9[1];
    *param_5 = uVar10;
  }
  if (param_3 == 0) {
    return;
  }
LAB_00472c04:
  do {
    (*param_6)(param_1,&local_60,param_4);
    uVar10 = 0;
    uVar7 = 0x10;
    do {
      uVar7 = uVar7 - 1;
      uVar3 = *(undefined1 *)((long)param_1 + uVar10);
      *(byte *)((long)param_2 + uVar10) =
           *(byte *)((long)param_5 + uVar10) ^ *(byte *)((long)&local_60 + uVar10);
      *(undefined1 *)((long)param_5 + uVar10) = uVar3;
      uVar10 = uVar10 + 1;
      if (0xf < uVar10) break;
    } while (uVar10 < param_3);
    bVar4 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar4 || param_3 == 0) {
      if (uVar10 < 0x10) {
        uVar6 = 0x10 - uVar10;
        uVar5 = uVar10;
        if (0x3f < uVar6) {
          if ((param_1 + 2 <= (ulong *)((long)param_5 + uVar10)) ||
             (param_5 + 2 <= (ulong *)((long)param_1 + uVar10))) {
            uVar5 = (uVar7 & 0xffffffffffffffc0) + uVar10;
            uVar7 = 0x10 - uVar10 & 0xffffffffffffffc0;
            puVar8 = (ulong *)((long)param_1 + uVar10) + 4;
            puVar9 = (ulong *)((long)param_5 + uVar10) + 4;
            do {
              uVar10 = puVar8[-4];
              uVar12 = puVar8[-1];
              uVar11 = puVar8[-2];
              uVar7 = uVar7 - 0x40;
              uVar14 = puVar8[1];
              uVar13 = *puVar8;
              uVar16 = puVar8[3];
              uVar15 = puVar8[2];
              puVar9[-3] = puVar8[-3];
              puVar9[-4] = uVar10;
              puVar9[-1] = uVar12;
              puVar9[-2] = uVar11;
              puVar9[1] = uVar14;
              *puVar9 = uVar13;
              puVar9[3] = uVar16;
              puVar9[2] = uVar15;
              puVar8 = puVar8 + 8;
              puVar9 = puVar9 + 8;
            } while (uVar7 != 0);
            if (uVar6 == (uVar6 & 0xffffffffffffffc0)) {
              return;
            }
          }
        }
        uVar7 = 0xf - uVar5;
        uVar10 = (ulong)(uint)-(int)uVar5 & 3;
        if ((-(int)uVar5 & 3U) != 0) {
          do {
            uVar10 = uVar10 - 1;
            *(undefined1 *)((long)param_5 + uVar5) = *(undefined1 *)((long)param_1 + uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar10 != 0);
        }
        if (2 < uVar7) {
          do {
            puVar1 = (undefined1 *)((long)param_1 + uVar5);
            puVar2 = (undefined1 *)((long)param_5 + uVar5 + 1);
            uVar5 = uVar5 + 4;
            puVar2[-1] = *puVar1;
            *puVar2 = puVar1[1];
            puVar2[1] = puVar1[2];
            puVar2[2] = puVar1[3];
          } while (uVar5 != 0x10);
        }
      }
      return;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  } while( true );
}


