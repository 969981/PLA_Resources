/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0cdc8; name: FUN_02f0cdc8
 */


int FUN_02f0cdc8(long param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  
  uVar7 = (ulong)param_5;
  if (param_5 == 0) {
    uVar9 = 0;
LAB_02f0ce28:
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    lVar5 = (*DAT_0442d138)(0,uVar9 * 0xc);
    if (lVar5 != 0) {
      if (param_5 != 0) {
        uVar10 = 0;
        puVar11 = (undefined4 *)(lVar5 + 8);
        puVar8 = (undefined4 *)(param_4 + 8);
        do {
          puVar11[-2] = puVar8[-2];
          puVar11[-1] = (float)(uVar10 & 0xffffffff);
          *puVar11 = *puVar8;
          uVar2 = *(uint *)(param_1 + 0x18);
          uVar3 = *(uint *)(param_1 + 0x1c);
          if (uVar2 < uVar3) {
joined_r0x02f0cf78:
            if (uVar2 < uVar3) {
              puVar1 = (undefined4 *)
                       (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 4);
              *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) + 1;
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = puVar8[-1];
              }
            }
          }
          else {
            iVar4 = uVar3 + (uVar3 >> 1);
            if (uVar3 == 0) {
              iVar4 = 1;
            }
            uVar6 = FUN_02f0dcc4((long *)(param_1 + 0x10),iVar4);
            if ((uVar6 & 1) != 0) {
              uVar3 = *(uint *)(param_1 + 0x1c);
              goto joined_r0x02f0cf78;
            }
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 3;
          puVar8 = puVar8 + 3;
        } while (uVar9 != uVar10);
      }
      iVar4 = FUN_02ee0cf0(DAT_0440a160,param_1,param_2,param_3,lVar5,uVar7);
      (*DAT_0442d150)(0,lVar5);
      if (iVar4 == 1) {
        return 1;
      }
      goto LAB_02f0cf24;
    }
  }
  else {
    lVar5 = (*DAT_0442d138)(2,uVar7 << 2);
    *(long *)(param_1 + 0x10) = lVar5;
    if (lVar5 != 0) {
      *(uint *)(param_1 + 0x1c) = param_5;
      uVar9 = uVar7;
      goto LAB_02f0ce28;
    }
  }
  iVar4 = 0x34;
LAB_02f0cf24:
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    (*DAT_0442d150)(2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return iVar4;
}


