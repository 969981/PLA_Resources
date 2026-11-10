/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef73bc; name: FUN_02ef73bc
 */


void FUN_02ef73bc(float param_1,long param_2,long *param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
  if (*(int *)(param_2 + 0x78) != 0) {
    puVar6 = *(undefined4 **)(param_2 + 0x70);
    do {
      uVar3 = *(uint *)(param_3 + 1);
      uVar8 = *(uint *)((long)param_3 + 0xc);
      if (uVar3 < uVar8) {
joined_r0x02ef7558:
        if (uVar3 < uVar8) {
          lVar5 = *param_3;
          uVar8 = *(uint *)(param_3 + 1);
          puVar2 = (undefined8 *)(lVar5 + (ulong)uVar8 * 0x20);
          *(uint *)(param_3 + 1) = uVar8 + 1;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = uVar7;
            lVar5 = lVar5 + (ulong)uVar8 * 0x20;
            uVar4 = *puVar6;
            *(undefined8 *)(lVar5 + 0x14) = 0;
            *(undefined4 *)(lVar5 + 8) = uVar4;
            *(float *)(lVar5 + 0xc) = param_1;
            *(undefined4 *)(lVar5 + 0x10) = 3;
          }
        }
      }
      else {
        iVar1 = uVar8 + (uVar8 >> 1);
        if (uVar8 == 0) {
          iVar1 = 1;
        }
        uVar8 = iVar1 + uVar8;
        lVar5 = (*DAT_0442d148)(0,*param_3,(ulong)uVar8 << 5);
        if (lVar5 != 0) {
          *param_3 = lVar5;
          *(uint *)((long)param_3 + 0xc) = uVar8;
          goto joined_r0x02ef7558;
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined4 *)
                       (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x78) * 4));
  }
  if ((*(char *)(param_2 + 0xfa) != '\0') &&
     ((param_4 != 0 || (param_4 = *(int *)(param_2 + 0xa0), param_4 != 0)))) {
    uVar3 = *(uint *)(param_3 + 1);
    uVar8 = *(uint *)((long)param_3 + 0xc);
    if (uVar8 <= uVar3) {
      iVar1 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar1 = 1;
      }
      uVar8 = iVar1 + uVar8;
      lVar5 = (*DAT_0442d148)(0,*param_3,(ulong)uVar8 << 5);
      if (lVar5 == 0) {
        return;
      }
      *param_3 = lVar5;
      *(uint *)((long)param_3 + 0xc) = uVar8;
    }
    if (uVar3 < uVar8) {
      uVar8 = *(uint *)(param_3 + 1);
      *(uint *)(param_3 + 1) = uVar8 + 1;
      puVar2 = (undefined8 *)(*param_3 + (ulong)uVar8 * 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        lVar5 = *param_3 + (ulong)uVar8 * 0x20;
        *(int *)(lVar5 + 8) = param_4;
        *(float *)(lVar5 + 0xc) = *(float *)(param_2 + 0xa4) * param_1;
        *puVar2 = uVar7;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 3;
      }
    }
  }
  return;
}


