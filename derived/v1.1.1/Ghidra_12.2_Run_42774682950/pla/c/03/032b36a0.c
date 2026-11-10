/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b36a0; name: FUN_032b36a0
 */


void FUN_032b36a0(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 local_74 [4];
  undefined1 auStack_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  byte local_58 [4];
  undefined1 local_54 [4];
  
  if ((0xffe < param_2 - 8U >> 3) || (*(char *)*param_3 != '\x02')) {
    FUN_032b3c30(param_1,param_2,param_3);
    return;
  }
  FUN_032af29c(param_3,auStack_70,1);
  FUN_032af29c(param_3,local_6c,1);
  param_1[1] = local_6c[0];
  FUN_032af29c(param_3,local_68,1);
  param_1[2] = local_68[0];
  FUN_032af29c(param_3,local_64,1);
  if ((param_1[1] == '\x02') && (-1 < (char)param_1[2])) {
    uVar4 = 0;
    do {
      FUN_032af29c(param_3,local_58,1);
      bVar6 = local_58[0];
      if (local_58[0] < 0x81) {
        if (local_58[0] != 0) {
          puVar2 = param_1 + (long)(int)uVar4 * 4;
          do {
            bVar6 = bVar6 - 1;
            FUN_032af29c(param_3,local_74,1);
            uVar4 = (ulong)((int)uVar4 + 1);
            *puVar2 = local_74[0];
            puVar2 = puVar2 + 4;
          } while (bVar6 != 0);
        }
      }
      else {
        bVar3 = local_58[0] & 0x7f;
        bVar5 = local_58[0] & 0x7f;
        FUN_032af29c(param_3,local_54,1);
        if (bVar3 != 0) {
          uVar4 = (ulong)(int)uVar4;
          bVar1 = bVar5 - 1;
          bVar3 = bVar6 & 3;
          if ((bVar6 & 3) != 0) {
            puVar2 = param_1 + uVar4 * 4;
            do {
              bVar3 = bVar3 - 1;
              bVar5 = bVar5 - 1;
              uVar4 = uVar4 + 1;
              *puVar2 = local_54[0];
              puVar2 = puVar2 + 4;
            } while (bVar3 != 0);
          }
          if (2 < bVar1) {
            puVar2 = param_1 + uVar4 * 4 + 8;
            do {
              bVar5 = bVar5 - 4;
              puVar2[-8] = local_54[0];
              uVar4 = uVar4 + 4;
              puVar2[-4] = local_54[0];
              *puVar2 = local_54[0];
              puVar2[4] = local_54[0];
              puVar2 = puVar2 + 0x10;
            } while (bVar5 != 0);
          }
        }
      }
    } while ((int)uVar4 < param_2);
    uVar4 = 0;
    do {
      FUN_032af29c(param_3,local_58,1);
      bVar6 = local_58[0];
      if (local_58[0] < 0x81) {
        if (local_58[0] != 0) {
          puVar2 = param_1 + (long)(int)uVar4 * 4 + 1;
          do {
            bVar6 = bVar6 - 1;
            FUN_032af29c(param_3,local_74,1);
            uVar4 = (ulong)((int)uVar4 + 1);
            *puVar2 = local_74[0];
            puVar2 = puVar2 + 4;
          } while (bVar6 != 0);
        }
      }
      else {
        bVar3 = local_58[0] & 0x7f;
        bVar5 = local_58[0] & 0x7f;
        FUN_032af29c(param_3,local_54,1);
        if (bVar3 != 0) {
          uVar4 = (ulong)(int)uVar4;
          bVar1 = bVar5 - 1;
          bVar3 = bVar6 & 3;
          if ((bVar6 & 3) != 0) {
            puVar2 = param_1 + uVar4 * 4 + 1;
            do {
              bVar3 = bVar3 - 1;
              bVar5 = bVar5 - 1;
              uVar4 = uVar4 + 1;
              *puVar2 = local_54[0];
              puVar2 = puVar2 + 4;
            } while (bVar3 != 0);
          }
          if (2 < bVar1) {
            puVar2 = param_1 + uVar4 * 4 + 9;
            do {
              bVar5 = bVar5 - 4;
              puVar2[-8] = local_54[0];
              uVar4 = uVar4 + 4;
              puVar2[-4] = local_54[0];
              *puVar2 = local_54[0];
              puVar2[4] = local_54[0];
              puVar2 = puVar2 + 0x10;
            } while (bVar5 != 0);
          }
        }
      }
    } while ((int)uVar4 < param_2);
    uVar4 = 0;
    do {
      FUN_032af29c(param_3,local_58,1);
      bVar6 = local_58[0];
      if (local_58[0] < 0x81) {
        if (local_58[0] != 0) {
          puVar2 = param_1 + (long)(int)uVar4 * 4 + 2;
          do {
            bVar6 = bVar6 - 1;
            FUN_032af29c(param_3,local_74,1);
            uVar4 = (ulong)((int)uVar4 + 1);
            *puVar2 = local_74[0];
            puVar2 = puVar2 + 4;
          } while (bVar6 != 0);
        }
      }
      else {
        bVar3 = local_58[0] & 0x7f;
        bVar5 = local_58[0] & 0x7f;
        FUN_032af29c(param_3,local_54,1);
        if (bVar3 != 0) {
          uVar4 = (ulong)(int)uVar4;
          bVar1 = bVar5 - 1;
          bVar3 = bVar6 & 3;
          if ((bVar6 & 3) != 0) {
            puVar2 = param_1 + uVar4 * 4 + 2;
            do {
              bVar3 = bVar3 - 1;
              bVar5 = bVar5 - 1;
              uVar4 = uVar4 + 1;
              *puVar2 = local_54[0];
              puVar2 = puVar2 + 4;
            } while (bVar3 != 0);
          }
          if (2 < bVar1) {
            puVar2 = param_1 + uVar4 * 4 + 10;
            do {
              bVar5 = bVar5 - 4;
              puVar2[-8] = local_54[0];
              uVar4 = uVar4 + 4;
              puVar2[-4] = local_54[0];
              *puVar2 = local_54[0];
              puVar2[4] = local_54[0];
              puVar2 = puVar2 + 0x10;
            } while (bVar5 != 0);
          }
        }
      }
    } while ((int)uVar4 < param_2);
    uVar4 = 0;
    do {
      FUN_032af29c(param_3,local_58,1);
      bVar6 = local_58[0];
      if (local_58[0] < 0x81) {
        if (local_58[0] != 0) {
          puVar2 = param_1 + (long)(int)uVar4 * 4 + 3;
          do {
            bVar6 = bVar6 - 1;
            FUN_032af29c(param_3,local_74,1);
            uVar4 = (ulong)((int)uVar4 + 1);
            *puVar2 = local_74[0];
            puVar2 = puVar2 + 4;
          } while (bVar6 != 0);
        }
      }
      else {
        bVar3 = local_58[0] & 0x7f;
        bVar5 = local_58[0] & 0x7f;
        FUN_032af29c(param_3,local_54,1);
        if (bVar3 != 0) {
          uVar4 = (ulong)(int)uVar4;
          bVar1 = bVar5 - 1;
          bVar3 = bVar6 & 3;
          if ((bVar6 & 3) != 0) {
            puVar2 = param_1 + uVar4 * 4 + 3;
            do {
              bVar3 = bVar3 - 1;
              bVar5 = bVar5 - 1;
              uVar4 = uVar4 + 1;
              *puVar2 = local_54[0];
              puVar2 = puVar2 + 4;
            } while (bVar3 != 0);
          }
          if (2 < bVar1) {
            puVar2 = param_1 + uVar4 * 4 + 7;
            do {
              bVar5 = bVar5 - 4;
              puVar2[-4] = local_54[0];
              uVar4 = uVar4 + 4;
              *puVar2 = local_54[0];
              puVar2[4] = local_54[0];
              puVar2[8] = local_54[0];
              puVar2 = puVar2 + 0x10;
            } while (bVar5 != 0);
          }
        }
      }
    } while ((int)uVar4 < param_2);
  }
  else {
    *param_1 = 2;
    param_1[3] = local_64[0];
    FUN_032b3c30(param_1 + 4,param_2 + -1,param_3);
  }
  return;
}


