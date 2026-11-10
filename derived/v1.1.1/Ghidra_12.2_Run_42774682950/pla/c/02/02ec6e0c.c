/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6e0c; name: FUN_02ec6e0c
 */


/* WARNING: Removing unreachable block (ram,0x02ec6f14) */

void FUN_02ec6e0c(long *param_1,ulong *param_2,long param_3,long param_4,long param_5,uint *param_6,
                 uint *param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
LAB_02ec6f20:
    *param_6 = uVar4;
    *param_7 = uVar3;
    return;
  }
  uVar5 = 0;
  uVar3 = 0;
  lVar7 = param_1[1];
  do {
    if ((lVar7 != 0) && ((int)param_1[3] != 0)) {
      pfVar8 = (float *)param_1[2];
      uVar6 = uVar5;
      do {
        uVar5 = uVar6;
        if ((1L << ((ulong)(uint)pfVar8[2] & 0x3f) & *param_2) != 0) {
          lVar9 = param_1[1];
          lVar7 = 0;
          if (*(long **)(lVar9 + 0x60) == (long *)0x0) {
LAB_02ec6eb8:
            if (lVar7 != 0) goto LAB_02ec6e64;
          }
          else if (*(int *)(lVar9 + 0x88) != 0) {
            lVar7 = **(long **)(lVar9 + 0x60);
            if (lVar7 != 0 && (uint)uVar6 < *param_6) {
              uVar5 = (ulong)((uint)uVar6 + 1);
              *(long *)(param_5 + uVar6 * 8) = lVar7;
              *(undefined8 *)(param_3 + uVar6 * 8) = *(undefined8 *)pfVar8;
              goto LAB_02ec6e64;
            }
            goto LAB_02ec6eb8;
          }
          if (uVar3 < *param_7) {
            pfVar1 = (float *)(param_4 + (ulong)uVar3 * 8);
            uVar3 = uVar3 + 1;
            *pfVar1 = *pfVar8 + *(float *)(lVar9 + 0x80) * pfVar8[1];
            lVar7 = *(long *)(param_1[1] + 0x60);
            pfVar2 = (float *)(param_1[1] + 0x80);
            if (lVar7 != 0) {
              pfVar2 = (float *)(lVar7 + 0xc);
            }
            pfVar1[1] = *pfVar8 + *pfVar2 * pfVar8[1];
          }
        }
LAB_02ec6e64:
        pfVar8 = pfVar8 + 3;
        uVar6 = uVar5;
      } while (pfVar8 != (float *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc));
    }
    uVar4 = (uint)uVar5;
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) goto LAB_02ec6f20;
    lVar7 = param_1[1];
  } while( true );
}


