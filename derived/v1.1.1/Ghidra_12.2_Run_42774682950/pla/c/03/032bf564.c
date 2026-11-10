/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bf564; name: FUN_032bf564
 */


void FUN_032bf564(long *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  uVar5 = *(uint *)((long)param_1 + 0x1c);
  lVar7 = *param_1;
  if (uVar5 == 0) {
    piVar3 = (int *)(lVar7 + 0x18);
    iVar1 = *piVar3;
    if (1 < iVar1) {
      lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -2) * 8);
      puVar8 = (undefined8 *)param_1[1];
      iVar2 = *(int *)(puVar8 + 0xb);
      lVar9 = puVar8[1];
      *(undefined8 *)(lVar9 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(lVar7 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(puVar8 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar8 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,lVar9 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar8 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar6 + 8) = 0;
      uVar5 = 0xffffffff;
      goto LAB_032bf5b8;
    }
  }
  puVar4 = (uint *)param_1[2];
  lVar6 = param_1[3];
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = *puVar4 & 0xffff0000 | uVar5 & 0xffff;
  *puVar4 = *puVar4 & 0xffff | (int)lVar6 << 0x10;
  piVar3 = (int *)(lVar7 + 8);
LAB_032bf5b8:
  *piVar3 = *piVar3 + uVar5;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}


