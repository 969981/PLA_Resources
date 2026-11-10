/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00830434; name: FUN_00830434
 */


void FUN_00830434(undefined8 param_1,long param_2,byte *param_3,undefined8 *param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined4 *param_7)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_80 [8];
  undefined4 local_58 [2];
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  puVar4 = *(ushort **)(param_2 + 0x10);
  uVar5 = (ulong)*param_3;
  if ((*param_3 < *(byte *)((long)puVar4 + 3)) &&
     (*(char *)(*(long *)(puVar4 + 8) + uVar5 * 0x18 + 0x10) != '\0')) {
    bVar3 = *(byte *)(*(long *)(param_2 + 0x28) + uVar5);
    if ((bVar3 == 0xff || *puVar4 <= (ushort)bVar3) ||
       (*(long *)(puVar4 + 4) + (ulong)bVar3 * 0x20 == 0)) {
      local_80[0] = 0x4c11;
    }
    else {
      bVar2 = param_3[1];
      if (bVar2 != 0xff) {
        if (*(byte *)(param_2 + 2) <= bVar2) {
          local_80[0] = 0x10407;
          goto LAB_00830600;
        }
        lVar8 = *(long *)(puVar4 + 8) + uVar5 * 0x18;
        if (*(long *)(lVar8 + 8) != lVar8) {
          lVar1 = *(long *)(puVar4 + 4) + (ulong)bVar3 * 0x20;
          lVar7 = (long)*(int *)(lVar8 + 0x14);
          lVar6 = *(long *)(lVar1 + 0x10);
          lVar9 = *(long *)(lVar8 + 8) - lVar7;
          while( true ) {
            lVar10 = *(long *)(lVar9 + 0x10);
            if (*(byte *)(lVar10 + 0x91) == bVar2) break;
            if ((bVar2 <= *(byte *)(lVar10 + 0x91)) ||
               (lVar9 = *(long *)(lVar9 + lVar7 + 8) - lVar7, lVar9 == lVar8 - lVar7))
            goto LAB_008305f4;
          }
          if (lVar9 != 0) {
            *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(lVar6 + 0x90);
            *(undefined1 *)(param_2 + 0x51) = *(undefined1 *)(lVar6 + 0x91);
            FUN_007f0fc8(local_80,lVar6 + 8);
            FUN_007f105c(param_2 + 0x58,local_80);
            FUN_007e34a4(local_80);
            *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(lVar10 + 0x90);
            *(undefined1 *)(param_2 + 0x79) = *(undefined1 *)(lVar10 + 0x91);
            *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar10 + 0x30);
            *(short *)(param_2 + 0x7a) = (short)*(undefined4 *)(lVar9 + 0x18);
            uVar5 = (ulong)*(byte *)(lVar1 + 0x1c);
            if (*(int *)(*(long *)(*(long *)(param_2 + 0x18) + (ulong)*(byte *)(param_2 + 6) * 8) +
                        uVar5 * 4) == 1) {
              if (*(int *)(*(long *)(*(long *)(param_2 + 0x18) + uVar5 * 8) +
                          (ulong)*(byte *)(param_2 + 6) * 4) != 1) goto LAB_008305d4;
            }
            else {
LAB_008305d4:
              param_5 = param_7;
              param_4 = param_6;
            }
            *param_4 = (undefined1 *)(param_2 + 0x50);
            *param_5 = 1;
            local_80[0] = 0;
            goto LAB_00830600;
          }
        }
      }
LAB_008305f4:
      local_80[0] = 0x2c0a;
    }
  }
  else {
    local_80[0] = 0x2c09;
  }
LAB_00830600:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_58);
  FUN_007ee578(param_1,local_80);
  return;
}


