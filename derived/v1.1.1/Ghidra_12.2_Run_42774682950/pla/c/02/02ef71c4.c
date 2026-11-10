/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef71c4; name: FUN_02ef71c4
 */


void FUN_02ef71c4(float param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  lVar3 = -4;
  if (*(long *)(param_4 + 0xa8) != -1) {
    lVar3 = *(long *)(param_4 + 0xa8);
  }
  if ((*(int *)(param_4 + 0xb0) != 0) && (0.0 < *(float *)(param_4 + 0xb4))) {
    uVar4 = *(uint *)(param_5 + 1);
    uVar6 = *(uint *)((long)param_5 + 0xc);
    if (uVar6 <= uVar4) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar5 = (*DAT_0442d148)(0,*param_5,(ulong)uVar6 << 5);
      if (lVar5 == 0) goto LAB_02ef71f0;
      *param_5 = lVar5;
      *(uint *)((long)param_5 + 0xc) = uVar6;
    }
    if (uVar4 < uVar6) {
      uVar6 = *(uint *)(param_5 + 1);
      *(uint *)(param_5 + 1) = uVar6 + 1;
      plVar2 = (long *)(*param_5 + (ulong)uVar6 * 0x20);
      if (plVar2 != (long *)0x0) {
        lVar5 = *param_5 + (ulong)uVar6 * 0x20;
        *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_4 + 0xb0);
        *(float *)(lVar5 + 0xc) = *(float *)(param_4 + 0xb4) * param_1;
        *plVar2 = lVar3;
        *(undefined4 *)(lVar5 + 0x14) = param_2;
        *(undefined4 *)(lVar5 + 0x18) = param_3;
        *(undefined4 *)(lVar5 + 0x10) = 1;
      }
    }
  }
LAB_02ef71f0:
  lVar3 = -4;
  if (*(long *)(param_4 + 0xc0) != -1) {
    lVar3 = *(long *)(param_4 + 0xc0);
  }
  if ((*(int *)(param_4 + 200) != 0) && (0.0 < *(float *)(param_4 + 0xcc))) {
    uVar4 = *(uint *)(param_5 + 1);
    uVar6 = *(uint *)((long)param_5 + 0xc);
    if (uVar6 <= uVar4) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar5 = (*DAT_0442d148)(0,*param_5,(ulong)uVar6 << 5);
      if (lVar5 == 0) {
        return;
      }
      *param_5 = lVar5;
      *(uint *)((long)param_5 + 0xc) = uVar6;
    }
    if (uVar4 < uVar6) {
      uVar6 = *(uint *)(param_5 + 1);
      *(uint *)(param_5 + 1) = uVar6 + 1;
      plVar2 = (long *)(*param_5 + (ulong)uVar6 * 0x20);
      if (plVar2 != (long *)0x0) {
        lVar5 = *param_5 + (ulong)uVar6 * 0x20;
        *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_4 + 200);
        *(float *)(lVar5 + 0xc) = *(float *)(param_4 + 0xcc) * param_1;
        *plVar2 = lVar3;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 1;
      }
    }
  }
  return;
}


