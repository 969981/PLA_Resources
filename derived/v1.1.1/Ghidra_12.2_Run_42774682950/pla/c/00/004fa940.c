/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fa940; name: FUN_004fa940
 */


void FUN_004fa940(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_60;
  long local_58;
  
  param_1[1] = 0;
  *param_1 = (long)(PTR_DAT_043747e8 + 0x10);
  uVar8 = 1;
  param_1[2] = 1;
  param_1[3] = (long)"Composite";
  *(undefined4 *)(param_1 + 4) = 2;
  puVar7 = (ulong *)(param_1 + 5);
  *puVar7 = 0;
  lVar10 = *param_2;
  iVar1 = strcmp(*(char **)(lVar10 + 0x18),"Composite");
  lVar9 = *param_3;
  iVar2 = strcmp(*(char **)(lVar9 + 0x18),"Composite");
  if (iVar1 == 0) {
    uVar8 = *(ulong *)(lVar10 + 0x28) >> 1;
  }
  if (iVar2 == 0) {
    uVar4 = *(ulong *)(lVar9 + 0x28) >> 1;
  }
  else {
    uVar4 = 1;
  }
                    /* try { // try from 004fa9e8 to 004fa9ef has its CatchHandler @ 004fac00 */
  FUN_004fb8fc(puVar7,uVar4 + uVar8);
  lVar9 = *param_2;
  *param_2 = 0;
  local_58 = lVar9;
  if (iVar1 == 0) {
    uVar8 = *(ulong *)(lVar9 + 0x28);
    if (1 < uVar8) {
      lVar10 = 0;
      uVar4 = 0;
      do {
        if (uVar8 >> 1 <= uVar4) {
                    /* try { // try from 004faba8 to 004fabc7 has its CatchHandler @ 004fabfc */
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x136,"operator[]");
        }
        puVar5 = (undefined8 *)(lVar9 + 0x30);
        if ((uVar8 & 1) != 0) {
          puVar5 = *(undefined8 **)(lVar9 + 0x30);
        }
                    /* try { // try from 004faa44 to 004faa4b has its CatchHandler @ 004fac28 */
        FUN_004fb770(param_1 + 5,(long)puVar5 + lVar10);
        uVar8 = *(ulong *)(lVar9 + 0x28);
        uVar4 = uVar4 + 1;
        lVar10 = lVar10 + 8;
      } while (uVar4 < uVar8 >> 1);
    }
  }
  else {
                    /* try { // try from 004faa04 to 004faa0b has its CatchHandler @ 004fabfc */
    FUN_004fb770(param_1 + 5,&local_58);
  }
  FUN_003f4f54(&local_58);
  lVar9 = *param_3;
  *param_3 = 0;
  local_60 = lVar9;
  if (iVar2 == 0) {
    uVar8 = *(ulong *)(lVar9 + 0x28);
    if (1 < uVar8) {
      lVar10 = 0;
      uVar4 = 0;
      do {
        if (uVar8 >> 1 <= uVar4) {
                    /* try { // try from 004fabc8 to 004fabe7 has its CatchHandler @ 004fabf8 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x136,"operator[]");
        }
        puVar5 = (undefined8 *)(lVar9 + 0x30);
        if ((uVar8 & 1) != 0) {
          puVar5 = *(undefined8 **)(lVar9 + 0x30);
        }
                    /* try { // try from 004faabc to 004faac3 has its CatchHandler @ 004fac10 */
        FUN_004fb770(param_1 + 5,(long)puVar5 + lVar10);
        uVar8 = *(ulong *)(lVar9 + 0x28);
        uVar4 = uVar4 + 1;
        lVar10 = lVar10 + 8;
      } while (uVar4 < uVar8 >> 1);
    }
  }
  else {
                    /* try { // try from 004faa7c to 004faa83 has its CatchHandler @ 004fabf8 */
    FUN_004fb770(param_1 + 5,&local_60);
  }
  FUN_003f4f54(&local_60);
  uVar8 = param_1[5];
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (1 < uVar8) {
    iVar1 = 0;
    uVar4 = 0;
    while( true ) {
      plVar6 = param_1 + 6;
      if ((uVar8 & 1) != 0) {
        plVar6 = (long *)param_1[6];
      }
                    /* try { // try from 004fab14 to 004fab47 has its CatchHandler @ 004fac40 */
      iVar2 = (**(code **)(*(long *)plVar6[uVar4] + 0x20))();
      if (iVar1 < iVar2) {
        if (*puVar7 >> 1 <= uVar4) {
                    /* try { // try from 004fab88 to 004faba7 has its CatchHandler @ 004fabe8 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x136,"operator[]");
        }
        plVar6 = param_1 + 6;
        if ((*puVar7 & 1) != 0) {
          plVar6 = (long *)param_1[6];
        }
        uVar3 = (**(code **)(*(long *)plVar6[uVar4] + 0x20))();
        *(undefined4 *)((long)param_1 + 0x24) = uVar3;
      }
      uVar8 = *puVar7;
      uVar4 = uVar4 + 1;
      if (uVar8 >> 1 <= uVar4) break;
      iVar1 = *(int *)((long)param_1 + 0x24);
    }
  }
  return;
}


