/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4d8d4; name: FUN_02c4d8d4
 */


undefined8 FUN_02c4d8d4(long param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  
  plVar12 = (long *)*param_2;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  lVar1 = param_2[1];
  lVar3 = param_2[2];
  lVar2 = param_2[3];
  plVar4 = (long *)param_2[4];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  uVar6 = *(undefined4 *)(param_2 + 5);
  if (iVar5 == 2) {
LAB_02c4d930:
    uVar8 = (ulong)(int)*(uint *)(param_1 + 200);
    if (1 < *(uint *)(param_1 + 200)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c4e6a0();
    }
LAB_02c4d94c:
    lVar9 = *(long *)(param_1 + uVar8 * 0x20 + 0x88);
    if (plVar12 == (long *)0x0) {
      plVar14 = (long *)PTR_DAT_04379c88;
    }
    else {
      plVar14 = plVar12 + 0xb;
    }
    lVar10 = *(long *)(lVar9 + 0x58);
    if (lVar10 == 0) {
      puVar11 = (undefined8 *)PTR_DAT_04379c88;
    }
    else {
      puVar11 = (undefined8 *)(lVar10 + 0x58);
    }
    if (((undefined1 *)*plVar14 == (undefined1 *)*puVar11) && (*(int *)(lVar9 + 0x88) == param_3)) {
      lVar9 = **(long **)(param_1 + 0x68);
      if (lVar9 == 0) {
        puVar11 = (undefined8 *)PTR_DAT_04379c88;
      }
      else {
        puVar11 = (undefined8 *)(lVar9 + 0x58);
      }
      if (((undefined1 *)*puVar11 == &DAT_cbf29ce484222645) ||
         (((undefined1 *)*plVar14 == (undefined1 *)*puVar11 &&
          ((int)(*(long **)(param_1 + 0x68))[6] == param_3)))) goto LAB_02c4d9b0;
    }
    plVar14 = *(long **)(param_1 + 0x68);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar7 = (long *)*plVar14;
    *plVar14 = (long)plVar12;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar14[1] = lVar1;
    plVar14[2] = lVar3;
    plVar14[3] = lVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar7 = (long *)plVar14[4];
    plVar14[4] = (long)plVar4;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *(int *)(plVar14 + 6) = param_3;
    uVar13 = 1;
    *(undefined4 *)(plVar14 + 5) = uVar6;
    *(undefined8 *)(param_1 + 0x288) = param_4;
  }
  else {
    if (iVar5 == 1) {
      uVar8 = (ulong)(*(int *)(param_1 + 200) == 0);
      goto LAB_02c4d94c;
    }
    if (iVar5 == 0) goto LAB_02c4d930;
LAB_02c4d9b0:
    uVar13 = 0;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return uVar13;
}


