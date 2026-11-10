/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed3f34; name: FUN_02ed3f34
 */


void FUN_02ed3f34(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  
  uVar3 = *(ushort *)(param_1 + 2);
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar3 <= uVar2 && uVar2 != uVar3) {
      uVar7 = 0;
      plVar1 = (long *)*param_1 + uVar2;
      plVar4 = (long *)*param_1;
      lVar9 = (ulong)uVar2 * 8 + -0x10;
      do {
        lVar6 = lVar9;
        plVar8 = plVar4;
        lVar9 = *plVar8;
        if (((*(uint *)(lVar9 + 0x2a3) & 0x2010000) == 0) && ((*(byte *)(lVar9 + 0x199) & 3) == 0))
        {
          lVar10 = *(long *)(lVar9 + 0x238);
          if (lVar10 == 0) {
LAB_02ed4024:
            if ((*(uint *)(lVar9 + 0x2a3) & 0x78) != 0) goto LAB_02ed4008;
          }
          else {
            lVar13 = *(long *)(lVar10 + 0x28);
            if (lVar13 != 0) {
              bVar12 = *(byte *)(lVar13 + 0x168);
              bVar11 = bVar12 >> 1 & 1;
              do {
                bVar12 = bVar12 & 1;
                lVar13 = *(long *)(lVar13 + 0x48);
                while( true ) {
                  if (lVar13 == 0) goto LAB_02ed3fec;
                  if (bVar11 == 0) {
                    bVar11 = 0;
                  }
                  else {
                    bVar11 = *(byte *)(lVar13 + 0x168) >> 1 & 1;
                  }
                  if (bVar12 != 0) break;
                  bVar12 = 0;
                  lVar13 = *(long *)(lVar13 + 0x48);
                }
                bVar12 = *(byte *)(lVar13 + 0x168);
              } while( true );
            }
            bVar12 = 1;
            bVar11 = 1;
LAB_02ed3fec:
            if ((bVar12 != 0) && (bVar11 != 0 || (*(byte *)(lVar10 + 0x50) & 2) == 0))
            goto LAB_02ed4024;
          }
          uVar7 = uVar7 + 1;
        }
LAB_02ed4008:
        plVar4 = plVar8 + 1;
      } while ((plVar4 != plVar1) && (lVar9 = lVar6 + -8, uVar7 < uVar3));
      if (plVar4 != plVar1) {
        uVar5 = 1;
        if (param_1 == &DAT_0440adc8) {
          uVar5 = 2;
        }
        lVar9 = *plVar4;
        if ((*(ushort *)(lVar9 + 0x2a5) & 0x201) == 0) {
          if (*(char *)((long)param_1 + 0x13) == '\0') {
            FUN_02ecec58(lVar9,uVar5);
          }
          else {
            FUN_02eceebc(lVar9,uVar5);
          }
        }
        if (plVar8 + 2 != plVar1) {
          lVar9 = 8;
          do {
            lVar10 = *(long *)((long)plVar4 + lVar9);
            if ((*(ushort *)(lVar10 + 0x2a5) & 0x201) == 0) {
              if (*(char *)((long)param_1 + 0x13) == '\0') {
                FUN_02ecec58(lVar10,uVar5);
              }
              else {
                FUN_02eceebc(lVar10,uVar5);
              }
            }
            lVar6 = lVar6 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar6 != 0);
        }
      }
    }
  }
  return;
}


