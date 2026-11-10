/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010a200; name: FUN_0010a200
 */


void FUN_0010a200(undefined4 *param_1,undefined4 param_2,ulong param_3)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (0x7f < (long)param_3) {
    uVar3 = param_3 >> 7;
    do {
      uVar3 = uVar3 - 1;
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[2] = param_2;
      param_1[3] = param_2;
      param_1[4] = param_2;
      param_1[5] = param_2;
      param_1[6] = param_2;
      param_1[7] = param_2;
      param_1[8] = param_2;
      param_1[9] = param_2;
      param_1[10] = param_2;
      param_1[0xb] = param_2;
      param_1[0xc] = param_2;
      param_1[0xd] = param_2;
      param_1[0xe] = param_2;
      param_1[0xf] = param_2;
      param_1[0x10] = param_2;
      param_1[0x11] = param_2;
      param_1[0x12] = param_2;
      param_1[0x13] = param_2;
      param_1[0x14] = param_2;
      param_1[0x15] = param_2;
      param_1[0x16] = param_2;
      param_1[0x17] = param_2;
      param_1[0x18] = param_2;
      param_1[0x19] = param_2;
      param_1[0x1a] = param_2;
      param_1[0x1b] = param_2;
      param_1[0x1c] = param_2;
      param_1[0x1d] = param_2;
      param_1[0x1e] = param_2;
      param_1[0x1f] = param_2;
      param_1 = param_1 + 0x20;
    } while (0 < (long)uVar3);
  }
  uVar4 = (param_3 & 0x7f) >> 4;
  uVar3 = (param_3 & 0x7f) - (param_3 & 0x70);
  lVar5 = (long)uVar3 >> 2;
  if (uVar4 != 0) {
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_2;
    if (uVar4 == 1) {
      param_1 = param_1 + 4;
    }
    else {
      param_1[4] = param_2;
      param_1[5] = param_2;
      param_1[6] = param_2;
      param_1[7] = param_2;
      if (uVar4 == 2) {
        param_1 = param_1 + 8;
      }
      else {
        param_1[8] = param_2;
        param_1[9] = param_2;
        param_1[10] = param_2;
        param_1[0xb] = param_2;
        if (uVar4 == 3) {
          param_1 = param_1 + 0xc;
        }
        else {
          param_1[0xc] = param_2;
          param_1[0xd] = param_2;
          param_1[0xe] = param_2;
          param_1[0xf] = param_2;
          if (uVar4 == 4) {
            param_1 = param_1 + 0x10;
          }
          else {
            param_1[0x10] = param_2;
            param_1[0x11] = param_2;
            param_1[0x12] = param_2;
            param_1[0x13] = param_2;
            if (uVar4 == 5) {
              param_1 = param_1 + 0x14;
            }
            else {
              param_1[0x14] = param_2;
              param_1[0x15] = param_2;
              param_1[0x16] = param_2;
              param_1[0x17] = param_2;
              if (uVar4 == 6) {
                param_1 = param_1 + 0x18;
              }
              else {
                param_1[0x18] = param_2;
                param_1[0x19] = param_2;
                param_1[0x1a] = param_2;
                param_1[0x1b] = param_2;
                param_1 = param_1 + 0x1c;
              }
            }
          }
        }
      }
    }
  }
  if (lVar5 != 0) {
    uVar4 = lVar5 - 1;
    uVar3 = uVar3 >> 2 & 3;
    if (uVar3 != 0) {
      lVar2 = -uVar3;
      puVar1 = param_1;
      do {
        lVar5 = lVar5 + -1;
        lVar2 = lVar2 + 1;
        param_1 = puVar1 + 1;
        *puVar1 = param_2;
        puVar1 = param_1;
      } while (lVar2 != 0);
    }
    if (2 < uVar4) {
      do {
        *param_1 = param_2;
        param_1[1] = param_2;
        lVar5 = lVar5 + -4;
        param_1[2] = param_2;
        param_1[3] = param_2;
        param_1 = param_1 + 4;
      } while (lVar5 != 0);
    }
  }
  return;
}


