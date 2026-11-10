/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed69d4; name: FUN_02ed69d4
 */


void FUN_02ed69d4(long param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  float *pfVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  uint local_6c;
  ulong local_68;
  
  pbVar8 = *(byte **)(param_2 + 0x18);
  if (pbVar8 == (byte *)0x0) {
    pbVar10 = (byte *)0x0;
    pfVar5 = (float *)0x0;
    pbVar8 = (byte *)0x0;
    goto LAB_02ed6a38;
  }
  pbVar10 = pbVar8 + 1;
  pfVar5 = (float *)(pbVar8 + ((ulong)(*pbVar8 + 4) & 0x1fc));
LAB_02ed6a2c:
  pbVar8 = pbVar8 + (ulong)*pbVar8 + 1;
LAB_02ed6a38:
  do {
    if (pbVar10 == pbVar8) {
      return;
    }
    bVar3 = *pbVar10;
    if (bVar3 == 0xb) {
      if (*pfVar5 != 1.0) {
        plVar4 = (long *)*param_3;
        uVar2 = *(uint *)(param_3 + 1);
        local_68 = local_68 & 0xffffffffffffff00 | (ulong)(*(long *)(param_1 + 0x58) == param_2) |
                   0x2c;
        plVar7 = plVar4;
        if (uVar2 == 0) {
LAB_02ed6b54:
          if (plVar7 != plVar4 + (ulong)uVar2 * 3) {
            *(float *)(plVar7 + 2) = *pfVar5;
            goto LAB_02ed6a6c;
          }
        }
        else {
          lVar9 = (ulong)uVar2 * 0x18;
          do {
            if ((*plVar7 == param_1) &&
               ((*(long *)(param_1 + 0x58) == param_2) == (bool)(*(byte *)(plVar7 + 1) & 1)))
            goto LAB_02ed6b54;
            lVar9 = lVar9 + -0x18;
            plVar7 = plVar7 + 3;
          } while (lVar9 != 0);
        }
        local_6c = *(uint *)((long)param_3 + 0xc);
        if (local_6c <= uVar2) {
          iVar1 = local_6c + (local_6c >> 1);
          if (local_6c == 0) {
            iVar1 = 1;
          }
          local_6c = iVar1 + local_6c;
          plVar4 = (long *)(*DAT_0442d148)(0,plVar4,(ulong)local_6c * 0x18);
          if (plVar4 == (long *)0x0) goto LAB_02ed6a6c;
          *param_3 = (long)plVar4;
          *(uint *)((long)param_3 + 0xc) = local_6c;
        }
        if (uVar2 < local_6c) {
          uVar6 = (ulong)*(uint *)(param_3 + 1);
          *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
          if (plVar4 + uVar6 * 3 != (long *)0x0) {
            plVar4[uVar6 * 3] = param_1;
            plVar4[uVar6 * 3 + 1] = local_68;
            *(float *)(plVar4 + uVar6 * 3 + 2) = *pfVar5;
          }
        }
      }
    }
    else if (((1L << ((ulong)bVar3 & 0x1f) &
              (ulong)*(uint *)(param_4 + ((ulong)(bVar3 >> 3) & 0x1c) + 0x80)) != 0) &&
            (*(uint *)(&DAT_03a9efac + (ulong)(uint)bVar3 * 4) != 0x1b)) {
      lVar9 = (ulong)*(uint *)(&DAT_03a9efac + (ulong)(uint)bVar3 * 4) * 4;
      *(float *)(param_4 + lVar9) = *(float *)(param_4 + lVar9) + *pfVar5;
    }
LAB_02ed6a6c:
    pbVar8 = *(byte **)(param_2 + 0x18);
    pbVar10 = pbVar10 + 1;
    pfVar5 = pfVar5 + 4;
    if (pbVar8 != (byte *)0x0) goto LAB_02ed6a2c;
    pbVar8 = (byte *)0x0;
  } while( true );
}


