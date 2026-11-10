/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c0060; name: FUN_032c0060
 */


void FUN_032c0060(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar4 = param_1[3];
  *param_1 = (long)&PTR_LAB_04348bf8;
  if (lVar4 == 0) goto LAB_032c0088;
  uVar3 = *(uint *)((long)param_1 + 0x34);
  if (uVar3 == 0) {
    piVar7 = (int *)(lVar4 + 0x18);
    iVar1 = *piVar7;
    if (iVar1 < 2) goto LAB_032c00c8;
    lVar8 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(iVar1 + -2) * 8);
    puVar9 = (undefined8 *)param_1[4];
    iVar2 = *(int *)(puVar9 + 0xb);
    lVar5 = puVar9[1];
    *(undefined8 *)(lVar5 + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(lVar4 + 0x10) + (long)(iVar1 + -1) * 8);
    *(int *)(puVar9 + 0xb) = iVar2 + 1;
    if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar5 + (long)(iVar2 + -5) * 8,6);
      *(int *)(puVar9 + 0xb) = iVar2 + -5;
    }
    *(undefined8 *)(lVar8 + 8) = 0;
    uVar3 = 0xffffffff;
  }
  else {
LAB_032c00c8:
    piVar7 = (int *)(lVar4 + 8);
    puVar6 = (uint *)param_1[5];
    lVar4 = param_1[6];
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = *puVar6 & 0xffff0000 | uVar3 & 0xffff;
    *puVar6 = *puVar6 & 0xffff | (int)lVar4 << 0x10;
  }
  *piVar7 = *piVar7 + uVar3;
  param_1[3] = 0;
  param_1[5] = 0;
LAB_032c0088:
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


