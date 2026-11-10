/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03104380; name: FUN_03104380
 */


bool FUN_03104380(long param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  while (bVar2 = *(byte *)(param_1 + 0x18), bVar2 == 0x12) {
    plVar9 = (long *)(param_1 + 0x40);
    lVar5 = *plVar9;
    param_1 = 0;
    if (lVar5 != 0) {
      param_1 = lVar5 + (long)plVar9;
    }
  }
  if (bVar2 == 0xc) {
    plVar9 = (long *)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x50);
    uVar4 = 0;
    do {
      uVar10 = uVar4;
      if (iVar1 <= (int)uVar10) {
        return false;
      }
      lVar5 = *plVar9;
      uVar4 = uVar10 + 1;
    } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0);
    if (uVar10 + 1 == 0) {
      return false;
    }
    while( true ) {
      plVar6 = (long *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x30);
      lVar8 = *plVar6;
      lVar7 = 0;
      if (lVar8 != 0) {
        lVar7 = lVar8 + (long)plVar6;
      }
      uVar3 = FUN_03104380(lVar7);
      if ((uVar3 & 1) != 0) break;
      uVar4 = uVar10 + 1;
      do {
        uVar10 = uVar4;
        if (iVar1 <= (int)uVar10) {
          return false;
        }
        uVar4 = uVar10 + 1;
      } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0);
      if (uVar10 + 1 == 0) {
        return false;
      }
    }
  }
  else {
    uVar4 = (uint)bVar2;
    if (uVar4 == 0x13) {
      lVar7 = *(long *)(param_1 + 0x40);
      lVar5 = 0;
      if (lVar7 != 0) {
        lVar5 = lVar7 + param_1 + 0x40;
      }
      iVar1 = *(int *)(lVar5 + 0x50);
      plVar9 = (long *)(lVar5 + 0x48);
      uVar4 = 0;
      do {
        uVar10 = uVar4;
        if (iVar1 <= (int)uVar10) {
          return false;
        }
        lVar5 = *plVar9;
        uVar4 = uVar10 + 1;
      } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0);
      if (uVar10 + 1 == 0) {
        return false;
      }
      while( true ) {
        plVar6 = (long *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x30);
        lVar8 = *plVar6;
        lVar7 = 0;
        if (lVar8 != 0) {
          lVar7 = lVar8 + (long)plVar6;
        }
        uVar3 = FUN_03104380(lVar7);
        if ((uVar3 & 1) != 0) break;
        uVar4 = uVar10 + 1;
        do {
          uVar10 = uVar4;
          if (iVar1 <= (int)uVar10) {
            return false;
          }
          uVar4 = uVar10 + 1;
        } while ((*(byte *)((long)plVar9 + (ulong)(uVar10 & 0xffff) * 0x40 + lVar5 + 0x1e) & 1) != 0
                );
        if (uVar10 + 1 == 0) {
          return false;
        }
      }
    }
    else {
      if (uVar4 != 0x15) {
        return uVar4 == 0xe || uVar4 - 9 < 2;
      }
      lVar5 = *(long *)(param_1 + 0x48);
      if (((lVar5 == 0) || (lVar5 + param_1 + 0x48 == 0)) ||
         (uVar3 = FUN_03104380(), (uVar3 & 1) == 0)) {
        lVar5 = *(long *)(param_1 + 0x50);
        if (((lVar5 == 0) || (lVar5 + param_1 + 0x50 == 0)) ||
           (uVar3 = FUN_03104380(), (uVar3 & 1) == 0)) {
          lVar5 = *(long *)(param_1 + 0x58);
          if (((lVar5 == 0) || (lVar5 + param_1 + 0x58 == 0)) ||
             (uVar3 = FUN_03104380(), (uVar3 & 1) == 0)) {
            lVar5 = *(long *)(param_1 + 0x60);
            if (((lVar5 == 0) || (lVar5 + param_1 + 0x60 == 0)) ||
               (uVar3 = FUN_03104380(), (uVar3 & 1) == 0)) {
              lVar5 = *(long *)(param_1 + 0x68);
              if (((lVar5 == 0) || (lVar5 + param_1 + 0x68 == 0)) ||
                 (uVar3 = FUN_03104380(), (uVar3 & 1) == 0)) {
                lVar5 = *(long *)(param_1 + 0x70);
                if (((lVar5 == 0) || (lVar5 + param_1 + 0x70 == 0)) ||
                   (uVar3 = FUN_03104380(), (uVar3 & 1) == 0)) {
                  lVar5 = *(long *)(param_1 + 0x78);
                  if (((lVar5 == 0) || (lVar5 + param_1 + 0x78 == 0)) ||
                     (uVar3 = FUN_03104380(), (uVar3 & 1) == 0)) {
                    lVar5 = *(long *)(param_1 + 0x80);
                    if (lVar5 == 0) {
                      return false;
                    }
                    if (lVar5 + param_1 + 0x80 == 0) {
                      return false;
                    }
                    uVar3 = FUN_03104380();
                    if ((uVar3 & 1) == 0) {
                      return false;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


