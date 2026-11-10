/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e8c90; name: FUN_008e8c90
 */


long * FUN_008e8c90(long *param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_48 [8];
  
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
  uVar6 = FUN_008e8ed4(auStack_48,pbVar2,uVar6);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar10 = uVar11 - 1 & uVar6;
    }
    else if (uVar6 < uVar11) {
      uVar10 = uVar6;
    }
    else {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar6 / uVar11;
      }
      uVar10 = uVar6 - uVar10 * uVar11;
    }
    plVar8 = *(long **)(*param_1 + uVar10 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar6) {
            bVar3 = *(byte *)(plVar8 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar8[3];
            }
            if (sVar1 == __n) {
              pvVar9 = (void *)plVar8[4];
              if ((bVar3 & 1) == 0) {
                pvVar9 = (void *)((long)plVar8 + 0x11);
              }
              if ((bVar3 & 1) == 0) {
                if (__n == 0) {
                  return plVar8;
                }
                uVar7 = 0;
                while (*(byte *)((long)plVar8 + uVar7 + 0x11) == pbVar2[uVar7]) {
                  uVar7 = uVar7 + 1;
                  if (bVar3 >> 1 == uVar7) {
                    return plVar8;
                  }
                }
              }
              else {
                if (__n == 0) {
                  return plVar8;
                }
                iVar5 = memcmp(pvVar9,pbVar2,__n);
                if (iVar5 == 0) {
                  return plVar8;
                }
              }
            }
          }
          else if ((plVar8[1] & uVar11 - 1) != uVar10) {
            return (long *)0x0;
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar6) {
          bVar3 = *(byte *)(plVar8 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar8[3];
          }
          if (sVar1 == __n) {
            pvVar9 = (void *)plVar8[4];
            if ((bVar3 & 1) == 0) {
              pvVar9 = (void *)((long)plVar8 + 0x11);
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return plVar8;
              }
              uVar7 = 0;
              while (*(byte *)((long)plVar8 + uVar7 + 0x11) == pbVar2[uVar7]) {
                uVar7 = uVar7 + 1;
                if (bVar3 >> 1 == uVar7) {
                  return plVar8;
                }
              }
            }
            else {
              if (__n == 0) {
                return plVar8;
              }
              iVar5 = memcmp(pvVar9,pbVar2,__n);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
        }
        else {
          if (uVar11 <= uVar7) {
            uVar4 = 0;
            if (uVar11 != 0) {
              uVar4 = uVar7 / uVar11;
            }
            uVar7 = uVar7 - uVar4 * uVar11;
          }
          if (uVar7 != uVar10) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


