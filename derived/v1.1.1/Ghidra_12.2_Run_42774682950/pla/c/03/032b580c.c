/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b580c; name: FUN_032b580c
 */


void FUN_032b580c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *local_1078;
  undefined8 local_1070;
  undefined1 auStack_1068 [4104];
  
  puVar2 = PTR_PTR_0434a080;
  local_1078 = auStack_1068;
  local_1070 = 0x8000100000000000;
  uVar8 = param_1[2];
  if (uVar8 != 0) {
    uVar7 = param_1[1];
    uVar9 = 0;
    uVar4 = uVar7;
    do {
      if (uVar4 != 0) {
        uVar8 = 0;
        if (*param_1 != 0) goto LAB_032b58bc;
        uVar4 = 0;
        while (uVar8 = uVar8 + 1, uVar8 < uVar7) {
          if (uVar4 != 0) {
LAB_032b58bc:
            uVar7 = 0;
            do {
              uVar4 = param_1[3] >> (ulong)(uVar7 & 0x1f);
              if (uVar4 < 2) {
                uVar4 = 1;
              }
              uVar4 = FUN_032b5574(param_1[6],uVar4);
              uVar3 = local_1070;
              if ((int)(local_1070._4_4_ & 0x3fffffff) < (int)uVar4) {
                if (0x3fffffff < (int)uVar4) {
                  FUN_032bd0a8(uVar4);
                }
                uVar11 = (local_1070._4_4_ & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar11) {
                  uVar11 = 0x3fffffff;
                }
                uVar1 = uVar4;
                if ((int)uVar4 <= (int)uVar11) {
                  uVar1 = uVar11;
                }
                local_1078 = (undefined1 *)
                             FUN_032bd1d4(puVar2,uVar1,1,local_1078,uVar3 & 0xffffffff,
                                          (long)&local_1070 + 4);
              }
              if ((uint)local_1070 != uVar4) {
                local_1070 = CONCAT44(local_1070._4_4_,uVar4);
              }
              uVar11 = param_1[4] >> (ulong)(uVar7 & 0x1f);
              if (uVar11 < 2) {
                uVar11 = 1;
              }
              uVar1 = uVar11 >> 1;
              if (uVar1 != 0) {
                uVar10 = 0;
                do {
                  uVar11 = uVar11 - 1;
                  uVar5 = FUN_032a68ac(param_1,uVar7,uVar8,uVar9,0,uVar10,0);
                  uVar6 = FUN_032a68ac(param_1,uVar7,uVar8,uVar9,0,uVar11,0);
                  FUN_032c4a00(local_1078,uVar5,uVar4);
                  FUN_032c4a00(uVar5,uVar6,uVar4);
                  FUN_032c4a00(uVar6,local_1078,uVar4);
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar1);
              }
              uVar4 = *param_1;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar4);
            uVar7 = param_1[1];
          }
        }
        uVar8 = param_1[2];
        uVar4 = uVar7;
      }
      uVar3 = local_1070;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
    uVar8 = local_1070._4_4_;
    local_1070 = (ulong)local_1070._4_4_ << 0x20;
    if ((-1 < (long)uVar3) && (local_1078 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar2,local_1078,1,uVar8 & 0x3fffffff);
    }
  }
  return;
}


