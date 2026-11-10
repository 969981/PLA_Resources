/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed55c0; name: FUN_02ed55c0
 */


uint FUN_02ed55c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  lVar8 = DAT_0440a928;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar3 = 1;
    goto LAB_02ed55e4;
  }
  for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x5000)) {
    if (*(long *)(lVar8 + 0x5010) != 0) {
      plVar12 = *(long **)(lVar8 + 0x5010);
      goto joined_r0x02ed5948;
    }
  }
  lVar8 = (*DAT_0442d138)(0,0x5018);
  if (lVar8 != 0) {
    lVar5 = 0;
    *(undefined8 *)(lVar8 + 0x5000) = 0;
    lVar9 = 0;
    uVar13 = 0;
    *(undefined4 *)(lVar8 + 0x5008) = 0;
    *(undefined8 *)(lVar8 + 0x5010) = 0;
    do {
      plVar12 = (long *)(lVar8 + lVar5);
      lVar5 = lVar5 + 0x280;
      *plVar12 = lVar9;
      plVar12[0x28] = (long)(plVar12 + 0x14);
      uVar10 = uVar13 | 3;
      uVar13 = uVar13 + 4;
      lVar9 = lVar8 + uVar10 * 0xa0;
      plVar12[0x14] = (long)plVar12;
      plVar12[0x3c] = (long)(plVar12 + 0x28);
    } while (lVar5 != 0x5000);
    *(long *)(lVar8 + 0x5010) = lVar8 + 0x4f60;
    *(undefined4 *)(lVar8 + 0x5008) = 0x80;
    if (DAT_0440a928 == 0) {
      DAT_0440a928 = lVar8;
      *(undefined8 *)(lVar8 + 0x5000) = 0;
      plVar12 = *(long **)(lVar8 + 0x5010);
    }
    else {
      *(long *)(lVar8 + 0x5000) = DAT_0440a928;
      plVar12 = *(long **)(lVar8 + 0x5010);
      DAT_0440a928 = lVar8;
    }
joined_r0x02ed5948:
    if (plVar12 != (long *)0x0) {
      if (*plVar12 == 0) {
        *(undefined8 *)(lVar8 + 0x5010) = 0;
      }
      else {
        *(long *)(lVar8 + 0x5010) = *plVar12;
      }
      *(int *)(lVar8 + 0x5008) = *(int *)(lVar8 + 0x5008) + -1;
      plVar11 = plVar12 + 3;
      *plVar11 = (long)&PTR_FUN_042aaa18;
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = 0;
      *(undefined4 *)(plVar12 + 6) = 0;
      *(undefined4 *)(plVar12 + 7) = 0;
      *(undefined1 *)(plVar12 + 8) = 0xff;
      *(undefined1 *)(plVar12 + 9) = 0xff;
      plVar12[10] = 0;
      plVar12[0xb] = 0;
      *(undefined4 *)(plVar12 + 0x11) = 0;
      plVar12[0xc] = 0;
      plVar12[0xd] = 0;
      lVar8 = param_1 + 0x30;
      plVar12[5] = 0;
      *(undefined4 *)(plVar12 + 0xe) = 0;
      plVar12[0x12] = 0;
      *(byte *)(plVar12 + 0x13) = *(byte *)(plVar12 + 0x13) & 0xfc | 1;
      uVar2 = *(uint *)(param_1 + 0xaa);
      uVar3 = uVar2 & 0x3ff;
      *(long **)(param_1 + 0x78) = plVar12;
      if (((*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) && (uVar3 != 0)) &&
         (((uint)**(undefined8 **)(param_1 + 0x38) >> 0x10 & 1) != 0)) {
        local_58 = 0xff;
        local_50 = 0xff;
        fVar14 = 0.0;
        local_60 = 0;
        local_68 = 0;
        local_48 = 0;
        local_70 = 0;
        uVar3 = *(uint *)(DAT_0440a160 + 0x20);
        if (uVar3 != 0) {
          uVar2 = (int)lVar8 + 0x10;
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar2 / uVar3;
          }
          for (plVar6 = *(long **)(*(long *)(DAT_0440a160 + 0x18) +
                                  (ulong)(uVar2 - uVar1 * uVar3) * 8); plVar6 != (long *)0x0;
              plVar6 = (long *)plVar6[2]) {
            if ((*plVar6 == lVar8) && ((int)plVar6[1] == 0x10)) {
              if (*(int *)((long)plVar6 + 0x4c) == 3) {
                fVar14 = (float)FUN_02eb1180(DAT_0440a160,plVar6,&local_70);
              }
              else {
                fVar14 = (float)FUN_02eb1334();
              }
              break;
            }
          }
        }
        uVar3 = (uint)fVar14;
        uVar2 = *(uint *)(param_1 + 0xaa);
      }
      *(short *)(plVar12 + 0xe) = (short)uVar3;
      *(byte *)((long)plVar12 + 0x72) = (byte)(uVar2 >> 10) & 1;
      *(byte *)((long)plVar12 + 0x73) = (byte)(uVar2 >> 0xb) & 1;
      plVar12[5] = 0;
      *(undefined4 *)(plVar12 + 6) = 0;
      *(undefined4 *)(plVar12 + 7) = 0;
      *(undefined1 *)(plVar12 + 8) = 0xff;
      *(undefined1 *)(plVar12 + 9) = 0xff;
      plVar12[10] = 0;
      if (uVar3 != 0) {
        local_70 = 0x10000;
        FUN_02ed30dc(lVar8,plVar11,&local_70);
        if (plVar12[0xb] == 0) {
          plVar12[0xb] = param_1;
          uVar3 = (uint)param_1;
          if (DAT_0440a940 == 0) {
LAB_02ed5950:
            FUN_02eea980(&DAT_0440a930);
            if (DAT_0440a940 == 0) goto LAB_02ed56e4;
            uVar1 = 0;
            if (DAT_0440a940 != 0) {
              uVar1 = uVar3 / DAT_0440a940;
            }
            uVar13 = (ulong)(uVar3 - uVar1 * DAT_0440a940);
            plVar6 = *(long **)(DAT_0440a938 + uVar13 * 8);
          }
          else {
            uVar1 = 0;
            if (DAT_0440a940 != 0) {
              uVar1 = uVar3 / DAT_0440a940;
            }
            uVar13 = (ulong)(uVar3 - uVar1 * DAT_0440a940);
            plVar6 = *(long **)(DAT_0440a938 + uVar13 * 8);
            if (plVar6 != (long *)0x0) {
              plVar7 = plVar6;
              do {
                if (*(uint *)(plVar7 + 1) == uVar3) {
                  plVar7 = plVar7 + 2;
                  lVar8 = *plVar7;
                  goto joined_r0x02ed592c;
                }
                plVar7 = (long *)*plVar7;
              } while (plVar7 != (long *)0x0);
            }
            fVar14 = (float)NEON_ucvtf(DAT_0440a948);
            if (0.9 < fVar14 / (float)DAT_0440a940) goto LAB_02ed5950;
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (*(uint *)(plVar6 + 1) == uVar3) {
              plVar7 = plVar6 + 2;
              lVar8 = *plVar7;
              goto joined_r0x02ed592c;
            }
          }
          puVar4 = (undefined8 *)(*DAT_0442d138)(0,0x18);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = *(undefined8 *)(DAT_0440a938 + uVar13 * 8);
            *(uint *)(puVar4 + 1) = uVar3;
            plVar7 = puVar4 + 2;
            *plVar7 = 0;
            *(undefined8 **)(DAT_0440a938 + uVar13 * 8) = puVar4;
            DAT_0440a948 = DAT_0440a948 + 1;
            lVar8 = *plVar7;
joined_r0x02ed592c:
            if (lVar8 == 0) {
              *plVar7 = (long)plVar11;
              plVar12[4] = 0;
            }
            else {
              plVar12[4] = lVar8;
              *plVar7 = (long)plVar11;
            }
          }
        }
      }
