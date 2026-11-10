/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f130c; name: FUN_010f130c
 */


void FUN_010f130c(long param_1)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar11 = *(uint **)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x250);
  uVar5 = *puVar11;
  piVar2 = (int *)((long)puVar11 + (ulong)uVar5);
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar12 != 0)) {
    uVar13 = (ulong)*(uint *)((long)piVar2 + uVar12);
    puVar3 = (uint *)((long)((long)piVar2 + uVar12) + uVar13);
    if (puVar3 != (uint *)0x0) {
      uVar6 = *puVar3;
      lVar1 = param_1 + 0x68;
      FUN_010f2b24(lVar1);
      FUN_010f15a0(lVar1,(long)((float)uVar6 / *(float *)(param_1 + 200)));
      if (uVar6 != 0) {
        lVar4 = uVar5 + uVar13 + uVar12;
        lVar10 = 0;
        do {
          uVar12 = (ulong)*(uint *)((long)puVar11 + lVar10 + lVar4 + 4);
          lVar7 = lVar10 + (uVar12 - (long)*(int *)((long)puVar11 + lVar10 + uVar12 + lVar4 + 4)) +
                           lVar4;
          if ((*(ushort *)((long)puVar11 + lVar7 + 4) < 5) ||
             (uVar13 = (ulong)*(ushort *)((long)puVar11 + lVar7 + 8), uVar13 == 0)) {
            local_60 = 0;
          }
          else {
            local_60 = *(undefined8 *)((long)puVar11 + lVar10 + uVar12 + uVar13 + lVar4 + 4);
          }
          nn::crypto::GenerateCryptographicallyRandomBytes(&local_58,8);
          uVar8 = local_58;
          puVar9 = (undefined8 *)FUN_010f0bb8(lVar1,&local_60);
          lVar10 = lVar10 + 4;
          *puVar9 = uVar8;
          puVar9[1] = uVar8;
          puVar9[2] = 0x82a2b175229d6a5b;
          puVar9[3] = uVar8;
        } while ((ulong)uVar6 * 4 != lVar10);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return;
}


