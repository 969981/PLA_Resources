/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002571e4; name: FUN_002571e4
 */


void FUN_002571e4(long param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  plVar6 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x20);
  if (plVar6 == plVar1) {
    fVar11 = 0.0;
    lVar9 = 0;
  }
  else {
    fVar12 = *(float *)(param_1 + 0x50) * 0.5;
    fVar11 = 0.0;
    bVar7 = false;
    lVar9 = 0;
    plVar8 = plVar1;
    do {
      local_78 = 0;
      local_70 = 0.0;
      local_68 = 0;
      uVar4 = FUN_00256a10(*plVar8 + -8,&local_78);
      if ((uVar4 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (plVar5 = *(long **)(param_1 + 0x28), plVar5 != plVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_00257300:
            if (plVar5 != (long *)*plVar8) goto LAB_00257244;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_00257244;
LAB_002572fc:
              plVar5 = (long *)*plVar1;
              goto LAB_00257300;
            }
            if (plVar5 != (long *)*plVar8) goto LAB_002572fc;
          }
          local_70 = 0.0;
          local_78 = local_78 & 0xffffffff00000000;
        }
LAB_00257244:
        fVar10 = fVar12 - local_78._4_4_;
        if (!bVar7) {
          fVar10 = fVar12;
        }
        lVar9 = *plVar8;
        if (!bVar7) {
          fVar11 = fVar11 - local_78._4_4_;
        }
        *(byte *)(lVar9 + 0x50) = *(byte *)(lVar9 + 0x50) | 0x10;
        *(float *)(lVar9 + 0x28) = (fVar10 + (float)local_78 * -0.5) - local_70;
        fVar11 = fVar11 + local_78._4_4_ + (float)local_78;
        fVar12 = fVar10 - (float)local_78;
        lVar9 = local_68;
        bVar7 = true;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar6 != plVar8);
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    fVar11 = *(float *)(param_1 + 0x50) - fVar11;
    bVar3 = *(byte *)(lVar9 + 0x58) | 0x10;
    *(byte *)(lVar9 + 0x58) = bVar3;
    *(float *)(lVar9 + 0x50) = fVar11;
    if ((*(byte *)(lVar9 + 0x5b) & 3) == 1) {
      fVar11 = *(float *)(lVar9 + 0x30) - fVar11;
    }
    else {
      if ((*(byte *)(lVar9 + 0x5b) & 3) != 0) {
        return;
      }
      fVar11 = *(float *)(lVar9 + 0x30) + fVar11 * -0.5;
    }
    *(float *)(lVar9 + 0x30) = fVar11;
    *(byte *)(lVar9 + 0x58) = bVar3;
  }
  return;
}


