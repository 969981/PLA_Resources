/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dd68c; name: FUN_029dd68c
 */


void FUN_029dd68c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long local_e8 [5];
  undefined2 local_c0 [6];
  undefined4 local_b4 [5];
  uint local_a0 [8];
  undefined8 local_80;
  long lStack_78;
  undefined2 local_70;
  undefined4 local_6c;
  uint uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  short local_48 [4];
  
  pbVar10 = (byte *)*param_3;
  bVar3 = *pbVar10;
  bVar4 = pbVar10[1];
  if ((uint)bVar4 + (uint)bVar3 != 0) {
    uVar7 = 0;
    bVar5 = pbVar10[0xd];
    uVar9 = 0;
    pbVar10 = pbVar10 + 6;
    while( true ) {
      uVar6 = uVar9;
      if ((bVar5 >> 3 & 1) != 0) {
        local_e8[uVar9] =
             *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*pbVar10 * 8 + 0x120);
        local_c0[uVar9] = *(undefined2 *)(pbVar10 + -2);
        uVar2 = *(undefined4 *)(pbVar10 + 2);
        uVar6 = (ulong)((int)uVar9 + 1);
        local_a0[uVar9] = bVar5 & 1;
        local_b4[uVar9] = uVar2;
      }
      uVar7 = uVar7 + 1;
      if ((ulong)bVar4 + (ulong)bVar3 <= uVar7) break;
      bVar5 = pbVar10[0x13];
      uVar9 = uVar6;
      pbVar10 = pbVar10 + 0xc;
    }
    if ((uVar6 & 0xff) != 0) {
      uVar7 = 0;
      do {
        uVar7 = uVar7 & 0xff;
        lVar13 = local_e8[uVar7];
        if (*(short *)(lVar13 + 0x496) != 0) {
          local_80 = param_3[3];
          local_70 = local_c0[uVar7];
          local_60 = param_3[1];
          uStack_58 = param_3[2];
          local_6c = local_b4[uVar7];
          uStack_68 = local_a0[uVar7];
          lStack_78 = lVar13;
          FUN_029ec3e0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x14a0),local_48,&local_80);
          plVar8 = (long *)param_3[4];
          bVar3 = *(byte *)((long)plVar8 + 0x5a);
          uVar9 = (ulong)bVar3;
          if (lVar13 == 0) {
LAB_029dd830:
            if ((uVar9 & 0xff) == 0) goto LAB_029dd750;
          }
          else if (bVar3 < 6) {
            plVar11 = plVar8;
            uVar12 = uVar9;
            if (bVar3 != 0) {
              do {
                if (*plVar11 == lVar13) goto LAB_029dd830;
                uVar12 = uVar12 - 1;
                plVar11 = plVar11 + 1;
              } while (uVar12 != 0);
            }
            plVar8[uVar9] = lVar13;
            *(undefined1 *)((long)plVar8 + (ulong)*(byte *)((long)plVar8 + 0x5a) + 0x48) = 0;
            *(undefined2 *)((long)plVar8 + (ulong)*(byte *)((long)plVar8 + 0x5a) * 2 + 0x30) = 0;
            *(undefined2 *)((long)plVar8 + (ulong)*(byte *)((long)plVar8 + 0x5a) * 2 + 0x3c) = 0;
            uVar1 = *(byte *)((long)plVar8 + 0x5a) + 1;
            uVar9 = (ulong)uVar1;
            *(char *)((long)plVar8 + 0x5a) = (char)uVar1;
            if ((uVar1 & 0xff) <= (uint)*(byte *)((long)plVar8 + 0x5b)) goto LAB_029dd830;
            *(char *)((long)plVar8 + 0x5b) = (char)uVar1;
          }
          uVar12 = 0;
          do {
            if (plVar8[uVar12] == lVar13) {
              *(short *)((long)plVar8 + uVar12 * 2 + 0x3c) =
                   *(short *)((long)plVar8 + uVar12 * 2 + 0x3c) + local_48[0];
              *(undefined1 *)((long)plVar8 + uVar12 + 0x48) = 2;
              uVar9 = (ulong)*(byte *)((long)plVar8 + 0x5a);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < (uVar9 & 0xff));
        }
LAB_029dd750:
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
      } while ((uVar1 & 0xff) < ((uint)uVar6 & 0xff));
    }
  }
  return;
}


