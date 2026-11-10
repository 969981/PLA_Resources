/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f17b8; name: FUN_031f17b8
 */


void FUN_031f17b8(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar12 = tpidr_el0;
  if (*(long *)(lVar12 + 0x38d490) == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar6;
    lVar12 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
  }
  if (lVar12 != 0) {
    FUN_032d5af0(lVar12,"TtcreateNonmergedCompoundSilhouettes",0x24);
  }
  puVar5 = PTR_PTR_0434a090;
  if (param_2 != param_3) {
    do {
      puVar9 = (undefined8 *)*param_2;
      local_88 = puVar9[1];
      local_90 = *puVar9;
      local_80 = puVar9[2];
      uStack_78 = puVar9[3];
      lVar6 = (**(code **)(*(long *)puVar9[4] + 0x28))(param_1,(long *)puVar9[4],&local_90,param_4);
      uVar10 = (ulong)*(uint *)(lVar6 + 0x30);
      if (0 < (int)*(uint *)(lVar6 + 0x30)) {
        uVar13 = 0;
        lVar15 = 4;
        do {
          iVar8 = (int)param_5[1];
          iVar1 = iVar8 + 1;
          iVar3 = *(int *)(*(long *)(lVar6 + 0x28) + uVar13 * 4);
          piVar2 = (int *)(lVar6 + 0x20);
          if (uVar13 != (int)uVar10 - 1) {
            piVar2 = (int *)(*(long *)(lVar6 + 0x28) + lVar15);
          }
          lVar11 = *(long *)(lVar6 + 0x18);
          lVar7 = *param_5;
          uVar4 = *piVar2 - iVar3;
          if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar8) {
            lVar7 = FUN_031f19f4(puVar5,iVar1,lVar7,iVar8,(long)param_5 + 0xc);
            iVar8 = (int)param_5[1];
            *param_5 = lVar7;
          }
          puVar9 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10);
          *(int *)(param_5 + 1) = iVar1;
          __dest = (void *)0x0;
          uVar13 = uVar13 + 1;
          *puVar9 = 0;
          puVar14 = (uint *)(puVar9 + 1);
          puVar14[0] = 0;
          puVar14[1] = 0x80000000;
          if (0 < (int)uVar4) {
            __dest = (void *)FUN_032bd1d4(puVar5,uVar4,0x10,0,0,(long)puVar9 + 0xc);
            *puVar9 = __dest;
          }
          memcpy(__dest,(void *)(lVar11 + (long)iVar3 * 0x10),
                 -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4);
          *puVar14 = uVar4;
          uVar10 = (ulong)*(int *)(lVar6 + 0x30);
          lVar15 = lVar15 + 4;
        } while ((long)uVar13 < (long)uVar10);
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  if (lVar12 != 0) {
    FUN_032d5b34(lVar12,&DAT_0390f40e);
  }
  return;
}