LAB_02ed56e4:
      uVar3 = 0;
      if (*(long *)(param_1 + 0x80) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x80) + 0x80);
        if (lVar8 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 1;
          do {
            lVar8 = *(long *)(lVar8 + 0x80);
            uVar3 = uVar3 + 1;
          } while (lVar8 != 0);
        }
      }
      uVar13 = 0x4000000000000000;
      if ((*(uint *)(param_1 + 0xaa) & 0x20000) != 0) {
        uVar13 = 0x2000000000000000;
      }
      uVar1 = *(uint *)(param_1 + 0x10);
      plVar12[0x12] = 0;
      plVar12[0x10] = uVar13 | (ulong)uVar3 << 0x20 | (ulong)uVar1;
      *(byte *)(plVar12 + 0x13) = *(byte *)(plVar12 + 0x13) & 0xfe | (byte)(uVar2 >> 0xe) & 1;
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar3 = 1;
        lVar8 = *(long *)(param_1 + 0x80);
      }
      else {
        uVar3 = FUN_02ed55c0();
        lVar8 = *(long *)(param_1 + 0x80);
      }
      if (lVar8 != 0) {
        uVar2 = FUN_02ed55c0();
        uVar3 = uVar3 & uVar2;
      }
      goto LAB_02ed55e4;
    }
  }
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
LAB_02ed55e4:
  return uVar3 & 1;
}


