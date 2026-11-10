/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4eec; name: FUN_003e4eec
 */


void FUN_003e4eec(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  
  uVar1 = param_1[9];
  if (uVar1 == 0) {
    return;
  }
  puVar4 = param_1 + 1;
  uVar5 = *param_1;
  lVar2 = 0;
  uVar3 = 0;
  if (uVar5 >> 1 != 0) {
    do {
      puVar6 = puVar4;
      if ((uVar5 & 1) != 0) {
        puVar6 = (ulong *)param_1[1];
      }
      *param_2 = *param_2 + *(long *)((long)puVar6 + lVar2);
      if (*param_1 >> 1 <= uVar3) break;
      puVar6 = puVar4;
      if ((*param_1 & 1) != 0) {
        puVar6 = (ulong *)param_1[1];
      }
      param_2[1] = param_2[1] + *(long *)((long)puVar6 + lVar2 + 8);
      if (*param_1 >> 1 <= uVar3) break;
      puVar6 = puVar4;
      if ((*param_1 & 1) != 0) {
        puVar6 = (ulong *)param_1[1];
      }
      param_2[2] = param_2[2] + *(long *)((long)puVar6 + lVar2 + 0x10);
      uVar5 = *param_1;
      if (uVar5 >> 1 <= uVar3) break;
      puVar6 = puVar4;
      if ((uVar5 & 1) != 0) {
        puVar6 = (ulong *)param_1[1];
      }
      dVar7 = *(double *)((long)puVar6 + lVar2 + 0x18);
      if ((double)param_2[3] < dVar7) {
        param_2[3] = (long)dVar7;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
      if (uVar1 <= uVar3) {
        return;
      }
    } while (uVar3 < uVar5 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                "operator[]");
}


