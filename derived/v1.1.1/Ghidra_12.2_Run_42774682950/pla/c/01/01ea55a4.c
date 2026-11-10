/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea55a4; name: FUN_01ea55a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea55a4(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  long *local_38;
  
  FUN_00956dac(&local_38,param_2 + 0x1a8);
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar9 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar9;
  puVar6 = PTR_DAT_04382860;
  uVar10 = *(undefined8 *)(lVar9 + 0x230);
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[2] = puVar6 + 0x10;
  param_1[4] = &PTR_FUN_04287c58;
  *param_1 = uVar10;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined2 *)(param_1 + 0x16) = 1;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x3f000000bf800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x3f000000;
  pcVar8 = *(char **)(param_2 + 0x208);
  if (*pcVar8 == '\0') {
    piVar11 = *(int **)(pcVar8 + 0x10);
    if (piVar11 == (int *)0x0) {
      piVar11 = *(int **)(pcVar8 + 8);
    }
    uVar12 = 0;
    if (*(ushort *)((long)piVar11 - (long)*piVar11) < 0x1f) goto LAB_01ea568c;
    uVar2 = ((ushort *)((long)piVar11 - (long)*piVar11))[0xf];
  }
  else {
    piVar11 = *(int **)(pcVar8 + 0x18);
    uVar12 = 0;
    if (*(ushort *)((long)piVar11 - (long)*piVar11) < 0x1b) goto LAB_01ea568c;
    uVar2 = ((ushort *)((long)piVar11 - (long)*piVar11))[0xd];
  }
  uVar12 = 0;
  if ((ulong)uVar2 != 0) {
    uVar12 = *(undefined4 *)((long)piVar11 + (ulong)uVar2);
  }
LAB_01ea568c:
  uVar13 = FUN_0108c9f0();
  fVar14 = (float)FUN_0108ca54(*(undefined8 *)(param_2 + 0x208));
  fVar15 = (float)_DAT_03888d10;
  uVar5 = (ulong)_DAT_03888d10 >> 0x20;
  uVar10 = *(undefined8 *)PTR_DAT_04379570;
  uVar1 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  param_1[7] = CONCAT44((float)((ulong)_UNK_03888d18 >> 0x20) * fVar14 * 0.5,
                        (float)_UNK_03888d18 * fVar14 * 0.5);
  param_1[6] = CONCAT44((float)uVar5 * fVar14 * 0.5,fVar15 * fVar14 * 0.5);
  param_1[0xb] = (ulong)(uint)fVar14;
  param_1[10] = CONCAT44(uVar13,uVar12);
  param_1[8] = uVar10;
  param_1[9] = uVar1;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar11 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar4) {
        *piVar11 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


