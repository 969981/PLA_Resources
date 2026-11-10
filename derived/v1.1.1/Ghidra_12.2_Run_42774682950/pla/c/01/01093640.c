/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01093640; name: FUN_01093640
 */


int FUN_01093640(int *param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_18;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
  puVar4 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar4;
  if (uVar3 < 7) {
LAB_01093850:
    iVar6 = 0;
  }
  else {
    uVar8 = 0x82a2b175229d6a5b;
    if (((ulong)puVar4[3] == 0) || (iVar6 = *(int *)((long)param_1 + (ulong)puVar4[3]), iVar6 < 1))
    {
LAB_0109368c:
      iVar6 = 0;
    }
    else {
      if (uVar3 < 9) goto LAB_01093850;
      if (((ulong)puVar4[4] == 0) || (iVar7 = *(int *)((long)param_1 + (ulong)puVar4[4]), iVar7 < 1)
         ) goto LAB_0109368c;
      do {
        uVar9 = local_18 ^ uVar8;
        iVar5 = (int)uVar8;
        uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
        uVar1 = (int)local_18 + iVar5 & 0x7f;
        local_18 = uVar9 ^ (local_18 >> 0x28 | local_18 << 0x18) ^ uVar9 << 0x10;
      } while (99 < uVar1);
      if (iVar7 <= (int)uVar1) {
        iVar6 = 0;
      }
    }
    if (10 < uVar3) {
      iVar7 = iVar6;
      if (((ulong)puVar4[5] != 0) && (iVar5 = *(int *)((long)param_1 + (ulong)puVar4[5]), 0 < iVar5)
         ) {
        if (uVar3 < 0xd) {
          return iVar6;
        }
        if (((ulong)puVar4[6] != 0) &&
           (iVar2 = *(int *)((long)param_1 + (ulong)puVar4[6]), 0 < iVar2)) {
          do {
            uVar9 = local_18 ^ uVar8;
            iVar7 = (int)uVar8;
            uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
            uVar1 = (int)local_18 + iVar7 & 0x7f;
            local_18 = uVar9 ^ (local_18 >> 0x28 | local_18 << 0x18) ^ uVar9 << 0x10;
          } while (99 < uVar1);
          iVar7 = iVar5;
          if (iVar2 <= (int)uVar1) {
            iVar7 = iVar6;
          }
        }
      }
      iVar6 = iVar7;
      if (0xe < uVar3) {
        if (((ulong)puVar4[7] != 0) &&
           (iVar5 = *(int *)((long)param_1 + (ulong)puVar4[7]), 0 < iVar5)) {
          if (uVar3 < 0x11) {
            return iVar7;
          }
          if (((ulong)puVar4[8] != 0) &&
             (iVar2 = *(int *)((long)param_1 + (ulong)puVar4[8]), 0 < iVar2)) {
            do {
              uVar9 = local_18 ^ uVar8;
              iVar6 = (int)uVar8;
              uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
              uVar1 = (int)local_18 + iVar6 & 0x7f;
              local_18 = uVar9 ^ (local_18 >> 0x28 | local_18 << 0x18) ^ uVar9 << 0x10;
            } while (99 < uVar1);
            iVar6 = iVar5;
            if (iVar2 <= (int)uVar1) {
              iVar6 = iVar7;
            }
          }
        }
        if (0x12 < uVar3) {
          iVar7 = iVar6;
          if (((ulong)puVar4[9] != 0) &&
             (iVar5 = *(int *)((long)param_1 + (ulong)puVar4[9]), 0 < iVar5)) {
            if (uVar3 < 0x15) {
              return iVar6;
            }
            if (((ulong)puVar4[10] != 0) &&
               (iVar2 = *(int *)((long)param_1 + (ulong)puVar4[10]), 0 < iVar2)) {
              do {
                uVar9 = local_18 ^ uVar8;
                iVar7 = (int)uVar8;
                uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
                uVar1 = (int)local_18 + iVar7 & 0x7f;
                local_18 = uVar9 ^ (local_18 >> 0x28 | local_18 << 0x18) ^ uVar9 << 0x10;
              } while (99 < uVar1);
              iVar7 = iVar5;
              if (iVar2 <= (int)uVar1) {
                iVar7 = iVar6;
              }
            }
          }
          iVar6 = iVar7;
          if ((((0x16 < uVar3) && ((ulong)puVar4[0xb] != 0)) && (0x18 < uVar3)) &&
             (((iVar5 = *(int *)((long)param_1 + (ulong)puVar4[0xb]), 0 < iVar5 &&
               ((ulong)puVar4[0xc] != 0)) &&
              (iVar2 = *(int *)((long)param_1 + (ulong)puVar4[0xc]), 0 < iVar2)))) {
            do {
              uVar9 = local_18 ^ uVar8;
              iVar6 = (int)uVar8;
              uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
              uVar1 = (int)local_18 + iVar6 & 0x7f;
              local_18 = uVar9 ^ (local_18 >> 0x28 | local_18 << 0x18) ^ uVar9 << 0x10;
            } while (99 < uVar1);
            iVar6 = iVar5;
            if (iVar2 <= (int)uVar1) {
              iVar6 = iVar7;
            }
          }
        }
      }
    }
  }
  return iVar6;
}


