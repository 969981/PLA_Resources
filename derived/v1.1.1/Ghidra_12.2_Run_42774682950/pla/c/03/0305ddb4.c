/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305ddb4; name: FUN_0305ddb4
 */


void FUN_0305ddb4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_78;
  undefined8 *local_70;
  uint *local_68;
  uint local_60;
  uint local_5c;
  
  lVar10 = *(long *)(param_2 + 8);
  local_70 = *(undefined8 **)(param_2 + 0x4e0);
  local_68 = *(uint **)(*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) * 8 + -8);
  uVar7 = *local_68 >> 0x10;
  local_5c = *local_68 & 0xffff;
  *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) - local_5c;
  uVar12 = (ulong)*(uint *)(param_1 + 0x948);
  local_78 = param_3;
  local_60 = uVar7;
  uVar6 = local_5c;
  if (0 < (int)*(uint *)(param_1 + 0x948)) {
    lVar13 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x940);
      uVar1 = *(uint *)(lVar14 + lVar13 + 4);
      uVar9 = (ulong)uVar1 & 0xffffff;
      if ((uint)uVar9 != 0xffffff) {
        uVar2 = *(uint *)(lVar10 + 0x40);
        if ((uint)uVar9 < uVar2) {
          lVar8 = *(long *)(lVar10 + 0x38);
          if ((*(byte *)(lVar8 + uVar9 * 0xc0 + 0x54) & 3) != 0) {
            if (*(uint *)(lVar8 + uVar9 * 0xc0 + 0x50) == uVar1) {
              if ((*(byte *)(lVar8 + uVar9 * 0xc0 + 0x88) & 1) != 0) {
                uVar9 = (ulong)*(uint *)(lVar14 + lVar13) & 0xffffff;
                if ((uint)uVar9 != 0xffffff) {
                  if ((uint)uVar9 < uVar2) {
                    if ((*(byte *)(lVar8 + uVar9 * 0xc0 + 0x54) & 3) != 0) {
                      if (*(uint *)(lVar8 + uVar9 * 0xc0 + 0x50) == *(uint *)(lVar14 + lVar13)) {
                        if ((*(byte *)(lVar8 + uVar9 * 0xc0 + 0x88) & 1) != 0) {
                          if ((int)uVar7 < 0xed9) {
                            puVar5 = (undefined8 *)((long)local_68 + (long)(int)uVar7 + 0x20);
                          }
                          else {
                            puVar5 = (undefined8 *)FUN_032bf82c(&local_78);
                          }
                          *puVar5 = *(undefined8 *)(lVar14 + lVar13);
                          uVar7 = local_60 + 8;
                          local_5c = local_5c + 1;
                          local_60 = uVar7;
                          uVar6 = local_5c;
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
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + 8;
    } while (uVar12 != 0);
  }
  puVar5 = local_70;
  if (uVar6 == 0) {
    piVar11 = (int *)(local_78 + 0x18);
    iVar3 = *piVar11;
    if (1 < iVar3) {
      iVar4 = *(int *)(local_70 + 0xb);
      lVar13 = *(long *)(*(long *)(local_78 + 0x10) + (long)(iVar3 + -2) * 8);
      lVar10 = local_70[1];
      *(undefined8 *)(lVar10 + (long)iVar4 * 8) =
           *(undefined8 *)(*(long *)(local_78 + 0x10) + (long)(iVar3 + -1) * 8);
      *(int *)(local_70 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_70 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_70 + 0x28))
                  ((long *)*local_70,lVar10 + (long)(iVar4 + -5) * 8,6);
        *(int *)(puVar5 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar13 + 8) = 0;
      uVar6 = 0xffffffff;
      goto LAB_0305df48;
    }
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *local_68 = *local_68 & 0xffff0000 | uVar6 & 0xffff;
  piVar11 = (int *)(local_78 + 8);
  *local_68 = *local_68 & 0xffff | uVar7 << 0x10;
LAB_0305df48:
  *piVar11 = *piVar11 + uVar6;
  *(undefined4 *)(param_1 + 0x948) = 0;
  return;
}


